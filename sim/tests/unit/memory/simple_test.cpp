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
    
    std::cout << "=== Simple SDRAM Test ===" << std::endl;
    
    for (int i = 0; i < 200; i++) {
        top->clk_sys = !top->clk_sys;
        
        if (i < 10) { 
            top->rst = 1; 
            top->locked = 0;
        } else if (i == 10) {
            top->rst = 0;
            top->locked = 1;
            std::cout << "Reset released" << std::endl;
        }
        
        // Простые тестовые операции
        if (i == 50) {
            top->host_wr_req = 1;
            top->host_addr = 0x1000;
            top->host_data_in = 0x1234;
        } else if (i == 51) {
            top->host_wr_req = 0;
        }
        
        top->eval();
        tfp->dump(main_time);
        main_time += 5;
    }
    
    tfp->close();
    delete top;
    delete tfp;
    
    std::cout << "Simple test completed" << std::endl;
    return 0;
}