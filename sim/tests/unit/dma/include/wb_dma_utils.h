#ifndef WB_DMA_UTILS_H
#define WB_DMA_UTILS_H

#include <verilated.h>
#include "Vwb_dma_tb.h"

constexpr int ADDR_WIDTH = 24;
constexpr int DATA_WIDTH = 16;
constexpr int CHANNELS = 4;
constexpr uint32_t BASE_ADDR = 0x100000;
constexpr uint32_t ADDR_MASK = 0xFF0000;

class WbDmaTestUtils {
public:
    Vwb_dma_tb* top;
    vluint64_t& main_time;

    WbDmaTestUtils(Vwb_dma_tb* top_ptr, vluint64_t& time_ref);
    
    // Clock and reset management
    void toggle_clock();
    void assert_reset(int cycles = 10);
    void deassert_reset();
    
    // Wishbone slave operations with proper timing
    void wbs_write(uint32_t addr, uint16_t data);
    uint16_t wbs_read(uint32_t addr);
    
    // Wishbone master operations (for memory simulation)
    void wbm_respond_read(uint32_t addr, uint16_t data);
    void wbm_respond_ack();
    void wbm_respond_err();
    
    // DMA control
    void set_drq(int channel, bool state);
    void clear_all_drq();
    
    // Utility functions
    bool is_base_addr(uint32_t addr);
    uint32_t calc_channel_offset(int channel);
    
    // Timing control
    void wait_cycles(int cycles);
};

#endif