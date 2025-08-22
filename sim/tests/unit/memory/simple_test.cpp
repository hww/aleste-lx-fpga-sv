#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vsdram_controller.h"
#include <iostream>

vluint64_t main_time = 0;
double sc_time_stamp() { return main_time; }

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    
    Vsdram_controller* top = new Vsdram_controller;
    VerilatedVcdC* tfp = new VerilatedVcdC;
    
    top->trace(tfp, 99);
    tfp->open("sdram_simple.vcd");
    
    // Инициализация
    top->clk_sys = 0;
    top->rst = 1;
    top->locked = 0;
    
    std::cout << "=== SDRAM Controller Initialization Test ===" << std::endl;
    
    for (int i = 0; i < 25000; i++) {
        top->clk_sys = !top->clk_sys;
        
        // Сброс и включение PLL
        if (i < 10) {
            top->rst = 1;
            top->locked = 0;
        } else if (i == 10) {
            top->rst = 0;
            top->locked = 1;
            std::cout << "rst released, PLL locked" << std::endl;
        }
        
        // Мониторинг состояния каждые 100 тактов
        if (i % 100 == 0 && i > 20) {
            std::cout << "Time " << main_time << ": "
                      << "CKE=" << (int)top->sdram_cke
                      << ", CS_N=" << (int)top->sdram_cs_n
                      << ", BUSY=" << (int)top->host_busy
                      << ", RAS_N=" << (int)top->sdram_ras_n
                      << ", CAS_N=" << (int)top->sdram_cas_n
                      << ", WE_N=" << (int)top->sdram_we_n
                      << std::endl;
        }
        
        // Проверка завершения инициализации
        if (i > 1000 && !top->host_busy && top->sdram_cke) {
            std::cout << "✓ Initialization completed at time " << main_time << std::endl;
            break;
        }
        
        // Таймаут
        if (i == 24999) {
            std::cout << "✗ TIMEOUT: Initialization failed" << std::endl;
            std::cout << "Final state: CKE=" << (int)top->sdram_cke
                      << ", CS_N=" << (int)top->sdram_cs_n
                      << ", BUSY=" << (int)top->host_busy
                      << std::endl;
        }
        
        top->eval();
        tfp->dump(main_time);
        main_time += 5;
    }
    
    tfp->close();
    delete top;
    delete tfp;
    
    return 0;
}