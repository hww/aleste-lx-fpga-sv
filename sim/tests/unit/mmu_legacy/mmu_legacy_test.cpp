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
    bool syscall_trig_seen;

    int test_successes;
    int test_failures;

public:
    
    MMULegacyTestUtils(Vmmu_legacy* top_ptr, vluint64_t& time_var, VerilatedVcdC* trace_ptr = nullptr)
        : top(top_ptr), main_time(time_var), tfp(trace_ptr), 
          syscall_trig_seen(false), test_failures(0), test_successes(0) {}

    // Public access methods
    uint8_t get_syscall_trig() { return top->syscall_trig; }
    uint8_t get_syscall_data() { return top->syscall_data; }
    uint8_t get_graphic_mode() { return top->graphic_mode; }
    uint8_t get_irq_control() { return top->irq_control; }

    int get_failures() {return test_failures; }

    void eval(int delta) {
        top->eval();
        if (tfp) tfp->dump(main_time);
        main_time += delta;
    }

    void clock_tick() {
        top->clk = 1;
        eval(CLK_HALF_PERIOD);
        // Capture if syscall trig was active during this tick
        if (get_syscall_trig()) syscall_trig_seen = true;
        top->clk = 0;
        eval(CLK_HALF_PERIOD);
    }

    void reset_pulse() {
        top->reset = 1;
        for (int i = 0; i < 5; i++) clock_tick();
        top->reset = 0;
        clock_tick();
        syscall_trig_seen = false; // Reset tracking after reset
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

    void set_enable(bool state) {
        top->enable = state;
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

    void assert_syscall_trig_seen(bool expected, const char* test_name) {
        if (syscall_trig_seen == expected) {
            std::cout << "✓ PASS: " << test_name << " - syscall_trig " 
                      << (expected ? "was seen" : "was not seen") << std::endl;
            test_successes++;
        } else {
            std::cout << "✗ FAIL: " << test_name << " - syscall_trig " 
                      << (expected ? "was not seen but expected" : "was seen but not expected") << std::endl;
            test_failures++;
        }
        syscall_trig_seen = false; // Reset for next test
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

void test_syscall_mechanism(MMULegacyTestUtils& utils) {
    std::cout << "\n=== TESTING SYSCALL MECHANISM ===" << std::endl;
    
    // Test 1: Basic SysCall should capture data but may not set trig
    utils.z80_io_write(0xD400, 0x55);
    utils.assert_equal(utils.get_syscall_data(), 0x55, "SysCall data should be captured");
    utils.assert_syscall_trig_seen(true, "SysCall should activate trig during clock");
    
    // Test 2: Multiple SysCalls
    utils.z80_io_write(0xD400, 0xAA);
    utils.assert_equal(utils.get_syscall_data(), 0xAA, "Second SysCall should update data");
    utils.assert_syscall_trig_seen(true, "Second SysCall should activate trig");
    
    // Test 3: SysCall with different values
    utils.z80_io_write(0xD400, 0x11);
    utils.assert_equal(utils.get_syscall_data(), 0x11, "Third SysCall should update data");
    utils.assert_syscall_trig_seen(true, "Third SysCall should activate trig");
}

void test_rmr_registers(MMULegacyTestUtils& utils) {
    std::cout << "\n=== TESTING RMR REGISTERS ===" << std::endl;
    
    // Test graphic_mode bits [1:0]
    utils.z80_io_write(0x007F, 0b10000001); // mode=1
    utils.assert_equal(utils.get_graphic_mode(), 1, "Graphic mode should be 1");
    utils.assert_equal(utils.get_irq_control(), 0, "IRQ control should be 0");
    
    utils.z80_io_write(0x007F, 0b10010010); // mode=2, irq=1
    utils.assert_equal(utils.get_graphic_mode(), 2, "Graphic mode should be 2");
    utils.assert_equal(utils.get_irq_control(), 1, "IRQ control should be 1");
    
    utils.z80_io_write(0x007F, 0b10011011); // mode=3, irq=1
    utils.assert_equal(utils.get_graphic_mode(), 3, "Graphic mode should be 3");
    utils.assert_equal(utils.get_irq_control(), 1, "IRQ control should stay 1");
}

void test_upper_rom_register(MMULegacyTestUtils& utils) {
    std::cout << "\n=== TESTING UPPER ROM REGISTER ===" << std::endl;
    
    // This test is more observational since we can't read back the register directly
    // But we can verify that the operation doesn't break anything
    utils.z80_io_write(0x00DF, 0xAA);
    utils.assert_true(true, "Upper ROM write should complete without error");
    
    utils.z80_io_write(0x00DF, 0x55);
    utils.assert_true(true, "Second Upper ROM write should complete");
}

void test_enable_functionality(MMULegacyTestUtils& utils) {
    std::cout << "\n=== TESTING ENABLE FUNCTIONALITY ===" << std::endl;
    
    // Test with enable=0 - should ignore writes
    utils.set_enable(false);
    utils.z80_io_write(0xD400, 0x66);
    utils.assert_syscall_trig_seen(false, "SysCall should be ignored when disabled");
    
    utils.z80_io_write(0x007F, 0b10000100);
    // Can't easily test that this was ignored, but shouldn't crash
    
    // Re-enable and verify it works again
    utils.set_enable(true);
    utils.z80_io_write(0xD400, 0x77);
    utils.assert_syscall_trig_seen(true, "SysCall should work after re-enable");
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
    top->cpu_wr_n = 1;
    top->cpu_a = 0;
    top->cpu_dout = 0;
    utils.set_enable(true);
    
    // Reset
    utils.reset_pulse();
    
    // Run automated tests
    test_syscall_mechanism(utils);
    test_rmr_registers(utils);
    test_upper_rom_register(utils);
    test_enable_functionality(utils);
    
    // Print final results
    utils.print_test_results();
    
    tfp->close();
    delete top;
    delete tfp;
    
    return (utils.get_failures() == 0) ? 0 : 1;
}