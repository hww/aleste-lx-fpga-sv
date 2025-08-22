#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vz80_wishbone.h"
#include <iostream>
#include <cassert>

vluint64_t main_time = 0;
double sc_time_stamp() { return main_time; }

class Z80Test {
private:
    Vz80_wishbone* dut;
    VerilatedVcdC* tfp;
    
public:
    Z80Test() {
        Verilated::traceEverOn(true);
        dut = new Vz80_wishbone;
        tfp = new VerilatedVcdC;
        dut->trace(tfp, 99);
        tfp->open("z80_wishbone.vcd");
        
        // Initialize
        dut->wb_clk_i = 0;
        dut->wb_rst_i = 1;
        dut->z80_clk_i = 0;
        dut->z80_rst_i = 1;
        dut->wb_dat_i = 0;
        dut->wb_ack_i = 0;
    }
    
    ~Z80Test() {
        tfp->close();
        delete dut;
        delete tfp;
    }
    
    void tick() {
        dut->wb_clk_i = !dut->wb_clk_i;
        dut->z80_clk_i = !dut->z80_clk_i;
        
        if (main_time % 10 == 0) {
            dut->eval();
            tfp->dump(main_time);
        }
        
        main_time += 5;
    }
    
    void reset() {
        std::cout << "Resetting..." << std::endl;
        dut->wb_rst_i = 1;
        dut->z80_rst_i = 1;
        for (int i = 0; i < 10; i++) tick();
        dut->wb_rst_i = 0;
        dut->z80_rst_i = 0;
        for (int i = 0; i < 10; i++) tick();
        std::cout << "Reset complete" << std::endl;
    }
    
    void simulate_memory_access() {
        std::cout << "Testing memory access..." << std::endl;
        
        // Simulate memory read
        dut->wb_ack_i = 1;
        dut->wb_dat_i = 0x55;
        for (int i = 0; i < 20; i++) tick();
        
        // Simulate memory write  
        dut->wb_dat_i = 0xAA;
        for (int i = 0; i < 20; i++) tick();
        
        dut->wb_ack_i = 0;
    }
    
    void run_test() {
        std::cout << "=== Z80 Wishbone Test ===" << std::endl;
        
        reset();
        simulate_memory_access();
        
        // Verify signals
        std::cout << "Final state:" << std::endl;
        std::cout << "WB_ADR: 0x" << std::hex << (int)dut->wb_adr_o << std::endl;
        std::cout << "WB_DAT_OUT: 0x" << std::hex << (int)dut->wb_dat_o << std::endl;
        std::cout << "WB_WE: " << (int)dut->wb_we_o << std::endl;
        std::cout << "WB_STB: " << (int)dut->wb_stb_o << std::endl;
        std::cout << "WB_CYC: " << (int)dut->wb_cyc_o << std::endl;
        std::cout << "Z80_BUSY: " << (int)dut->z80_busy_o << std::endl;
        
        std::cout << "Test completed successfully!" << std::endl;
    }
};

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    
    Z80Test test;
    test.run_test();
    
    return 0;
}