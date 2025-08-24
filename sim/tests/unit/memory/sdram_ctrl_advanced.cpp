#include "Vsdram_ctrl_advanced_tb.h"
#include <verilated.h>
#include <verilated_vcd_c.h>
#include <iostream>
#include <cassert>
#include <vector>

vluint64_t main_time = 0;
double sc_time_stamp() { return main_time; }
const int STATE_IDLE       = 0;
const int STATE_ACTIVATE   = 1;
const int STATE_READ       = 2;
const int STATE_READ2      = 3;
const int STATE_READ3      = 4;
const int STATE_WRITE      = 5;
const int STATE_PRECHARGE  = 6;
const int STATE_REFRESH    = 7;
const int STATE_INIT       = 8;
const int STATE_REFRESH_WAIT = 9; 

// Простая модель SDRAM для Verilator
class SDRAMModel {
private:
    std::vector<uint16_t> memory;
    uint32_t capacity;



public:
    SDRAMModel(uint32_t size_mb = 8) : capacity(size_mb * 1024 * 1024 / 2) {
        memory.resize(capacity, 0x0000);
    }
    
    uint16_t read(uint32_t address) {
        if (address < capacity) {
            return memory[address];
        }
        return 0xFFFF;
    }
    
    void write(uint32_t address, uint16_t data) {
        if (address < capacity) {
            memory[address] = data;
        }
    }
    
    uint32_t get_capacity() const { return capacity; }
};

// Добавляем в начало файла, после includes
int verbosity = 0; // 0 = minimal, 1 = normal, 2 = verbose, 3 = debug

void print_controller_state(Vsdram_ctrl_advanced_tb* dut) {
    static int last_state = -1;

    // Выводим только при изменении состояния или в verbose режиме
    if (dut->debug_state != last_state || verbosity >= 2) {
        if (verbosity >= 1) { // normal и выше
            std::cout << "[CPCTRL] TIME " << main_time << ": ";
            std::cout << "STATE=" << (int)dut->debug_state << " | ";
            
            switch(dut->debug_state) {
                case STATE_INIT:        std::cout << "INIT       "; break;
                case STATE_IDLE:        std::cout << "IDLE       "; break;
                case STATE_ACTIVATE:    std::cout << "ACTIVATE   "; break;
                case STATE_WRITE:       std::cout << "WRITE      "; break;
                case STATE_READ:        std::cout << "READ1      "; break;
                case STATE_READ2:       std::cout << "READ2      "; break;
                case STATE_READ3:       std::cout << "READ3      "; break;
                case STATE_PRECHARGE:   std::cout << "PRECHARGE  "; break;
                case STATE_REFRESH:     std::cout << "REFRESH    "; break;
                case STATE_REFRESH_WAIT: std::cout << "STATE_REFRESH_WAIT    "; break;
                default: std::cout << "UNKNOWN(" << (int)dut->debug_state << ")"; break;
            }
            
            if (verbosity >= 2) { // verbose и debug
                std::cout << " | WB: CYC=" << (int)dut->wb_cyc_i 
                          << " STB=" << (int)dut->wb_stb_i 
                          << " ACK=" << (int)dut->wb_ack_o
                          << " WE=" << (int)dut->wb_we_i;
                
                std::cout << " | ADDR=0x" << std::hex << dut->wb_adr_i
                          << " DAT_I=0x" << dut->wb_dat_i
                          << " DAT_O=0x" << dut->wb_dat_o;
            }
            
            std::cout << std::endl;
        }
        last_state = dut->debug_state;
    }
}

void print_sdram_command(Vsdram_ctrl_advanced_tb* dut) {
    static int last_cmd = -1;
    int current_cmd = (dut->sdram_cs_n << 3) | (dut->sdram_ras_n << 2) | 
                     (dut->sdram_cas_n << 1) | (dut->sdram_we_n);
    
    if ((current_cmd != last_cmd || verbosity >= 2) && dut->sdram_cke) {
        if (verbosity >= 2) { // только в verbose режиме
            std::cout << "[CPSDRAM] TIME " << main_time << ": SDRAM_CMD: ";
            
            if (dut->sdram_cs_n) {
                std::cout << "DESELECT";
            } else {
                if (!dut->sdram_ras_n && !dut->sdram_cas_n && !dut->sdram_we_n) {
                    std::cout << "MODE_REG_SET";
                }
                else if (!dut->sdram_ras_n && !dut->sdram_cas_n && dut->sdram_we_n) {
                    std::cout << "AUTO_REFRESH";
                }
                else if (!dut->sdram_ras_n && dut->sdram_cas_n && !dut->sdram_we_n) {
                    std::cout << "PRECHARGE";
                }
                else if (!dut->sdram_ras_n && dut->sdram_cas_n && dut->sdram_we_n) {
                    std::cout << "ACTIVATE";
                    std::cout << " BA=" << (int)dut->sdram_ba;
                    std::cout << " ROW=0x" << std::hex << dut->sdram_addr;
                }
                else if (dut->sdram_ras_n && !dut->sdram_cas_n && !dut->sdram_we_n) {
                    std::cout << "WRITE";
                    std::cout << " BA=" << (int)dut->sdram_ba;
                    std::cout << " COL=0x" << std::hex << (dut->sdram_addr & 0x3FF);
                }
                else if (dut->sdram_ras_n && !dut->sdram_cas_n && dut->sdram_we_n) {
                    std::cout << "READ";
                    std::cout << " BA=" << (int)dut->sdram_ba;
                    std::cout << " COL=0x" << std::hex << (dut->sdram_addr & 0x3FF);
                }
                else {
                    std::cout << "NOP";
                }
            }
            
            std::cout << std::endl;
        }
        last_cmd = current_cmd;
    }
}

class SDRAMTest {
private:
    Vsdram_ctrl_advanced_tb* dut;
    VerilatedVcdC* tfp;
    vluint64_t time;
    SDRAMModel sdram_model;
    const std::string logFile = "sdram_ctrl_advanced.vcd";

public:
    SDRAMTest() : time(0), sdram_model(8) {
        Verilated::traceEverOn(true);
        dut = new Vsdram_ctrl_advanced_tb;
        tfp = new VerilatedVcdC;
        dut->trace(tfp, 99);
        tfp->open(logFile.c_str());
        
        // Initialize - FIXED: Use correct signal names
        // Check your Verilog module for actual clock and reset signal names
        // They might be something like: clk_i, rst_i, or just clk, rst
        dut->clk_i = 0;        // Changed from wb_clk_i
        dut->rst_i = 1;        // Changed from wb_rst_i
        dut->wb_cyc_i = 0;
        dut->wb_stb_i = 0;
        dut->wb_we_i = 0;
        dut->wb_adr_i = 0;
        dut->wb_dat_i = 0;
        dut->wb_sel_i = 3;
    }
    
    ~SDRAMTest() {
        tfp->close();
        delete dut;
        delete tfp;
    }
    
    void tick() {
        dut->clk_i = 0;        // Changed from wb_clk_i
        dut->eval();
        tfp->dump(main_time);
        main_time += 5;
        
        dut->clk_i = 1;        // Changed from wb_clk_i
        dut->eval();
        print_controller_state(dut);
        print_sdram_command(dut);
        tfp->dump(main_time);
        main_time += 5;
        
        time += 10;
    }
    
    // Add this method to handle multiple ticks
    void tick(int cycles) {
        for (int i = 0; i < cycles; i++) {
            tick();
        }
    }
    
    void reset() {
        std::cout << "[CPP] Resetting controller..." << std::endl;
        dut->rst_i = 1;        // Changed from wb_rst_i
        for (int i = 0; i < 10; i++) tick();
        dut->rst_i = 0;        // Changed from wb_rst_i
        std::cout << "[CPP] Reset complete" << std::endl;
    }
    
    bool wait_for_state(int target_state, int max_cycles = 1000) {
        for (int i = 0; i < max_cycles; i++) {
            if (dut->debug_state == target_state) return true;
            tick();
        }
        return false;
    }
    
    bool wait_for_ack(int max_cycles = 200) {
        for (int i = 0; i < max_cycles; i++) {
            if (dut->wb_ack_o) return true;
            tick();
        }
        return false;
    }

    bool write(uint32_t addr, uint16_t data) {
        if (verbosity >= 1) {
            std::cout << "[CPP] WRITE: 0x" << std::hex << addr << " = 0x" << data << std::endl;
        }
        
        dut->wb_cyc_i = 1;
        dut->wb_stb_i = 1;
        dut->wb_we_i = 1;
        dut->wb_adr_i = addr;
        dut->wb_dat_i = data;
        
        if (!wait_for_ack()) {
            std::cout << "[CPP] [ERROR] WRITE: timeout" << std::endl;
            dut->wb_cyc_i = 0;
            dut->wb_stb_i = 0;
            return false;
        }
        
        tick();
        dut->wb_cyc_i = 0;
        dut->wb_stb_i = 0;
        
        return true;
    }
        
    uint16_t read(uint32_t addr) {
        if (verbosity >= 1) {
            std::cout << "[CPP] READ: 0x" << std::hex << addr << std::endl;
        }
        
        dut->wb_cyc_i = 1;
        dut->wb_stb_i = 1;
        dut->wb_we_i = 0;
        dut->wb_adr_i = addr;
        
        if (!wait_for_ack()) {
            std::cout << "[CPP] [ERROR] READ: timeout" << std::endl;
            dut->wb_cyc_i = 0;
            dut->wb_stb_i = 0;
            return 0xFFFF;
        }
        
        uint16_t data = dut->wb_dat_o;
        tick();
        dut->wb_cyc_i = 0;
        dut->wb_stb_i = 0;
        
        if (verbosity >= 1) {
            std::cout << "[CPP] READ: 0x" << std::hex << addr << " = 0x" << data << std::endl;
        }
        return data;
    }
    
    void run_memory_test() {
        std::cout << "\n[CPP] === Memory Test Pattern ===" << std::endl;
        
        // Test pattern 1: Sequential
        std::cout << "\n[MEM1] 1. Sequential write/read test..." << std::endl;
        for (int i = 0; i < 16; i++) {
            uint32_t addr = i * 0x100;
            uint16_t data = 0xA000 + i;
            
            if (write(addr, data)) {
                uint16_t result = read(addr);
                if (result != data) {
                    std::cout << "[CPP] [ERROR] MEMTST 1: read at 0x" << std::hex << addr 
                              << ": expected 0x" << data << ", got 0x" << result << std::endl;
                }
            }
            tick(10);
        }
        
        // Test pattern 2: Random data
        std::cout << "\n[CPP] 2. Random data test..." << std::endl;
        uint16_t test_pattern[] = {0x0000, 0xFFFF, 0x5555, 0xAAAA, 0x1234, 0x5678};
        
        for (int i = 0; i < sizeof(test_pattern)/sizeof(test_pattern[0]); i++) {
            uint32_t addr = 0x1000 + i * 0x100;
            if (write(addr, test_pattern[i])) {
                uint16_t result = read(addr);
                if (result != test_pattern[i]) {
                    std::cout << "[CPP] [ERROR] MEMTST 2: pattern 0x" << std::hex << test_pattern[i]
                              << " mismatch at 0x" << addr << std::endl;
                }
            }
            tick(10);
        }
        
        // Test pattern 3: Different banks
        std::cout << "\n[CPP] 3. Bank switching test..." << std::endl;
        for (int bank = 0; bank < 4; bank++) {
            uint32_t addr = bank * 0x4000; // Different banks
            uint16_t data = 0xB000 + bank;
            
            if (write(addr, data)) {
                uint16_t result = read(addr);
                if (result != data) {
                    std::cout << "[CPP] [ERROR] MEMTST 3: in bank " << bank << ": expected 0x" 
                              << data << ", got 0x" << result << std::endl;
                }
            }
            tick(20);
        }
    }
    
    void run_performance_test() {
        std::cout << "\n[CPP] === Performance Test ===" << std::endl;
        
        const int NUM_OPS = 100;
        vluint64_t start_time = time;
        
        for (int i = 0; i < NUM_OPS; i++) {
            uint32_t addr = 0x2000 + i * 4;
            uint16_t data = 0xC000 + i;
            write(addr, data);
        }
        
        vluint64_t end_time = time;
        vluint64_t total_time = end_time - start_time;
        double time_per_op = (double)total_time / NUM_OPS;
        
        std::cout << "[CPP] Performance: " << NUM_OPS << " operations in " 
                  << total_time << " cycles" << std::endl;
        std::cout << "[CPP] Time per operation: " << time_per_op << " cycles" << std::endl;
    }
    
    void run_stress_test() {
        std::cout << "\n[CPP] === Stress Test ===" << std::endl;
        
        // Rapid fire operations
        for (int i = 0; i < 50; i++) {
            uint32_t addr = 0x3000 + (i % 16) * 0x100;
            uint16_t data = 0xD000 + i;
            
            write(addr, data);
            uint16_t result = read(addr);
            
            if (result != data) {
                std::cout << "[CPP] [ERROR] STRESS TEST: 0x" << std::hex << addr 
                          << " expected 0x" << data << " got 0x" << result << std::endl;
            }
            
            if (i % 10 == 0) {
                tick(50); // Add some delay occasionally
            }
        }
    }
    
    void run_comprehensive_test() {
        std::cout << "[CPP] === SDRAM WB Controller Comprehensive Test ===" << std::endl;
        
        reset();
        
        // Wait for initialization
        std::cout << "[CPP] Waiting for SDRAM initialization..." << std::endl;
        if (!wait_for_state(STATE_IDLE, 2000)) { // Wait for IDLE state
            std::cout << "[CPP] [ERROR] Initialization timeout!" << std::endl;
            return;
        }
        std::cout << "[CPP] SDRAM initialized successfully" << std::endl;
        
        // Run all tests
        run_memory_test();
        run_performance_test();
        run_stress_test();
        
        std::cout << "\n[CPP] === Test Complete ===" << std::endl;
        std::cout << "[CPP] Total simulation time: " << time << " cycles" << std::endl;
        std::cout << "[CPP] VCD trace saved to: " << logFile << std::endl;
    }
};

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::debug(0);
    
    // Обработка аргументов вербозности
    for (int i = 1; i < argc; i++) {
        if (std::string(argv[i]) == "-v") {
            verbosity = 1;
        } else if (std::string(argv[i]) == "-vv") {
            verbosity = 2;
        } else if (std::string(argv[i]) == "-vvv") {
            verbosity = 3;
        }
    }
    
    if (verbosity >= 1) {
        std::cout << "[CPP] Starting SDRAM WB Controller Test..." << std::endl;
        std::cout << "[CPP] Verbosity level: " << verbosity << std::endl;
    }
    
    SDRAMTest test;
    test.run_comprehensive_test();
    
    if (verbosity >= 1) {
        std::cout << "[CPP] Test finished." << std::endl;
    }
    return 0;
}