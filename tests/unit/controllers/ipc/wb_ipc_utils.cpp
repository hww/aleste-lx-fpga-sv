#include "wb_ipc_utils.h"
#include <iostream>

// Константы timing
constexpr vluint64_t SETUP_TIME = 1;
constexpr vluint64_t HOLD_TIME = 1;
constexpr vluint64_t CLK_HALF_PERIOD = 5;
constexpr vluint64_t CLK_REST_TIME = CLK_HALF_PERIOD - SETUP_TIME;

WbIpcTestUtils::WbIpcTestUtils(Vipc_mailbox_tb* top_ptr, vluint64_t& time_var, VerilatedVcdC* trace_ptr)
    : top(top_ptr), main_time(time_var), tfp(trace_ptr) {

    }

void WbIpcTestUtils::eval(int delta) {
    top->eval();
    if (tfp) tfp->dump(main_time);
    main_time += delta;
}

void WbIpcTestUtils::clock_low(int delay) {
    top->wb_clk_i = 0;
    eval(delay);
}

void WbIpcTestUtils::clock_high(int delay) {
    top->wb_clk_i = 1;
    eval(delay);
}

void WbIpcTestUtils::clock_tick() {
    clock_high(CLK_HALF_PERIOD);
    clock_low(CLK_HALF_PERIOD);
}

// Reset management
void WbIpcTestUtils::reset_assert() {
    clock_high(SETUP_TIME);
    top->wb_rst_i = 1;
    eval(CLK_REST_TIME);
    clock_low(CLK_HALF_PERIOD);
}

void WbIpcTestUtils::reset_deassert() {
    clock_high(SETUP_TIME);    
    top->wb_rst_i = 0;
    eval(CLK_REST_TIME);
    clock_low(CLK_HALF_PERIOD);
}

void WbIpcTestUtils::reset_pulse(int cycles) {
    reset_assert();
    for (int i = 0; i < cycles; i++) {
        clock_tick();
    }
    reset_deassert();
}

// Wishbone operations
void WbIpcTestUtils::wb_idle() {
    top->wb_cyc_i = 0;
    top->wb_stb_i = 0;
    top->wb_we_i = 0;
    top->wb_adr_i = 0;
    top->wb_dat_i = 0;
    eval(SETUP_TIME);
}

void WbIpcTestUtils::write_reg(uint32_t addr, uint8_t data) {
    // Фаза 1: Rising edge - захват текущих значений
    clock_high(SETUP_TIME);
    
    // Фаза 2: Устанавливаем новые значения ПОСЛЕ фронта такта
    top->wb_adr_i = addr;
    top->wb_dat_i = data;
    top->wb_we_i = 1;
    top->wb_cyc_i = 1;
    top->wb_stb_i = 1;
    eval(CLK_REST_TIME);
    
    // Фаза 3: Falling edge
    clock_low(CLK_HALF_PERIOD);
    
    // Ждем ACK (на следующем такте)
    int timeout = 10;
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
    
    // Завершение транзакции - устанавливаем idle ПОСЛЕ следующего rising edge
    clock_high(SETUP_TIME);
    wb_idle();
    eval(CLK_REST_TIME);
    clock_low(CLK_HALF_PERIOD);
}

uint8_t WbIpcTestUtils::read_reg(uint32_t addr) {
    // Rising edge
    clock_high(SETUP_TIME);
    
    // Устанавливаем сигналы ПОСЛЕ фронта
    top->wb_adr_i = addr;
    top->wb_we_i = 0;
    top->wb_cyc_i = 1;
    top->wb_stb_i = 1;
    eval(CLK_REST_TIME);
    
    // Falling edge
    clock_low(CLK_HALF_PERIOD);
    
    // Ждем ACK
    int timeout = 10;
    while (!top->wb_ack_o && timeout-- > 0) {
        clock_high(SETUP_TIME);
        eval(CLK_REST_TIME);
        clock_low(CLK_HALF_PERIOD);
    }
    
    uint8_t data = top->wb_dat_o;
    
    // Завершение
    clock_high(SETUP_TIME);
    wb_idle();
    eval(CLK_REST_TIME);
    clock_low(CLK_HALF_PERIOD);
    
    return data;
}


// Status functions

bool WbIpcTestUtils::wb_selected() {
    return top->wb_sel_o;
}

// Utility functions
void WbIpcTestUtils::wait_cycles(int cycles) {
    for (int i = 0; i < cycles; i++) {
        clock_tick();
    }
}