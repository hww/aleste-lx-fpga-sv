#ifndef WB_PIC_UTILS_H
#define WB_PIC_UTILS_H

#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vwb_z80_pic_tb.h"

class WbPicTestUtils {
private:
    Vwb_z80_pic_tb* top;
    vluint64_t& main_time;
    VerilatedVcdC* tfp;
    
public:
    WbPicTestUtils(Vwb_z80_pic_tb* top_ptr, vluint64_t& time_var, VerilatedVcdC* trace_ptr = nullptr);
    
    // Базовые временные операции с ФИКСИРОВАННЫМ timing
    void eval(int delta);
    void clock_low(int delay);
    void clock_high(int delay);
    void clock_tick();
    
    // Reset management
    void reset_assert();
    void reset_deassert();
    void reset_pulse(int cycles);
    
    // Wishbone operations
    void wb_idle();
    void write_reg(uint32_t addr, uint8_t data);
    uint8_t read_reg(uint32_t addr);
    
    // IRQ operations
    void set_irq(uint8_t irq_mask);
    void clear_irq(uint8_t irq_mask);
    void int_ack();
    
    // Status functions
    bool int_requested();
    bool wb_selected();
    
    // Utility functions
    void wait_cycles(int cycles);
};

#endif