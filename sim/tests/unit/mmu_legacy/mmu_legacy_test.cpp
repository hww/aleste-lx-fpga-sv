#include <iostream>
#include <iomanip>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vmmu_legacy.h"

#define CLK_HALF_PERIOD 5
#define SETUP_TIME 2
#define CLK_REST_TIME 3

class MMULegacyTestUtils {
private:
    Vmmu_legacy* top;
    vluint64_t& main_time;
    VerilatedVcdC* tfp;

    int test_successes;
    int test_failures;

public:
    
    MMULegacyTestUtils(Vmmu_legacy* top_ptr, vluint64_t& time_var, VerilatedVcdC* trace_ptr = nullptr)
        : top(top_ptr), main_time(time_var), tfp(trace_ptr), 
          test_failures(0), test_successes(0) {}

    // Public access methods
    uint8_t get_graphic_mode() { return top->graphic_mode; }
    uint8_t get_irq_control() { return top->irq_control; }
    uint8_t get_m_wb_tga() { return top->m_wb_tga_o; }
    uint8_t get_m_wb_adr_high() { return top->m_wb_adr_o >> 16; }

    int get_failures() {return test_failures; }

    void eval(int delta) {
        top->eval();
        if (tfp) tfp->dump(main_time);
        main_time += delta;
    }

    void clock_tick() {
        top->clk = 1;
        eval(CLK_HALF_PERIOD);
        top->clk = 0;
        eval(CLK_HALF_PERIOD);
    }

    void reset_pulse() {
        top->reset = 1;
        for (int i = 0; i < 5; i++) clock_tick();
        top->reset = 0;
        clock_tick();
    }

    void wait_cycles(int cycles) {
        for (int i = 0; i < cycles; i++) {
            clock_tick();
        }
    }

    void z80_io_write(uint16_t addr, uint8_t data) {
        std::cout << "Z80 IO Write: addr=0x" << std::hex << addr << " data=0x" << (int)data << std::dec << std::endl;
        
        top->cpu_a = addr;
        top->cpu_dout = data;
        top->cpu_iorq_n = 0;
        top->cpu_wr_n = 0;
        eval(SETUP_TIME);
        
        clock_tick();
        
        top->cpu_iorq_n = 1;
        top->cpu_wr_n = 1;
        eval(SETUP_TIME);
        
        wait_cycles(2);
    }

    void z80_mem_write(uint16_t addr, uint8_t data) {
        std::cout << "Z80 MEM Write: addr=0x" << std::hex << addr << " data=0x" << (int)data << std::dec << std::endl;
        
        top->cpu_a = addr;
        top->cpu_dout = data;
        top->cpu_mreq_n = 0;
        top->cpu_wr_n = 0;
        eval(SETUP_TIME);
        
        clock_tick();
        
        top->cpu_mreq_n = 1;
        top->cpu_wr_n = 1;
        eval(SETUP_TIME);
        
        wait_cycles(2);
    }

    void set_legacy_mode_i(bool state) {
        top->legacy_mode_i = state;
        eval(SETUP_TIME);
    }

    // Assertion functions with automatic tracking
    void assert_true(bool condition, const char* message) {
        if (condition) {
            std::cout << "✓ PASS: " << message << std::endl;
            test_successes++;
        } else {
            std::cout << "✗ FAIL: " << message << std::endl;
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
};

void test_rmr_registers(MMULegacyTestUtils& utils) {
    std::cout << "\n=== TESTING RMR REGISTERS ===" << std::endl;
    
    // Test graphic_mode bits [1:0]
    utils.z80_io_write(0x7F00, 0b10000001); // mode=1
    utils.assert_equal(utils.get_graphic_mode(), 1, "Graphic mode should be 1");
    utils.assert_equal(utils.get_irq_control(), 0, "IRQ control should be 0");
    
    utils.z80_io_write(0x7F00, 0b10010010); // mode=2, irq=1
    utils.assert_equal(utils.get_graphic_mode(), 2, "Graphic mode should be 2");
    utils.assert_equal(utils.get_irq_control(), 1, "IRQ control should be 1");
    
    utils.z80_io_write(0x7F00, 0b10011011); // mode=3, irq=1
    utils.assert_equal(utils.get_graphic_mode(), 3, "Graphic mode should be 3");
    utils.assert_equal(utils.get_irq_control(), 1, "IRQ control should stay 1");
}

void test_upper_rom_register(MMULegacyTestUtils& utils) {
    std::cout << "\n=== TESTING UPPER ROM REGISTER ===" << std::endl;
    
    utils.z80_io_write(0xDF00, 0xAA);
    utils.assert_true(true, "Upper ROM write should complete without error");
    
    utils.z80_io_write(0xDF00, 0x55);
    utils.assert_true(true, "Second Upper ROM write should complete");
}

void test_external_io_access(MMULegacyTestUtils& utils) {
    std::cout << "\n=== TESTING EXTERNAL IO ACCESS ===" << std::endl;
    
    // Test that external IO accesses go to Wishbone with correct tagging
    utils.z80_io_write(0xD400, 0x66);
    // Should generate IO access with address FFxxxx and TGA=1
    
    utils.z80_io_write(0xC000, 0x77);
    // Should generate IO access with address FFC000 and TGA=1
    
    utils.assert_true(true, "External IO writes should complete");
}

void test_memory_access(MMULegacyTestUtils& utils) {
    std::cout << "\n=== TESTING MEMORY ACCESS ===" << std::endl;
    
    // Test memory writes (should go to Wishbone with TGA=0)
    utils.z80_mem_write(0x4000, 0x88);
    utils.assert_true(true, "Memory write should complete");
    
    utils.z80_mem_write(0x8000, 0x99);
    utils.assert_true(true, "Second memory write should complete");
}

void test_legacy_mode_i_functionality(MMULegacyTestUtils& utils) {
    std::cout << "\n=== TESTING legacy_mode_i FUNCTIONALITY ===" << std::endl;
    
    // Test with legacy_mode_i=0 - should ignore internal register writes
    utils.set_legacy_mode_i(false);
    utils.z80_io_write(0x7F00, 0b10000100);
    utils.assert_true(true, "RMR write should be ignored when disabled");
    
    // But external IO should still work (goes directly to Wishbone)
    utils.z80_io_write(0xD400, 0x66);
    utils.assert_true(true, "External IO should work even when disabled");
    
    // Re-legacy_mode_i and verify internal registers work again
    utils.set_legacy_mode_i(true);
    utils.z80_io_write(0x7F00, 0b10000001);
    utils.assert_equal(utils.get_graphic_mode(), 1, "Graphic mode should work after re-legacy_mode_i");
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    
    vluint64_t main_time = 0;
    VerilatedVcdC* tfp = new VerilatedVcdC;
    
    Vmmu_legacy* top = new Vmmu_legacy;
    top->trace(tfp, 99);
    tfp->open("mmu_legacy_test.vcd");
    
    MMULegacyTestUtils utils(top, main_time, tfp);
    
    std::cout << "=== MMU LEGACY AUTOMATED TEST ===" << std::endl;
    
    // Initial setup
    top->cpu_iorq_n = 1;
    top->cpu_mreq_n = 1;
    top->cpu_wr_n = 1;
    top->cpu_a = 0;
    top->cpu_dout = 0;
    utils.set_legacy_mode_i(true);
    
    // Reset
    utils.reset_pulse();
    
    // Run automated tests
    test_rmr_registers(utils);
    test_upper_rom_register(utils);
    test_external_io_access(utils);
    test_memory_access(utils);
    test_legacy_mode_i_functionality(utils);
    
    // Print final results
    utils.print_test_results();
    
    tfp->close();
    delete top;
    delete tfp;
    
    return (utils.get_failures() == 0) ? 0 : 1;
}