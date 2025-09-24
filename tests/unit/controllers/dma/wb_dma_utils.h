#ifndef WB_DMA_UTILS_H
#define WB_DMA_UTILS_H

#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vwb_dma_tb.h"

constexpr int ADDR_WIDTH = 24;
constexpr int DATA_WIDTH = 16;
constexpr int CHANNELS = 4;
constexpr uint32_t BASE_ADDR = 0x100000;
constexpr uint32_t ADDR_MASK = 0xFF0000;

class WbDmaTestUtils {
private:
    Vwb_dma_tb* top;
    vluint64_t& main_time;
    VerilatedVcdC* tfp;
    
public:
    WbDmaTestUtils(Vwb_dma_tb* top_ptr, vluint64_t& time_var, VerilatedVcdC* trace_ptr = nullptr);
    
    // Базовые временные операции с ФИКСИРОВАННЫМ timing
    void eval(int delta);
    void clock_low(int delay);          // clk=0 с фиксированной длительностью
    void clock_high(int delta);// clk=1 с фиксированной длительностью
    void clock_tick();         // полный такт 0->1->0 с фиксированной длительностью
    
    // Reset management
    void reset_assert();
    void reset_deassert();
    void reset_pulse(int cycles);
    
    // Wishbone slave operations (MASTER для DUT)
    void wbs_idle();
    void wbs_write(uint32_t addr, uint16_t data);
    uint16_t wbs_read(uint32_t addr);
    
    // Wishbone master operations (SLAVE для DUT)
    void wbm_idle();
    void wbm_respond_read(uint16_t data);
    void wbm_respond_ack();
    
    // DMA control
    void set_drq(int channel, bool state);
    
    // Utility functions
    bool is_base_addr(uint32_t addr);
    uint32_t calc_channel_offset(int channel);
    void wait_cycles(int cycles);
};

#endif
