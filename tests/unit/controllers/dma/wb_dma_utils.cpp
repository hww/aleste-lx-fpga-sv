
#include "wb_dma_utils.h"
#include <iostream>

// Константы timing
constexpr vluint64_t SETUP_TIME = 1;
constexpr vluint64_t HOLD_TIME = 1;
constexpr vluint64_t CLK_HALF_PERIOD = 5;
constexpr vluint64_t CLK_REST_TIME = CLK_HALF_PERIOD - SETUP_TIME;

WbDmaTestUtils::WbDmaTestUtils(Vwb_dma_tb* top_ptr, vluint64_t& time_var, VerilatedVcdC* trace_ptr)
    : top(top_ptr), main_time(time_var), tfp(trace_ptr) {}

void WbDmaTestUtils::eval(int delta) {
    top->eval();
    if (tfp) tfp->dump(main_time);
    main_time += delta;
}

void WbDmaTestUtils::clock_low(int delay) {
    top->clk_i = 0;
    eval(delay);
}

void WbDmaTestUtils::clock_high(int delay) {
    top->clk_i = 1;
    eval(delay);
}

void WbDmaTestUtils::clock_tick() {
    clock_high(CLK_HALF_PERIOD);
    clock_low(CLK_HALF_PERIOD);
}

// WISHBONE операции - сигналы меняются ПОСЛЕ rising edge
void WbDmaTestUtils::wbs_idle() {
    top->wbs_cyc_i = 0;
    top->wbs_stb_i = 0;
    top->wbs_we_i = 0;
    top->wbs_adr_i = 0;
    top->wbs_dat_i = 0;
    top->wbs_cs_i = 0;
    eval(SETUP_TIME);
}

void WbDmaTestUtils::wbs_write(uint32_t addr, uint16_t data) {
    // Фаза 1: Rising edge - захват текущих значений
    clock_high(SETUP_TIME);
    
    // Фаза 2: Устанавливаем новые значения ПОСЛЕ фронта такта
    top->wbs_adr_i = addr;
    top->wbs_dat_i = data;
    top->wbs_we_i = 1;
    top->wbs_cyc_i = 1;
    top->wbs_stb_i = 1;
    top->wbs_cs_i = 1;
    eval(CLK_REST_TIME);
    
    // Фаза 3: Falling edge
    clock_low(CLK_HALF_PERIOD);
    
    // Ждем ACK (на следующем такте)
    int timeout = 10;
    while (!top->wbs_ack_o && timeout-- > 0) {
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
    wbs_idle();
    eval(CLK_REST_TIME);
    clock_low(CLK_HALF_PERIOD);
}

uint16_t WbDmaTestUtils::wbs_read(uint32_t addr) {
    // Rising edge
    clock_high(SETUP_TIME);
    
    // Устанавливаем сигналы ПОСЛЕ фронта
    top->wbs_adr_i = addr;
    top->wbs_we_i = 0;
    top->wbs_cyc_i = 1;
    top->wbs_stb_i = 1;
    top->wbs_cs_i = 1;
    eval(CLK_REST_TIME);
    
    // Falling edge
    clock_low(CLK_HALF_PERIOD);
    
    // Ждем ACK
    int timeout = 10;
    while (!top->wbs_ack_o && timeout-- > 0) {
        clock_high(SETUP_TIME);
        eval(CLK_REST_TIME);
        clock_low(CLK_HALF_PERIOD);
    }
    
    uint16_t data = top->wbs_dat_o;
    
    // Завершение
    clock_high(SETUP_TIME);
    wbs_idle();
    eval(CLK_REST_TIME);
    clock_low(CLK_HALF_PERIOD);
    
    return data;
}
// Reset management
void WbDmaTestUtils::reset_assert() {
    // Ждем пока мастер установит CYC/STB
    clock_high(SETUP_TIME);
    top->rst_i = 1;
    eval(CLK_REST_TIME);
    clock_low(CLK_HALF_PERIOD);
}

void WbDmaTestUtils::reset_deassert() {
    // Ждем пока мастер установит CYC/STB
    clock_high(SETUP_TIME);    
    top->rst_i = 0;
    eval(CLK_REST_TIME);
    clock_low(CLK_HALF_PERIOD);
}

void WbDmaTestUtils::reset_pulse(int cycles) {
    reset_assert();
    for (int i = 0; i < cycles; i++) {
        clock_tick();
    }
    reset_deassert();
}

// Wishbone master operations - ответы даем ПОСЛЕ rising edge
void WbDmaTestUtils::wbm_idle() {
    top->wbm_ack_i = 0;
    top->wbm_err_i = 0;
    top->wbm_dat_i = 0;
    eval(SETUP_TIME);
}
void WbDmaTestUtils::wbm_respond_ack() {
    // Ждем пока мастер установит CYC/STB
    clock_high(SETUP_TIME);
    
    // Даем ответ ПОСЛЕ rising edge
    top->wbm_ack_i = 1;
    eval(CLK_REST_TIME);
    
    clock_low(CLK_HALF_PERIOD);
    
    // Снимаем ACK
    clock_high(SETUP_TIME);
    wbm_idle();
    eval(CLK_REST_TIME);
    clock_low(CLK_HALF_PERIOD);
}

void WbDmaTestUtils::wbm_respond_read(uint16_t data) {
    clock_high(SETUP_TIME);
    
    // Даем ответ ПОСЛЕ rising edge
    top->wbm_ack_i = 1;
    top->wbm_dat_i = data;
    eval(CLK_REST_TIME);
    
    clock_low(CLK_HALF_PERIOD);
    
    // Завершение
    clock_high(SETUP_TIME);
    wbm_idle();
    eval(CLK_REST_TIME);
    clock_low(CLK_HALF_PERIOD);
}

// Utility functions
bool WbDmaTestUtils::is_base_addr(uint32_t addr) {
    return (addr & ADDR_MASK) == (BASE_ADDR & ADDR_MASK);
}

uint32_t WbDmaTestUtils::calc_channel_offset(int channel) {
    return BASE_ADDR + (channel * 0x10);
}

void WbDmaTestUtils::wait_cycles(int cycles) {
    for (int i = 0; i < cycles; i++) {
        clock_tick();
    }
}
