#include "wb_dma_utils.h"
#include <iostream>

WbDmaTestUtils::WbDmaTestUtils(Vwb_dma_tb* top_ptr, vluint64_t& time_ref) 
    : top(top_ptr), main_time(time_ref) {}

void WbDmaTestUtils::toggle_clock() {
    top->clk = !top->clk;
    top->eval();
    main_time++;
}

void WbDmaTestUtils::assert_reset(int cycles) {
    top->rst = 1;
    for (int i = 0; i < cycles; i++) {
        toggle_clock();
    }
}

void WbDmaTestUtils::deassert_reset() {
    top->rst = 0;
    toggle_clock();
}

void WbDmaTestUtils::wbs_write(uint32_t addr, uint16_t data) {
    // Phase 1: Setup address and data (clock low)
    if (top->clk) toggle_clock(); // Ensure clock is low
    
    top->wbs_adr_i = addr;
    top->wbs_dat_i = data;
    top->wbs_we_i = 1;
    top->wbs_cyc_i = 1;
    top->wbs_stb_i = 1;
    
    toggle_clock(); // Clock rising edge - DUT samples inputs
    
    // Phase 2: Wait for ACK with proper timing
    int timeout = 100;
    while (!top->wbs_ack_o && timeout > 0) {
        // Clear inputs after first cycle
        if (main_time > 1) {
            top->wbs_cyc_i = 1;
            top->wbs_stb_i = 1;
        }
        toggle_clock();
        timeout--;
    }
    
    if (timeout == 0) {
        std::cout << "ERROR: Wishbone write timeout at address 0x" 
                  << std::hex << addr << std::dec << std::endl;
    }
    
    // Phase 3: Clear signals (clock high)
    top->wbs_we_i = 0;
    top->wbs_cyc_i = 0;
    top->wbs_stb_i = 0;
    top->wbs_adr_i = 0;
    top->wbs_dat_i = 0;
    
    toggle_clock(); // Clock falling edge
    toggle_clock(); // Next rising edge for clean state
}

uint16_t WbDmaTestUtils::wbs_read(uint32_t addr) {
    // Phase 1: Setup address (clock low)
    if (top->clk) toggle_clock(); // Ensure clock is low
    
    top->wbs_adr_i = addr;
    top->wbs_we_i = 0;
    top->wbs_cyc_i = 1;
    top->wbs_stb_i = 1;
    
    toggle_clock(); // Clock rising edge - DUT samples inputs
    
    // Phase 2: Wait for ACK with data
    int timeout = 100;
    while (!top->wbs_ack_o && timeout > 0) {
        // Maintain signals
        top->wbs_cyc_i = 1;
        top->wbs_stb_i = 1;
        toggle_clock();
        timeout--;
    }
    
    if (timeout == 0) {
        std::cout << "ERROR: Wishbone read timeout at address 0x" 
                  << std::hex << addr << std::dec << std::endl;
        return 0xFFFF;
    }
    
    uint16_t data = top->wbs_dat_o;
    
    // Phase 3: Clear signals (clock high)
    top->wbs_cyc_i = 0;
    top->wbs_stb_i = 0;
    top->wbs_adr_i = 0;
    
    toggle_clock(); // Clock falling edge
    toggle_clock(); // Next rising edge for clean state
    
    return data;
}

void WbDmaTestUtils::wbm_respond_read(uint32_t addr, uint16_t data) {
    // Simulate memory response - would be connected to actual memory model
    // For now just store the expected response
    static uint16_t last_data = 0;
    last_data = data;
}

void WbDmaTestUtils::wbm_respond_ack() {
    // Respond with ACK on next clock edge
    top->wbm_ack_i = 1;
    toggle_clock();
    top->wbm_ack_i = 0;
}

void WbDmaTestUtils::wbm_respond_err() {
    // Respond with error
    top->wbm_err_i = 1;
    toggle_clock();
    top->wbm_err_i = 0;
}

void WbDmaTestUtils::set_drq(int channel, bool state) {
    if (channel >= 0 && channel < CHANNELS) {
        if (state) {
            top->drq_i |= (1 << channel);
        } else {
            top->drq_i &= ~(1 << channel);
        }
    }
}

void WbDmaTestUtils::clear_all_drq() {
    top->drq_i = 0;
}

bool WbDmaTestUtils::is_base_addr(uint32_t addr) {
    return (addr & ADDR_MASK) == (BASE_ADDR & ADDR_MASK);
}

uint32_t WbDmaTestUtils::calc_channel_offset(int channel) {
    return BASE_ADDR + (channel * 0x10); // Each channel has 8 registers (16 bytes)
}

void WbDmaTestUtils::wait_cycles(int cycles) {
    for (int i = 0; i < cycles; i++) {
        toggle_clock();
    }
}