#ifndef WB_DMA_UTILS_H
#define WB_DMA_UTILS_H

#include "wb_test_base.h"
#include "Vwb_dma_tb.h"
#include <iostream>

constexpr int ADDR_WIDTH = 24;
constexpr int DATA_WIDTH = 16;
constexpr int CHANNELS = 4;
constexpr uint32_t BASE_ADDR = 0x100000;
constexpr uint32_t ADDR_MASK = 0xFF0000;

class WbDmaTestUtils : public WbTestBase {
private:
    Vwb_dma_tb* top;
    
public:
    WbDmaTestUtils(Vwb_dma_tb* top_ptr, vluint64_t& time_var, VerilatedVcdC* trace_ptr = nullptr)
        : WbTestBase(time_var, trace_ptr), top(top_ptr) {}
    
    // Базовые временные операции с ФИКСИРОВАННЫМ timing
    void eval(int delta) {
        top->eval();
        if (tfp) tfp->dump(main_time);
        main_time += delta;
    }
    
    void clock_low(int delay) {
        top->clk_i = 0;
        eval(delay);
    }
    
    void clock_high(int delay) {
        top->clk_i = 1;
        eval(delay);
    }
    
    void clock_tick() {
        clock_high(CLK_HALF_PERIOD);
        clock_low(CLK_HALF_PERIOD);
    }
    
    // Reset management
    void reset_assert() {
        clock_high(SETUP_TIME);
        top->rst_i = 1;
        eval(CLK_REST_TIME);
        clock_low(CLK_HALF_PERIOD);
    }
    
    void reset_deassert() {
        clock_high(SETUP_TIME);    
        top->rst_i = 0;
        eval(CLK_REST_TIME);
        clock_low(CLK_HALF_PERIOD);
    }
    
    void reset_pulse(int cycles) {
        reset_assert();
        for (int i = 0; i < cycles; i++) {
            clock_tick();
        }
        reset_deassert();
    }
    
    // Wishbone slave operations (MASTER для DUT)
    void wbs_idle() {
        top->wbs_cyc_i = 0;
        top->wbs_stb_i = 0;
        top->wbs_we_i = 0;
        top->wbs_adr_i = 0;
        top->wbs_dat_i = 0;
        eval(SETUP_TIME);
    }
    
    void wbs_write(uint32_t addr, uint16_t data) {
        // Фаза 1: Rising edge - захват текущих значений
        clock_high(SETUP_TIME);
        
        // Фаза 2: Устанавливаем новые значения ПОСЛЕ фронта такта
        top->wbs_adr_i = addr;
        top->wbs_dat_i = data;
        top->wbs_we_i = 1;
        top->wbs_cyc_i = 1;
        top->wbs_stb_i = 1;
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
    
    uint16_t wbs_read(uint32_t addr) {
        // Rising edge
        clock_high(SETUP_TIME);
        
        // Устанавливаем сигналы ПОСЛЕ фронта
        top->wbs_adr_i = addr;
        top->wbs_we_i = 0;
        top->wbs_cyc_i = 1;
        top->wbs_stb_i = 1;
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
    
    // Wishbone master operations (SLAVE для DUT)
    void wbm_idle() {
        top->wbm_ack_i = 0;
        top->wbm_err_i = 0;
        top->wbm_dat_i = 0;
        eval(SETUP_TIME);
    }
    
    void wbm_respond_ack() {
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
    
    void wbm_respond_read(uint16_t data) {
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
    
    // DMA control
    void set_drq(int channel, bool state) {
        // Реализация зависит от DUT
        // Пример: top->drq_i[channel] = state;
    }
    
    // Utility functions
    bool is_base_addr(uint32_t addr) {
        return (addr & ADDR_MASK) == (BASE_ADDR & ADDR_MASK);
    }
    
    uint32_t calc_channel_offset(int channel) {
        return BASE_ADDR + (channel * 0x10);
    }
    
    void wait_cycles(int cycles) {
        for (int i = 0; i < cycles; i++) {
            clock_tick();
        }
    }
};

#endif