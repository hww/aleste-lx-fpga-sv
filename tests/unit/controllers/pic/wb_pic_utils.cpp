#include "wb_pic_utils.h"
#include <iostream>

// Константы timing
constexpr vluint64_t SETUP_TIME = 1;
constexpr vluint64_t HOLD_TIME = 1;
constexpr vluint64_t CLK_HALF_PERIOD = 5;
constexpr vluint64_t CLK_REST_TIME = CLK_HALF_PERIOD - SETUP_TIME;

WbPicTestUtils::WbPicTestUtils(Vwb_z80_pic_tb* top_ptr, vluint64_t& time_var, VerilatedVcdC* trace_ptr)
    : top(top_ptr), main_time(time_var), tfp(trace_ptr) {}

void WbPicTestUtils::eval(int delta) {
    top->eval();
    if (tfp) tfp->dump(main_time);
    main_time += delta;
}

void WbPicTestUtils::clock_low(int delay) {
    top->wb_clk_i = 0;
    eval(delay);
}

void WbPicTestUtils::clock_high(int delay) {
    top->wb_clk_i = 1;
    eval(delay);
}

void WbPicTestUtils::clock_tick() {
    clock_high(CLK_HALF_PERIOD);
    clock_low(CLK_HALF_PERIOD);
}

// Reset management
void WbPicTestUtils::reset_assert() {
    clock_high(SETUP_TIME);
    top->wb_rst_i = 1;
    eval(CLK_REST_TIME);
    clock_low(CLK_HALF_PERIOD);
}

void WbPicTestUtils::reset_deassert() {
    clock_high(SETUP_TIME);    
    top->wb_rst_i = 0;
    eval(CLK_REST_TIME);
    clock_low(CLK_HALF_PERIOD);
}

void WbPicTestUtils::reset_pulse(int cycles) {
    reset_assert();
    for (int i = 0; i < cycles; i++) {
        clock_tick();
    }
    reset_deassert();
}

// Wishbone operations
void WbPicTestUtils::wb_idle() {
    top->wb_cyc_i = 0;
    top->wb_stb_i = 0;
    top->wb_we_i = 0;
    top->wb_adr_i = 0;
    top->wb_dat_i = 0;
    eval(SETUP_TIME);
}

void WbPicTestUtils::write_reg(uint32_t addr, uint8_t data) {
    // Rising edge
    clock_high(SETUP_TIME);
    
    // Set signals after clock edge
    top->wb_adr_i = addr;
    top->wb_dat_i = data;
    top->wb_we_i = 1;
    top->wb_cyc_i = 1;
    top->wb_stb_i = 1;
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

uint8_t WbPicTestUtils::read_reg(uint32_t addr) {
    // Rising edge
    clock_high(SETUP_TIME);
    
    // Set signals after clock edge
    top->wb_adr_i = addr;
    top->wb_we_i = 0;
    top->wb_cyc_i = 1;
    top->wb_stb_i = 1;
    eval(CLK_REST_TIME);
    
    // Falling edge
    clock_low(CLK_HALF_PERIOD);
    
    // Ждем ACK
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

// IRQ operations
void WbPicTestUtils::set_irq(uint16_t irq_mask) {
    top->irq_i = irq_mask;
    eval(SETUP_TIME);
}

void WbPicTestUtils::clear_irq(uint8_t irq_mask) {
    top->irq_i &= ~irq_mask;
    eval(SETUP_TIME);
}

void WbPicTestUtils::int_ack() {
    // Установить int_ack_i на один такт
    top->int_ack_i = 1;
    clock_tick();  // Полный тактовый импульс
    top->int_ack_i = 0;
    clock_tick();  // Еще один такт для стабилизации
}

// Status functions
bool WbPicTestUtils::int_requested() {
    return top->int_req_o;
}

bool WbPicTestUtils::wb_selected() {
    return top->wb_sel_o;
}

// Utility functions
void WbPicTestUtils::wait_cycles(int cycles) {
    for (int i = 0; i < cycles; i++) {
        clock_tick();
    }
}

uint8_t WbPicTestUtils::get_highest_irq() {
    // Предполагая, что в вашем дизайне есть выход для определения highest IRQ
    // Если такого выхода нет, вам нужно будет реализовать логику определения
    return top->highest_irq_o; // или другая логика в зависимости от вашего дизайна
}
