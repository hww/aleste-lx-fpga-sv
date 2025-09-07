#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vwb_z80_pic_tb.h"
#include "wb_pic_utils.h"
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
    WbPicTestUtils utils(top, main_time, tfp);
    
    // Start tracing
    top->trace(tfp, 99);
    tfp->open("wb_z80_pic_tb.vcd");
    
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
        utils.reset_assert();
        utils.wait_cycles(2);
        utils.reset_deassert();
        utils.wait_cycles(2);
        
        // Check default values after reset
        assert_with_vcd(utils.read_reg(0x00) == 0x00, "Mask register low should be 0");
        assert_with_vcd(utils.read_reg(0x01) == 0x00, "Mask register high should be 0");
        assert_with_vcd(utils.read_reg(0x02) == 0xFF, "Vector register should be 0xFF");
        assert_with_vcd(utils.read_reg(0x03) == 0x00, "Status register low should be 0");
        assert_with_vcd(utils.read_reg(0x04) == 0x00, "Status register high should be 0");
        assert_with_vcd(utils.read_reg(0x05) == 0x00, "Pending register low should be 0");
        assert_with_vcd(utils.read_reg(0x06) == 0x00, "Pending register high should be 0");
        
        std::cout << "Reset test passed!" << std::endl;
        
        // Test 2: Mask register write/read
        std::cout << "Test 2: Mask register operations" << std::endl;
        utils.write_reg(0x00, 0x55);
        utils.write_reg(0x01, 0xAA);
        assert_with_vcd(utils.read_reg(0x00) == 0x55, "Mask low write/read failed");
        assert_with_vcd(utils.read_reg(0x01) == 0xAA, "Mask high write/read failed");
        
        utils.write_reg(0x00, 0x11);
        utils.write_reg(0x01, 0x22);
        assert_with_vcd(utils.read_reg(0x00) == 0x11, "Mask low write/read failed");
        assert_with_vcd(utils.read_reg(0x01) == 0x22, "Mask high write/read failed");
        
        std::cout << "Mask register test passed!" << std::endl;
        
        // Test 3: IRQ detection
        std::cout << "Test 3: IRQ detection" << std::endl;
        utils.set_irq(0x0001);
        utils.wait_cycles(2);
        assert_with_vcd(utils.read_reg(0x03) == 0x01, "Status low should show IRQ0");
        assert_with_vcd(utils.read_reg(0x04) == 0x00, "Status high should be 0");
        
        utils.set_irq(0x0301);
        utils.wait_cycles(2);
        assert_with_vcd(utils.read_reg(0x03) == 0x01, "Status low should show IRQ0");
        assert_with_vcd(utils.read_reg(0x04) == 0x03, "Status high should show IRQ8-9");
        
        std::cout << "IRQ detection test passed!" << std::endl;
        
        // Test 4: INT request generation
        std::cout << "Test 4: INT request generation" << std::endl;
        utils.write_reg(0x00, 0xFF);
        utils.write_reg(0x01, 0xFF);
        utils.set_irq(0x0001);
        utils.wait_cycles(3);
        
        assert_with_vcd(utils.int_requested(), "INT should be asserted");
        
        utils.int_ack();
        utils.wait_cycles(2);
        assert_with_vcd(!utils.int_requested(), "INT should be deasserted");
        
        std::cout << "INT request test passed!" << std::endl;
        
        // Test 5: High IRQ priority
        std::cout << "Test 5: High IRQ priority" << std::endl;
        utils.write_reg(0x00, 0xFF);
        utils.write_reg(0x01, 0xFF);
        utils.set_irq(0x8001);
        utils.wait_cycles(3);
        
        assert_with_vcd(utils.int_requested(), "INT should be asserted");
        // Check that highest IRQ is bit 15
        assert_with_vcd(utils.get_highest_irq() == 15, "Highest IRQ should be 15");
        
        utils.int_ack();
        utils.wait_cycles(2);
        
        std::cout << "High IRQ priority test passed!" << std::endl;
        
        // Final cleanup
        std::cout << "=== All tests passed! ===" << std::endl;
        
    } catch (const std::string& e) {
        std::cout << "Exception caught: " << e << std::endl;
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