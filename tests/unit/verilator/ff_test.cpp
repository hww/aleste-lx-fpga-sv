#include "Vff_test.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>

int main(int argc, char** argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    
    // Create instance of our module
    Vff_test* top = new Vff_test;
    
    // Create VCD trace
    Verilated::traceEverOn(true);
    VerilatedVcdC* vcd = new VerilatedVcdC;
    top->trace(vcd, 99);
    vcd->open("ff_test.vcd");
    
    int time = 0;
    
    // Initialize signals
    top->clk = 0;
    top->rst = 1;
    top->ff1_in = 0;
    
    // Apply reset
    top->eval();
    vcd->dump(time++);
    
    // Release reset
    top->rst = 0;
    top->eval();
    vcd->dump(time++);
    
    // Тестовая последовательность как описано
    std::cout << "Starting test sequence..." << std::endl;
    
    top->ff1_in = 1 << 0; // Устанавливаем бит 0 в 1
    top->clk = 1;
    top->ff1_in = 1 << 1; // Устанавливаем бит 1 в 1
    top->eval();
    vcd->dump(time++);
    printf("[clk rise  ] ff1_out = 0x%02X ff2_out = 0x%02X (clk)\n", top->ff1_out, top->ff2_out);
    
    top->ff1_in = 1 << 2; // Устанавливаем бит 2 в 1
    top->eval();
    vcd->dump(time++);
    printf("[bit 2 rise] ff1_out = 0x%02X ff2_out = 0x%02X (clk)\n", top->ff1_out, top->ff2_out);  
        
    top->clk = 0;
    top->eval();
    vcd->dump(time++);
        
    top->clk = 1;
    top->eval();
    vcd->dump(time++);
    printf("[clk rise  ] ff1_out = 0x%02X ff2_out = 0x%02X (clk)\n", top->ff1_out, top->ff2_out);       
    
    top->clk = 0;
    top->eval();
    vcd->dump(time++);
        
    top->clk = 1;
    top->eval();
    vcd->dump(time++);
    printf("[clk rise  ] ff1_out = 0x%02X ff2_out = 0x%02X (clk)\n", top->ff1_out, top->ff2_out);        

    // Шаг 6: таймаут
    top->eval();
    vcd->dump(time++);
    
    // Cleanup
    vcd->close();
    delete top;
    delete vcd;
    
    std::cout << "Test completed. VCD file: ff_test.vcd" << std::endl;
    return 0;
}