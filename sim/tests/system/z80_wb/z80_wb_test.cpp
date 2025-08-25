#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vz80_wb_tb.h"

#define MAX_SIM_TIME 1000
vluint64_t sim_time = 0;

class Z80WBTest {
private:
    Vz80_wb_tb* dut;
    VerilatedVcdC* m_trace;
    bool tracing;
    
public:
    Z80WBTest(bool enable_trace = false) : tracing(enable_trace) {
        dut = new Vz80_wb_tb;
        
        if (tracing) {
            Verilated::traceEverOn(true);
            m_trace = new VerilatedVcdC;
            dut->trace(m_trace, 5);
            m_trace->open("waveform.vcd");
        }
        
        // Initialize all signals
        initialize();
    }
    
    ~Z80WBTest() {
        if (tracing) {
            m_trace->close();
            delete m_trace;
        }
        dut->final();
        delete dut;
    }
    
    void initialize() {
        dut->nRESET = 0;
        dut->nINT = 1;
        dut->nNMI = 1;
        dut->nBUSRQ = 1;
        dut->nWAIT = 1;
        dut->wb_ack_i = 0;
        dut->wb_dat_i = 0x00;
        dut->CLK = 0;
        dut->eval();
    }
    
    void posedge_clk() {
        dut->CLK = 1;
        dut->eval();
        if (tracing) m_trace->dump(sim_time++);
    }
    
    void negedge_clk() {
        dut->CLK = 0;
        dut->eval();
        if (tracing) m_trace->dump(sim_time++);
    }
    
    void cycle() {
        negedge_clk();
        posedge_clk();
    }
    
    void reset() {
        dut->nRESET = 0;
        for (int i = 0; i < 4; i++) cycle();
        dut->nRESET = 1;
    }
    
    void provide_nop() {
        if (dut->wb_cyc_o && dut->wb_stb_o && !dut->wb_we_o) {
            dut->wb_ack_i = 1;
            dut->wb_dat_i = 0x00; // NOP instruction
        } else {
            dut->wb_ack_i = 0;
        }
    }
    
    void provide_ld_instruction() {
        if (dut->wb_cyc_o && dut->wb_stb_o) {
            if (!dut->wb_we_o) { // Read cycle
                // Provide LD (HL),A instruction sequence: 0x77
                static vluint64_t last_addr = 0;
                if (dut->wb_adr_o != last_addr) {
                    dut->wb_dat_i = 0x77; // LD (HL),A
                    last_addr = dut->wb_adr_o;
                }
                dut->wb_ack_i = 1;
            } else { // Write cycle
                dut->wb_ack_i = 1;
            }
        } else {
            dut->wb_ack_i = 0;
        }
    }
    
    Vz80_wb_tb* get_dut() { return dut; }
};

void cpu_nop_test() {
    std::cout << "=== Starting CPU NOP Test ===" << std::endl;
    
    Z80WBTest test(true);
    test.reset();
    
    int nop_count = 0;
    bool instruction_fetched = false;
    
    for (int i = 0; i < 200; i++) {
        test.negedge_clk();
        test.provide_nop();
        test.posedge_clk();
        
        // Monitor for instruction fetches
        Vz80_wb_tb* dut = test.get_dut();
        if (dut->nM1 == 0 && dut->nMREQ == 0 && dut->nRD == 0) {
            if (!instruction_fetched) {
                std::cout << "First instruction fetch detected at address: 0x" 
                         << std::hex << dut->A << std::endl;
                instruction_fetched = true;
            }
            nop_count++;
        }
        
        if (nop_count >= 3) {
            std::cout << "Success: CPU executed " << nop_count << " NOP instructions" << std::endl;
            break;
        }
    }
    
    if (nop_count < 3) {
        std::cout << "Error: Expected at least 3 NOP executions, got " << nop_count << std::endl;
    }
    
    std::cout << "=== CPU NOP Test Completed ===" << std::endl << std::endl;
}

void cpu_write_test() {
    std::cout << "=== Starting CPU Write Test ===" << std::endl;
    
    Z80WBTest test(true);
    test.reset();
    
    bool instruction_fetched = false;
    bool write_detected = false;
    uint8_t written_data = 0;
    uint32_t write_address = 0;
    
    // Simulate for enough cycles to fetch and execute LD (HL),A
    for (int i = 0; i < 300; i++) {
        test.negedge_clk();
        test.provide_ld_instruction();
        test.posedge_clk();
        
        Vz80_wb_tb* dut = test.get_dut();
        
        // Check for instruction fetch
        if (dut->nM1 == 0 && dut->nMREQ == 0 && !dut->wb_we_o) {
            if (!instruction_fetched) {
                std::cout << "Instruction fetch detected" << std::endl;
                instruction_fetched = true;
            }
        }
        
        // Check for write operation on Wishbone
        if (dut->wb_cyc_o && dut->wb_stb_o && dut->wb_we_o) {
            write_detected = true;
            written_data = dut->wb_dat_o;
            write_address = dut->wb_adr_o;
            std::cout << "Write detected: data=0x" << std::hex << (int)written_data 
                     << " to address=0x" << write_address << std::endl;
            break;
        }
    }
    
    if (write_detected) {
        std::cout << "Success: Write operation completed successfully" << std::endl;
        std::cout << "Data: 0x" << std::hex << (int)written_data 
                 << " written to address: 0x" << write_address << std::endl;
    } else {
        std::cout << "Error: No write operation detected" << std::endl;
    }
    
    std::cout << "=== CPU Write Test Completed ===" << std::endl << std::endl;
}

int main(int argc, char** argv, char** env) {
    Verilated::commandArgs(argc, argv);
    
    std::cout << "Z80 Wishbone Wrapper Test Suite" << std::endl;
    std::cout << "=================================" << std::endl;
    
    // Run NOP test
    cpu_nop_test();
    
    // Run write test
    cpu_write_test();
    
    std::cout << "All tests completed!" << std::endl;
    return 0;
}