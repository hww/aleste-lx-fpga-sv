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
    
    bool load_binary_file(const std::string& filename, uint32_t start_address = 0) {
        std::ifstream file(filename, std::ios::binary | std::ios::ate);
        if (!file.is_open()) {
            std::cerr << "Error: Cannot open file " << filename << std::endl;
            return false;
        }
        
        std::streamsize size = file.tellg();
        file.seekg(0, std::ios::beg);
        
        if (size % 2 != 0) {
            std::cerr << "Warning: File size " << size << " is not even, padding with zero" << std::endl;
            size++;
        }
        
        size_t word_count = size / 2;
        size_t max_words = mem.size() - start_address;
        
        if (word_count > max_words) {
            std::cerr << "Warning: File too large (" << word_count << " words), only loading " 
                     << max_words << " words" << std::endl;
            word_count = max_words;
        }
        
        std::vector<char> buffer(size);
        if (!file.read(buffer.data(), size)) {
            std::cerr << "Error: Failed to read file" << std::endl;
            return false;
        }
        
        // Преобразование байтов в 16-битные слова (little-endian)
        for (size_t i = 0; i < word_count; i++) {
            uint8_t low_byte = buffer[i * 2];
            uint8_t high_byte = (i * 2 + 1 < buffer.size()) ? buffer[i * 2 + 1] : 0;
            uint16_t word = (high_byte << 8) | low_byte;
            mem[start_address + i] = word;
        }
        
        std::cout << "Loaded " << word_count << " words (" << size << " bytes) from " 
                 << filename << " to address 0x" << std::hex << start_address << std::endl;
        return true;
    }
    
    uint16_t read(uint32_t word_addr) {
        if (word_addr < mem.size()) {
            return mem[word_addr];
        }
        return 0xDEAD;
    }
    void write(uint32_t word_addr, uint16_t data, uint8_t dm) {
        if (word_addr < mem.size()) {
            if ((dm & 0x1) == 0) mem[word_addr] = (mem[word_addr] & 0xFF00) | (data & 0x00FF);
            if ((dm & 0x2) == 0) mem[word_addr] = (mem[word_addr] & 0x00FF) | (data & 0xFF00);
        }
    }
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
    std::string binary_file;
    bool test_mode = true;
    
    // Парсинг аргументов командной строки
    for (int i = 1; i < argc; i++) {
        if (std::string(argv[i]) == "--load" && i + 1 < argc) {
            binary_file = argv[i + 1];
            test_mode = false;
            i++;
        } else if (std::string(argv[i]) == "--help" || std::string(argv[i]) == "-h") {
            std::cout << "Usage: " << argv[0] << " [options]\n"
                      << "Options:\n"
                      << "  --load <filename>   Load binary file into SDRAM\n"
                      << "  --help              Show this help message\n";
            return 0;
        }
    }
    
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    
    Valeste_system* top = new Valeste_system;
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("waveform_z80.vcd");
    
    // ==============================================
    // Инициализация SDRAM
    // ==============================================
    SDRAM_Model sdram(16);
    
    if (!binary_file.empty()) {
        // Загрузка бинарного файла
        if (!sdram.load_binary_file(binary_file)) {
            std::cerr << "Failed to load binary file, using test program instead" << std::endl;
            test_mode = true;
        } else {
            std::cout << "Using binary file: " << binary_file << std::endl;
        }
    }
    
    if (test_mode) {
        std::cout << "Using test program" << std::endl;
        sdram.fill_increment();
        
        // Тестовая программа
        sdram.write_word(0, 0x05C3);  // Word 0: JP 0x0005 (C3 05)
        sdram.write_word(1, 0x0000);  // Word 1: 00 00 (NOPs)
        sdram.write_word(2, 0x3E00);  // Word 2: 00 3E (LD A, - начинается с адреса 5!)
        sdram.write_word(3, 0x3255);  // Word 3: 55 32 (LD (0003h), A - начало)
        sdram.write_word(4, 0x0003);  // Word 4: 03 00 (адрес 0003h для LD)
        sdram.write_word(5, 0x033A);  // Word 5: 3A 03 (LD A, (0003h) - начало)
        sdram.write_word(6, 0x7600);  // Word 6: 00 76 (HALT + младший байт адреса)
    }
    
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
    int writes = 0;
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
            
            uint32_t row_low = row & 0xFFF;           // A[13:2] = ROW[11:0]
            uint32_t col_low  = col & 0x1;            // A[1] = COL[0]
            uint32_t col_high = (col >> 1) & 0xFF;    // A[21:14] = COL[8:1]
            uint32_t byte_address = (bank << 22) | (col_high << 14) | (row_low << 2) | (col_low << 1);
            uint32_t word_address = byte_address >> 1;  // Преобразование в адрес слова

            bus_data = sdram.read(word_address & 0x3FFF); // Чтение данных из SDRAM
            bus_has_data = true;
            reads++;
            
            if (reads <= 10) {
                std::cout << "Cycle " << std::dec << cycle << std::hex 
                          << ": READ addr=0x" << word_address 
                          << " -> data=0x" << bus_data << std::endl;
            }
        }
        // ==============================================
        // Обнаружение WRITE команд
        // ==============================================
        if (!top->sdram_cs_n && 
            top->sdram_ras_n && 
            !top->sdram_cas_n && 
            !top->sdram_we_n) {
            
            uint32_t col  = top->sdram_a & 0x1FF; // Извлечение COL 9 bit
            uint32_t bank = top->sdram_ba & 0x3; // Извлечение BANK
            
            uint32_t row_low = row & 0xFFF;           // A[13:2] = ROW[11:0]
            uint32_t col_low  = col & 0x1;            // A[1] = COL[0]
            uint32_t col_high = (col >> 1) & 0xFF;    // A[21:14] = COL[8:1]
            uint32_t byte_address = (bank << 22) | (col_high << 14) | (row_low << 2) | (col_low << 1);
            uint32_t word_address = byte_address >> 1;  // Преобразование в адрес слова

            uint16_t write_data = top->sdram_dq_o;
            uint8_t sdram_dm = top->sdram_dm;
            sdram.write(word_address & 0x3FFF, write_data, sdram_dm); // Запись данных в SDRAM
            bus_has_data = true;
            writes++;
            
            if (writes <= 10) {
                std::cout << "Cycle " << std::dec << cycle << std::hex 
                          << ": WRITE addr=0x" << word_address 
                          << " -> data=0x" << write_data << std::endl;
            }
        } 
        // ==============================================
        // Выдача данных на шину
        // ==============================================
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
    std::cout << "Total SDRAM reads: " << reads << std::endl;
    
    tfp->close();
    delete tfp;
    delete top;
    
    return 0;
}