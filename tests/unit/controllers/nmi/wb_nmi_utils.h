#ifndef WB_NMI_UTILS_H
#define WB_NMI_UTILS_H

#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vwb_z80_nmi_tb.h"

class WbNmiTestUtils {
private:
    Vwb_z80_nmi_tb* top;
    vluint64_t& main_time;
    VerilatedVcdC* tfp;
    
    // Timing constants
    static constexpr vluint64_t SETUP_TIME = 1;
    static constexpr vluint64_t HOLD_TIME = 1;
    static constexpr vluint64_t CLK_HALF_PERIOD = 5;
    static constexpr vluint64_t CLK_REST_TIME = CLK_HALF_PERIOD - SETUP_TIME;

public:
    WbNmiTestUtils(Vwb_z80_nmi_tb* top_ptr, vluint64_t& time_var, VerilatedVcdC* trace_ptr);
    
    // Basic clock operations
    void eval(int delta);
    void clock_low(int delay);
    void clock_high(int delay);
    void clock_tick();
    void wait_cycles(int cycles);
    
    // Reset management
    void reset_assert();
    void reset_deassert();
    void reset_pulse(int cycles);
    
    // Wishbone operations
    void wb_idle();
    void write_reg(uint32_t addr, uint8_t data);
    uint8_t read_reg(uint32_t addr);
    
    // NMI source control
    void set_nmi_sources(uint8_t sources);
    void clear_nmi_sources(uint8_t sources);
    
    // Status functions
    bool nmi_requested();
    bool system_halted();
    bool wb_selected();
    
    // Utility functions
    uint8_t get_nmi_status();

    // Debugging
    void print_debug_info();
};

#endif // WB_NMI_UTILS_H