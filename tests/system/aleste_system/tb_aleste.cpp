#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Valeste_system.h"

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    
    Valeste_system* top = new Valeste_system;
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("waveform.vcd");
    
    // Инициализация
    top->clk_25mhz = 0;
    top->serial_rx = 1;  // Idle state
    
    // ДОБАВЬТЕ ЭТО: Даем время на внутренний сброс
    printf("=== PHASE 1: Initialization (1000 cycles) ===\n");
    for (int i = 0; i < 1000; i++) {
        top->clk_25mhz = !top->clk_25mhz;
        top->eval();
        tfp->dump(i * 20);
    }
    
    printf("=== PHASE 2: Main Simulation ===\n");
    
    // Основной цикл
    for (int cycle = 1000; cycle < 10000; cycle++) {
        top->clk_25mhz = !top->clk_25mhz;
        top->eval();
        tfp->dump(cycle * 20);
        
        if (cycle % 500 == 0) {
            printf("Cycle %5d: LEDs=%d Debug=0x%02x\n", 
                   cycle, top->debug_leds, top->debug);
        }
    }
    
    printf("Simulation finished\n");
    
    tfp->close();
    delete tfp;
    delete top;
    
    return 0;
}