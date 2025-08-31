#include <verilated.h>
#include <iostream>
#include "Vwb_dma_tb.h"
#include "wb_dma_utils.h"

vluint64_t main_time = 0;
double sc_time_stamp() { return main_time; }

void test_register_access(WbDmaTestUtils& utils) {
    std::cout << "Testing register access..." << std::endl;
    
    // Test writing to control register
    utils.wbs_write(utils.calc_channel_offset(0) + 0x0, 0x8001); // Enable channel 0
    uint16_t read_val = utils.wbs_read(utils.calc_channel_offset(0) + 0x0);
    
    std::cout << "Write 0x8001, Read 0x" << std::hex << read_val << std::dec << std::endl;
    
    // Test source address register
    utils.wbs_write(utils.calc_channel_offset(0) + 0x2, 0x1234);
    utils.wbs_write(utils.calc_channel_offset(0) + 0x4, 0x5678);
    read_val = utils.wbs_read(utils.calc_channel_offset(0) + 0x2);
    std::cout << "Source low: 0x" << std::hex << read_val << std::dec << std::endl;
}

void test_reset_values(WbDmaTestUtils& utils) {
    std::cout << "Testing reset values..." << std::endl;
    
    // Assert reset
    utils.assert_reset(5);
    
    // Read all channels control registers
    for (int ch = 0; ch < CHANNELS; ch++) {
        uint16_t ctrl = utils.wbs_read(utils.calc_channel_offset(ch) + 0x0);
        std::cout << "Channel " << ch << " CTRL after reset: 0x" 
                  << std::hex << ctrl << std::dec << std::endl;
    }
    
    utils.deassert_reset();
}

void test_address_decoding(WbDmaTestUtils& utils) {
    std::cout << "Testing address decoding..." << std::endl;
    
    // Test within base address range
    uint16_t data = utils.wbs_read(BASE_ADDR);
    std::cout << "Read from BASE_ADDR: 0x" << std::hex << data << std::dec << std::endl;
    
    // Test outside base address range (should not respond)
    top->wbs_adr_i = 0x000000; // Different address
    top->wbs_cyc_i = 1;
    top->wbs_stb_i = 1;
    utils.toggle_clock();
    
    if (!top->wbs_ack_o) {
        std::cout << "Correctly ignored non-base address" << std::endl;
    }
    
    top->wbs_cyc_i = 0;
    top->wbs_stb_i = 0;
    utils.toggle_clock();
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vwb_dma_tb* top = new Vwb_dma_tb;
    
    // Initialize all inputs
    top->clk = 0;
    top->rst = 0;
    top->wbs_adr_i = 0;
    top->wbs_dat_i = 0;
    top->wbs_we_i = 0;
    top->wbs_stb_i = 0;
    top->wbs_cyc_i = 0;
    top->wbm_dat_i = 0;
    top->wbm_ack_i = 0;
    top->wbm_err_i = 0;
    top->drq_i = 0;
    
    WbDmaTestUtils utils(top, main_time);
    
    // Run tests
    utils.assert_reset(10);
    utils.deassert_reset();
    
    test_reset_values(utils);
    test_address_decoding(utils);
    test_register_access(utils);
    
    std::cout << "Simple test completed!" << std::endl;
    
    top->final();
    delete top;
    return 0;
}