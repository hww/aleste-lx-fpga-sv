// memory_arbiter_test.cpp
#include <verilated.h>
#include "Vmemory_arbiter.h"
#include <verilated_vcd_c.h>
#include <iostream>
#include <string>

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    
    Vmemory_arbiter* dut = new Vmemory_arbiter;
    VerilatedVcdC* vcd = new VerilatedVcdC;
    
    dut->trace(vcd, 99);
    vcd->open("../tb_memory_arbiter.vcd");
    
    int cycle = 0;
    int tests_passed = 0;
    int tests_total = 0;
    
    // Initialize
    dut->clk = 0;
    dut->rst = 1;
    dut->video_req_i = 0;
    dut->wb_cyc_i = 0;
    dut->wb_stb_i = 0;
    dut->sdram_ack_i = 0;
    dut->sdram_grant_i = 1;
    dut->eval();
    vcd->dump(cycle++);
    
    // Release reset
    dut->rst = 0;
    dut->eval();
    vcd->dump(cycle++);
    
    std::cout << "=== Memory Arbiter Test ===\n";
    
    auto reset_dut = [&]() {
        dut->rst = 1;
        dut->clk = 0;
        dut->eval();
        vcd->dump(cycle++);
        dut->clk = 1;
        dut->eval();
        vcd->dump(cycle++);
        dut->rst = 0;
        dut->clk = 0;
        dut->eval();
        vcd->dump(cycle++);
    };

    auto run_cycle = [&](const char* desc, int cycles = 10) {
        std::cout << desc << "\n";
        for (int i = 0; i < cycles; i++) {
            dut->clk = 0;
            dut->eval();
            vcd->dump(cycle++);
            
            std::cout << "Cycle " << i << ": state=" << (int)dut->debug_state_o 
                      << " video_req=" << (int)dut->video_req_i
                      << " wb_cyc=" << (int)dut->wb_cyc_i
                      << " sdram_ack=" << (int)dut->sdram_ack_i
                      << " video_ack=" << (int)dut->video_ack_o
                      << " wb_ack=" << (int)dut->wb_ack_o
                      << " sdram_req=" << (int)dut->sdram_req_o << std::endl;
            
            // Simulate SDRAM ack on cycle 3
            if (i == 3) {
                dut->sdram_ack_i = 1;
            } else if (i == 4) {
                dut->sdram_ack_i = 0;
            }
            
            dut->clk = 1;
            dut->eval();
            vcd->dump(cycle++);
        }
    };

    auto check_test = [&](const std::string& test_name, bool condition) {
        tests_total++;
        if (condition) {
            tests_passed++;
            std::cout << "✅ " << test_name << " - PASSED\n";
        } else {
            std::cout << "❌ " << test_name << " - FAILED\n";
        }
    };
    
    // Test 1: Only Video Request
    reset_dut();
    std::cout << "\n--- Test 1: Video Only ---\n";
    dut->video_req_i = 1;
    dut->video_addr_i = 0x1000;
    dut->video_burst_i = 0;
    
    dut->wb_cyc_i = 0;
    dut->wb_stb_i = 0;
    dut->wb_we_i = 0;
    dut->wb_sel_i = 3;
    dut->sdram_data_i = 0xABCD;
    
    bool video_ack_detected = false;
    bool wb_ack_detected = false;
    
    // Modified run for Test 1 with ACK detection
    std::cout << "Video active\n";
    for (int i = 0; i < 10; i++) {
        dut->clk = 0;
        dut->eval();
        vcd->dump(cycle++);
        
        std::cout << "Cycle " << i << ": state=" << (int)dut->debug_state_o 
                  << " video_req=" << (int)dut->video_req_i
                  << " wb_cyc=" << (int)dut->wb_cyc_i
                  << " sdram_ack=" << (int)dut->sdram_ack_i
                  << " video_ack=" << (int)dut->video_ack_o
                  << " wb_ack=" << (int)dut->wb_ack_o
                  << " sdram_req=" << (int)dut->sdram_req_o << std::endl;
        
        // Capture ACK signals
        if (dut->video_ack_o) video_ack_detected = true;
        if (dut->wb_ack_o) wb_ack_detected = true;
        
        // Simulate SDRAM ack on cycle 3
        if (i == 3) {
            dut->sdram_ack_i = 1;
        } else if (i == 4) {
            dut->sdram_ack_i = 0;
        }
        
        dut->clk = 1;
        dut->eval();
        vcd->dump(cycle++);
    }
    
    // Check Test 1
    bool test1_video_stays_active = (dut->debug_state_o == 1); // STATE_VIDEO_READ
    bool test1_video_ack_received = video_ack_detected;
    bool test1_wb_never_activated = !wb_ack_detected;
    
    check_test("Video stays in VIDEO_READ state", test1_video_stays_active);
    check_test("Video receives ACK", test1_video_ack_received);
    check_test("WB never activated", test1_wb_never_activated);
    
    // Test 2: Only WB Request  
    reset_dut();
    std::cout << "\n--- Test 2: WB Only ---\n";
    dut->video_req_i = 0;
    
    dut->wb_cyc_i = 1;
    dut->wb_stb_i = 1;
    dut->wb_we_i = 0;
    dut->wb_adr_i = 0x2000;
    dut->wb_dat_i = 0x1234;
    
    video_ack_detected = false;
    wb_ack_detected = false;
    
    // Modified run for Test 2 with ACK detection
    std::cout << "WB active\n";
    for (int i = 0; i < 10; i++) {
        dut->clk = 0;
        dut->eval();
        vcd->dump(cycle++);
        
        std::cout << "Cycle " << i << ": state=" << (int)dut->debug_state_o 
                  << " video_req=" << (int)dut->video_req_i
                  << " wb_cyc=" << (int)dut->wb_cyc_i
                  << " sdram_ack=" << (int)dut->sdram_ack_i
                  << " video_ack=" << (int)dut->video_ack_o
                  << " wb_ack=" << (int)dut->wb_ack_o
                  << " sdram_req=" << (int)dut->sdram_req_o << std::endl;
        
        // Capture ACK signals
        if (dut->video_ack_o) video_ack_detected = true;
        if (dut->wb_ack_o) wb_ack_detected = true;
        
        // Simulate SDRAM ack on cycle 3
        if (i == 3) {
            dut->sdram_ack_i = 1;
        } else if (i == 4) {
            dut->sdram_ack_i = 0;
        }
        
        dut->clk = 1;
        dut->eval();
        vcd->dump(cycle++);
    }
    
    // Check Test 2
    bool test2_wb_stays_active = (dut->debug_state_o == 2); // STATE_WB_ACCESS
    bool test2_wb_ack_received = wb_ack_detected;
    bool test2_video_never_activated = !video_ack_detected;
    
    check_test("WB stays in WB_ACCESS state", test2_wb_stays_active);
    check_test("WB receives ACK", test2_wb_ack_received);
    check_test("Video never activated", test2_video_never_activated);
    
    // Test 3: Video + WB Conflict
    reset_dut();
    std::cout << "\n--- Test 3: Video vs WB Conflict ---\n";
    dut->video_req_i = 1;
    dut->video_addr_i = 0x3000;
    
    dut->wb_cyc_i = 1;
    dut->wb_stb_i = 1;
    dut->wb_adr_i = 0x4000;
    
    video_ack_detected = false;
    wb_ack_detected = false;
    
    // Modified run for Test 3 with ACK detection
    std::cout << "Video + WB conflict\n";
    for (int i = 0; i < 10; i++) {
        dut->clk = 0;
        dut->eval();
        vcd->dump(cycle++);
        
        std::cout << "Cycle " << i << ": state=" << (int)dut->debug_state_o 
                  << " video_req=" << (int)dut->video_req_i
                  << " wb_cyc=" << (int)dut->wb_cyc_i
                  << " sdram_ack=" << (int)dut->sdram_ack_i
                  << " video_ack=" << (int)dut->video_ack_o
                  << " wb_ack=" << (int)dut->wb_ack_o
                  << " sdram_req=" << (int)dut->sdram_req_o << std::endl;
        
        // Capture ACK signals
        if (dut->video_ack_o) video_ack_detected = true;
        if (dut->wb_ack_o) wb_ack_detected = true;
        
        // Simulate SDRAM ack on cycle 3
        if (i == 3) {
            dut->sdram_ack_i = 1;
        } else if (i == 4) {
            dut->sdram_ack_i = 0;
        }
        
        dut->clk = 1;
        dut->eval();
        vcd->dump(cycle++);
    }
    
    // Check Test 3
    bool test3_video_wins_priority = (dut->debug_state_o == 1); // STATE_VIDEO_READ
    bool test3_video_ack_received = video_ack_detected;
    bool test3_wb_no_access_while_video_active = !wb_ack_detected;
    
    check_test("Video wins priority arbitration", test3_video_wins_priority);
    check_test("Video receives ACK during conflict", test3_video_ack_received);
    check_test("WB gets no access while video active", test3_wb_no_access_while_video_active);
    
    // Final Results
    std::cout << "\n=== TEST RESULTS ===\n";
    std::cout << "Tests passed: " << tests_passed << "/" << tests_total << "\n";
    
    if (tests_passed == tests_total) {
        std::cout << "🎉 ALL TESTS PASSED! Memory Arbiter is working correctly.\n";
    } else {
        std::cout << "⚠️  Some tests failed. Check the implementation.\n";
    }
    
    std::cout << "\nVCD file saved as tb_memory_arbiter.vcd\n";
    std::cout << "Open with: gtkwave tb_memory_arbiter.vcd\n";
    
    vcd->close();
    delete vcd;
    delete dut;
    
    return (tests_passed == tests_total) ? 0 : 1;
}