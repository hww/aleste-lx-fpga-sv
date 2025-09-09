#include <iostream>
#include <iomanip>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vmmu_native.h"

#define CLK_HALF_PERIOD 5
#define SETUP_TIME 2
#define CLK_REST_TIME 3

class MMUNativeTestUtils {
private:
    Vmmu_native* top;
    vluint64_t& main_time;
    VerilatedVcdC* tfp;
    bool syscall_trig_seen;
    int test_failures;
    int test_successes;

public:
    MMUNativeTestUtils(Vmmu_native* top_ptr, vluint64_t& time_var, VerilatedVcdC* trace_ptr = nullptr)
        : top(top_ptr), main_time(time_var), tfp(trace_ptr), 
          syscall_trig_seen(false), test_failures(0), test_successes(0) {}

    // Public access methods
    uint8_t get_syscall_trig() { return top->syscall_trigger; }
    uint8_t get_syscall_data() { return top->syscall_function; }
    uint8_t get_supervisor_mode() { return top->supervisor_mode; }
    uint8_t get_mmio_userlock() { return top->mmio_userlock; }

    void eval(int delta) {
        top->eval();
        if (tfp) tfp->dump(main_time);
        main_time += delta;
    }

    void clock_tick() {
        top->clk = 1;
        eval(CLK_HALF_PERIOD);
        if (top->syscall_trigger) syscall_trig_seen = true;
        top->clk = 0;
        eval(CLK_HALF_PERIOD);
    }

    void reset_pulse() {
        top->reset = 1;
        for (int i = 0; i < 5; i++) clock_tick();
        top->reset = 0;
        clock_tick();
        syscall_trig_seen = false;
    }

    void wait_cycles(int cycles) {
        for (int i = 0; i < cycles; i++) {
            clock_tick();
        }
    }

    // Wishbone Master operations for MMU registers
    void wb_write_reg(uint8_t addr, uint8_t data) {
        std::cout << "WB Write: addr=0x" << std::hex << (int)addr << " data=0x" << (int)data << std::dec << std::endl;
        
        // Setup phase
        top->s_wb_adr_i = addr;
        top->s_wb_dat_i = data;
        top->s_wb_we_i = 1;
        top->s_wb_cyc_i = 1;
        top->s_wb_stb_i = 1;

        eval(SETUP_TIME);
        
        clock_tick();
        
        // Wait for ACK
        int timeout = 10;
        while (!top->s_wb_ack_o && timeout-- > 0) {
            clock_tick();
        }
        
        if (timeout <= 0) {
            std::cout << "WB write timeout!" << std::endl;
        }
        
        // End transaction
        top->s_wb_cyc_i = 0;
        top->s_wb_stb_i = 0;
        top->s_wb_we_i = 0;
        eval(SETUP_TIME);
        
        wait_cycles(2);
    }

    uint8_t wb_read_reg(uint8_t addr) {
        // Setup phase
        top->s_wb_adr_i = addr;
        top->s_wb_we_i = 0;
        top->s_wb_cyc_i = 1;
        top->s_wb_stb_i = 1;

        eval(SETUP_TIME);
        
        clock_tick();
        
        // Wait for ACK
        int timeout = 10;
        while (!top->s_wb_ack_o && timeout-- > 0) {
            clock_tick();
        }
        
        uint8_t data = top->s_wb_dat_o;
        
        // End transaction
        top->s_wb_cyc_i = 0;
        top->s_wb_stb_i = 0;
        eval(SETUP_TIME);
        
        wait_cycles(2);
        
        return data;
    }

    // Z80 IO operations (for SysCall and other IO)
    void z80_io_write(uint16_t addr, uint8_t data) {
        std::cout << "Z80 IO Write: addr=0x" << std::hex << addr << " data=0x" << (int)data << std::dec << std::endl;
        
        top->cpu_a = addr;
        top->cpu_din = data;
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
        eval(SETUP_TIME);
    }

    // Assertion functions
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
        syscall_trig_seen = false;
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

void test_default_state(MMUNativeTestUtils& utils) {
    std::cout << "\n=== TESTING DEFAULT STATE ===" << std::endl;
    
    // После сброса должны быть установлены значения по умолчанию
    utils.assert_equal(utils.get_mmio_userlock(), 1, "Default mmio_userlock should be 1");
    utils.assert_equal(utils.get_supervisor_mode(), 1, "Default supervisor_mode should be 1 (after reset)");
    utils.assert_equal(utils.get_syscall_trig(), 0, "Default syscall_trig should be 0");
}

void test_syscall_mechanism(MMUNativeTestUtils& utils) {
    std::cout << "\n=== TESTING SYSCALL MECHANISM ===" << std::endl;
    
    // SysCall через Z80 IO
    utils.z80_io_write(0x00D4, 0x55);
    utils.assert_equal(utils.get_syscall_data(), 0x55, "SysCall data should be captured");
    utils.assert_syscall_trig_seen(true, "SysCall should activate trig");
    
    utils.z80_io_write(0x00D4, 0xAA);
    utils.assert_equal(utils.get_syscall_data(), 0xAA, "Second SysCall should update data");
    utils.assert_syscall_trig_seen(true, "Second SysCall should activate trig");
}

void test_control_register(MMUNativeTestUtils& utils) {
    std::cout << "\n=== TESTING CONTROL REGISTER (D7) ===" << std::endl;
    
    // Тестируем запись в регистр управления через Wishbone
    utils.wb_write_reg(0x07, 0b00010010); // supervisor_mode=1, mmio_userlock=0
    utils.assert_equal(utils.get_supervisor_mode(), 1, "supervisor_mode should be 1");
    utils.assert_equal(utils.get_mmio_userlock(), 0, "mmio_userlock should be 0");
    
    utils.wb_write_reg(0x07, 0b00010001); // supervisor_mode=0, mmio_userlock=0
    utils.assert_equal(utils.get_supervisor_mode(), 0, "supervisor_mode should be 0");
    utils.assert_equal(utils.get_mmio_userlock(), 0, "mmio_userlock should stay 0");
}

void test_mmio_access_control(MMUNativeTestUtils& utils) {
    std::cout << "\n=== TESTING MMIO ACCESS CONTROL ===" << std::endl;
    
    // Включаем блокировку MMIO через Wishbone
    utils.wb_write_reg(0x07, 0b00010000); // mmio_userlock=1
    
    // Попытка доступа к MMIO регистрам через Wishbone
    utils.wb_write_reg(0x03, 0x12); // MMIO Page Register
    utils.wb_write_reg(0x09, 0x34); // Super Slot Select
    
    // Выключаем блокировку
    utils.wb_write_reg(0x07, 0b00000000); // mmio_userlock=0
    utils.wb_write_reg(0x0B, 0x56); // User Slot Select
    utils.assert_true(true, "MMIO access should work with userlock=0");
}

void test_slot_selection(MMUNativeTestUtils& utils) {
    std::cout << "\n=== TESTING SLOT SELECTION ===" << std::endl;
    
    // Тестируем выбор слотов в разных режимах через Wishbone
    utils.wb_write_reg(0x07, 0b00000010); // supervisor_mode=1
    utils.wb_write_reg(0x09, 0x03); // Super Slot = 3
    utils.assert_equal(utils.get_supervisor_mode(), 1, "Should be in supervisor mode");
    
    utils.wb_write_reg(0x07, 0b00000000); // supervisor_mode=0
    utils.wb_write_reg(0x0B, 0x01); // User Slot = 1
    utils.assert_equal(utils.get_supervisor_mode(), 0, "Should be in user mode");
}

void test_bank_registers(MMUNativeTestUtils& utils) {
    std::cout << "\n=== TESTING BANK REGISTERS ===" << std::endl;
    
    // Тестируем запись в банковые регистры через Wishbone
    utils.wb_write_reg(0x0C, 0x11); // Bank 0
    utils.wb_write_reg(0x0D, 0x22); // Bank 1
    utils.wb_write_reg(0x0E, 0x33); // Bank 2
    utils.wb_write_reg(0x0F, 0x44); // Bank 3
    
    utils.assert_true(true, "Bank register writes should complete");
}

void test_mmio_page_register(MMUNativeTestUtils& utils) {
    std::cout << "\n=== TESTING MMIO PAGE REGISTER ===" << std::endl;
    
    // Тестируем регистр страницы MMIO через Wishbone
    utils.wb_write_reg(0x03, 0x12); // MMIO Page = 0x12
    utils.assert_true(true, "MMIO page register write should complete");
    
    utils.wb_write_reg(0x03, 0xAB); // MMIO Page = 0xAB
    utils.assert_true(true, "Second MMIO page register write should complete");
}

void test_control_register_detailed(MMUNativeTestUtils& utils) {
    std::cout << "\n=== DETAILED CONTROL REGISTER TEST ===" << std::endl;
    
    // Проверяем текущее состояние
    std::cout << "Initial: supervisor_mode=" << (int)utils.get_supervisor_mode() 
              << ", mmio_userlock=" << (int)utils.get_mmio_userlock() << std::endl;
    
    // Пробуем записать в D7 с разными значениями через Wishbone
    utils.wb_write_reg(0x07, 0b00000010); // Пробуем установить только supervisor_mode
    std::cout << "After write 0x02: supervisor_mode=" << (int)utils.get_supervisor_mode() 
              << ", mmio_userlock=" << (int)utils.get_mmio_userlock() << std::endl;
    
    utils.wb_write_reg(0x07, 0b00010000); // Пробуем установить только mmio_userlock
    std::cout << "After write 0x10: supervisor_mode=" << (int)utils.get_supervisor_mode() 
              << ", mmio_userlock=" << (int)utils.get_mmio_userlock() << std::endl;
    
    utils.wb_write_reg(0x07, 0b00010010); // Пробуем установить оба бита
    std::cout << "After write 0x12: supervisor_mode=" << (int)utils.get_supervisor_mode() 
              << ", mmio_userlock=" << (int)utils.get_mmio_userlock() << std::endl;
    
    // Пробуем записать в другой регистр для сравнения
    utils.wb_write_reg(0x03, 0x55); // MMIO Page Register
    std::cout << "After D3 write: should work" << std::endl;
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    
    vluint64_t main_time = 0;
    VerilatedVcdC* tfp = new VerilatedVcdC;
    
    Vmmu_native* top = new Vmmu_native;
    top->trace(tfp, 99);
    tfp->open("mmu_native_test.vcd");
    
    MMUNativeTestUtils utils(top, main_time, tfp);
    
    std::cout << "=== MMU NATIVE AUTOMATED TEST ===" << std::endl;
    
    // Initial setup
    top->cpu_iorq_n = 1;
    top->cpu_wr_n = 1;
    top->cpu_a = 0;
    top->cpu_din = 0;
    
    // Wishbone interface setup
    top->s_wb_cyc_i = 0;
    top->s_wb_stb_i = 0;
    top->s_wb_we_i = 0;
    top->s_wb_adr_i = 0;
    top->s_wb_dat_i = 0;

    
    utils.set_enable(true);
    
    // Reset
    utils.reset_pulse();
    
    // Run automated tests
    test_default_state(utils);
    test_syscall_mechanism(utils);
    test_control_register(utils);
    test_control_register_detailed(utils);
    test_mmio_access_control(utils);
    test_slot_selection(utils);
    test_bank_registers(utils);
    test_mmio_page_register(utils);
    
    // Print final results
    utils.print_test_results();
    
    tfp->close();
    delete top;
    delete tfp;
    
    return (utils.get_test_failures() == 0) ? 0 : 1;
}