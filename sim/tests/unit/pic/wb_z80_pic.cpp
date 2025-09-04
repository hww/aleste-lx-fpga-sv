#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vwb_z80_pic_tb.h"
#include "wb_pic_test_utils.h"
#include <iostream>
#include <cassert>

int main(int argc, char** argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    
    vluint64_t main_time = 0;
    VerilatedVcdC* tfp = new VerilatedVcdC;
    
    // Create instance
    Vwb_z80_pic_tb* top = new Vwb_z80_pic_tb;
    
    // Initialize signals
    top->wb_clk_i = 0;
    top->wb_rst_i = 1;
    top->wb_adr_i = 0;
    top->wb_dat_i = 0;
    top->wb_we_i = 0;
    top->wb_stb_i = 0;
    top->wb_cyc_i = 0;
    top->irq_i = 0;
    top->int_ack_i = 0;
    
    // Create test utils
    PicTestUtils utils(top, main_time, tfp);
    
    // Start tracing
    top->trace(tfp, 99);
    tfp->open("wb_z80_pic.vcd");
    
    std::cout << "=== Starting Z80 PIC Test ===" << std::endl;
    
    // Helper function for assertions with VCD dump
    auto assert_with_vcd = [&](bool condition, const std::string& message) {
        if (!condition) {
            std::cout << "ASSERT FAILED: " << message << std::endl;
            std::cout << "Dumping VCD for debugging..." << std::endl;
            tfp->dump(main_time);
            tfp->close();
            delete top;
            delete tfp;
            exit(1);
        }
    };

    try {
        // Test 1: Reset and basic register access
        std::cout << "Test 1: Reset and register access" << std::endl;
        utils.set_reset(1);
        utils.wait_cycles(2);
        utils.set_reset(0);
        utils.wait_cycles(2);
        
        // Check default values after reset
        assert_with_vcd(utils.read_reg(0x00) == 0x00, "Mask register should be 0");
        assert_with_vcd(utils.read_reg(0x01) == 0xFF, "Vector register should be 0xFF");
        assert_with_vcd(utils.read_reg(0x02) == 0x00, "Status register should be 0");
        assert_with_vcd(utils.read_reg(0x03) == 0x00, "Pending register should be 0");
        
        std::cout << "Reset test passed!" << std::endl;
        
        // Test 2: Mask register write/read
        std::cout << "Test 2: Mask register operations" << std::endl;
        utils.write_reg(0x00, 0x55);
        assert_with_vcd(utils.read_reg(0x00) == 0x55, "Mask write/read failed");
        
        utils.write_reg(0x00, 0xAA);
        assert_with_vcd(utils.read_reg(0x00) == 0xAA, "Mask write/read failed");
        
        std::cout << "Mask register test passed!" << std::endl;
        
        // Test 3: IRQ detection
        std::cout << "Test 3: IRQ detection" << std::endl;
        utils.set_irq(0x01);
        utils.wait_cycles(2);
        assert_with_vcd(utils.read_reg(0x02) == 0x01, "Status should show IRQ0");
        
        utils.set_irq(0x03);
        utils.wait_cycles(2);
        assert_with_vcd(utils.read_reg(0x02) == 0x03, "Status should show both IRQs");
        
        std::cout << "IRQ detection test passed!" << std::endl;
        
        // Test 4: INT request generation
        std::cout << "Test 4: INT request generation" << std::endl;
        utils.write_reg(0x00, 0xFF);
        utils.set_irq(0x01);
        utils.wait_cycles(3);
        
        assert_with_vcd(utils.int_requested(), "INT should be asserted");
        
        utils.int_ack();
        utils.wait_cycles(2);
        assert_with_vcd(!utils.int_requested(), "INT should be deasserted");
        
        std::cout << "INT request test passed!" << std::endl;
        
        // Final cleanup
        std::cout << "=== All tests passed! ===" << std::endl;
        
    } catch (const std::exception& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
        tfp->dump(main_time);
        tfp->close();
        delete top;
        delete tfp;
        return 1;
    }
    
    tfp->close();
    delete top;
    delete tfp;
    
    return 0;
}