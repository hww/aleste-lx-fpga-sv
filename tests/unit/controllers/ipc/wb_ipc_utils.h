#ifndef WB_IPC_UTILS_H
#define WB_IPC_UTILS_H

#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vipc_mailbox_tb.h"

class WbIpcTestUtils {
private:
    Vipc_mailbox_tb* top;
    vluint64_t& main_time;
    VerilatedVcdC* tfp;
    
public:
    WbIpcTestUtils(Vipc_mailbox_tb* top_ptr, vluint64_t& time_var, VerilatedVcdC* trace_ptr = nullptr);
    
    // Базовые временные операции
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
    
    // Status functions
    bool wb_selected();
    
    // Utility functions
    void wait_cycles(int cycles);
};

#endif