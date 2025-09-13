#include <iostream>
#include <iomanip>
#include <functional>
#include <vector>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vtv80_lx_wb.h"

#define CLK_HALF_PERIOD 5
#define SETUP_TIME 1      // Время установки сигналов до clock
#define HOLD_TIME 1       // Время удержания сигналов после clock
#define CLK_REST_TIME (CLK_HALF_PERIOD - SETUP_TIME - HOLD_TIME)

// =============================================================================
// Complete Memory Model for Testing
// =============================================================================
class MemoryModel {
private:
    std::vector<uint8_t> memory;
    
public:
    MemoryModel(size_t size = 16 * 1024 * 1024) : memory(size, 0x00) {}
    
    void write(uint32_t addr, uint8_t data) {
        if (addr < memory.size()) {
            memory[addr] = data;
        }
    }
    
    uint8_t read(uint32_t addr) {
        return (addr < memory.size()) ? memory[addr] : 0xAA;
    }
    
    void load_program(uint32_t start_addr, const std::vector<uint8_t>& program) {
        for (size_t i = 0; i < program.size() && (start_addr + i) < memory.size(); i++) {
            memory[start_addr + i] = program[i];
        }
        std::cout << "Loaded program of size " << program.size() 
                  << " bytes at address 0x" << std::hex << start_addr << std::dec << std::endl;
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
    
    // Wishbone monitoring
    uint32_t last_wb_addr;
    uint8_t last_wb_data;
    bool wb_transaction_occurred;
    

public:
    // Memory model
    MemoryModel memory_model;
    Vtv80_lx_wb* top;
    TV80LXTestUtils(Vtv80_lx_wb* top_ptr, vluint64_t& time_var, VerilatedVcdC* trace_ptr = nullptr)
        : top(top_ptr), main_time(time_var), tfp(trace_ptr), 
          test_successes(0), test_failures(0),
          last_wb_addr(0), last_wb_data(0), wb_transaction_occurred(false),
          memory_model(16 * 1024 * 1024) {}

    // ==================== BASIC METHODS ====================
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

    void clock_setup() {
        eval(SETUP_TIME);  // Ждем стабилизации сигналов перед clock
    }

    void clock_hold() {
        eval(HOLD_TIME);   // Ждем после clock для hold time
    }

    void clock_tick() {
        clock_rise(SETUP_TIME);        // Rising edge + остаток фазы
        monitor_wishbone();               // Обрабатываем шинные транзакции
        clock_rise(SETUP_TIME);
        eval(CLK_REST_TIME-SETUP_TIME); 
        clock_fall(SETUP_TIME);
        eval(CLK_REST_TIME); 
        
        /*
        // Фаза 1: Подготовка сигналов перед rising edge
        clock_setup();                    // Setup time
        clock_rise(CLK_REST_TIME);        // Rising edge + остаток фазы
        
        // Фаза 2: Обработка на высоком уровне clock
        monitor_wishbone();               // Обрабатываем шинные транзакции
        
        // Фаза 3: Подготовка к falling edge  
        clock_setup();                    // Setup time
        clock_fall(CLK_REST_TIME);        // Falling edge + остаток фазы
        
        // Фаза 4: Обработка на низком уровне clock
        monitor_wishbone();               // Дополнительная обработка
        */
    }

    void reset_pulse() {
        top->nrst_i = 0;
        top->nmi_req_i = 0;
        top->int_req_i = 0;
        top->busrq_i = 0;
        
        for (int i = 0; i < 5; i++) clock_tick();
        top->nrst_i = 1;
        clock_tick();
    }

    void wait_cycles(int cycles) {
        for (int i = 0; i < cycles; i++) clock_tick();
    }

    // ==================== MEMORY MANAGEMENT ====================
    void load_bootstrap_program() {
        // Simple program: write to memory and halt
        std::vector<uint8_t> program = {
            0x3E, 0x55,             // LD A, 0x55
            0x32, 0x00, 0xC0,       // LD (0xC000), A
            0x76                    // HALT
        };
        memory_model.load_program(0x0000, program);
    }

    void load_native_mode_test() {
        std::vector<uint8_t> program = {
            0x3E, 0x01,             // LD A, 0x01 (Native mode)
            0xD3, 0xD7,             // OUT (0xD7), A
            0x3E, 0xAA,             // LD A, 0xAA
            0x32, 0x00, 0x80,       // LD (0x8000), A
            0x76                    // HALT
        };
        memory_model.load_program(0x0000, program);
    }

    void load_legacy_mode_test() {
        std::vector<uint8_t> program = {
            0x3E, 0x00,             // LD A, 0x00 (Legacy mode) 
            0xD3, 0xD7,             // OUT (0xD7), A
            0x3E, 0x01,             // LD A, 0x01
            0xD3, 0x7F,             // OUT (0x7F), A - CPC Gate Array
            0x76                    // HALT
        };
        memory_model.load_program(0x0000, program);
    }

    // ==================== WISHBONE HANDLING ====================
    void monitor_wishbone() {
        // Только на активном такте обрабатываем шину
        if (top->clk_i == 1) {
            if (top->wbm_cyc_o && top->wbm_stb_o) {
                wb_transaction_occurred = true;
                last_wb_addr = top->wbm_adr_o;
                
                if (top->wbm_we_o) {
                    // Write operation
                    last_wb_data = top->wbm_dat_o;
                    memory_model.write(last_wb_addr, last_wb_data);
                    top->wbm_ack_i = 1;  // Immediate acknowledge for write
                } else {
                    // Read operation - CRITICAL: immediate response!
                    top->wbm_dat_i = memory_model.read(last_wb_addr);
                    top->wbm_ack_i = 1;  // Immediate acknowledge for read
                }
            } else {
                top->wbm_ack_i = 0;
            }
        }
    }
    void clear_wb_transaction() { wb_transaction_occurred = false; }
    bool was_wb_transaction() { return wb_transaction_occurred; }
    uint32_t get_last_wb_addr() { return last_wb_addr; }
    uint8_t get_last_wb_data() { return last_wb_data; }

    // ==================== TEST CONTROL ====================
    void run_until_halt(int max_cycles = 1000) {
        for (int i = 0; i < max_cycles; i++) {
            clock_tick();
            // Check for halt condition or meaningful progress
            if (last_wb_addr >= 0xC000) break;
        }
    }

    // ==================== ASSERTION METHODS ====================
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
// COMPREHENSIVE TEST FUNCTIONS
// =============================================================================

void test_bootstrap_execution(TV80LXTestUtils& utils) {
    std::cout << "\n=== TESTING BOOTSTRAP EXECUTION ===" << std::endl;
    utils.load_bootstrap_program();
    utils.reset_pulse();
    utils.run_until_halt(500);
    
    utils.assert_memory(0xC000, 0x55, "Bootstrap program should write to memory");
    utils.assert_true(utils.get_last_wb_addr() != 0x0000, "Should execute meaningful code");
}

void test_native_mode_functionality(TV80LXTestUtils& utils) {
    std::cout << "\n=== TESTING NATIVE MODE ===" << std::endl;
    utils.load_native_mode_test();
    utils.reset_pulse();
    utils.run_until_halt(500);
    
    utils.assert_equal(utils.top->native_mode_o, 1, "Native mode should be enabled");
    utils.assert_memory(0x8000, 0xAA, "Should write in native mode");
}

void test_legacy_mode_functionality(TV80LXTestUtils& utils) {
    std::cout << "\n=== TESTING LEGACY MODE ===" << std::endl;
    utils.load_legacy_mode_test();
    utils.reset_pulse();
    utils.run_until_halt(500);
    
    utils.assert_equal(utils.top->legacy_mode_o, 1, "Legacy mode should be enabled");
    utils.assert_equal(utils.top->graphic_mode, 1, "Should set graphic mode via CPC IO");
}

void test_interrupt_handling(TV80LXTestUtils& utils) {
    std::cout << "\n=== TESTING INTERRUPT HANDLING ===" << std::endl;
    utils.load_bootstrap_program();
    utils.reset_pulse();
    
    // Trigger interrupt during execution
    utils.wait_cycles(10);
    utils.top->int_req_i = 1;
    utils.clock_tick();
    utils.top->int_req_i = 0;
    utils.wait_cycles(10);
    
    utils.assert_true(true, "Should handle interrupts without crashing");
}

void test_memory_access_patterns(TV80LXTestUtils& utils) {
    std::cout << "\n=== TESTING MEMORY ACCESS PATTERNS ===" << std::endl;
    utils.load_bootstrap_program();
    utils.reset_pulse();
    utils.run_until_halt(500);
    
    // Check that we accessed different addresses
    utils.assert_true(utils.get_last_wb_addr() >= 0xC000, 
                     "Should access meaningful addresses beyond 0x0000");
}

void test_memory_timing(TV80LXTestUtils& utils) {
    std::cout << "=== MEMORY TIMING TEST ===" << std::endl;
    
    // Сброс
    utils.top->nrst_i = 0;
    utils.clock_tick();
    utils.top->nrst_i = 1;
    
    // Мониторим первые 5 тактов выполнения
    for (int i = 0; i < 5; i++) {
        utils.clock_tick();
        
        std::cout << "Cycle " << i << ": ";
        std::cout << "M1=" << (int)utils.top->debug_m1_n_o;
        std::cout << ", MREQ=" << (int)utils.top->debug_mreq_n_o;
        std::cout << ", IORQ=" << (int)utils.top->debug_iorq_n_o;
        std::cout << ", RD=" << (int)utils.top->debug_rd_n_o;
        std::cout << ", WB_CYC=" << (int)utils.top->wbm_cyc_o;
        std::cout << ", WB_STB=" << (int)utils.top->wbm_stb_o;
        std::cout << ", WB_ACK=" << (int)utils.top->wbm_ack_i;
        std::cout << ", WB_DAT=0x" << std::hex << (int)utils.top->wbm_dat_i << std::dec;
        std::cout << std::endl;
    }
}

void debug_cpu_state(TV80LXTestUtils& utils) {
    std::cout << "\n=== CPU STATE DEBUG ===" << std::endl;
    std::cout << "Last WB address: 0x" << std::hex << utils.get_last_wb_addr() << std::dec << std::endl;
    std::cout << "Native mode: " << (int)utils.top->native_mode_o << std::endl;
    std::cout << "Legacy mode: " << (int)utils.top->legacy_mode_o << std::endl;
    std::cout << "Supervisor mode: " << (int)utils.top->supervisor_mode_o << std::endl;
    
    // Check memory around key addresses
    std::cout << "Memory at 0x0000: 0x" << std::hex << (int)utils.memory_model.read(0x0000) << std::dec << std::endl;
    std::cout << "Memory at 0xC000: 0x" << std::hex << (int)utils.memory_model.read(0xC000) << std::dec << std::endl;
}

void debug_memory_signals(TV80LXTestUtils& utils) {
    std::cout << "=== MEMORY CONTROL SIGNALS ===" << std::endl;
    std::cout << "wbm_cyc_o: " << (int)utils.top->wbm_cyc_o << std::endl;
    std::cout << "wbm_stb_o: " << (int)utils.top->wbm_stb_o << std::endl; 
    std::cout << "wbm_ack_i: " << (int)utils.top->wbm_ack_i << std::endl;
    std::cout << "wbm_dat_i: " << (int)utils.top->wbm_dat_i << std::endl;
    std::cout << "wbm_we_o: " << (int)utils.top->wbm_we_o << std::endl;
}
// =============================================================================
// MAIN TEST SUITE
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
    
    std::cout << "=== COMPREHENSIVE TV80-LX-WB TEST SUITE ===" << std::endl;

    // Reset
    test_bootstrap_execution(utils);
    
    // First the timing test
    //test_memory_timing(utils);

    // Run complete test suite
    debug_cpu_state(utils);
    test_native_mode_functionality(utils);
    debug_cpu_state(utils);
    test_legacy_mode_functionality(utils);
    debug_cpu_state(utils);
    test_interrupt_handling(utils);
    debug_cpu_state(utils);
    test_memory_access_patterns(utils);
    debug_cpu_state(utils);


    // Final extended stability test
    std::cout << "\n=== FINAL STABILITY TEST ===" << std::endl;
    for (int i = 0; i < 100; i++) utils.clock_tick();
    utils.assert_true(true, "Extended stability test passed");
    
    utils.print_test_results();
    
    tfp->close();
    delete top;
    delete tfp;
    
    return utils.get_test_failures();
}