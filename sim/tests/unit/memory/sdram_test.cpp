#include <verilated.h>
#include <verilated_fst_c.h>
#include "Vtb_sdram_controller.h"
#include <iostream>
#include <cstdlib>
#include <cstdio>

vluint64_t main_time = 0;
double sc_time_stamp() {
    return main_time;
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    
    Vtb_sdram_controller* top = new Vtb_sdram_controller;
    VerilatedFstC* tfp = new VerilatedFstC;
    
    // Открытие файла трассировки
    top->trace(tfp, 99);
    tfp->open("sdram_controller.vcd");
    
    // Инициализация
    top->clk_sys = 0;
    top->rst = 1;
    top->locked = 0;
    top->host_wr_req = 0;
    top->host_rd_req = 0;
    top->host_addr = 0;
    top->host_data_in = 0;
    
    std::cout << "Starting SDRAM Controller Test..." << std::endl;
    
    // Основной цикл симуляции
    for (int i = 0; i < 1000; i++) {
        // Тактирование
        top->clk_sys = !top->clk_sys;
        
        // Сброс в начале
        if (i < 10) {
            top->rst = 1;
            top->locked = 0;
        } else if (i == 10) {
            top->rst = 0;
            top->locked = 1;
            std::cout << "Reset released, PLL locked" << std::endl;
        }
        
        // Тестовые операции
        if (i == 50) {
            // Запись данных
            top->host_wr_req = 1;
            top->host_addr = 0x123456;
            top->host_data_in = 0xABCD;
            std::cout << "Write request: addr=0x" << std::hex << top->host_addr 
                      << ", data=0x" << top->host_data_in << std::endl;
        } else if (i == 51) {
            top->host_wr_req = 0;
        }
        
        if (i == 100) {
            // Чтение данных
            top->host_rd_req = 1;
            top->host_addr = 0x123456;
            std::cout << "Read request: addr=0x" << std::hex << top->host_addr << std::endl;
        } else if (i == 101) {
            top->host_rd_req = 0;
        }
        
        // Вычисление
        top->eval();
        
        // Запись в трассировку
        tfp->dump(main_time);
        main_time += 5; // 100MHz clock
        
        // Проверка результатов
        if (top->host_rd_valid) {
            std::cout << "Read valid: data=0x" << std::hex << top->host_data_out 
                      << " at time " << main_time << std::endl;
        }
        
        if (top->host_busy) {
            // std::cout << "Controller is busy" << std::endl;
        }
        
        // Проверка SDRAM сигналов
        if (i % 100 == 0 && i > 20) {
            std::cout << "SDRAM signals: "
                      << "CKE=" << (int)top->sdram_cke
                      << ", CS_N=" << (int)top->sdram_cs_n
                      << ", RAS_N=" << (int)top->sdram_ras_n
                      << ", CAS_N=" << (int)top->sdram_cas_n
                      << ", WE_N=" << (int)top->sdram_we_n
                      << std::endl;
        }
    }
    
    std::cout << "Test completed after " << main_time << " time units" << std::endl;
    
    // Завершение
    tfp->close();
    top->final();
    delete top;
    delete tfp;
    
    return 0;
}