#include <iostream>
#include <verilated.h>
#include "Vsdram_wishbone.h"

class SDRAMFinalTest {
private:
    Vsdram_wishbone* dut;
    int cycle_count;
    int tests_passed;
    int tests_failed;

public:
    SDRAMFinalTest() : cycle_count(0), tests_passed(0), tests_failed(0) {
        dut = new Vsdram_wishbone;
    }

    ~SDRAMFinalTest() {
        delete dut;
    }

    void reset() {
        dut->wb_rst_i = 1;
        step();
        dut->wb_rst_i = 0;
    }

    void step() {
        dut->wb_clk_i = 1;
        dut->eval();
        dut->wb_clk_i = 0;
        dut->eval();
        cycle_count++;
    }

    void wait_cycles(int n) {
        for (int i = 0; i < n; i++) step();
    }

    bool wait_for_ready(int timeout = 30000) {
        int start_cycles = cycle_count;
        while (!dut->debug_ready && (cycle_count - start_cycles) < timeout) {
            step();
        }
        return dut->debug_ready;
    }

    void test_result(bool passed, const char* test_name) {
        if (passed) {
            std::cout << "  ✅ " << test_name << " - PASS" << std::endl;
            tests_passed++;
        } else {
            std::cout << "  ❌ " << test_name << " - FAIL" << std::endl;
            tests_failed++;
        }
    }

    // ==================== ТЕСТ 1: ИНИЦИАЛИЗАЦИЯ ====================
    bool test_initialization() {
        std::cout << "\n1. INITIALIZATION TEST" << std::endl;
        
        reset();
        bool passed = wait_for_ready();
        
        test_result(passed, "Initialization completes");
        test_result(dut->debug_init_complete, "Init complete signal");
        test_result(dut->debug_state == 2, "Final state is IDLE (2)");
        
        std::cout << "   Initialization took " << cycle_count << " cycles" << std::endl;
        
        return passed && dut->debug_init_complete && (dut->debug_state == 2);
    }

    // ==================== ТЕСТ 2: БАЗОВЫЕ ОПЕРАЦИИ ====================
    bool test_basic_operations() {
        std::cout << "\n2. BASIC OPERATIONS TEST" << std::endl;
        
        bool write_ok = false;
        bool read_ok = false;
        
        // Write test
        dut->wb_adr_i = 0x1000;
        dut->wb_dat_i = 0x1234;
        dut->wb_we_i = 1;
        dut->wb_cyc_i = 1;
        dut->wb_stb_i = 1;
        
        int timeout = 0;
        while (!dut->wb_ack_o && timeout < 20) {
            step();
            timeout++;
        }
        write_ok = dut->wb_ack_o;
        
        dut->wb_cyc_i = 0;
        dut->wb_stb_i = 0;
        wait_cycles(5);
        
        // Read test  
        dut->wb_adr_i = 0x1000;
        dut->wb_we_i = 0;
        dut->wb_cyc_i = 1;
        dut->wb_stb_i = 1;
        
        timeout = 0;
        while (!dut->wb_ack_o && timeout < 20) {
            step();
            timeout++;
        }
        read_ok = dut->wb_ack_o;
        
        dut->wb_cyc_i = 0;
        dut->wb_stb_i = 0;
        wait_cycles(5);
        
        test_result(write_ok, "Write operation ACK");
        test_result(read_ok, "Read operation ACK");
        test_result(dut->debug_ready, "Controller ready after operations");
        
        return write_ok && read_ok && dut->debug_ready;
    }

    // ==================== ТЕСТ 3: BANK ADDRESSING ====================
    bool test_bank_addressing() {
        std::cout << "\n3. BANK ADDRESSING TEST" << std::endl;
        
        uint32_t bank_addresses[] = {0x000000, 0x400000, 0x800000, 0xC00000};
        bool all_banks_ok = true;
        
        for (int bank = 0; bank < 4; bank++) {
            dut->wb_adr_i = bank_addresses[bank];
            dut->wb_dat_i = 0xA000 + bank;
            dut->wb_we_i = 1;
            dut->wb_cyc_i = 1;
            dut->wb_stb_i = 1;
            
            int timeout = 0;
            while (!dut->wb_ack_o && timeout < 20) {
                step();
                timeout++;
            }
            
            bool bank_ok = dut->wb_ack_o;
            test_result(bank_ok, 
                std::string("Bank " + std::to_string(bank) + " addressing").c_str());
            
            if (!bank_ok) all_banks_ok = false;
            
            dut->wb_cyc_i = 0;
            dut->wb_stb_i = 0;
            wait_cycles(5);
        }
        
        return all_banks_ok;
    }

    // ==================== ТЕСТ 4: SEQUENTIAL OPERATIONS ====================
    bool test_sequential_operations() {
        std::cout << "\n4. SEQUENTIAL OPERATIONS TEST" << std::endl;
        
        bool all_sequential_ok = true;
        
        for (int i = 0; i < 4; i++) {
            uint32_t addr = 0x2000 + (i * 8);
            
            dut->wb_adr_i = addr;
            dut->wb_dat_i = 0x1000 + i;
            dut->wb_we_i = 1;
            dut->wb_cyc_i = 1;
            dut->wb_stb_i = 1;
            
            int timeout = 0;
            while (!dut->wb_ack_o && timeout < 20) {
                step();
                timeout++;
            }
            
            bool op_ok = dut->wb_ack_o;
            if (!op_ok) all_sequential_ok = false;
            
            dut->wb_cyc_i = 0;
            dut->wb_stb_i = 0;
            wait_cycles(2); // Минимальная пауза
        }
        
        test_result(all_sequential_ok, "4 sequential write operations");
        test_result(dut->debug_ready, "Ready after sequential ops");
        
        return all_sequential_ok && dut->debug_ready;
    }

    // ==================== ТЕСТ 5: BOUNDARY CASES ====================
    bool test_boundary_cases() {
        std::cout << "\n5. BOUNDARY CASES TEST" << std::endl;
        
        uint32_t boundary_addrs[] = {0x000000, 0x7FFFFF, 0xFFFFFF, 0x123456};
        bool all_boundary_ok = true;
        
        for (auto addr : boundary_addrs) {
            dut->wb_adr_i = addr;
            dut->wb_dat_i = 0xBEEF;
            dut->wb_we_i = 1;
            dut->wb_cyc_i = 1;
            dut->wb_stb_i = 1;
            
            int timeout = 0;
            while (!dut->wb_ack_o && timeout < 20) {
                step();
                timeout++;
            }
            
            bool boundary_ok = dut->wb_ack_o;
            if (!boundary_ok) all_boundary_ok = false;
            
            dut->wb_cyc_i = 0;
            dut->wb_stb_i = 0;
            wait_cycles(5);
        }
        
        test_result(all_boundary_ok, "All boundary addresses");
        return all_boundary_ok;
    }

    // ==================== ТЕСТ 6: STRESS TEST ====================
    bool test_stress_recovery() {
        std::cout << "\n6. STRESS AND RECOVERY TEST" << std::endl;
        
        // Быстрая последовательность операций
        for (int i = 0; i < 8; i++) {
            dut->wb_adr_i = 0x3000 + i;
            dut->wb_dat_i = 0xC000 + i;
            dut->wb_we_i = 1;
            dut->wb_cyc_i = 1;
            dut->wb_stb_i = 1;
            
            while (!dut->wb_ack_o) step();
            
            dut->wb_cyc_i = 0;
            dut->wb_stb_i = 0;
            wait_cycles(1); // Минимальная пауза
        }
        
        // Проверяем восстановление
        wait_cycles(10);
        
        bool recovery_ok = dut->debug_ready && (dut->debug_state == 2);
        test_result(recovery_ok, "Recovery after stress test");
        
        return recovery_ok;
    }

    void run_final_comprehensive_test() {
        std::cout << "🏁 === FINAL COMPREHENSIVE SDRAM CONTROLLER TEST ===" << std::endl;
        std::cout << "Running ALL tests in single execution" << std::endl;
        
        bool all_tests_passed = true;
        
        // Запускаем ВСЕ тесты последовательно
        all_tests_passed &= test_initialization();
        all_tests_passed &= test_basic_operations();
        all_tests_passed &= test_bank_addressing();
        all_tests_passed &= test_sequential_operations();
        all_tests_passed &= test_boundary_cases();
        all_tests_passed &= test_stress_recovery();
        
        // Финальный отчет
        std::cout << "\n📊 === FINAL TEST REPORT ===" << std::endl;
        std::cout << "Tests passed: " << tests_passed << "/" << (tests_passed + tests_failed) << std::endl;
        std::cout << "Total cycles: " << cycle_count << std::endl;
        std::cout << "Final state: " << (int)dut->debug_state << std::endl;
        std::cout << "Controller ready: " << (dut->debug_ready ? "✅" : "❌") << std::endl;
        
        if (all_tests_passed && tests_failed == 0) {
            std::cout << "🎉🎉🎉 ALL TESTS PASSED! CONTROLLER READY FOR PRODUCTION! 🎉🎉🎉" << std::endl;
        } else {
            std::cout << "⚠️  Some tests failed. Check implementation." << std::endl;
        }
    }
};

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    
    SDRAMFinalTest test;
    test.run_final_comprehensive_test();
    
    return 0;
}