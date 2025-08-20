#include <iostream>
#include <iomanip>
#include <verilated.h>
#include "Vtb_i8251.h"

void write_reg(Vtb_i8251* dut, bool is_control, uint8_t data) {
    dut->c_d = is_control ? 1 : 0;
    dut->data_in = data;
    dut->cs_n = 0;
    dut->wr_n = 0;
    dut->eval();
    
    dut->wr_n = 1;
    dut->cs_n = 1;
    dut->eval();
}

uint8_t read_reg(Vtb_i8251* dut, bool is_control) {
    dut->c_d = is_control ? 1 : 0;
    dut->cs_n = 0;
    dut->rd_n = 0;
    dut->eval();
    
    uint8_t data = dut->data_out;
    
    dut->rd_n = 1;
    dut->cs_n = 1;
    dut->eval();
    
    return data;
}

void clock_tick(Vtb_i8251* dut, int cycles) {
    for (int i = 0; i < cycles; i++) {
        dut->clk = 0;
        dut->eval();
        dut->clk = 1;
        dut->eval();
    }
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vtb_i8251* dut = new Vtb_i8251;
    
    // Инициализация
    dut->reset_n = 0;
    dut->clken = 1;
    dut->rx = 1;
    clock_tick(dut, 10);
    dut->reset_n = 1;
    clock_tick(dut, 10);
    
    std::cout << "[Info] Configuring UART..." << std::endl;
    write_reg(dut, true, 0x00); // 8N1, 1x
    write_reg(dut, true, 0x37); // TX/RX enable, reset errors
    
    // Проверка что TX включен
    uint8_t status = read_reg(dut, true);
    std::cout << "Status after enable: 0x" << std::hex << (int)status << std::endl;
    
    // Отправка данных
    std::cout << "[Info] Sending data: 0x55" << std::endl;
    write_reg(dut, false, 0x55);
    
    // Мониторинг передачи
    for (int i = 0; i < 100; i++) {
        dut->rx = dut->tx; // Loopback
        clock_tick(dut, 1);
        
        if (i < 20 || i % 10 == 0) {
            std::cout << "Cycle " << i << ": TX=" << (int)dut->tx << std::endl;
        }
        
        status = read_reg(dut, true);
        if (status & 0x02) { // RX ready
            uint8_t received = read_reg(dut, false);
            std::cout << "Received: 0x" << std::hex << (int)received << std::endl;
            break;
        }
    }
    
    delete dut;
    return 0;
}