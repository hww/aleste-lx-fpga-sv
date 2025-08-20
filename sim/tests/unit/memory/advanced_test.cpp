// advanced_test.cpp - дополнительный файл для расширенного тестирования
#include "Vtb_sdram_controller.h"
#include <vector>
#include <random>
#include <verilated_fst_c.h>

class SDRAMTest {
private:
    Vtb_sdram_controller* top;
    vluint64_t time;
    bool tracing;
    
public:
    SDRAMTest(bool enable_trace = true) : time(0), tracing(enable_trace) {
        top = new Vtb_sdram_controller;
    }
    
    ~SDRAMTest() {
        delete top;
    }
    
    void reset() {
        top->rst = 1;
        top->locked = 0;
        tick(10);
        top->rst = 0;
        top->locked = 1;
        tick(5);
    }
    
    void tick(int cycles = 1) {
        for (int i = 0; i < cycles; i++) {
            top->clk_sys = 0;
            top->eval();
            time += 5;
            
            top->clk_sys = 1;
            top->eval();
            time += 5;
        }
    }
    
    bool write(uint32_t addr, uint16_t data) {
        if (top->host_busy) {
            std::cout << "Controller busy, cannot write" << std::endl;
            return false;
        }
        
        top->host_wr_req = 1;
        top->host_addr = addr;
        top->host_data_in = data;
        
        tick();
        
        top->host_wr_req = 0;
        
        // Ждем завершения операции
        while (top->host_busy) {
            tick();
        }
        
        return true;
    }
    
    uint16_t read(uint32_t addr) {
        if (top->host_busy) {
            std::cout << "Controller busy, cannot read" << std::endl;
            return 0xFFFF;
        }
        
        top->host_rd_req = 1;
        top->host_addr = addr;
        
        tick();
        
        top->host_rd_req = 0;
        
        // Ждем valid данных
        while (!top->host_rd_valid) {
            tick();
        }
        
        uint16_t data = top->host_data_out;
        
        // Сбрасываем valid
        tick();
        
        return data;
    }
    
    void run_basic_test() {
        std::cout << "Running basic SDRAM test..." << std::endl;
        reset();
        
        // Тест записи и чтения
        uint32_t test_addr = 0x1000;
        uint16_t test_data = 0x55AA;
        
        std::cout << "Writing 0x" << std::hex << test_data 
                  << " to address 0x" << test_addr << std::endl;
        
        if (write(test_addr, test_data)) {
            std::cout << "Write successful" << std::endl;
        }
        
        tick(10);
        
        std::cout << "Reading from address 0x" << std::hex << test_addr << std::endl;
        uint16_t read_data = read(test_addr);
        
        std::cout << "Read 0x" << std::hex << read_data << std::endl;
        
        if (read_data == test_data) {
            std::cout << "TEST PASSED: Data matches!" << std::endl;
        } else {
            std::cout << "TEST FAILED: Expected 0x" << std::hex << test_data 
                      << ", got 0x" << read_data << std::endl;
        }
    }
    
    void run_random_test(int num_operations = 100) {
        std::cout << "Running random access test..." << std::endl;
        reset();
        
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<uint32_t> addr_dist(0, 0xFFFFFF);
        std::uniform_int_distribution<uint16_t> data_dist(0, 0xFFFF);
        
        std::vector<std::pair<uint32_t, uint16_t>> test_pattern;
        
        // Генерация тестового паттерна
        for (int i = 0; i < num_operations; i++) {
            uint32_t addr = addr_dist(gen) & 0xFFFFF; // Ограничиваем адресное пространство
            uint16_t data = data_dist(gen);
            test_pattern.push_back({addr, data});
        }
        
        // Запись паттерна
        for (const auto& op : test_pattern) {
            write(op.first, op.second);
            tick(2);
        }
        
        tick(20); // Пауза
        
        // Проверка паттерна
        int errors = 0;
        for (const auto& op : test_pattern) {
            uint16_t read_data = read(op.first);
            if (read_data != op.second) {
                errors++;
                std::cout << "Error at addr 0x" << std::hex << op.first
                          << ": expected 0x" << op.second
                          << ", got 0x" << read_data << std::endl;
            }
            tick(2);
        }
        
        std::cout << "Random test completed: " << errors 
                  << " errors out of " << num_operations 
                  << " operations" << std::endl;
    }
};

// Пример использования
int main() {
    SDRAMTest test;
    test.run_basic_test();
    test.run_random_test(50);
    return 0;
}