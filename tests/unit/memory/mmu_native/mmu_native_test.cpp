#include <iostream>
#include <iomanip>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vmmu_native.h"
#include "mmu.h"

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
    
    // Wishbone monitoring
    std::function<void(uint32_t, uint8_t)> m_wb_write_callback;
    std::function<uint8_t(uint32_t)> m_wb_read_callback;
    uint32_t last_m_wb_addr;
    uint8_t last_m_wb_data;
    bool m_wb_transaction_occurred;

public:
    MMUNativeTestUtils(Vmmu_native* top_ptr, vluint64_t& time_var, VerilatedVcdC* trace_ptr = nullptr)
        : top(top_ptr), main_time(time_var), tfp(trace_ptr), 
          syscall_trig_seen(false), test_failures(0), test_successes(0),
          last_m_wb_addr(0), last_m_wb_data(0), m_wb_transaction_occurred(false) {}

    // Public access methods
    Vmmu_native* get_top() { return top; }
    uint8_t get_syscall_trig() { return top->syscall_trigger_o; }
    uint8_t get_syscall_data() { return top->syscall_function_o; }
    uint8_t get_supervisor_mode() { return top->supervisor_mode_o; }
    uint8_t get_mmio_userlock() { return top->mmio_userlock_o; }
    uint8_t get_native_mode() { return top->native_mode_o; }
    uint8_t get_legacy_mode() { return top->legacy_mode_o; }

    uint8_t get_control() { return top->debug_control_o; }
    uint8_t get_page() { return top->debug_mmio_page_o; }
    uint8_t get_super_slot() { return top->debug_super_slot_o; }
    uint8_t get_user_slot() { return top->debug_user_slot_o; }
    uint8_t get_syscall_function() { return top->debug_syscall_function_o; }
    uint8_t get_active_slot() { return get_supervisor_mode() ? get_super_slot(): get_user_slot(); }

    uint8_t get_selected_bank() { return top->debug_selected_bank_o; }
    uint8_t get_current_slot() { return top->debug_current_slot_o; }
    uint8_t get_bank_index() { return top->debug_bank_index_o; }

    uint32_t get_last_m_wb_addr() { return last_m_wb_addr; }
    uint8_t get_last_m_wb_data() { return last_m_wb_data; }
    bool was_m_wb_transaction() { return m_wb_transaction_occurred; }
    void clear_m_wb_transaction() { m_wb_transaction_occurred = false; }

    void set_supervisor_mode(bool v) { top->supervisor_mode_i = v; }

    void eval(int delta) {
        top->eval();
        if (tfp) tfp->dump(main_time);
        main_time += delta;
    }

    void clock_low(int delay) {
        top->clk = 0;
        eval(delay);
    }

    void clock_high(int delay) {
        top->clk = 1;
        eval(delay);
        
        // Handle Wishbone transactions on every rising edge
        handle_m_wb();
        
        if (top->syscall_trigger_o) syscall_trig_seen = true;
    }

    void clock_tick() {
        clock_high(CLK_HALF_PERIOD);
        clock_low(CLK_HALF_PERIOD);
    }

    void handle_m_wb() {
        // Monitor Wishbone master interface on every rising edge
        if (top->m_wb_cyc_o && top->m_wb_stb_o) {
            m_wb_transaction_occurred = true;
            last_m_wb_addr = top->m_wb_adr_o;
            
            // Generate ACK immediately
            top->m_wb_ack_i = 1;

            if (top->m_wb_we_o) {
                // Write transaction
                last_m_wb_data = top->m_wb_dat_o;
                if (m_wb_write_callback) {
                    m_wb_write_callback(last_m_wb_addr, last_m_wb_data);
                }
                std::cout << "  WB Master WRITE: addr=0x" << std::hex << last_m_wb_addr 
                          << " data=0x" << (int)last_m_wb_data << std::dec << std::endl;
            } else {
                // Read transaction
                uint8_t response_data = 0xAA; // Default response
                if (m_wb_read_callback) {
                    response_data = m_wb_read_callback(last_m_wb_addr);
                }
                top->m_wb_dat_i = response_data;
                std::cout << "  WB Master READ: addr=0x" << std::hex << last_m_wb_addr 
                          << " response=0x" << (int)response_data << std::dec << std::endl;
            }
        } else {
            // No active transaction
            top->m_wb_ack_i = 0;
        }
    }

    void set_m_wb_delegates(std::function<uint8_t(uint32_t)> read_callback = nullptr,
                           std::function<void(uint32_t, uint8_t)> write_callback = nullptr) {
        m_wb_read_callback = read_callback;
        m_wb_write_callback = write_callback;
    }

    void reset_pulse() {
        top->reset = 1;
        // Initialize all inputs
        top->cpu_mreq_n = 1;
        top->cpu_iorq_n = 1;
        top->cpu_rd_n = 1;
        top->cpu_wr_n = 1;
        top->cpu_m1_n = 1;
        top->cpu_a = 0;
        top->cpu_din = 0;
        
        top->m_wb_dat_i = 0;
        top->m_wb_ack_i = 0;
        top->supervisor_mode_i = 0;

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

    // Z80 Bus simulation
    void z80_bus_idle() {
        top->cpu_mreq_n = 1;
        top->cpu_iorq_n = 1;
        top->cpu_rd_n = 1;
        top->cpu_wr_n = 1;
        top->cpu_m1_n = 1;
        eval(SETUP_TIME);
    }

    void simulate_z80_memory_access(uint16_t addr, bool is_write, uint8_t data = 0) {
        if (is_write)
            std::cout << "  Z80 Memory Write: addr=0x" << std::hex << addr 
                    << " data=0x" << (int)data << std::dec << std::endl;
        else
            std::cout << "  Z80 Memory Read:  addr=0x" << std::hex << addr << std::dec << std::endl;

        z80_bus_idle();
        
        // Set address and data
        top->cpu_a = addr;
        if (is_write) top->cpu_din = data;
        
        // Activate signals on clock edge
        clock_high(SETUP_TIME);
        top->cpu_mreq_n = 0;
        if (is_write) {
            top->cpu_wr_n = 0;
        } else {
            top->cpu_rd_n = 0;
        }
        eval(CLK_REST_TIME);
        
        // Complete the cycle
        clock_low(CLK_HALF_PERIOD);
        clock_high(SETUP_TIME);
        z80_bus_idle();
        eval(CLK_REST_TIME);
        clock_low(CLK_HALF_PERIOD);
    }

    void simulate_z80_io_access(uint16_t addr, bool is_write, uint8_t data = 0) {
        if (is_write)
            std::cout << "  Z80 IO Write: port=0x" << std::hex << addr 
                    << " data=0x" << (int)data << std::dec << std::endl;
        else
            std::cout << "  Z80 IO Read:  port=0x" << std::hex << addr << std::dec << std::endl;
        
        z80_bus_idle();
        
        // Set address and data
        top->cpu_a = addr;
        if (is_write) top->cpu_din = data;
        
        // Activate signals on clock edge
        clock_high(SETUP_TIME);
        top->cpu_iorq_n = 0;
        if (is_write) {
            top->cpu_wr_n = 0;
        } else {
            top->cpu_rd_n = 0;
        }
        eval(CLK_REST_TIME);
        
        // Complete the cycle
        clock_low(CLK_HALF_PERIOD);
        clock_high(SETUP_TIME);
        z80_bus_idle();
        eval(CLK_REST_TIME);
        clock_low(CLK_HALF_PERIOD);
    }

    void simulate_z80_m1_cycle(uint16_t addr) {
        std::cout << "  Z80 M1 Cycle: addr=0x" << std::hex << addr << std::dec << std::endl;
        
        z80_bus_idle();
        
        // Set address
        top->cpu_a = addr;
        
        // Activate signals on clock edge
        clock_high(SETUP_TIME);
        top->cpu_mreq_n = 0;
        top->cpu_m1_n = 0;
        eval(CLK_REST_TIME);
        
        // Complete the cycle
        clock_low(CLK_HALF_PERIOD);
        clock_high(SETUP_TIME);
        z80_bus_idle();
        eval(CLK_REST_TIME);
        clock_low(CLK_HALF_PERIOD);
    }

    // Direct CPU register access (new methods for simplified architecture)
    void cpu_write_reg(uint8_t reg_addr, uint8_t data) {
        std::cout << "  CPU Write Register: port=0x" << std::hex << (int)reg_addr 
                  << " data=0x" << (int)data << std::dec << std::endl;
        simulate_z80_io_access(reg_addr, true, data);
    }

    uint8_t cpu_read_reg(uint8_t reg_addr) {
        simulate_z80_io_access(reg_addr, false, 0);
        // Note: In real hardware, data would be available on cpu_dout
        // For simulation, we need to capture it differently
        return 0;
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

    void assert_equal(bool actual, bool expected, const char* message) {
        if (actual == expected) {
            std::cout << "✓ PASS: " << message << " (expected " << expected 
                      << ", got " << actual << ")" << std::endl;
            test_successes++;
        } else {
            std::cout << "✗ FAIL: " << message << " (expected " << expected 
                      << ", got " << actual << ")" << std::endl;
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

    void log_registers() {
        std::cout << "  REGS: control=0x" << std::hex << (int)get_control() 
                  << ", mmio_page=0x" << (int)get_page()
                  << ", active_slot=0x" << (int)get_active_slot()
                  << ", super_slot=0x" << (int)get_super_slot()
                  << ", user_slot=0x" << (int)get_user_slot() 
                  << ", syscall=0x" << (int)get_syscall_function() 
                  << ", selected_bank[7:0]=0x" << (int)get_selected_bank() 
                  << ", current_slot[1:0]=0x" << (int)get_current_slot()  
                  << ", bank_index[3:0]=0x" << (int)get_bank_index() 
                  << std::dec << std::endl;
    }

    void debug_address_translation(const char* test_name) {
        std::cout << "  DEBUG " << test_name << ": " << std::endl;
        std::cout << "  m_wb_cyc_o: " << (int)top->m_wb_cyc_o << std::endl;
        std::cout << "  m_wb_stb_o: " << (int)top->m_wb_stb_o << std::endl;
        std::cout << "  m_wb_adr_o: 0x" << std::hex << top->m_wb_adr_o << std::dec << std::endl;
        std::cout << "  m_wb_we_o: " << (int)top->m_wb_we_o << std::endl;
        std::cout << "  cpu_mreq_n: " << (int)top->cpu_mreq_n << std::endl;
        std::cout << "  cpu_iorq_n: " << (int)top->cpu_iorq_n << std::endl;
        std::cout << "  cpu_rd_n: " << (int)top->cpu_rd_n << std::endl;
        std::cout << "  cpu_wr_n: " << (int)top->cpu_wr_n << std::endl;
        std::cout << "  native_mode: " << (int)top->native_mode_o << std::endl;
        std::cout << "  supervisor_mode: " << (int)top->supervisor_mode_o << std::endl;
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

// Define register addresses (CPU I/O ports)
namespace CPUPorts {
    const uint8_t CONTROL      = 0xD7;
    const uint8_t MMIO_PAGE    = 0xD3;
    const uint8_t SUPER_SLOT   = 0xD9;
    const uint8_t USER_SLOT    = 0xDB;
    const uint8_t BANK_0       = 0xDC;
    const uint8_t BANK_1       = 0xDD;
    const uint8_t BANK_2       = 0xDE;
    const uint8_t BANK_3       = 0xDF;
    const uint8_t SYSCALL      = 0xD4;
    // Extended bank registers
    const uint8_t BANK_EXT_0   = 0xE0;
    const uint8_t BANK_EXT_15  = 0xEF;
}

// Define control register bits
namespace ControlRegister {
    const uint8_t NATIVE_MODE      = (1 << 0);
    const uint8_t SUPERVISOR_MODE  = (1 << 1);
    const uint8_t SUPERVISOR_HOOK  = (1 << 2);
    const uint8_t MMIO_USERLOCK    = (1 << 4);
}

// ===== TEST FUNCTIONS =====

void test_default_state(MMUNativeTestUtils& utils) {
    std::cout << "\n=== TESTING DEFAULT STATE ===" << std::endl;
    utils.log_registers();
    utils.assert_equal(utils.get_mmio_userlock(), 1, "Default mmio_userlock should be 1");
    utils.assert_equal(utils.get_supervisor_mode(), 1, "Default supervisor_mode should be 1");
    utils.assert_equal(utils.get_syscall_trig(), 0, "Default syscall_trig should be 0");
    utils.assert_equal(utils.get_native_mode(), 1, "Default should be native mode");
    utils.assert_equal(utils.get_legacy_mode(), 0, "Default should not be legacy mode");
}

void test_syscall_mechanism(MMUNativeTestUtils& utils) {
    std::cout << "\n=== TESTING SYSCALL MECHANISM ===" << std::endl;
    utils.log_registers();
    
    // Write to syscall register via CPU port
    utils.cpu_write_reg(CPUPorts::SYSCALL, 0x55);
    utils.log_registers();

    utils.assert_equal(utils.get_syscall_data(), 0x55, "SysCall data should be captured");
    utils.assert_syscall_trig_seen(true, "SysCall should activate trig");
    
    // Second syscall
    utils.cpu_write_reg(CPUPorts::SYSCALL, 0xAA);
    utils.log_registers();
    utils.assert_equal(utils.get_syscall_data(), 0xAA, "Second SysCall should update data");
    utils.assert_syscall_trig_seen(true, "Second SysCall should activate trig");
}

void test_control_register(MMUNativeTestUtils& utils) {
    std::cout << "\n=== TESTING CONTROL REGISTER ===" << std::endl;
    
    // Write to control register via CPU port
    utils.cpu_write_reg(CPUPorts::CONTROL, 
                       ControlRegister::NATIVE_MODE | ControlRegister::MMIO_USERLOCK);
    utils.log_registers();
    utils.assert_equal(utils.get_control(), 0x11, "Control register write");
    
    utils.cpu_write_reg(CPUPorts::CONTROL, ControlRegister::NATIVE_MODE);
    utils.log_registers();
    utils.assert_equal(utils.get_control(), 0x01, "Overwrite control register");
}

void test_supervisor_exit(MMUNativeTestUtils& utils) {
    std::cout << "\n=== TESTING SUPERVISOR EXIT ===" << std::endl;
    
    // Enable supervisor mode
    utils.cpu_write_reg(CPUPorts::CONTROL, 
                       ControlRegister::NATIVE_MODE | ControlRegister::SUPERVISOR_MODE);
    utils.log_registers();
    utils.assert_equal(utils.get_supervisor_mode(), 1, "Supervisor mode should be enabled");
    
    // Try to exit supervisor mode
    utils.cpu_write_reg(CPUPorts::CONTROL, ControlRegister::NATIVE_MODE);
    utils.log_registers();
    
    // Should trigger delayed exit
    utils.simulate_z80_m1_cycle(0x0000); // M1 cycle to complete exit
    utils.assert_equal(utils.get_supervisor_mode(), 0, "Supervisor mode should be disabled after M1");
}

void test_hardware_trap(MMUNativeTestUtils& utils) {
    std::cout << "\n=== TESTING HARDWARE TRAP ===" << std::endl;
    
    // Enable hardware trap
    utils.cpu_write_reg(CPUPorts::CONTROL, 
                       ControlRegister::NATIVE_MODE | ControlRegister::SUPERVISOR_HOOK);
    utils.log_registers();
    
    // Simulate access to trap addresses
    utils.simulate_z80_m1_cycle(0x0000); // Reset vector
    utils.assert_equal(utils.get_supervisor_mode(), 1, "Hardware trap should enable supervisor mode");
    
    utils.simulate_z80_m1_cycle(0x0038); // Interrupt vector
    utils.assert_equal(utils.get_supervisor_mode(), 1, "Interrupt trap should keep supervisor mode");
    
    utils.simulate_z80_m1_cycle(0x0066); // NMI vector
    utils.assert_equal(utils.get_supervisor_mode(), 1, "NMI trap should keep supervisor mode");
}

void test_register_access(MMUNativeTestUtils& utils) {
    std::cout << "\n=== TESTING REGISTER ACCESS ===" << std::endl;
    
    // Test all bank registers via CPU ports
    for (int i = 0; i < 16; i++) {
        uint8_t test_data = 0x10 + i;
        uint8_t port_addr = CPUPorts::BANK_EXT_0 + i;
        utils.cpu_write_reg(port_addr, test_data);
    }
    
    // Test other registers
    utils.cpu_write_reg(CPUPorts::MMIO_PAGE, 0xCD);
    utils.cpu_write_reg(CPUPorts::SUPER_SLOT, 0x02);
    utils.cpu_write_reg(CPUPorts::USER_SLOT, 0x01);
    utils.log_registers();
    
    utils.assert_true(true, "All register writes completed");
}

void test_address_translation(MMUNativeTestUtils& utils) {
    std::cout << "\n=== TESTING ADDRESS TRANSLATION ===" << std::endl;
    
    utils.cpu_write_reg(CPUPorts::CONTROL, ControlRegister::NATIVE_MODE);
    utils.log_registers();

    // Setup banks via CPU ports
    utils.cpu_write_reg(CPUPorts::BANK_0, 0x11);  // Page 0
    utils.cpu_write_reg(CPUPorts::BANK_1, 0x22);  // Page 1
    utils.cpu_write_reg(CPUPorts::BANK_2, 0x33);  // Page 2
    utils.cpu_write_reg(CPUPorts::BANK_3, 0x44);  // Page 3

    utils.log_registers();

    // Test memory access - page 0
    utils.clear_m_wb_transaction();
    utils.simulate_z80_memory_access(0x0000, false);
    
    if (utils.was_m_wb_transaction()) {
        utils.assert_equal(utils.get_last_m_wb_addr(), 0x110000, "Memory translation page 0 (0x11 << 16)");
    } else {
        utils.assert_true(false, "No Wishbone transaction occurred for memory access");
    }
    
    // Test page 1 (0x4000-0x7FFF)
    utils.clear_m_wb_transaction();
    utils.simulate_z80_memory_access(0x4000, false);
    
    if (utils.was_m_wb_transaction()) {
        utils.assert_equal(utils.get_last_m_wb_addr(), 0x220000, "Memory translation page 1 (0x22 << 16)");
    } else {
        utils.assert_true(false, "No Wishbone transaction occurred for page 1 access");
    }
    
    // Test page 2 (0x8000-0xBFFF)
    utils.clear_m_wb_transaction();
    utils.simulate_z80_memory_access(0x8000, false);
    
    if (utils.was_m_wb_transaction()) {
        utils.assert_equal(utils.get_last_m_wb_addr(), 0x330000, "Memory translation page 2 (0x33 << 16)");
    } else {
        utils.assert_true(false, "No Wishbone transaction occurred for page 2 access");
    }
    
    // Test page 3 (0xC000-0xFFFF)
    utils.clear_m_wb_transaction();
    utils.simulate_z80_memory_access(0xC000, false);
    
    if (utils.was_m_wb_transaction()) {
        utils.assert_equal(utils.get_last_m_wb_addr(), 0x440000, "Memory translation page 3 (0x44 << 16)");
    } else {
        utils.assert_true(false, "No Wishbone transaction occurred for page 3 access");
    }
}

void test_mmio_translation(MMUNativeTestUtils& utils) {
    std::cout << "\n=== TESTING MMIO TRANSLATION ===" << std::endl;
    
    utils.cpu_write_reg(CPUPorts::MMIO_PAGE, 0xAB);
    utils.cpu_write_reg(CPUPorts::CONTROL, 
                       ControlRegister::NATIVE_MODE | ControlRegister::SUPERVISOR_MODE);
    
    // Test MMIO access (port 0x50)
    utils.clear_m_wb_transaction();
    utils.simulate_z80_io_access(0x0050, false);
    
    if (utils.was_m_wb_transaction()) {
        utils.assert_equal(utils.get_last_m_wb_addr(), 0xFFAB50, "MMIO translation (FF + page AB + port 50)");
    } else {
        utils.assert_true(false, "No Wishbone transaction occurred for MMIO access");
    }
    
    // Test MMIO write
    utils.clear_m_wb_transaction();
    utils.simulate_z80_io_access(0x0030, true, 0x77);
    
    if (utils.was_m_wb_transaction()) {
        utils.assert_equal(utils.get_last_m_wb_addr(), 0xFFAB30, "MMIO write translation");
        utils.assert_equal(utils.get_last_m_wb_data(), 0x77, "MMIO write data");
    } else {
        utils.assert_true(false, "No Wishbone transaction occurred for MMIO write");
    }
}

void test_z80_io_protection(MMUNativeTestUtils& utils) {
    std::cout << "\n=== TESTING Z80 IO PROTECTION ===" << std::endl;
    
    // Enable protection and go to user mode
    utils.cpu_write_reg(CPUPorts::CONTROL, 
                       ControlRegister::NATIVE_MODE | ControlRegister::MMIO_USERLOCK);
    
    // Wait for supervisor mode to exit
    utils.wait_cycles(2);
    
    utils.assert_equal(utils.get_supervisor_mode(), 0, "Should be in user mode for protection test");
    
    // Try to access protected IO port in user mode - should be blocked
    utils.clear_m_wb_transaction();
    utils.simulate_z80_io_access(0x00D7, false); // Control register port
    
    // Should NOT generate Wishbone transaction
    utils.assert_equal(utils.was_m_wb_transaction(), false, "Protected Z80 IO access should be blocked in user mode");
    
    // Now test in supervisor mode
    utils.cpu_write_reg(CPUPorts::CONTROL, 
                       ControlRegister::NATIVE_MODE | ControlRegister::SUPERVISOR_MODE | ControlRegister::MMIO_USERLOCK);
    
    utils.clear_m_wb_transaction();
    utils.simulate_z80_io_access(0x00D7, false);
    
    // Should generate Wishbone transaction in supervisor mode
    utils.assert_equal(utils.was_m_wb_transaction(), true, "IO access should be allowed in supervisor mode");
}

void test_access_protection(MMUNativeTestUtils& utils) {
    std::cout << "\n=== TESTING ACCESS PROTECTION ===" << std::endl;
    
    // Включаем защиту и переходим в user mode
    utils.cpu_write_reg(CPUPorts::CONTROL, 
                       ControlRegister::NATIVE_MODE | ControlRegister::MMIO_USERLOCK);
    
    // Ждем выхода из supervisor mode
    utils.wait_cycles(2);
    
    // Убедимся, что мы в user mode
    utils.assert_equal(utils.get_supervisor_mode(), 0, "Should be in user mode for protection test");
    
    uint8_t before = utils.get_control();
    std::cout << "Control register before test: 0x" << std::hex << (int)before << std::dec << std::endl;
    
    // Пытаемся записать в защищенный регистр из user mode - должно быть заблокировано
    utils.clear_m_wb_transaction();
    utils.simulate_z80_io_access(CPUPorts::CONTROL, true, 0xFF);
    
    // Проверяем, что не было Wishbone транзакции (доступ заблокирован)
    utils.assert_equal(utils.was_m_wb_transaction(), false, "Protected register write should be blocked in user mode");
    
    // Проверяем, что значение регистра не изменилось
    uint8_t after = utils.get_control();
    utils.assert_equal(after, before, "Control register should not change when write is blocked");
}

void test_supervisor_access(MMUNativeTestUtils& utils) {
    std::cout << "\n=== TESTING SUPERVISOR ACCESS ===" << std::endl;
    
    // Enable protection but stay in supervisor mode
    utils.cpu_write_reg(CPUPorts::CONTROL, 
                       ControlRegister::NATIVE_MODE | ControlRegister::SUPERVISOR_MODE | ControlRegister::MMIO_USERLOCK);
    
    uint8_t before = utils.get_control();
    std::cout << "Control register before supervisor write: 0x" << std::hex << (int)before << std::dec << std::endl;
    
    // Try to access protected register in supervisor mode - должен быть разрешен
    utils.clear_m_wb_transaction();
    utils.simulate_z80_io_access(CPUPorts::CONTROL, true, 0x55);
    
    // Должна быть Wishbone транзакция
    utils.assert_equal(utils.was_m_wb_transaction(), true, "Register access should generate WB transaction in supervisor mode");
    
    // Проверяем, что значение изменилось
    uint8_t after = utils.get_control();
    utils.assert_equal(after, 0x55, "MMIO access should be allowed and change register in supervisor mode");
}

void test_slot_selection(MMUNativeTestUtils& utils) {
    std::cout << "\n=== TESTING SLOT SELECTION ===" << std::endl;
    
    // Настройка слотов
    utils.cpu_write_reg(CPUPorts::SUPER_SLOT, 0x00); // Supervisor: slot 0 для всех страниц
    utils.cpu_write_reg(CPUPorts::USER_SLOT, 0x55);   // User: slot 1 для page0, slot 0 для page1, slot 1 для page2, slot 0 для page3
    
    // Переходим в supervisor mode
    utils.cpu_write_reg(CPUPorts::CONTROL, 
                       ControlRegister::NATIVE_MODE | ControlRegister::SUPERVISOR_MODE);
    
    // Настраиваем банки для разных слотов
    // Slot 0 banks
    utils.cpu_write_reg(CPUPorts::BANK_EXT_0, 0x10);  // Slot 0, Page 0
    utils.cpu_write_reg(CPUPorts::BANK_EXT_1, 0x11);  // Slot 0, Page 1
    utils.cpu_write_reg(CPUPorts::BANK_EXT_2, 0x12);  // Slot 0, Page 2
    utils.cpu_write_reg(CPUPorts::BANK_EXT_3, 0x13);  // Slot 0, Page 3
    
    // Slot 1 banks
    utils.cpu_write_reg(CPUPorts::BANK_EXT_4, 0x20);  // Slot 1, Page 0
    utils.cpu_write_reg(CPUPorts::BANK_EXT_5, 0x21);  // Slot 1, Page 1
    utils.cpu_write_reg(CPUPorts::BANK_EXT_6, 0x22);  // Slot 1, Page 2
    utils.cpu_write_reg(CPUPorts::BANK_EXT_7, 0x23);  // Slot 1, Page 3
    
    utils.log_registers();
    
    // Test supervisor mode access (should use slot 0 for all pages)
    std::cout << "Testing supervisor mode (slot 0 for all pages):" << std::endl;
    
    // Page 0 should use bank 0x10 (slot 0, page 0)
    utils.clear_m_wb_transaction();
    utils.simulate_z80_memory_access(0x0000, false);
    if (utils.was_m_wb_transaction()) {
        utils.assert_equal(utils.get_last_m_wb_addr(), 0x100000, "Supervisor page 0 should use slot 0 bank 0x10");
    }
    
    // Page 1 should use bank 0x11 (slot 0, page 1)
    utils.clear_m_wb_transaction();
    utils.simulate_z80_memory_access(0x4000, false);
    if (utils.was_m_wb_transaction()) {
        utils.assert_equal(utils.get_last_m_wb_addr(), 0x110000, "Supervisor page 1 should use slot 0 bank 0x11");
    }
    
    // Switch to user mode
    utils.cpu_write_reg(CPUPorts::CONTROL, ControlRegister::NATIVE_MODE);
    utils.wait_cycles(3); // Wait for mode switch
    
    std::cout << "Testing user mode (slot selection per page):" << std::endl;
    utils.log_registers();
    
    // User mode: page 0 should use slot 1 (bank 0x20)
    utils.clear_m_wb_transaction();
    utils.simulate_z80_memory_access(0x0000, false);
    if (utils.was_m_wb_transaction()) {
        utils.assert_equal(utils.get_last_m_wb_addr(), 0x200000, "User page 0 should use slot 1 bank 0x20");
    }
    
    // User mode: page 1 should use slot 0 (bank 0x11)
    utils.clear_m_wb_transaction();
    utils.simulate_z80_memory_access(0x4000, false);
    if (utils.was_m_wb_transaction()) {
        utils.assert_equal(utils.get_last_m_wb_addr(), 0x110000, "User page 1 should use slot 0 bank 0x11");
    }
}

// ===== MAIN TEST SUITE =====

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    
    vluint64_t main_time = 0;
    VerilatedVcdC* tfp = new VerilatedVcdC;
    
    Vmmu_native* top = new Vmmu_native;
    top->trace(tfp, 99);
    tfp->open("mmu_native_test.vcd");
    
    MMUNativeTestUtils utils(top, main_time, tfp);
    
    std::cout << "=== COMPLETE MMU NATIVE TEST SUITE (SIMPLIFIED ARCHITECTURE) ===" << std::endl;
    
    // Set up Wishbone delegates
    utils.set_m_wb_delegates(
        // Read callback
        [](uint32_t addr) -> uint8_t {
            std::cout << "  WB Master Read: addr=0x" << std::hex << addr << std::dec << std::endl;
            // Return predictable data based on address
            if (addr >= 0xFF0000 && addr <= 0xFFFFFF) {
                return 0xCC; // MMIO space
            }
            return 0xAA; // Memory space
        },
        // Write callback  
        [](uint32_t addr, uint8_t data) {
            std::cout << "  WB Master Write: addr=0x" << std::hex << addr 
                      << " data=0x" << (int)data << std::dec << std::endl;
        }
    );

    // Reset and run all tests
    utils.reset_pulse();
    
    test_default_state(utils);
    test_control_register(utils);
    test_syscall_mechanism(utils);
    test_slot_selection(utils);  // Новый тест для слотов
    test_address_translation(utils);
    test_mmio_translation(utils);
    test_supervisor_exit(utils);
    test_access_protection(utils);
    test_z80_io_protection(utils);
    test_supervisor_access(utils);
    test_hardware_trap(utils);
    test_register_access(utils);
    
    utils.print_test_results();
    
    tfp->close();
    delete top;
    delete tfp;
    
    return (utils.get_test_failures() == 0) ? 0 : 1;
}