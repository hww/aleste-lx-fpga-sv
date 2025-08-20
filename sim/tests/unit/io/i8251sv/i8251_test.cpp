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
    clock_tick(dut, 5);
    dut->reset_n = 1;
    clock_tick(dut, 5);
    
    std::cout << "[Info] Configuring UART for 1x baud rate..." << std::endl;
    write_reg(dut, true, 0x00); // 8N1, 1x
    
    std::cout << "[Info] Enabling TX/RX..." << std::endl;
    write_reg(dut, true, 0x37); // TX/RX enable, reset errors
    
    // Проверка статуса
    uint8_t status = read_reg(dut, true);
    std::cout << "Status after config: 0x" << std::hex << (int)status << std::endl;
    
    // Отправка данных
    std::cout << "[Info] Sending data: 0x55" << std::endl;
    write_reg(dut, false, 0x55);
    
    // Проверка статуса после отправки
    status = read_reg(dut, true);
    std::cout << "Status after write: 0x" << std::hex << (int)status << std::endl;
    
    // Детальный мониторинг
    std::cout << "[Info] Detailed monitoring (40 cycles):" << std::endl;
    for (int i = 0; i < 40; i++) {
        dut->rx = dut->tx; // Loopback
        clock_tick(dut, 1);
        
        std::cout << "Cycle " << std::dec << i << ": TX=" << (int)dut->tx 
                  << ", clken=" << (int)dut->clken
                  << std::endl;
        
        // Частая проверка статуса
        if (i % 5 == 0) {
            status = read_reg(dut, true);
            std::cout << "  Status: 0x" << std::hex << (int)status << std::endl;
        }
        
        if (status & 0x02) { // RX ready
            uint8_t received = read_reg(dut, false);
            std::cout << "Received: 0x" << std::hex << (int)received << std::endl;
            break;
        }
    }
    
    delete dut;
    return 0;
}
