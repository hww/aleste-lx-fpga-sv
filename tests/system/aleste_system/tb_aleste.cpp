#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Valeste_system.h"

#include <cstdio>
#include <cstring>
#include <string>
#include <vector>
#include <fstream>
#include <iostream>
#include <iomanip>

// ==============================================
// SDRAM модель
// ==============================================
class SDRAM_Model {
private:
    std::vector<uint16_t> mem;
    
public:
    SDRAM_Model(size_t size_mb = 16) {
        size_t words = (size_mb * 1024 * 1024) / 2;
        mem.resize(words, 0);
        std::cout << "SDRAM: " << words << " words (" << size_mb << " MB)" << std::endl;
    }
    
    void fill_increment() {
        for (size_t i = 0; i < mem.size(); i++) {
            mem[i] = i & 0xFFFF;
        }
    }
    
    uint16_t read(uint32_t word_addr) {
        if (word_addr < mem.size()) {
            return mem[word_addr];
        }
        return 0xDEAD;
    }
    
    // Метод записи должен быть public
    void write_word(uint32_t word_addr, uint16_t data) {
        if (word_addr < mem.size()) {
            mem[word_addr] = data;
        }
    }
};

// ==============================================
// Главная функция
// ==============================================
int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    
    Valeste_system* top = new Valeste_system;
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("waveform.vcd");
    
    // ==============================================
    // Инициализация SDRAM
    // ==============================================
    SDRAM_Model sdram(16);
    sdram.fill_increment();
    
    // Тестовая программа
    sdram.write_word(0, 0x05C3);  // Word 0: JP 0x0005
    sdram.write_word(1, 0x0000);  // Word 1: NOPs
    sdram.write_word(2, 0x7600);  // Word 2: HALT
    
    std::cout << "SDRAM initialized with test program" << std::endl;
    
    // ==============================================
    // Инициализация системы
    // ==============================================
    top->clk_25mhz = 0;
    top->serial_rx = 1;
    top->sdram_dq_i = 0x0000;
    
    std::cout << "\n=== Starting simulation ===" << std::endl;
    
    // ==============================================
    // Переменные для симуляции
    // ==============================================
    int last_debug = -1;
    int reads = 0;
    uint16_t bus_data = 0x0000;
    bool bus_has_data = false;
    uint32_t row = 0;

    // ==============================================
    // Основной цикл симуляции
    // ==============================================
    for (int cycle = 0; cycle < 100000; cycle++) {
        top->clk_25mhz = !top->clk_25mhz;
        
        // ==============================================
        // Выполнение Verilog
        // ==============================================
        top->eval();
        
        // ==============================================
        // Обнаружение ROW команд
        // ==============================================
        if (!top->sdram_cs_n && 
            !top->sdram_ras_n && 
            top->sdram_cas_n && 
            top->sdram_we_n) {
            
            row = top->sdram_a & 0x1FFF; // Извлечение ROW 13 bit но старший не используется
            std::cout << "RAS " << std::dec << cycle << std::hex << ": row=0x" << row << std::endl;
        }
        
        // ==============================================
        // Обнаружение READ команд
        // ==============================================
        if (!top->sdram_cs_n && 
            top->sdram_ras_n && 
            !top->sdram_cas_n && 
            top->sdram_we_n) {
            
            uint32_t col  = top->sdram_a & 0x1FF; // Извлечение COL 9 bit
            uint32_t bank = top->sdram_ba & 0x3; // Извлечение BANK
            //std::cout << "CAS " << std::dec << cycle << std::hex << ": col=0x" << col << ": bank=0x" << bank << std::endl;

            uint32_t row_low = row & 0xFFF;           // A[13:2] = ROW[11:0]
            uint32_t col_low  = col & 0x1;            // A[1] = COL[0]
            uint32_t col_high = (col >> 1) & 0xFF;    // A[21:14] = COL[8:1]
            uint32_t byte_address = (bank << 22) | (col_high << 14) | (row_low << 2) | (col_low << 1);
            uint32_t word_address = byte_address >> 1;  // Преобразование в адрес слова

            bus_data = sdram.read(word_address & 0x3FFF); // Чтение данных из SDRAM повторим 16КБ везде
            bus_has_data = true;
            reads++;
            
            //if (reads <= 10) {
                std::cout << "Cycle " << std::dec << cycle << std::hex << ": READ addr=0x" << word_address << " -> data=0x" << bus_data << std::endl;
            //}
        }
        
        // ==============================================
        // Выдача данных на шину
        // ==============================================
        // Данные ВСЕГДА на шине, если были прочитаны
        if (bus_has_data) {
            top->sdram_dq_i = bus_data;
        } else {
            top->sdram_dq_i = 0x0000;
        }
        
        // ==============================================
        // Дамп в VCD
        // ==============================================
        tfp->dump(cycle * 20);
        
        // ==============================================
        // Мониторинг
        // ==============================================
        if (top->debug != last_debug && cycle > 100) {
            std::cout << "Cycle " << std::dec << cycle;
            std::cout << ": debug 0x" << std::hex << last_debug;
            std::cout << " -> 0x" << (int)top->debug << std::endl;
            last_debug = top->debug;
        }
        
        if (cycle % 20000 == 0 && cycle > 0) {
            std::cout << "Cycle " << std::dec << cycle;
            std::cout << ": debug=0x" << std::hex << (int)top->debug;
            std::cout << " reads=" << reads << std::endl;
        }
        
        if (top->debug == 0x76) {
            std::cout << "\n=== CPU HALT at cycle " << cycle << " ===" << std::endl;
            break;
        }
    }
    
    // ==============================================
    // Завершение
    // ==============================================
    std::cout << "\n=== Simulation finished ===" << std::endl;
    
    tfp->close();
    delete tfp;
    delete top;
    
    return 0;
}