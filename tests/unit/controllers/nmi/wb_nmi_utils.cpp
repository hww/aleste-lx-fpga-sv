#include "wb_nmi_utils.h"
#include <iostream>

WbNmiTestUtils::WbNmiTestUtils(Vwb_z80_nmi_tb* top_ptr, vluint64_t& time_var, VerilatedVcdC* trace_ptr)
    : top(top_ptr), main_time(time_var), tfp(trace_ptr) {}

void WbNmiTestUtils::eval(int delta) {
    top->eval();
    if (tfp) tfp->dump(main_time);
    main_time += delta;
}

void WbNmiTestUtils::clock_low(int delay) {
    top->wb_clk_i = 0;
    eval(delay);
}

void WbNmiTestUtils::clock_high(int delay) {
    top->wb_clk_i = 1;
    eval(delay);
}

void WbNmiTestUtils::clock_tick() {
    clock_high(CLK_HALF_PERIOD);
    clock_low(CLK_HALF_PERIOD);
}

void WbNmiTestUtils::wait_cycles(int cycles) {
    for (int i = 0; i < cycles; i++) {
        clock_tick();
    }
}

// Reset management
void WbNmiTestUtils::reset_assert() {
    clock_high(SETUP_TIME);
    top->wb_rst_i = 1;
    eval(CLK_REST_TIME);
    clock_low(CLK_HALF_PERIOD);
}

void WbNmiTestUtils::reset_deassert() {
    clock_high(SETUP_TIME);    
    top->wb_rst_i = 0;
    eval(CLK_REST_TIME);
    clock_low(CLK_HALF_PERIOD);
}

void WbNmiTestUtils::reset_pulse(int cycles) {
    reset_assert();
    for (int i = 0; i < cycles; i++) {
        clock_tick();
    }
    reset_deassert();
}

// Wishbone operations
void WbNmiTestUtils::wb_idle() {
    top->wb_cyc_i = 0;
    top->wb_stb_i = 0;
    top->wb_we_i = 0;
    top->wb_adr_i = 0;
    top->wb_dat_i = 0;
    eval(SETUP_TIME);
}

void WbNmiTestUtils::write_reg(uint32_t addr, uint8_t data) {
    // Rising edge
    clock_high(SETUP_TIME);
    
    // Set signals after clock edge
    top->wb_adr_i = addr;
    top->wb_dat_i = data;
    top->wb_we_i = 1;
    top->wb_cyc_i = 1;
    top->wb_stb_i = 1;
    top->wb_cs_i = 1;
    eval(CLK_REST_TIME);
    
    // Falling edge
    clock_low(CLK_HALF_PERIOD);
    
    // Wait for ACK
    int timeout = 15;
    while (!top->wb_ack_o && timeout-- > 0) {
        // Rising edge
        clock_high(SETUP_TIME);
        eval(CLK_REST_TIME);
        
        // Falling edge
        clock_low(CLK_HALF_PERIOD);
    }
    
    if (timeout <= 0) {
        std::cout << "WISHBONE write timeout" << std::endl;
    }
    
    // End transaction
    clock_high(SETUP_TIME);
    wb_idle();
    eval(CLK_REST_TIME);
    clock_low(CLK_HALF_PERIOD);
}

uint8_t WbNmiTestUtils::read_reg(uint32_t addr) {
    // Rising edge
    clock_high(SETUP_TIME);
    
    // Set signals after clock edge
    top->wb_adr_i = addr;
    top->wb_we_i = 0;
    top->wb_cyc_i = 1;
    top->wb_stb_i = 1;
    top->wb_cs_i = 1;
    eval(CLK_REST_TIME);
    
    // Falling edge
    clock_low(CLK_HALF_PERIOD);
    
    // Wait for ACK
    int timeout = 16;
    while (!top->wb_ack_o && timeout-- > 0) {
        clock_high(SETUP_TIME);
        eval(CLK_REST_TIME);
        clock_low(CLK_HALF_PERIOD);
    }
    
    uint8_t data = top->wb_dat_o;

    if (timeout <= 0) {
        std::cout << "WISHBONE read timeout" << std::endl;
    }

    // End transaction
    clock_high(SETUP_TIME);
    wb_idle();
    eval(CLK_REST_TIME);
    clock_low(CLK_HALF_PERIOD);
    
    return data;
}

// NMI source control
void WbNmiTestUtils::set_nmi_sources(uint8_t sources) {
    // sources bits: [0]=wishbone_error, [1]=panic_button, [2]=ext_board_error, [3]=debug_trigger
    top->nmi_wishbone_error_i = sources & 0x1;
    top->nmi_panic_button_i = (sources >> 1) & 0x1;
    top->nmi_ext_board_error_i = (sources >> 2) & 0x1;
    top->nmi_debug_trigger_i = (sources >> 3) & 0x1;
    eval(SETUP_TIME);
}

void WbNmiTestUtils::clear_nmi_sources(uint8_t sources) {
    top->nmi_wishbone_error_i &= ~(sources & 0x1);
    top->nmi_panic_button_i &= ~((sources >> 1) & 0x1);
    top->nmi_ext_board_error_i &= ~((sources >> 2) & 0x1);
    top->nmi_debug_trigger_i &= ~((sources >> 3) & 0x1);
    eval(SETUP_TIME);
}

// Status functions
bool WbNmiTestUtils::nmi_requested() {
    return top->nmi_req_o;
}

bool WbNmiTestUtils::system_halted() {
    return top->system_halt_o;
}

bool WbNmiTestUtils::wb_selected() {
    return top->wb_sel_o;
}

uint8_t WbNmiTestUtils::get_nmi_status() {
    return read_reg(0xFC0030); // STATUS register
}


void  WbNmiTestUtils::print_debug_info() {
    printf("Debug: active_sources=0x%X, masked_sources=0x%X, any_masked=%d\n",
           top->debug_active_sources, top->debug_masked_sources, top->debug_any_masked);
}