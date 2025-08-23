#include "Vtb_sdram_wb_controller.h"
#include <verilated.h>
#include <verilated_vcd_c.h>
#include <iostream>
#include <cassert>

vluint64_t main_time = 0;
double sc_time_stamp() { return main_time; }

void print_controller_state(Vtb_sdram_wb_controller* dut) {
    static int last_state = -1;
    
    // Печатаем только при изменении состояния
    if (dut->debug_state != last_state) {
        std::cout << "TIME " << main_time << ": ";
        std::cout << "STATE=" << (int)dut->debug_state << " | ";
        
        // Расшифровка состояния
        switch(dut->debug_state) {
            case 0: std::cout << "INIT       "; break;
            case 1: std::cout << "IDLE       "; break;
            case 2: std::cout << "ACTIVATE   "; break;
            case 3: std::cout << "WRITE      "; break;
            case 4: std::cout << "READ       "; break;
            case 5: std::cout << "PRECHARGE  "; break;
            case 6: std::cout << "REFRESH    "; break;
            default: std::cout << "UNKNOWN(" << (int)dut->debug_state << ")"; break;
        }
        
        // Wishbone сигналы
        std::cout << " | WB: CYC=" << (int)dut->wb_cyc_i 
                  << " STB=" << (int)dut->wb_stb_i 
                  << " ACK=" << (int)dut->wb_ack_o
                  << " WE=" << (int)dut->wb_we_i;
        
        // Адрес и данные
        std::cout << " | ADDR=0x" << std::hex << dut->wb_adr_i
                  << " DAT_I=0x" << dut->wb_dat_i
                  << " DAT_O=0x" << dut->wb_dat_o;
        
        // SDRAM управляющие сигналы
        std::cout << " | SDRAM: CS=" << (int)dut->sdram_cs_n
                  << " RAS=" << (int)dut->sdram_ras_n
                  << " CAS=" << (int)dut->sdram_cas_n
                  << " WE=" << (int)dut->sdram_we_n;
        
        // Bank и адрес
        std::cout << " | BA=0x" << (int)dut->sdram_ba
                  << " SADDR=0x" << std::hex << dut->sdram_addr;
        
        // Шина данных
        std::cout << " | DQ=0x" << std::hex << dut->sdram_dq
                  << " DQ_OE=" << (int)dut->sdram_dq_oe
                  << " DQML=" << (int)dut->sdram_dqml
                  << " DQMH=" << (int)dut->sdram_dqmh;
        
        std::cout << std::endl;
        last_state = dut->debug_state;
    }
}
void print_sdram_command(Vtb_sdram_wb_controller* dut) {
    static int last_cmd = -1;
    int current_cmd = (dut->sdram_cs_n << 3) | (dut->sdram_ras_n << 2) | 
                     (dut->sdram_cas_n << 1) | (dut->sdram_we_n);
    
    // Печатаем только при изменении команды
    if (current_cmd != last_cmd && dut->sdram_cke) {
        std::cout << "TIME " << main_time << ": SDRAM_CMD: ";
        
        // Расшифровка команды
        if (dut->sdram_cs_n) {
            std::cout << "DESELECT";
        } else {
            if (!dut->sdram_ras_n && !dut->sdram_cas_n && !dut->sdram_we_n) {
                std::cout << "MODE_REG_SET";
                std::cout << " MR=0x" << std::hex << ((dut->sdram_ba << 13) | dut->sdram_addr);
            }
            else if (!dut->sdram_ras_n && !dut->sdram_cas_n && dut->sdram_we_n) {
                std::cout << "AUTO_REFRESH";
            }
            else if (!dut->sdram_ras_n && dut->sdram_cas_n && !dut->sdram_we_n) {
                std::cout << "PRECHARGE";
                std::cout << " ALL=" << (dut->sdram_addr & 1<<10 ? "YES" : "NO");
            }
            else if (!dut->sdram_ras_n && dut->sdram_cas_n && dut->sdram_we_n) {
                std::cout << "ACTIVATE";
                std::cout << " BA=0x" << (int)dut->sdram_ba;
                std::cout << " ROW=0x" << std::hex << dut->sdram_addr;
            }
            else if (dut->sdram_ras_n && !dut->sdram_cas_n && !dut->sdram_we_n) {
                std::cout << "WRITE";
                std::cout << " BA=0x" << (int)dut->sdram_ba;
                std::cout << " COL=0x" << std::hex << dut->sdram_addr;
                std::cout << " DATA=0x" << dut->sdram_dq;
                std::cout << " OE=" << (int)dut->sdram_dq_oe;
            }
            else if (dut->sdram_ras_n && !dut->sdram_cas_n && dut->sdram_we_n) {
                std::cout << "READ";
                std::cout << " BA=0x" << (int)dut->sdram_ba;
                std::cout << " COL=0x" << std::hex << dut->sdram_addr;
            }
            else {
                std::cout << "NOP";
            }
        }
        
        // Дополнительная информация
        std::cout << " | CKE=" << (int)dut->sdram_cke;
        std::cout << " | DQ=0x" << std::hex << dut->sdram_dq;
        std::cout << " | DQ_OE=" << (int)dut->sdram_dq_oe;
        
        if (dut->sdram_dq_oe) {
            std::cout << " (CONTROLLER -> SDRAM)";
        } else {
            std::cout << " (SDRAM -> CONTROLLER)";
        }
        
        std::cout << std::endl;
        last_cmd = current_cmd;
    }
}
void analyze_address(uint32_t wb_addr) {
    std::cout << "ADDR_ANALYSIS: WB=0x" << std::hex << wb_addr << " -> ";
    std::cout << "BANK=" << ((wb_addr >> 13) & 0x3);
    std::cout << ", ROW=" << ((wb_addr >> 2) & 0x1FFF); 
    std::cout << ", COL=" << (wb_addr & 0x3FF);
    std::cout << std::endl;
}
class SDRAMTest {
private:
    Vtb_sdram_wb_controller* dut;
    VerilatedVcdC* tfp;
    vluint64_t time;
    
public:
    SDRAMTest() : time(0) {
        Verilated::traceEverOn(true);
        dut = new Vtb_sdram_wb_controller;
        tfp = new VerilatedVcdC;
        dut->trace(tfp, 99);
        tfp->open("sdram_advanced.vcd");
        
        // Initialize with correct signals
        dut->clk = 0;
        dut->rst = 1;
        
        // Initialize Wishbone signals
        dut->wb_cyc_i = 0;
        dut->wb_stb_i = 0;
        dut->wb_we_i = 0;
        dut->wb_adr_i = 0;
        dut->wb_dat_i = 0;
        dut->wb_sel_i = 0;
    }
    
    ~SDRAMTest() {
        tfp->close();
        delete dut;
        delete tfp;
    }
    
    void tick(int cycles = 1) {
        for (int i = 0; i < cycles; i++) {
            dut->clk = 0;
            dut->eval();
            print_controller_state(dut);    // ← Добавить здесь
            print_sdram_command(dut);       // ← Добавить здесь
            tfp->dump(main_time);
            main_time += 5;
            
            dut->clk = 1;
            dut->eval();
            print_controller_state(dut);    // ← Добавить здесь
            print_sdram_command(dut);       // ← Добавить здесь
            tfp->dump(main_time);
            main_time += 5;
            
            time += 10;
        }
    }
    
    void reset() {
        std::cout << "Resetting..." << std::endl;
        dut->rst = 1;
        tick(10);
        dut->rst = 0;
        tick(5);
        std::cout << "Reset complete" << std::endl;
    }
    
    bool wait_for_ack(int max_cycles = 100) {
        for (int i = 0; i < max_cycles; i++) {
            if (dut->wb_ack_o) return true;
            tick();
        }
        return false;
    }
    
    bool write(uint32_t addr, uint16_t data) {
        std::cout << "WRITE: addr=0x" << std::hex << addr 
                  << ", data=0x" << data << std::endl;
        analyze_address(addr);
        // Setup Wishbone transaction
        dut->wb_cyc_i = 1;
        dut->wb_stb_i = 1;
        dut->wb_we_i = 1;
        dut->wb_adr_i = addr;
        dut->wb_dat_i = data;
        dut->wb_sel_i = 3; // Both bytes selected
        
        // Wait for acknowledgment
        if (!wait_for_ack(200)) {
            std::cout << "✗ Write timeout - no ACK received" << std::endl;
            dut->wb_cyc_i = 0;
            dut->wb_stb_i = 0;
            return false;
        }
        
        // Complete transaction
        tick();
        dut->wb_cyc_i = 0;
        dut->wb_stb_i = 0;
        
        std::cout << "✓ Write completed successfully" << std::endl;
        return true;
    }
    
    uint16_t read(uint32_t addr) {
        std::cout << "READ: addr=0x" << std::hex << addr << std::endl;
        
        // Setup Wishbone transaction
        dut->wb_cyc_i = 1;
        dut->wb_stb_i = 1;
        dut->wb_we_i = 0;
        dut->wb_adr_i = addr;
        dut->wb_sel_i = 3;
        
        // Wait for acknowledgment and data
        if (!wait_for_ack(200)) {
            std::cout << "✗ Read timeout - no ACK received" << std::endl;
            dut->wb_cyc_i = 0;
            dut->wb_stb_i = 0;
            return 0xFFFF;
        }
        
        uint16_t data = dut->wb_dat_o;
        
        // Complete transaction
        tick();
        dut->wb_cyc_i = 0;
        dut->wb_stb_i = 0;
        
        std::cout << "READ: addr=0x" << std::hex << addr
                  << ", data=0x" << data << std::endl;
        
        return data;
    }
    
    void run_comprehensive_test() {
        std::cout << "\n=== Comprehensive SDRAM WB Controller Test ===" << std::endl;
        
        reset();
        
        // Wait for initialization (monitor debug_state)
        std::cout << "Waiting for initialization..." << std::endl;
        int timeout = 1000;
        while (timeout > 0) {
            if (dut->debug_state != 0) break; // Wait until out of init state
            tick();
            timeout--;
        }
        
        if (timeout == 0) {
            std::cout << "✗ Initialization timeout" << std::endl;
            return;
        }
        
        std::cout << "✓ Controller initialized, state=" << (int)dut->debug_state << std::endl;
        
        // Test basic write/read
        std::cout << "\nTest 1: Basic write/read operations" << std::endl;
        uint32_t test_addr = 0x1000;
        uint16_t test_data = 0x55AA;
        
        if (write(test_addr, test_data)) {
            uint16_t read_data = read(test_addr);
            
            if (read_data == test_data) {
                std::cout << "✓ Basic test PASSED: Data matches" << std::endl;
            } else {
                std::cout << "✗ Basic test FAILED: Expected 0x" << std::hex << test_data 
                          << ", got 0x" << read_data << std::endl;
            }
        }
        
        // Test multiple addresses
        std::cout << "\nTest 2: Multiple address pattern" << std::endl;
        for (int i = 0; i < 4; i++) {
            uint32_t addr = 0x2000 + i * 0x100;
            uint16_t data = 0x1000 + i;
            
            if (write(addr, data)) {
                uint16_t result = read(addr);
                if (result == data) {
                    std::cout << "✓ Address 0x" << std::hex << addr << " OK" << std::endl;
                } else {
                    std::cout << "✗ Address 0x" << std::hex << addr << " FAILED" << std::endl;
                }
            }
        }
        
        std::cout << "\n✓ Test completed!" << std::endl;
        std::cout << "Total simulation time: " << time << " units" << std::endl;
    }
};

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    
    SDRAMTest test;
    test.run_comprehensive_test();
    
    return 0;
}