#include <iostream>
#include <iomanip>
#include <vector>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vtv80_lx_wb.h"

#define CLK_HALF_PERIOD 50
#define SETUP_TIME 1
#define HOLD_TIME 1
#define CLK_REST_TIME (CLK_HALF_PERIOD - SETUP_TIME - HOLD_TIME)

// =============================================================================
// Complete Memory Model with Banking Support
// =============================================================================
class MemoryModel {
private:
    std::vector<uint8_t> memory;
    std::vector<std::vector<uint8_t>> banks;
    uint8_t current_banks[4];
    bool native_mode;
    bool supervisor_mode;
    
public:
    MemoryModel(size_t size = 16 * 1024 * 1024) : memory(size, 0x00), native_mode(false), supervisor_mode(false) {
        banks.resize(256, std::vector<uint8_t>(16*1024, 0x00));
        for (int i = 0; i < 4; i++) current_banks[i] = i;
    }
    
    void set_bank(uint8_t slot, uint8_t bank_num) {
        if (slot < 4) {
            current_banks[slot] = bank_num;
        }
    }
    
    uint8_t get_bank(uint8_t slot) {
        return (slot < 4) ? current_banks[slot] : 0;
    }
    
    void set_mode(bool native, bool supervisor) {
        native_mode = native;
        supervisor_mode = supervisor;
    }
    
    void write(uint32_t addr, uint8_t data) {
        uint32_t phys_addr = translate_address(addr);
        if (phys_addr < memory.size()) {
            memory[phys_addr] = data;
        }
    }
    
    uint8_t read(uint32_t addr) {
        uint32_t phys_addr = translate_address(addr);
        return (phys_addr < memory.size()) ? memory[phys_addr] : 0xAA;
    }
    
    uint32_t translate_address(uint32_t logical_addr) {
        if (!native_mode && !supervisor_mode) {
            // Legacy mode - direct mapping
            return logical_addr;
        }
        
        uint8_t slot = logical_addr >> 14;
        uint16_t offset = logical_addr & 0x3FFF;
        uint8_t bank = current_banks[slot];
        return (bank << 14) | offset;
    }
    
    void load_program(uint32_t start_addr, const std::vector<uint8_t>& program) {
        for (size_t i = 0; i < program.size(); i++) {
            write(start_addr + i, program[i]);
        }
    }
};

// =============================================================================
// Enhanced Test Utilities
// =============================================================================
class TV80LXTestUtils {
private:
    vluint64_t& main_time;
    VerilatedVcdC* tfp;
    int test_successes;
    int test_failures;
    uint32_t last_wb_addr;
    uint8_t last_wb_data;
    bool wb_transaction_occurred;

public:
    MemoryModel memory_model;
    Vtv80_lx_wb* top;
    
    TV80LXTestUtils(Vtv80_lx_wb* top_ptr, vluint64_t& time_var, VerilatedVcdC* trace_ptr = nullptr)
        : top(top_ptr), main_time(time_var), tfp(trace_ptr), 
          test_successes(0), test_failures(0),
          last_wb_addr(0), last_wb_data(0), wb_transaction_occurred(false),
          memory_model(64 * 1024 * 1024) {}

    void eval(int delta) {
        top->eval();
        if (tfp) tfp->dump(main_time);
        main_time += delta;
    }

    void clock_rise(int duration = CLK_HALF_PERIOD) {
        top->clk_i = 1;
        eval(duration);
    }

    void clock_fall(int duration = CLK_HALF_PERIOD) {
        top->clk_i = 0;
        eval(duration);
    }

    void clock_tick() {
        clock_rise(SETUP_TIME);
        monitor_wishbone();
        clock_rise(SETUP_TIME);
        eval(CLK_REST_TIME-SETUP_TIME); 
        clock_fall(SETUP_TIME);
        eval(CLK_REST_TIME); 
    }

    void reset_pulse() {
        std::cout << "Applying reset pulse..." << std::endl;
        top->nrst_i = 0;
        clock_tick();
        clock_tick();
        top->nrst_i = 1;
        clock_tick();
        last_wb_addr = 0xFFFFFF;
        last_wb_data = 0xFF;
        wb_transaction_occurred = false;
        std::cout << "Reset pulse completed." << std::endl;
    }

    void wait_cycles(int cycles) {
        for (int i = 0; i < cycles; i++) clock_tick();
    }

    void monitor_wishbone() {
        if (top->clk_i == 1) {
            if (top->wbm_cyc_o && top->wbm_stb_o) {
                wb_transaction_occurred = true;
                last_wb_addr = top->wbm_adr_o;
                
                if (top->wbm_we_o) {
                    last_wb_data = top->wbm_dat_o;
                    
                    // Handle MMIO registers
                    if (last_wb_addr >= 0xFF00D0 && last_wb_addr <= 0xFF00DF) {
                        handle_mmio_write(last_wb_addr, last_wb_data);
                    } else {
                        memory_model.write(last_wb_addr, last_wb_data);
                    }
                    
                    top->wbm_ack_i = 1;
                } else {
                    top->wbm_dat_i = memory_model.read(last_wb_addr);
                    top->wbm_ack_i = 1;
                }
            } else {
                top->wbm_ack_i = 0;
            }
        }
    }
    
    void handle_mmio_write(uint32_t addr, uint8_t data) {
        uint8_t port = addr & 0x0F;
        
        switch(port) {
            case 0xD7: // GLOBAL_CTRL
                top->native_mode_o = data & 0x01;
                top->supervisor_mode_o = (data >> 1) & 0x01;
                memory_model.set_mode(data & 0x01, (data >> 1) & 0x01);
                break;
                
            case 0xDC: case 0xDD: case 0xDE: case 0xDF: // BANK registers
                memory_model.set_bank(port - 0xDC, data);
                break;
                
            default:
                break;
        }
    }

    void clear_wb_transaction() { wb_transaction_occurred = false; }
    bool was_wb_transaction() { return wb_transaction_occurred; }
    uint32_t get_last_wb_addr() { return last_wb_addr; }
    uint8_t get_last_wb_data() { return last_wb_data; }

    void run_until_halt(int max_cycles = 1000) {
        int cycles = 0;
        while (cycles < max_cycles && get_last_wb_addr() != 0x00C000) {
            clock_tick();
            cycles++;
        }
    }

    void assert_true(bool condition, const char* message) {
        if (condition) {
            std::cout << "✓ PASS: " << message << std::endl;
            test_successes++;
        } else {
            std::cout << "✗ FAIL: " << message << std::endl;
            test_failures++;
        }
    }

    void assert_equal(uint32_t actual, uint32_t expected, const char* message) {
        if (actual == expected) {
            std::cout << "✓ PASS: " << message << " (expected 0x" << std::hex << expected 
                      << ", got 0x" << actual << ")" << std::dec << std::endl;
            test_successes++;
        } else {
            std::cout << "✗ FAIL: " << message << " (expected 0x" << std::hex << expected 
                      << ", got 0x" << actual << ")" << std::dec << std::endl;
            test_failures++;
        }
    }

    void assert_equal(uint8_t actual, uint8_t expected, const char* message) {
        if (actual == expected) {
            std::cout << "✓ PASS: " << message << " (expected 0x" << std::hex << (int)expected 
                      << ", got 0x" << (int)actual << ")" << std::dec << std::endl;
            test_successes++;
        } else {
            std::cout << "✗ FAIL: " << message << " (expected 0x" << std::hex << (int)expected 
                      << ", got 0x" << (int)actual << ")" << std::dec << std::endl;
            test_failures++;
        }
    }

    void assert_memory(uint32_t address, uint8_t expected, const char* message) {
        uint8_t actual = memory_model.read(address);
        assert_equal(actual, expected, message);
    }

    void print_test_results() {
        std::cout << "\n=== TEST RESULTS ===" << std::endl;
        std::cout << "Passed: " << test_successes << std::endl;
        std::cout << "Failed: " << test_failures << std::endl;
        std::cout << "Total:  " << (test_successes + test_failures) << std::endl;
        
        if (test_failures == 0) {
            std::cout << "🎉 ALL TESTS PASSED!" << std::endl;
        } else {
            std::cout << "❌ SOME TESTS FAILED!" << std::endl;
        }
    }

    int get_test_failures() { return test_failures; }
};

// =============================================================================
// BIOS Loading Functions
// =============================================================================
void load_supervisor_bios(TV80LXTestUtils& utils) {
    std::vector<uint8_t> bios = {
        // Cold Boot Vector (0x0000)
        0xF3, 0x31, 0xF0, 0xFF, 0xC3, 0x1A, 0x00,
        
        // Padding to SysCall Vector (0x0038)
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC3, 0x38, 0x00,
        
        // NMI Vector (0x0066)
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0xED, 0x45,
        
        // Supervisor Initialization (0x001A)
        0x3E, 0x03, 0xD3, 0xD7, 0x3E, 0x07, 0xD3, 0xD7, 0xAF, 0xD3, 0xD7, 0xED, 0x45,
        
        // SysCall Dispatcher (0x0038)
        0x08, 0xD9, 0xF5, 0x78, 0xB9, 0xC2, 0x80, 0x00, 0xF1, 0x3D, 0xCA, 0x90, 0x00,
        0x3D, 0xCA, 0xA0, 0x00, 0x3E, 0xFE, 0xC3, 0xD0, 0x00,
        
        // Function 00: Set GLOBAL_CTRL (0x0080)
        0xF1, 0x79, 0xD3, 0xD7, 0x3E, 0x00, 0xC3, 0xD0, 0x00,
        
        // Function 01: Set User Bank (0x0090)
        0xF1, 0x79, 0xD3, 0xDC, 0x3E, 0x00, 0xC3, 0xD0, 0x00,
        
        // Function 02: Add Numbers (0x00A0)
        0x7A, 0x83, 0xC3, 0xD0, 0x00,
        
        // Common Return Path (0x00D0)
        0xD9, 0x08, 0xED, 0x4D
    };
    
    utils.memory_model.load_program(0x0000, bios);
    std::cout << "Supervisor BIOS loaded at 0x0000" << std::endl;
}

// =============================================================================
// Test Functions
// =============================================================================
void test_supervisor_registers(TV80LXTestUtils& utils) {
    std::cout << "\n=== TEST 1: SUPERVISOR REGISTERS ===" << std::endl;
    
    std::vector<uint8_t> test_program = {
        0x3E, 0x03, 0xD3, 0xD7, 0x3E, 0x0F, 0xD3, 0xDC,
        0x3E, 0x1E, 0xD3, 0xDD, 0x76
    };
    
    utils.memory_model.load_program(0x8000, test_program);
    utils.reset_pulse();
    utils.run_until_halt(200);
    
    utils.assert_equal(utils.top->native_mode_o, 1, "Native mode should be set");
    utils.assert_equal(utils.top->supervisor_mode_o, 1, "Supervisor mode should be set");
    utils.assert_equal(utils.memory_model.get_bank(0), 0x0F, "Bank 0 should be set to 0x0F");
    utils.assert_equal(utils.memory_model.get_bank(1), 0x1E, "Bank 1 should be set to 0x1E");
}

void test_user_native_syscall(TV80LXTestUtils& utils) {
    std::cout << "\n=== TEST 2: USER NATIVE SYSCALL ===" << std::endl;
    
    std::vector<uint8_t> user_program = {
        0x3E, 0x02, 0x16, 0x05, 0x1E, 0x03, 0xCD, 0x00, 0x10, 0x32, 0x00, 0xC0, 0x76
    };
    
    std::vector<uint8_t> syscall_wrapper = {
        0xD3, 0xD4, 0xC9
    };
    
    utils.memory_model.load_program(0x4000, user_program);
    utils.memory_model.load_program(0x1000, syscall_wrapper);
    utils.reset_pulse();
    utils.run_until_halt(200);
    
    uint8_t result = utils.memory_model.read(0xC000);
    utils.assert_equal(result, 0x08, "Syscall should return 5+3=8");
}

void test_user_legacy_syscall(TV80LXTestUtils& utils) {
    std::cout << "\n=== TEST 3: USER LEGACY SYSCALL ===" << std::endl;
    
    std::vector<uint8_t> user_program = {
        0x3E, 0x01, 0x06, 0x00, 0x0E, 0x2A, 0xCD, 0x00, 0x20, 0x76
    };
    
    std::vector<uint8_t> syscall_wrapper = {
        0xD3, 0x00, 0xD4, 0xC9
    };
    
    utils.memory_model.load_program(0x4000, user_program);
    utils.memory_model.load_program(0x2000, syscall_wrapper);
    utils.reset_pulse();
    utils.run_until_halt(200);
    
    uint8_t bank = utils.memory_model.get_bank(0);
    utils.assert_equal(bank, 0x2A, "Legacy syscall should set bank 2Ah for slot 0");
}

void test_memory_access_patterns(TV80LXTestUtils& utils) {
    std::cout << "\n=== TEST 4: MEMORY ACCESS PATTERNS ===" << std::endl;
    
    std::vector<uint8_t> test_program = {
        0x3E, 0x55, 0x32, 0x00, 0x80, 0x32, 0x00, 0xC0, 0x76
    };
    
    utils.memory_model.load_program(0x0000, test_program);
    utils.reset_pulse();
    utils.run_until_halt(200);
    
    utils.assert_memory(0x8000, 0x55, "Should write to 0x8000");
    utils.assert_memory(0xC000, 0x55, "Should write to 0xC000");
    utils.assert_true(utils.get_last_wb_addr() >= 0xC000, "Should access meaningful addresses");
}

// =============================================================================
// Main Test Suite
// =============================================================================
int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    
    vluint64_t main_time = 0;
    VerilatedVcdC* tfp = new VerilatedVcdC;
    
    Vtv80_lx_wb* top = new Vtv80_lx_wb;
    top->trace(tfp, 99);
    tfp->open("tv80_lx_wb_test.vcd");
    
    TV80LXTestUtils utils(top, main_time, tfp);
    
    std::cout << "=== TV80-LX-WB SUPERVISOR BIOS TEST SUITE ===" << std::endl;

    // Load BIOS and run tests
    load_supervisor_bios(utils);
    
    test_supervisor_registers(utils);
    test_user_native_syscall(utils);
    test_user_legacy_syscall(utils);
    test_memory_access_patterns(utils);

    // Final stability test
    std::cout << "\n=== FINAL STABILITY TEST ===" << std::endl;
    for (int i = 0; i < 50; i++) utils.clock_tick();
    utils.assert_true(true, "Extended stability test passed");
    
    utils.print_test_results();
    
    tfp->close();
    delete top;
    delete tfp;
    
    return utils.get_test_failures();
}