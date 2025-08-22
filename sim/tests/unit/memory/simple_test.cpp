#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vtb_sdram_wb_controller.h"
#include <iostream>

vluint64_t main_time = 0;
double sc_time_stamp() { return main_time; }

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    
    Vtb_sdram_wb_controller* top = new Vtb_sdram_wb_controller;
    VerilatedVcdC* tfp = new VerilatedVcdC;
    
    top->trace(tfp, 99);
    tfp->open("sdram_simple.vcd");
    
    // Инициализация
    top->clk = 0;
    top->rst = 1;
    
    // Wishbone сигналы
    top->wb_cyc_i = 0;
    top->wb_stb_i = 0;
    top->wb_we_i = 0;
    top->wb_adr_i = 0;
    top->wb_dat_i = 0;
    top->wb_sel_i = 0;
    
    std::cout << "=== SDRAM WB Controller Initialization Test ===" << std::endl;
    
    for (int i = 0; i < 25000; i++) {
        top->clk = !top->clk;
        
        // Сброс
        if (i < 10) {
            top->rst = 1;
        } else if (i == 10) {
            top->rst = 0;
            std::cout << "Reset released" << std::endl;
        }
        
        // Мониторинг состояния каждые 100 тактов
        if (i % 100 == 0 && i > 20) {
            std::cout << "Time " << main_time << ": "
                      << "CKE=" << (int)top->sdram_cke
                      << ", CS_N=" << (int)top->sdram_cs_n
                      << ", ACK=" << (int)top->wb_ack_o
                      << ", RAS_N=" << (int)top->sdram_ras_n
                      << ", CAS_N=" << (int)top->sdram_cas_n
                      << ", WE_N=" << (int)top->sdram_we_n
                      << ", State=" << (int)top->debug_state
                      << std::endl;
        }
        
        // Проверка завершения инициализации (состояние IDLE)
        if (i > 1000 && top->debug_state == 1) { // STATE_IDLE = 1
            std::cout << "✓ Initialization completed at time " << main_time << std::endl;
            
            // Тест записи
            std::cout << "Testing write operation..." << std::endl;
            top->wb_cyc_i = 1;
            top->wb_stb_i = 1;
            top->wb_we_i = 1;
            top->wb_adr_i = 0x123456;
            top->wb_dat_i = 0xABCD;
            top->wb_sel_i = 3; // оба байта
            
            // Ждем ACK
            bool ack_received = false;
            for (int j = 0; j < 100; j++) {
                top->clk = !top->clk;
                top->eval();
                tfp->dump(main_time);
                main_time += 5;
                
                if (top->wb_ack_o) {
                    std::cout << "✓ Write acknowledged" << std::endl;
                    ack_received = true;
                    break;
                }
            }
            
            if (!ack_received) {
                std::cout << "✗ Write timeout" << std::endl;
            }
            
            // Сброс Wishbone сигналов
            top->wb_cyc_i = 0;
            top->wb_stb_i = 0;
            top->wb_we_i = 0;
            
            break;
        }
        
        // Таймаут
        if (i == 24999) {
            std::cout << "✗ TIMEOUT: Initialization failed" << std::endl;
            std::cout << "Final state: CKE=" << (int)top->sdram_cke
                      << ", CS_N=" << (int)top->sdram_cs_n
                      << ", State=" << (int)top->debug_state
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