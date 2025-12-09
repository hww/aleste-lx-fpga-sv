#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Valeste_system.h"
#include <iostream>

vluint64_t sim_time = 0;
Valeste_system* top;
VerilatedVcdC* tfp;

void tick() {
    static int phase = 0;
    
    switch (phase) {
        case 0: top->clk_25mhz = 0; break;
        case 1: top->clk_25mhz = 0; break;
        case 2: top->clk_25mhz = 1; break;
        case 3: top->clk_25mhz = 1; break;
    }
    
    top->eval();
    tfp->dump(sim_time);  // ВСЕГДА пишем в VCD!
    sim_time++;
    
    phase = (phase + 1) % 4;
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);  // ВКЛЮЧАЕМ трассировку
    
    top = new Valeste_system;
    tfp = new VerilatedVcdC;
    
    top->trace(tfp, 99);
    tfp->open("waveform_tb.vcd");  // ОТКРЫВАЕМ файл
    
    // Инициализация
    top->clk_25mhz = 0;
    top->serial_rx = 1;
    top->sdram_dq_i = 0x0000;
    
    top->debug_wb_cyc_i = 0;
    top->debug_wb_stb_i = 0;
    top->debug_wb_we_i = 0;
    top->debug_wb_adr_i = 0;
    top->debug_wb_dat_i = 0;
    
    std::cout << "Starting test with tracing..." << std::endl;
    
    // 1. Сброс и инициализация
    for (int i = 0; i < 200000; i++) tick();
    
    // 2. Пробуем WB транзакцию
    std::cout << "WB clock state: " << (int)top->debug_wb_clk_o << std::endl;
    
    // Ждем спада wb_clk
    int waited = 0;
    while (top->debug_wb_clk_o == 1 && waited < 1000) {
        tick();
        waited++;
    }
    
    if (waited < 1000) {
        // На спаде - выставляем адрес/данные
        top->debug_wb_adr_i = 0x0000;
        top->debug_wb_dat_i = 0xAA;
        top->debug_wb_we_i = 1;
        
        // Setup time
        for (int i = 0; i < 8; i++) tick();
        
        // Стартуем транзакцию
        top->debug_wb_cyc_i = 1;
        top->debug_wb_stb_i = 1;
        
        // Ждем ответа
        bool last_wb_clk = top->debug_wb_clk_o;
        int wb_edges = 0;
        
        for (int i = 0; i < 4000; i++) {
            tick();
            
            bool current_wb_clk = top->debug_wb_clk_o;
            if (!last_wb_clk && current_wb_clk) {
                wb_edges++;
                
                if (top->debug_wb_ack_o) {
                    std::cout << "ACK at wb edge " << wb_edges << std::endl;
                    top->debug_wb_cyc_i = 0;
                    top->debug_wb_stb_i = 0;
                    break;
                }
                
                if (top->debug_wb_err_o) {
                    std::cout << "ERR at wb edge " << wb_edges << std::endl;
                    top->debug_wb_cyc_i = 0;
                    top->debug_wb_stb_i = 0;
                    break;
                }
            }
            last_wb_clk = current_wb_clk;
        }
    }
    
    // 3. Завершаем
    for (int i = 0; i < 100; i++) tick();
    
    std::cout << "Test done. Waveform saved to wave.vcd" << std::endl;
    
    tfp->close();
    delete tfp;
    delete top;
    
    return 0;
}