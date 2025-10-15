// tb_sdram_test_pattern.cpp
#include <verilated.h>
#include "Vsdram_test_pattern.h"
#include <iostream>
#include <string>
#include <iomanip>

class SimpleSdramTest {
private:
    Vsdram_test_pattern* dut;
    uint64_t cycle;
    
    // Memory emulation - ПРОСТАЯ!
    uint16_t memory[256]; // Простой массив вместо map
    bool memory_corrupted; // Флаг "испорченной" памяти
    
public:
    SimpleSdramTest() : cycle(0), memory_corrupted(false) {
        dut = new Vsdram_test_pattern;
        reset_memory();
    }
    
    ~SimpleSdramTest() {
        delete dut;
    }
    
    void reset_memory() {
        for (int i = 0; i < 256; i++) {
            memory[i] = 0x0000;
        }
    }
    
    void reset() {
        dut->clk = 0;
        dut->rst = 1;
        dut->start_i = 0;
        dut->wb_ack_i = 0;
        dut->wb_dat_i = 0;
        tick();
        dut->rst = 0;
        tick();
    }
    
    void tick() {
        dut->clk = 0;
        emulate_memory_simple();
        dut->eval();
        
        dut->clk = 1;
        dut->eval();
        
        cycle++;
    }
    
    void emulate_memory_simple() {
        dut->wb_ack_i = 0;
        dut->wb_dat_i = 0;
        
        if (dut->wb_stb_o && dut->wb_cyc_o) {
            // Простая память без задержек - отвечаем сразу
            dut->wb_ack_i = 1;
            
            if (dut->wb_we_o) {
                // ЗАПИСЬ
                uint16_t data_to_write = dut->wb_dat_o;
                
                // Если память "испорчена" - портим данные при записи
                if (memory_corrupted) {
                    data_to_write ^= 0x0001; // Инвертируем младший бит
                }
                
                memory[dut->wb_adr_o >> 1] = data_to_write;
                std::cout << "WRITE: addr=0x" << std::hex << dut->wb_adr_o 
                          << " data=0x" << data_to_write << std::endl;
            } else {
                // ЧТЕНИЕ
                uint16_t data_to_read = memory[dut->wb_adr_o >> 1];
                dut->wb_dat_i = data_to_read;
                std::cout << "READ:  addr=0x" << std::hex << dut->wb_adr_o 
                          << " data=0x" << data_to_read << std::endl;
            }
        }
    }
    
    void run_single_test(const std::string& test_name, bool corrupt_memory) {
        std::cout << "\n=== " << test_name << " ===\n";
        
        memory_corrupted = corrupt_memory;
        reset_memory();
        reset();
        
        // Запускаем тест
        dut->start_i = 1;
        tick();
        dut->start_i = 0;
        
        // Ждем завершения
        int timeout = 1000;
        while (!dut->done_o && timeout > 0) {
            std::cout << "Cycle " << std::setw(3) << cycle 
                      << " | addr=0x" << std::hex << std::setw(4) << std::setfill('0') << dut->wb_adr_o
                      << " we=" << (int)dut->wb_we_o
                      << " errors=" << std::dec << (int)dut->error_count_o 
                      << std::endl;
            tick();
            timeout--;
        }
        
        // Результаты
        std::cout << "--- RESULTS ---\n";
        std::cout << "Test passed: " << (dut->test_passed_o ? "YES" : "NO") << "\n";
        std::cout << "Errors found: " << (int)dut->error_count_o << "\n";
        std::cout << "Test end signal: " << (dut->test_end_o ? "YES" : "NO") << "\n";
        
        if (corrupt_memory) {
            // Ожидаем ошибки
            if (!dut->test_passed_o && dut->error_count_o > 0) {
                std::cout << "✅ ТЕСТ ПРОЙДЕН: модуль обнаружил ошибки в испорченной памяти!\n";
            } else {
                std::cout << "❌ ТЕСТ ПРОВАЛЕН: модуль не обнаружил ошибки в испорченной памяти!\n";
            }
        } else {
            // Ожидаем чистый результат
            if (dut->test_passed_o && dut->error_count_o == 0) {
                std::cout << "✅ ТЕСТ ПРОЙДЕН: чистая память, ошибок нет!\n";
            } else {
                std::cout << "❌ ТЕСТ ПРОВАЛЕН: в чистой памяти найдены ошибки!\n";
            }
        }
    }
    
    void run_complete_test() {
        std::cout << "=== COMPLETE SDRAM TEST ===\n";
        
        // Тест 1: Хороший мальчик (чистая память)
        run_single_test("TEST 1: GOOD MEMORY", false);
        
        // Небольшая пауза между тестами
        for (int i = 0; i < 10; i++) tick();
        
        // Тест 2: Капризный ребенок (испорченная память)  
        run_single_test("TEST 2: CORRUPTED MEMORY", true);
        
        std::cout << "\n=== FINAL SUMMARY ===\n";
        std::cout << "Все тесты завершены! Модуль работает " 
                  << ((dut->test_passed_o && dut->error_count_o == 0) ? "КОРРЕКТНО" : "С ОШИБКАМИ") 
                  << std::endl;
    }
};

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    
    SimpleSdramTest test;
    test.run_complete_test();
    
    return 0;
}