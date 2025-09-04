#include <stdio.h>
#include <stdlib.h>
#include "Vtb_clk_gen.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

int main(int argc, char** argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    
    // Create instance of the module
    Vtb_clk_gen* top = new Vtb_clk_gen;
    
    // Create VCD trace
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("tb_clk_gen.vcd");
    
    // Initialize simulation
    top->clk25 = 0;
    top->rst = 1;
    
    // Run simulation
    for (int i = 0; i < 1000; i++) {
        // Toggle clock
        top->clk25 = !top->clk25;
        
        // Release reset after 5 cycles
        if (i == 10) top->rst = 0;
        
        // Evaluate model
        top->eval();
        
        // Dump waveforms
        tfp->dump(i);
        
        // Break if simulation finished
        if (Verilated::gotFinish()) break;
    }
    
    // Cleanup
    tfp->close();
    delete top;
    delete tfp;
    
    printf("Simulation completed successfully!\n");
    return 0;
}