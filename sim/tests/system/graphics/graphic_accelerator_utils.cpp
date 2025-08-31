#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vgraphic_accelerator_tb.h"
#include <iostream>
#include <cstdint>

class GraphicAcceleratorTest {
protected:
    Vgraphic_accelerator_tb* dut;
    VerilatedVcdC* tfp;
    vluint64_t main_time;
    
public:
    GraphicAcceleratorTest() : main_time(0) {
        Verilated::traceEverOn(true);
        dut = new Vgraphic_accelerator_tb;
        tfp = new VerilatedVcdC;
        dut->trace(tfp, 99);
        tfp->open("graphic_accelerator.vcd");
    }
    
    virtual ~GraphicAcceleratorTest() {
        tfp->close();
        delete dut;
        delete tfp;
    }
    
    virtual void tick() {
        dut->clk_i = 0;
        eval();
        dut->clk_i = 1;
        eval();
        main_time++;
    }
    
    virtual void eval() {
        dut->eval();
        tfp->dump(main_time);
    }
    
    virtual void reset() {
        dut->rst_i = 1;
        tick();
        dut->rst_i = 0;
        tick();
    }
    
    // Wishbone write with proper timing for Verilator
    virtual void wb_write(uint32_t addr, uint32_t data, uint8_t sel = 0xF) {
        // Setup phase (before clock edge)
        dut->wb_cyc_i = 1;
        dut->wb_stb_i = 1;
        dut->wb_we_i = 1;
        dut->wb_adr_i = addr;
        dut->wb_dat_i = data;
        dut->wb_sel_i = sel;
        
        // Wait for acknowledgment with proper timing
        int timeout = 100;
        while (!dut->wb_ack_o && timeout > 0) {
            tick();
            timeout--;
        }
        
        if (timeout == 0) {
            std::cerr << "WB write timeout at address 0x" << std::hex << addr << std::endl;
        }
        
        // Clear bus
        dut->wb_cyc_i = 0;
        dut->wb_stb_i = 0;
        dut->wb_we_i = 0;
        tick();
    }
    
    // Wishbone read with proper timing for Verilator
    virtual uint32_t wb_read(uint32_t addr, uint8_t sel = 0xF) {
        // Setup phase (before clock edge)
        dut->wb_cyc_i = 1;
        dut->wb_stb_i = 1;
        dut->wb_we_i = 0;
        dut->wb_adr_i = addr;
        dut->wb_sel_i = sel;
        
        // Wait for acknowledgment with proper timing
        int timeout = 100;
        while (!dut->wb_ack_o && timeout > 0) {
            tick();
            timeout--;
        }
        
        if (timeout == 0) {
            std::cerr << "WB read timeout at address 0x" << std::hex << addr << std::endl;
            return 0xFFFFFFFF;
        }
        
        uint32_t data = dut->wb_dat_o;
        
        // Clear bus
        dut->wb_cyc_i = 0;
        dut->wb_stb_i = 0;
        tick();
        
        return data;
    }
    
    // Simulate memory response for master interface
    virtual void simulate_memory_response(uint32_t data, bool ack = true, bool err = false) {
        dut->wbm_dat_i = data;
        dut->wbm_ack_i = ack;
        dut->wbm_err_i = err;
        tick();
        dut->wbm_ack_i = 0;
        dut->wbm_err_i = 0;
    }
};