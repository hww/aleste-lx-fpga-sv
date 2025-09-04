#ifndef WB_PIC_TEST_UTILS_H
#define WB_PIC_TEST_UTILS_H

#include "../../../../verilator/common/utils/wb_test_base.h"
#include "Vwb_z80_pic_tb.h"
#include <iostream>

class PicTestUtils : public WbTestBase {
private:
    Vwb_z80_pic_tb* top;
    
public:
    PicTestUtils(Vwb_z80_pic_tb* top_ptr, vluint64_t& time_var, VerilatedVcdC* trace_ptr = nullptr)
        : WbTestBase(time_var, trace_ptr), top(top_ptr) {}
    
    void set_clock(int value) {
        top->wb_clk_i = value;
        eval(SETUP_TIME);
    }
    
    void set_reset(int value) {
        top->wb_rst_i = value;
        eval(SETUP_TIME);
    }
    
    void wb_idle() {
        top->wb_adr_i = 0;
        top->wb_dat_i = 0;
        top->wb_we_i = 0;
        top->wb_stb_i = 0;
        top->wb_cyc_i = 0;
        eval(SETUP_TIME);
    }
    
    void write_reg(uint8_t addr, uint8_t data) {
        // Устанавливаем сигналы
        top->wb_adr_i = addr;
        top->wb_dat_i = data;
        top->wb_we_i = 1;
        top->wb_stb_i = 1;
        top->wb_cyc_i = 1;
        eval(SETUP_TIME);
        
        // Ждем ACK
        int timeout = 10;
        while (!top->wb_ack_o && timeout-- > 0) {
            clock_tick();
        }
        
        if (timeout <= 0) {
            std::cout << "WB write timeout at addr: 0x" << std::hex << (int)addr << std::endl;
        }
        
        // Завершаем транзакцию
        wb_idle();
        eval(SETUP_TIME);
    }
    
    uint8_t read_reg(uint8_t addr) {
        // Устанавливаем сигналы
        top->wb_adr_i = addr;
        top->wb_we_i = 0;
        top->wb_stb_i = 1;
        top->wb_cyc_i = 1;
        eval(SETUP_TIME);
        
        // Ждем ACK
        int timeout = 10;
        while (!top->wb_ack_o && timeout-- > 0) {
            clock_tick();
        }
        
        if (timeout <= 0) {
            std::cout << "WB read timeout at addr: 0x" << std::hex << (int)addr << std::endl;
        }
        
        uint8_t data = top->wb_dat_o;
        
        // Завершаем транзакцию
        wb_idle();
        eval(SETUP_TIME);
        
        return data;
    }
    
    void set_irq(uint8_t irq_mask) {
        top->irq_i = irq_mask;
        eval(SETUP_TIME);
    }
    
    void clear_irq(uint8_t irq_mask) {
        top->irq_i &= ~irq_mask;
        eval(SETUP_TIME);
    }
    
    void int_ack() {
        top->int_ack_i = 1;
        eval(SETUP_TIME);
        top->int_ack_i = 0;
        eval(SETUP_TIME);
    }
    
    bool int_requested() {
        return top->int_req_o;
    }
    
    bool wb_selected() {
        return top->wb_sel_o;
    }
};

#endif