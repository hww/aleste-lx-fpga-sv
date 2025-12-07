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
#include <cassert>

// Инициализация времени
vluint64_t sim_time = 0;
Valeste_system* top;
VerilatedVcdC* tfp;

// Простая фазовая система
int phase = 0; // 0-3 фазы

// Выполнить одну фазу
void execute_phase() {
    switch (phase) {
        case 0: // F1: clock 0 -> 1
            top->clk_25mhz = 1;
            break;
        case 1: // F2: wb signals change state (25% сдвиг)
            // WB сигналы устанавливаются отдельно
            break;
        case 2: // F3: clock 1 -> 0
            top->clk_25mhz = 0;
            break;
        case 3: // F4: ничего
            break;
    }
    
    top->eval();
    tfp->dump(sim_time);
    sim_time += 20;
    
    phase = (phase + 1) % 4;
}

// Выполнить N фаз
void execute_n_phases(int n) {
    for (int i = 0; i < n; i++) {
        execute_phase();
    }
}

// ==============================================
// SDRAM модель
// ==============================================
class SDRAM_Model {
private:
    std::vector<uint16_t> mem;
    
public:
    SDRAM_Model(size_t size_bytes = 16) {
        mem.resize(size_bytes / 2, 0);
        std::cout << "SDRAM: " << size_bytes/2 << " words (" << size_bytes << " Bytes)" << std::endl;
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
    
    void write_word(uint32_t word_addr, uint16_t data) {
        if (word_addr < mem.size()) {
            mem[word_addr] = data;
        }
    }
};

// ==============================================
// Wishbone Debug Bus Tester
// ==============================================
class WBDebugTester {
private:
    int total_tests;
    int passed_tests;
    int failed_tests;
    
    struct TestResult {
        std::string name;
        bool passed;
        std::string message;
    };
    
    std::vector<TestResult> results;
    
public:
    WBDebugTester() : total_tests(0), passed_tests(0), failed_tests(0) {}
    
    // Публичные геттеры
    int get_total_tests() const { return total_tests; }
    int get_passed_tests() const { return passed_tests; }
    int get_failed_tests() const { return failed_tests; }
    
    // Выполнить цикл чтения через Wishbone
    bool wb_read(Valeste_system* top, uint32_t addr, uint8_t& data, bool check_err = true) {
        total_tests++;
        
        // Сброс сигналов
        top->debug_wb_cyc_i = 0;
        top->debug_wb_stb_i = 0;
        top->debug_wb_we_i = 0;
        top->debug_wb_adr_i = 0;
        top->debug_wb_dat_i = 0;
        
        // Ждем фронта clk и устанавливаем WB с задержкой в 1 фазу
        execute_n_phases(4); // Завершаем текущий цикл
        
        // F1: clock 0 -> 1
        execute_phase();
        
        // F2: wb signals change state (25% сдвиг)
        // Устанавливаем сигналы WB
        top->debug_wb_adr_i = addr;
        top->debug_wb_we_i = 0;
        top->debug_wb_cyc_i = 1;
        top->debug_wb_stb_i = 1;
        execute_phase(); // WB сигналы установлены
        
        // F3: clock 1 -> 0
        execute_phase();
        
        // F4: ничего
        execute_phase();
        
        // Ждем ack (продолжаем тактирование)
        int timeout = 100;
        bool ack_received = false;
        bool error_received = false;
        
        while (timeout > 0) {
            // Продолжаем фазы
            execute_phase();
            
            // Проверяем ack в фазе F1 (после фронта clk)
            if (phase == 0 && top->debug_wb_ack_o) {
                ack_received = true;
                data = top->debug_wb_dat_o;
                break;
            }
            
            if (check_err && phase == 0 && top->debug_wb_err_o) {
                error_received = true;
                break;
            }
            
            timeout--;
        }
        
        // Завершаем транзакцию
        // F2: сбрасываем WB сигналы
        top->debug_wb_cyc_i = 0;
        top->debug_wb_stb_i = 0;
        execute_phase(); // F2 - WB сигналы сброшены
        
        // Завершаем цикл
        execute_phase(); // F3
        execute_phase(); // F4
        
        if (!ack_received) {
            if (error_received) {
                failed_tests++;
                results.push_back({"READ 0x" + to_hex(addr), false, 
                    "WB error signal asserted (timeout after " + std::to_string(100-timeout) + " cycles)"});
            } else {
                failed_tests++;
                results.push_back({"READ 0x" + to_hex(addr), false, 
                    "No ack received (timeout after " + std::to_string(100-timeout) + " cycles)"});
            }
            return false;
        }
        
        passed_tests++;
        return true;
    }
    
    // Выполнить цикл записи через Wishbone
    bool wb_write(Valeste_system* top, uint32_t addr, uint8_t data, bool check_err = true) {
        total_tests++;
        
        // Сброс сигналов
        top->debug_wb_cyc_i = 0;
        top->debug_wb_stb_i = 0;
        top->debug_wb_we_i = 0;
        top->debug_wb_adr_i = 0;
        top->debug_wb_dat_i = 0;
        
        // Ждем фронта clk и устанавливаем WB с задержкой в 1 фазу
        execute_n_phases(4); // Завершаем текущий цикл
        
        // F1: clock 0 -> 1
        execute_phase();
        
        // F2: wb signals change state (25% сдвиг)
        // Устанавливаем сигналы WB
        top->debug_wb_adr_i = addr;
        top->debug_wb_dat_i = data;
        top->debug_wb_we_i = 1;
        top->debug_wb_cyc_i = 1;
        top->debug_wb_stb_i = 1;
        execute_phase(); // WB сигналы установлены
        
        // F3: clock 1 -> 0
        execute_phase();
        
        // F4: ничего
        execute_phase();
        
        // Ждем ack (продолжаем тактирование)
        int timeout = 100;
        bool ack_received = false;
        bool error_received = false;
        
        while (timeout > 0) {
            // Продолжаем фазы
            execute_phase();
            
            // Проверяем ack в фазе F1 (после фронта clk)
            if (phase == 0 && top->debug_wb_ack_o) {
                ack_received = true;
                break;
            }
            
            if (check_err && phase == 0 && top->debug_wb_err_o) {
                error_received = true;
                break;
            }
            
            timeout--;
        }
        
        // Завершаем транзакцию
        // F2: сбрасываем WB сигналы
        top->debug_wb_cyc_i = 0;
        top->debug_wb_stb_i = 0;
        execute_phase(); // F2 - WB сигналы сброшены
        
        // Завершаем цикл
        execute_phase(); // F3
        execute_phase(); // F4
        
        if (!ack_received) {
            if (error_received) {
                failed_tests++;
                results.push_back({"WRITE 0x" + to_hex(addr), false, 
                    "WB error signal asserted (timeout after " + std::to_string(100-timeout) + " cycles)"});
            } else {
                failed_tests++;
                results.push_back({"WRITE 0x" + to_hex(addr), false, 
                    "No ack received (timeout after " + std::to_string(100-timeout) + " cycles)"});
            }
            return false;
        }
        
        passed_tests++;
        return true;
    }
    
    // Проверка чтения/записи с верификацией
    bool wb_read_write_verify(Valeste_system* top, uint32_t addr, uint8_t test_value) {
        // Запись
        if (!wb_write(top, addr, test_value)) {
            results.push_back({"VERIFY WRITE 0x" + to_hex(addr), false, "Write failed"});
            return false;
        }
        
        // Небольшая задержка между записью и чтением
        execute_n_phases(16);
        
        // Чтение и проверка
        uint8_t read_value;
        if (!wb_read(top, addr, read_value)) {
            results.push_back({"VERIFY READ 0x" + to_hex(addr), false, "Read failed"});
            return false;
        }
        
        if (read_value != test_value) {
            failed_tests++;
            results.push_back({"VERIFY 0x" + to_hex(addr), false, 
                "Data mismatch: wrote 0x" + to_hex(test_value) + 
                ", read 0x" + to_hex(read_value)});
            return false;
        }
        
        passed_tests++;
        results.push_back({"VERIFY 0x" + to_hex(addr), true, 
            "OK: wrote 0x" + to_hex(test_value) + ", read 0x" + to_hex(read_value)});
        return true;
    }
    
    // Запустить серию тестов
    void run_tests(Valeste_system* top) {
        std::cout << "\n=== Starting Wishbone Debug Bus Tests ===" << std::endl;
        
        // Тест 1: Чтение ячеек 0-5
        std::cout << "\nTest 1: Reading addresses 0x0-0x5" << std::endl;
        for (uint32_t addr = 0; addr <= 5; addr++) {
            uint8_t data;
            if (wb_read(top, addr, data)) {
                std::cout << "  Read 0x" << std::hex << addr 
                          << ": 0x" << std::setw(2) << std::setfill('0') 
                          << (int)data << std::dec << " [OK]" << std::endl;
            } else {
                std::cout << "  Read 0x" << std::hex << addr << " [FAILED]" << std::endl;
            }
        }
        
        // Небольшая пауза между тестами
        execute_n_phases(8);
        
        // Тест 2: Запись в нулевую ячейку
        std::cout << "\nTest 2: Write to address 0x0" << std::endl;
        if (wb_write(top, 0x0, 0xAA)) {
            std::cout << "  Write 0xAA to 0x0 [OK]" << std::endl;
        }
        
        // Проверка записи в 0x0
        execute_n_phases(8);
        uint8_t verify_data;
        if (wb_read(top, 0x0, verify_data, false)) {
            std::cout << "  Verify read 0x0: 0x" << std::hex << (int)verify_data 
                      << std::dec << " [OK]" << std::endl;
        }
        
        // Тест 3: Запись в FF0100
        std::cout << "\nTest 3: Write to address 0xFF0100" << std::endl;
        if (wb_write(top, 0xFF0100, 0x55)) {
            std::cout << "  Write 0x55 to 0xFF0100 [OK]" << std::endl;
        }
        
        // Тест 4: Запись в FF0120
        std::cout << "\nTest 4: Write to address 0xFF0120" << std::endl;
        if (wb_write(top, 0xFF0120, 0x99)) {
            std::cout << "  Write 0x99 to 0xFF0120 [OK]" << std::endl;
        }
        
        // Тест 5: Верификация записи/чтения по разным адресам
        std::cout << "\nTest 5: Write/Read verification at different addresses" << std::endl;
        wb_read_write_verify(top, 0x1000, 0x11);
        wb_read_write_verify(top, 0x2000, 0x22);
        wb_read_write_verify(top, 0x3000, 0x33);
    }
    
    // Вывести результаты
    void print_results() {
        std::cout << "\n=== Test Results ===" << std::endl;
        std::cout << "Total tests: " << total_tests << std::endl;
        std::cout << "Passed: " << passed_tests << " (" 
                  << (total_tests > 0 ? (passed_tests * 100 / total_tests) : 0) << "%)" << std::endl;
        std::cout << "Failed: " << failed_tests << " (" 
                  << (total_tests > 0 ? (failed_tests * 100 / total_tests) : 0) << "%)" << std::endl;
        
        if (!results.empty()) {
            std::cout << "\nDetailed results:" << std::endl;
            for (const auto& result : results) {
                std::cout << "  " << (result.passed ? "[PASS]" : "[FAIL]") 
                          << " " << result.name;
                if (!result.message.empty()) {
                    std::cout << " - " << result.message;
                }
                std::cout << std::endl;
            }
        }
        
        std::cout << "\n=== " << (failed_tests == 0 ? "ALL TESTS PASSED" : "SOME TESTS FAILED") 
                  << " ===" << std::endl;
    }
    
private:
    std::string to_hex(uint32_t value, int width = 6) {
        std::stringstream ss;
        ss << std::hex << std::setw(width) << std::setfill('0') << value;
        return ss.str();
    }
    
    std::string to_hex(uint8_t value, int width = 2) {
        std::stringstream ss;
        ss << std::hex << std::setw(width) << std::setfill('0') << (int)value;
        return ss.str();
    }
};

// ==============================================
// Главная функция
// ==============================================
int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    
    top = new Valeste_system;
    tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("waveform.vcd");
    
    // ==============================================
    // Инициализация SDRAM
    // ==============================================
    SDRAM_Model sdram(0x4000);
    sdram.fill_increment();
    
    // ==============================================
    // Инициализация системы
    // ==============================================
    top->clk_25mhz = 0;  // Начинаем с низкого уровня
    top->serial_rx = 1;
    top->sdram_dq_i = 0x0000;
    
    // Инициализация debug интерфейса
    top->debug_wb_cyc_i = 0;
    top->debug_wb_stb_i = 0;
    top->debug_wb_we_i = 0;
    top->debug_wb_adr_i = 0;
    top->debug_wb_dat_i = 0;
    
    std::cout << "\n=== Starting simulation ===" << std::endl;
    
    // ==============================================
    // Переменные для симуляции
    // ==============================================
    uint16_t bus_data = 0x0000;
    bool bus_has_data = false;
    uint32_t row = 0;
    int sdram_reads = 0;
    
    WBDebugTester tester;

    // ==============================================
    // Этап 1: Сброс и инициализация
    // ==============================================
    std::cout << "\nPhase 1: Reset and initialization" << std::endl;
    for (int cycle = 0; cycle < 200000; cycle++) {
        // Выполняем одну фазу
        execute_phase();
        
        // Эмуляция SDRAM - обрабатываем команды в фазе F1 (после фронта clk)
        if (phase == 1) { // F2 - после того как clk стал 1
            // SDRAM команды детектируются на фронте тактового сигнала
            if (!top->sdram_cs_n && 
                !top->sdram_ras_n && 
                top->sdram_cas_n && 
                top->sdram_we_n) {
                row = top->sdram_a & 0x1FFF;
            }
            
            if (!top->sdram_cs_n && 
                top->sdram_ras_n && 
                !top->sdram_cas_n && 
                top->sdram_we_n) {
                
                uint32_t col = top->sdram_a & 0x1FF;
                uint32_t bank = top->sdram_ba & 0x3;
                
                uint32_t row_low = row & 0xFFF;
                uint32_t col_low = col & 0x1;
                uint32_t col_high = (col >> 1) & 0xFF;
                uint32_t byte_address = (bank << 22) | (col_high << 14) | (row_low << 2) | (col_low << 1);
                uint32_t word_address = byte_address >> 1;
                
                bus_data = sdram.read(word_address & 0x3FFF);
                bus_has_data = true;
                sdram_reads++;
            }
        }
        
        // Данные SDRAM устанавливаются в фазу F2 (через 25% цикла после фронта)
        if (phase == 1 && bus_has_data) { // F2 - через 25% после фронта
            top->sdram_dq_i = bus_data;
            bus_has_data = false;
        } else if (phase == 1) {
            top->sdram_dq_i = 0x0000;
        }
        
        if (cycle % 200 == 0) {
            std::cout << "Init cycle " << cycle << ": debug=0x" 
                      << std::hex << (int)top->debug << std::endl;
        }
    }
    
    // ==============================================
    // Этап 2: Тестирование Wishbone debug bus
    // ==============================================
    std::cout << "\nPhase 2: Wishbone debug bus testing" << std::endl;
    tester.run_tests(top);
    
    // ==============================================
    // Этап 3: Небольшая задержка и завершение
    // ==============================================
    std::cout << "\nPhase 3: Final delay and cleanup" << std::endl;
    for (int cycle = 0; cycle < 1000; cycle++) {
        execute_phase();
        
        // Продолжаем эмуляцию SDRAM
        if (phase == 1) {
            if (!top->sdram_cs_n && 
                !top->sdram_ras_n && 
                top->sdram_cas_n && 
                top->sdram_we_n) {
                row = top->sdram_a & 0x1FFF;
            }
            
            if (!top->sdram_cs_n && 
                top->sdram_ras_n && 
                !top->sdram_cas_n && 
                top->sdram_we_n) {
                
                uint32_t col = top->sdram_a & 0x1FF;
                uint32_t bank = top->sdram_ba & 0x3;
                
                uint32_t row_low = row & 0xFFF;
                uint32_t col_low = col & 0x1;
                uint32_t col_high = (col >> 1) & 0xFF;
                uint32_t byte_address = (bank << 22) | (col_high << 14) | (row_low << 2) | (col_low << 1);
                uint32_t word_address = byte_address >> 1;
                
                bus_data = sdram.read(word_address & 0x3FFF);
                bus_has_data = true;
                sdram_reads++;
            }
        }
        
        if (phase == 1) {
            if (bus_has_data) {
                top->sdram_dq_i = bus_data;
                bus_has_data = false;
            } else {
                top->sdram_dq_i = 0x0000;
            }
        }
    }
    
    // ==============================================
    // Завершение
    // ==============================================
    std::cout << "\n=== Simulation finished ===" << std::endl;
    std::cout << "Total SDRAM reads: " << sdram_reads << std::endl;
    std::cout << "Current phase: " << phase << std::endl;
    
    tester.print_results();
    
    tfp->close();
    delete tfp;
    delete top;
    
    return tester.get_failed_tests() > 0 ? 1 : 0;
}