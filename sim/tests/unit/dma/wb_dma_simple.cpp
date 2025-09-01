#include <verilated.h>
#include <verilated_vcd_c.h>
#include <iostream>
#include <cassert>
#include "Vwb_dma_tb.h"
#include "wb_dma_utils.h"

Vwb_dma_tb* top;
VerilatedVcdC* tfp = nullptr;
vluint64_t main_time = 0;
double sc_time_stamp() { return main_time; }

void test_register_access(WbDmaTestUtils& utils) {
    std::cout << "=== Register Access Test ===" << std::endl;
    
    // Reset sequence
    utils.reset_pulse(10);
    
    // Test 1: Write CTRL register and verify
    uint16_t test_value = 0x8001;
    utils.wbs_write(utils.calc_channel_offset(0) + 0x0, test_value);
    uint16_t read_value = utils.wbs_read(utils.calc_channel_offset(0) + 0x0);
    
    std::cout << "Written: 0x" << std::hex << test_value 
              << ", Read: 0x" << read_value << std::dec << std::endl;
    
    // Verify read-back value
    assert(read_value == test_value && "CTRL register read-back mismatch!");
    std::cout << "✓ CTRL register test passed" << std::endl;
    
    // Test 2: Write SRCE_ADDR register
    uint32_t src_addr = 0x12345000;
    utils.wbs_write(utils.calc_channel_offset(0) + 0x2, src_addr & 0xFFFF);
    utils.wbs_write(utils.calc_channel_offset(0) + 0x4, (src_addr >> 16) & 0xFFFF);
    
    uint16_t src_low = utils.wbs_read(utils.calc_channel_offset(0) + 0x2);
    uint16_t src_high = utils.wbs_read(utils.calc_channel_offset(0) + 0x4);
    uint32_t combined_src = (src_high << 16) | src_low;
    
    assert(combined_src == src_addr && "SRCE_ADDR register mismatch!");
    std::cout << "✓ SRCE_ADDR register test passed" << std::endl;
    
    // Test 3: Write DEST_ADDR register
    uint32_t dest_addr = 0x6789A000;
    utils.wbs_write(utils.calc_channel_offset(0) + 0x6, dest_addr & 0xFFFF);
    utils.wbs_write(utils.calc_channel_offset(0) + 0x8, (dest_addr >> 16) & 0xFFFF);
    
    uint16_t dest_low = utils.wbs_read(utils.calc_channel_offset(0) + 0x6);
    uint16_t dest_high = utils.wbs_read(utils.calc_channel_offset(0) + 0x8);
    uint32_t combined_dest = (dest_high << 16) | dest_low;
    
    assert(combined_dest == dest_addr && "DEST_ADDR register mismatch!");
    std::cout << "✓ DEST_ADDR register test passed" << std::endl;
    
    // Test 4: Write TRANSFER_SIZE register
    uint32_t transfer_size = 0x1000;
    utils.wbs_write(utils.calc_channel_offset(0) + 0xA, transfer_size & 0xFFFF);
    utils.wbs_write(utils.calc_channel_offset(0) + 0xC, (transfer_size >> 16) & 0xFFFF);
    
    uint16_t size_low = utils.wbs_read(utils.calc_channel_offset(0) + 0xA);
    uint16_t size_high = utils.wbs_read(utils.calc_channel_offset(0) + 0xC);
    uint32_t combined_size = (size_high << 16) | size_low;
    
    assert(combined_size == transfer_size && "TRANSFER_SIZE register mismatch!");
    std::cout << "✓ TRANSFER_SIZE register test passed" << std::endl;
}

void test_multiple_channels(WbDmaTestUtils& utils) {
    std::cout << "\n=== Multiple Channels Test ===" << std::endl;
    
    // Test different values for different channels
    for (int channel = 0; channel < 4; channel++) {
        uint16_t ctrl_value = 0x8000 | (channel + 1);
        uint32_t base_addr = 0x10000000 * (channel + 1);
        
        utils.wbs_write(utils.calc_channel_offset(channel) + 0x0, ctrl_value);
        utils.wbs_write(utils.calc_channel_offset(channel) + 0x2, base_addr & 0xFFFF);
        utils.wbs_write(utils.calc_channel_offset(channel) + 0x4, (base_addr >> 16) & 0xFFFF);
        
        // Verify
        uint16_t read_ctrl = utils.wbs_read(utils.calc_channel_offset(channel) + 0x0);
        uint16_t read_low = utils.wbs_read(utils.calc_channel_offset(channel) + 0x2);
        uint16_t read_high = utils.wbs_read(utils.calc_channel_offset(channel) + 0x4);
        uint32_t read_addr = (read_high << 16) | read_low;
        
        assert(read_ctrl == ctrl_value && "Channel CTRL mismatch!");
        assert(read_addr == base_addr && "Channel address mismatch!");
        
        std::cout << "✓ Channel " << channel << " test passed" << std::endl;
    }
}

void test_invalid_address(WbDmaTestUtils& utils) {
    std::cout << "\n=== Invalid Address Test ===" << std::endl;
    
    // Try to read from non-existent channel
    uint16_t value = utils.wbs_read(utils.calc_channel_offset(8) + 0x0);
    std::cout << "Read from invalid channel: 0x" << std::hex << value << std::dec << std::endl;
    
    // Try to read from out-of-bound address
    value = utils.wbs_read(0xFFFF);
    std::cout << "Read from invalid address: 0x" << std::hex << value << std::dec << std::endl;
    
    std::cout << "✓ Invalid address test completed (no crash)" << std::endl;
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    
    top = new Vwb_dma_tb;
    tfp = new VerilatedVcdC;
    
    top->trace(tfp, 99);
    tfp->open("simple.vcd");
    
    // Initialize to known state
    top->clk_i = 0;
    top->rst_i = 1;
    
    WbDmaTestUtils utils(top, main_time, tfp);
    utils.wbs_idle();
    utils.wbm_idle();
    
    try {
        // Run comprehensive tests
        test_register_access(utils);
        test_multiple_channels(utils);
        test_invalid_address(utils);
        
        std::cout << "\n🎉 All tests completed successfully!" << std::endl;
        
    } catch (const std::exception& e) {
        std::cerr << "\n❌ Test failed: " << e.what() << std::endl;
        tfp->close();
        top->final();
        delete top;
        delete tfp;
        return 1;
    }
    
    // Cleanup
    tfp->close();
    top->final();
    delete top;
    delete tfp;
    
    return 0;
}