// tb_wb_arbiter_simple_fixed.cpp
#include <verilated.h>
#include "Vwb_arbiter_internal.h"
#include <verilated_vcd_c.h>
#include <iostream>
#include <string>
#include <functional>

class WBArbiterTest {
private:
    Vwb_arbiter_internal* dut;
    VerilatedVcdC* vcd;
    int cycle;
    int tests_passed;
    int tests_total;
    
public:
    WBArbiterTest() : cycle(0), tests_passed(0), tests_total(0) {
        Verilated::traceEverOn(true);
        dut = new Vwb_arbiter_internal;
        vcd = new VerilatedVcdC;
        dut->trace(vcd, 99);
        vcd->open("tb_wb_arbiter_simple.vcd");
    }
    
    ~WBArbiterTest() {
        vcd->close();
        delete vcd;
        delete dut;
    }
    
    void reset() {
        dut->clk = 0;
        dut->rst = 1;
        
        // Reset all inputs
        dut->wb_ext_cyc_i = 0;
        dut->wb_ext_stb_i = 0;
        dut->wb_ext_we_i = 0;
        dut->wb_ext_adr_i = 0;
        dut->wb_ext_dat_i = 0;
        dut->wb_ext_sel_i = 0;
        dut->wb_ext_tag_i = 0;
        
        // Reset device grants/acks
        dut->palette_grant_i = 0;
        dut->palette_ack_i = 0;
        dut->palette_dat_i = 0;
        
        dut->crtc_grant_i = 0;
        dut->crtc_ack_i = 0;
        dut->crtc_dat_i = 0;
        
        dut->mem_grant_i = 0;
        dut->mem_ack_i = 0;
        dut->mem_dat_i = 0;
        
        eval();
        
        // Release reset
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
    
    void print_signals(const std::string& phase) {
        std::cout << phase << " | " 
                  << "ext_grant=" << (int)dut->wb_ext_grant_o
                  << " ext_ack=" << (int)dut->wb_ext_ack_o
                  << " pal_grant=" << (int)dut->palette_grant_i
                  << " crtc_grant=" << (int)dut->crtc_grant_i
                  << " mem_grant=" << (int)dut->mem_grant_i
                  << " ext_data=0x" << std::hex << dut->wb_ext_dat_o << std::dec
                  << std::endl;
    }
    
    // Test 1: Palette Access
    void test_palette_access() {
        std::cout << "\n=== Test 1: Palette Access ===\n";
        reset();
        
        // Setup external request
        dut->wb_ext_cyc_i = 1;
        dut->wb_ext_stb_i = 1;
        dut->wb_ext_we_i = 0;
        dut->wb_ext_adr_i = 0x1234;
        dut->wb_ext_dat_i = 0xABCD;
        dut->wb_ext_sel_i = 3;
        dut->wb_ext_tag_i = 1;
        
        // Palette responds
        dut->palette_grant_i = 1;
        dut->palette_dat_i = 0x5678;
        
        eval(); // Critical: eval after setting inputs
        
        std::cout << "After setup - Request sent\n";
        print_signals("After setup");
        
        // Check signal propagation to palette - NOW SHOULD WORK
        check_test("Palette CYC received", dut->palette_cyc_o == 1);
        check_test("Palette STB received", dut->palette_stb_o == 1);
        check_test("Palette ADR correct", dut->palette_adr_o == 0x1234);
        check_test("Palette WE correct", dut->palette_we_o == 0);
        check_test("Palette SEL correct", dut->palette_sel_o == 3);
        check_test("Palette TAG correct", dut->palette_tag_o == 1);
        check_test("Grant signal active", dut->wb_ext_grant_o == 1);
        check_test("No ACK before device ACK", dut->wb_ext_ack_o == 0);
        
        // Palette sends ACK
        dut->palette_ack_i = 1;
        eval();
        
        print_signals("After ACK");
        
        check_test("ACK received", dut->wb_ext_ack_o == 1);
        check_test("Correct data returned", dut->wb_ext_dat_o == 0x5678);
        
        // Cleanup
        dut->palette_ack_i = 0;
        dut->wb_ext_cyc_i = 0;
        dut->wb_ext_stb_i = 0;
        eval();
    }
    
    // Test 2: CRTC Access
    void test_crtc_access() {
        std::cout << "\n=== Test 2: CRTC Access ===\n";
        reset();
        
        dut->wb_ext_cyc_i = 1;
        dut->wb_ext_stb_i = 1;
        dut->wb_ext_adr_i = 0x5678;
        dut->wb_ext_dat_i = 0x1234;
        
        // CRTC responds (palette not responding)
        dut->crtc_grant_i = 1;
        dut->crtc_dat_i = 0x9ABC;
        
        eval(); // Critical: eval after inputs
        
        print_signals("CRTC request");
        
        // Check signal propagation
        check_test("CRTC CYC received", dut->crtc_cyc_o == 1);
        check_test("CRTC STB received", dut->crtc_stb_o == 1);
        check_test("CRTC ADR correct", dut->crtc_adr_o == 0x5678);
        check_test("Grant signal active", dut->wb_ext_grant_o == 1);
        check_test("No ACK before device ACK", dut->wb_ext_ack_o == 0);
        
        // CRTC sends ACK
        dut->crtc_ack_i = 1;
        eval();
        
        print_signals("CRTC ACK");
        
        check_test("ACK received", dut->wb_ext_ack_o == 1);
        check_test("Correct CRTC data returned", dut->wb_ext_dat_o == 0x9ABC);
        
        // Cleanup
        dut->crtc_ack_i = 0;
        dut->wb_ext_cyc_i = 0;
        eval();
    }
    
    // Test 3: Memory Access
    void test_memory_access() {
        std::cout << "\n=== Test 3: Memory Access ===\n";
        reset();
        
        dut->wb_ext_cyc_i = 1;
        dut->wb_ext_stb_i = 1;
        dut->wb_ext_adr_i = 0x00ABCD;
        dut->wb_ext_dat_i = 0xDEAD;
        
        // Only memory responds
        dut->mem_grant_i = 1;
        dut->mem_dat_i = 0xBEEF;
        
        eval(); // Critical: eval after inputs
        
        print_signals("Memory request");
        
        // Check signal propagation
        check_test("Memory CYC received", dut->mem_cyc_o == 1);
        check_test("Memory STB received", dut->mem_stb_o == 1);
        check_test("Memory ADR correct", dut->mem_adr_o == 0x00ABCD);
        check_test("Grant signal active", dut->wb_ext_grant_o == 1);
        
        // Memory sends ACK
        dut->mem_ack_i = 1;
        eval();
        
        print_signals("Memory ACK");
        
        check_test("ACK received", dut->wb_ext_ack_o == 1);
        check_test("Correct memory data returned", dut->wb_ext_dat_o == 0xBEEF);
        
        // Cleanup
        dut->mem_ack_i = 0;
        dut->wb_ext_cyc_i = 0;
        eval();
    }
    
    // Test 4: Priority Arbitration
    void test_priority_arbitration() {
        std::cout << "\n=== Test 4: Priority Arbitration ===\n";
        reset();
        
        dut->wb_ext_cyc_i = 1;
        dut->wb_ext_stb_i = 1;
        dut->wb_ext_adr_i = 0x1111;
        
        // Multiple devices respond - palette should win
        dut->palette_grant_i = 1;
        dut->crtc_grant_i = 1;
        dut->mem_grant_i = 1;
        
        dut->palette_dat_i = 0x1111;
        dut->crtc_dat_i = 0x2222;
        dut->mem_dat_i = 0x3333;
        
        eval(); // Critical: eval after inputs
        
        print_signals("Multiple grants");
        
        // Palette should win due to priority
        check_test("Grant signal active", dut->wb_ext_grant_o == 1);
        check_test("Palette data selected", dut->wb_ext_dat_o == 0x1111);
        
        // Palette ACK
        dut->palette_ack_i = 1;
        eval();
        
        check_test("ACK from palette", dut->wb_ext_ack_o == 1);
        
        // Now test CRTC priority over memory
        dut->palette_grant_i = 0;  // Palette not responding
        dut->palette_ack_i = 0;
        dut->crtc_ack_i = 1;
        
        eval();
        print_signals("CRTC wins over memory");
        
        check_test("CRTC data selected", dut->wb_ext_dat_o == 0x2222);
        check_test("ACK from CRTC", dut->wb_ext_ack_o == 1);
        
        // Cleanup
        dut->crtc_ack_i = 0;
        dut->wb_ext_cyc_i = 0;
        eval();
    }
    
    // Test 5: No Device Responding
    void test_no_device_responding() {
        std::cout << "\n=== Test 5: No Device Responding ===\n";
        reset();
        
        dut->wb_ext_cyc_i = 1;
        dut->wb_ext_stb_i = 1;
        dut->wb_ext_adr_i = 0x9999;
        
        // No devices grant access
        dut->palette_grant_i = 0;
        dut->crtc_grant_i = 0;
        dut->mem_grant_i = 0;
        
        eval(); // Critical: eval after inputs
        
        print_signals("No grants");
        
        check_test("No grant without device response", dut->wb_ext_grant_o == 0);
        check_test("No ACK without device response", dut->wb_ext_ack_o == 0);
        check_test("Data is zero", dut->wb_ext_dat_o == 0);
        
        // Add some device response
        dut->mem_grant_i = 1;
        dut->mem_dat_i = 0x8888;
        eval();
        
        print_signals("Memory responds");
        
        check_test("Grant appears when device responds", dut->wb_ext_grant_o == 1);
        check_test("Memory data visible", dut->wb_ext_dat_o == 0x8888);
        
        // Cleanup
        dut->wb_ext_cyc_i = 0;
        dut->mem_grant_i = 0;
        eval();
    }
    
    // Test 6: Write Operation
    void test_write_operation() {
        std::cout << "\n=== Test 6: Write Operation ===\n";
        reset();
        
        dut->wb_ext_cyc_i = 1;
        dut->wb_ext_stb_i = 1;
        dut->wb_ext_we_i = 1;  // Write operation
        dut->wb_ext_adr_i = 0x7777;
        dut->wb_ext_dat_i = 0x5555;
        dut->wb_ext_sel_i = 2;
        dut->wb_ext_tag_i = 3;
        
        dut->palette_grant_i = 1;
        
        eval(); // Critical: eval after inputs
        
        print_signals("Write operation");
        
        // Check write signals propagated
        check_test("Palette WE set", dut->palette_we_o == 1);
        check_test("Palette DAT out correct", dut->palette_dat_o == 0x5555);
        check_test("Palette SEL correct", dut->palette_sel_o == 2);
        check_test("Palette TAG correct", dut->palette_tag_o == 3);
        check_test("Grant active for write", dut->wb_ext_grant_o == 1);
        
        // Complete write
        dut->palette_ack_i = 1;
        eval();
        
        check_test("Write ACK received", dut->wb_ext_ack_o == 1);
        
        // Cleanup
        dut->palette_ack_i = 0;
        dut->wb_ext_cyc_i = 0;
        dut->wb_ext_we_i = 0;
        eval();
    }
    
    // Test 7: Signal Propagation to All Devices
    void test_signal_propagation() {
        std::cout << "\n=== Test 7: Signal Propagation to All Devices ===\n";
        reset();
        
        // Set request signals
        dut->wb_ext_cyc_i = 1;
        dut->wb_ext_stb_i = 1;
        dut->wb_ext_we_i = 0;
        dut->wb_ext_adr_i = 0x1234;
        dut->wb_ext_dat_i = 0xABCD;
        dut->wb_ext_sel_i = 3;
        dut->wb_ext_tag_i = 1;
        
        eval();
        
        // Verify ALL devices receive the signals (parallel bus)
        check_test("All devices get CYC", 
                  dut->palette_cyc_o == 1 && dut->crtc_cyc_o == 1 && dut->mem_cyc_o == 1);
        check_test("All devices get STB", 
                  dut->palette_stb_o == 1 && dut->crtc_stb_o == 1 && dut->mem_stb_o == 1);
        check_test("All devices get ADR[15:0]", 
                  dut->palette_adr_o == 0x1234 && dut->crtc_adr_o == 0x1234);
        check_test("Memory gets full ADR[23:0]", dut->mem_adr_o == 0x1234);
        check_test("All devices get WE", 
                  dut->palette_we_o == 0 && dut->crtc_we_o == 0 && dut->mem_we_o == 0);
        check_test("All devices get DAT out", 
                  dut->palette_dat_o == 0xABCD && dut->crtc_dat_o == 0xABCD && dut->mem_dat_o == 0xABCD);
        check_test("All devices get SEL", 
                  dut->palette_sel_o == 3 && dut->crtc_sel_o == 3 && dut->mem_sel_o == 3);
        check_test("All devices get TAG", 
                  dut->palette_tag_o == 1 && dut->crtc_tag_o == 1 && dut->mem_tag_o == 1);
        
        // Cleanup
        dut->wb_ext_cyc_i = 0;
        dut->wb_ext_stb_i = 0;
        eval();
    }
    
    void run_all_tests() {
        std::cout << "=== Simple Wishbone Arbiter Test ===\n";
        std::cout << "Testing parallel bus architecture with priority arbitration\n\n";
        
        test_palette_access();
        test_crtc_access();
        test_memory_access();
        test_priority_arbitration();
        test_no_device_responding();
        test_write_operation();
        test_signal_propagation();
        
        // Final Results
        std::cout << "\n=== TEST RESULTS ===\n";
        std::cout << "Tests passed: " << tests_passed << "/" << tests_total << "\n";
        
        if (tests_passed == tests_total) {
            std::cout << "🎉 ALL TESTS PASSED! Simple WB Arbiter working perfectly!\n";
        } else {
            std::cout << "⚠️  Some tests failed. Review implementation.\n";
        }
        
        std::cout << "\nWaveform saved: tb_wb_arbiter_simple.vcd\n";
    }
};

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    
    WBArbiterTest test;
    test.run_all_tests();
    
    return 0;
}