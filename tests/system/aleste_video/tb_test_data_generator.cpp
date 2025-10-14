// tb_test_data_generator_final.cpp
#include <verilated.h>
#include "Vtest_data_generator.h"
#include <verilated_vcd_c.h>
#include <iostream>
#include <string>

class FinalTest {
private:
    Vtest_data_generator* dut;
    VerilatedVcdC* vcd;
    int cycle;
    int tests_passed;
    int tests_total;
    
public:
    FinalTest() : cycle(0), tests_passed(0), tests_total(0) {
        Verilated::traceEverOn(true);
        dut = new Vtest_data_generator;
        vcd = new VerilatedVcdC;
        dut->trace(vcd, 99);
        vcd->open("tb_test_data_generator_final.vcd");
    }
    
    ~FinalTest() {
        vcd->close();
        delete vcd;
        delete dut;
    }
    
    void reset() {
        dut->clk = 0;
        dut->rst = 1;
        dut->start_i = 0;
        dut->wb_ack_i = 0;
        dut->wb_dat_i = 0;
        eval();
        dut->rst = 0;
        eval();
    }
    
    void eval() {
        dut->eval();
        vcd->dump(cycle);
        cycle++;
    }
    
    void tick() {
        dut->clk = 0; eval();
        dut->clk = 1; eval();
    }
    
    void check_test(const std::string& test_name, bool condition) {
        tests_total++;
        if (condition) {
            tests_passed++;
            std::cout << "✅ " << test_name << " - PASSED\n";
        } else {
            std::cout << "❌ " << test_name << " - FAILED\n";
        }
    }
    
    void print_state(const std::string& phase) {
        std::cout << phase << " | " 
                  << "cyc=" << (int)dut->wb_cyc_o
                  << " stb=" << (int)dut->wb_stb_o
                  << " we=" << (int)dut->wb_we_o
                  << " ack=" << (int)dut->wb_ack_i
                  << " adr=0x" << std::hex << dut->wb_adr_o
                  << " dat_o=0x" << dut->wb_dat_o
                  << " done=" << (int)dut->done_o
                  << std::dec << std::endl;
    }
    
    void test_perfect_workflow() {
        std::cout << "=== Perfect Workflow Test ===\n";
        reset();
        
        // Start
        dut->start_i = 1;
        tick();
        dut->start_i = 0;
        print_state("Started");
        
        // Write Phase - 6 writes (addresses: 0, 2, 4, 6, 8, A)
        std::cout << "\n--- Write Phase ---\n";
        for (int i = 0; i < 6; i++) {
            uint32_t expected_addr = i * 2;
            uint16_t expected_data = i + 1;
            
            std::cout << "Write " << i << " | ";
            std::cout << "exp_addr=0x" << std::hex << expected_addr;
            std::cout << " act_addr=0x" << dut->wb_adr_o;
            std::cout << " exp_data=" << std::dec << expected_data;
            std::cout << " act_data=" << dut->wb_dat_o;
            std::cout << " we=" << (int)dut->wb_we_o;
            std::cout << std::endl;
            
            check_test("Write address " + std::to_string(i), dut->wb_adr_o == expected_addr);
            check_test("Write data " + std::to_string(i), dut->wb_dat_o == expected_data);
            check_test("Write mode", dut->wb_we_o == 1);
            
            dut->wb_ack_i = 1;
            tick();
        }
        dut->wb_ack_i = 0;
        
        // Should be in verify phase now
        std::cout << "\n--- Verify Phase ---\n";
        check_test("Transitioned to verify", dut->wb_we_o == 0);
        
        // Verify Phase - 6 reads (same addresses: 0, 2, 4, 6, 8, A)
        for (int i = 0; i < 6; i++) {
            uint32_t expected_addr = i * 2;
            uint16_t expected_data = i + 1;
            
            std::cout << "Verify " << i << " | ";
            std::cout << "exp_addr=0x" << std::hex << expected_addr;
            std::cout << " act_addr=0x" << dut->wb_adr_o;
            std::cout << " exp_data=" << std::dec << expected_data;
            std::cout << " we=" << (int)dut->wb_we_o;
            std::cout << std::endl;
            
            check_test("Verify address " + std::to_string(i), dut->wb_adr_o == expected_addr);
            check_test("Verify mode", dut->wb_we_o == 0);
            
            // Provide read data
            dut->wb_dat_i = expected_data;
            dut->wb_ack_i = 1;
            tick();
        }
        dut->wb_ack_i = 0;
        
        // Should be in done phase
        std::cout << "\n--- Done Phase ---\n";
        check_test("Transitioned to done", dut->done_o == 1);
        check_test("CYC deactivated", dut->wb_cyc_o == 0);
        check_test("STB deactivated", dut->wb_stb_o == 0);
        check_test("WE deactivated", dut->wb_we_o == 0);
        
        print_state("Completed");
    }
    
    void run_all_tests() {
        std::cout << "=== FINAL Test Data Generator Test ===\n\n";
        
        test_perfect_workflow();
        
        std::cout << "\n=== FINAL RESULTS ===\n";
        std::cout << "Tests passed: " << tests_passed << "/" << tests_total << "\n";
        
        if (tests_passed == tests_total) {
            std::cout << "🎉 PERFECT! ALL TESTS PASSED! 🎉\n";
            std::cout << "Test Data Generator is working perfectly!\n";
        } else {
            std::cout << "✅ " << tests_passed << "/" << tests_total << " tests passed - Good progress!\n";
        }
    }
};

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    
    FinalTest test;
    test.run_all_tests();
    
    return 0;
}