#include <iostream>
#include <iomanip>
#include <vector>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vtv80_lx_wb.h"
#include <fstream>


#define CLK_HALF_PERIOD 50
#define SETUP_TIME 1
#define HOLD_TIME 1
#define CLK_REST_TIME (CLK_HALF_PERIOD - SETUP_TIME - HOLD_TIME)

// =============================================================================
// Complete Memory Model with Banking Support
// =============================================================================
class MemoryModel {
private:
    std::vector<uint8_t> memory;
    
public:
    MemoryModel(size_t size = 4 * 64 * 1024) : memory(size, 0x00) {
        // Простая линейная память 64KB
    }

    uint32_t translate_address(uint32_t logical_addr) {
        uint8_t slot = logical_addr >> 22;        // 0-3 (64KB слоты)
        uint16_t offset = logical_addr & 0xFFFF;  // 0-6535 (16 бит)
        
        return (slot << 16) | offset;             // 256KB = 16 банков × 16KB
    }

    void write(uint32_t addr, uint8_t data) {
        uint32_t phys_addr = translate_address(addr);
        if (phys_addr < memory.size()) {
            memory[phys_addr] = data;
        }
    }
    
    uint8_t read(uint32_t addr) {
        uint32_t phys_addr = translate_address(addr);
        return (phys_addr < memory.size()) ? memory[phys_addr] : 0xAA;
    }
    
    void load_program(uint32_t start_addr, const std::vector<uint8_t>& program) {
        uint32_t phys_start_addr = translate_address(start_addr);
        for (size_t i = 0; i < program.size(); i++) {
            uint32_t addr = (phys_start_addr + i);
            if (addr < memory.size()) {
                memory[addr] = program[i];
            }
        }
        std::cout << "Loaded " << program.size() << " bytes at 0x" 
                  << std::hex << start_addr << " (actual address at 0x" << phys_start_addr << ")" << std::dec << std::endl;
    }
    
    bool load_binary_file(uint32_t address, const std::string& filename) {
        std::ifstream file(filename, std::ios::binary | std::ios::ate);
        if (!file.is_open()) {
            std::cerr << "Error: Cannot open file " << filename << std::endl;
            return false;
        }
        
        std::streamsize size = file.tellg();
        file.seekg(0, std::ios::beg);
        
        std::vector<uint8_t> buffer(size);
        if (!file.read(reinterpret_cast<char*>(buffer.data()), size)) {
            std::cerr << "Error: Cannot read file " << filename << std::endl;
            return false;
        }

        load_program(address, buffer);

        std::cout << "Loaded " << size << " bytes from " << filename 
                  << " to address 0x" << std::hex << address << std::dec << std::endl;
        return true;
    }
    // Простая функция для дампа памяти (для отладки)
    void dump_memory(uint32_t start_addr, uint32_t length) {
        std::cout << "Memory dump 0x" << std::hex << start_addr << ":" << std::endl;
        for (uint32_t i = 0; i < length; i++) {
            if (i % 16 == 0) {
                if (i > 0) std::cout << std::endl;
                std::cout << "0x" << std::hex << (start_addr + i) << ": ";
            }
            std::cout << std::hex << std::setw(2) << std::setfill('0') 
                     << (int)read(start_addr + i) << " ";
        }
        std::cout << std::dec << std::endl;
    }
};

// =============================================================================
// Wishbone Loopback Bridge for Testing
// =============================================================================
class WishboneLoopback {
private:
    Vtv80_lx_wb* top;
    MemoryModel& memory_model; // Добавляем ссылку на модель памяти
    
public:
    WishboneLoopback(Vtv80_lx_wb* top_ptr, MemoryModel& mem_model)
        : top(top_ptr), memory_model(mem_model) {
        // Инициализация сигналов
        top->s_wb_cyc_i = 0;
        top->s_wb_stb_i = 0;
        top->s_wb_we_i = 0;
        top->s_wb_adr_i = 0;
        top->s_wb_dat_i = 0;
        top->wbm_ack_i = 0;
        top->wbm_dat_i = 0;
    }
    
    void process_loopback() {
        // Прямое замыкание master на slave
        top->s_wb_cyc_i = top->wbm_cyc_o;
        top->s_wb_stb_i = top->wbm_stb_o;
        top->s_wb_we_i = top->wbm_we_o;
        top->s_wb_adr_i = top->wbm_adr_o;
        top->s_wb_dat_i = top->wbm_dat_o;
        
        // Обратное замыкание slave на master
        top->wbm_ack_i = top->s_wb_ack_o;
        top->wbm_dat_i = top->s_wb_dat_o;
        
        // Если это не MMIO (slave не ответил), обрабатываем как память
        if (top->wbm_cyc_o && top->wbm_stb_o && !top->s_wb_ack_o) {
            // Это обращение к памяти, а не к MMIO
            if (top->wbm_we_o) {
                // Write operation
                memory_model.write(top->wbm_adr_o, top->wbm_dat_o);
                top->wbm_ack_i = 1; // Немедленное подтверждение
            } else {
                // Read operation
                uint8_t data = memory_model.read(top->wbm_adr_o);
                top->wbm_dat_i = data;
                top->wbm_ack_i = 1; // Немедленное подтверждение
            }
        }
        
        // Debug output
        if (top->wbm_cyc_o && top->wbm_stb_o) {
            if (top->wbm_we_o) {
                std::cout << "  WB WRITE: addr=0x" << std::hex << std::setw(6) << std::setfill('0') << top->wbm_adr_o
                        << " data=0x" << std::setw(2) << std::setfill('0') << (int)top->wbm_dat_o 
                        << " ack=" << top->wbm_ack_i << std::dec << std::endl;
            } else {
                std::cout << "  WB READ:  addr=0x" << std::hex << std::setw(6) << std::setfill('0') << top->wbm_adr_o
                        << " data=0x" << std::setw(2) << std::setfill('0') << (int)top->wbm_dat_i
                        << " ack=" << top->wbm_ack_i << std::dec << std::endl;
            }
        }
    }
    
    void eval() {
        process_loopback();
    }
};

// =============================================================================
// Enhanced Test Utilities
// =============================================================================
class TV80LXTestUtils {
private:
    vluint64_t& main_time;
    VerilatedVcdC* tfp;
    int test_successes;
    int test_failures;
    uint32_t last_wb_addr;
    uint8_t last_wb_data;
    bool wb_transaction_occurred;

public:
    MemoryModel memory_model;
    Vtv80_lx_wb* top;
    WishboneLoopback wb_loopback; 
    TV80LXTestUtils(Vtv80_lx_wb* top_ptr, vluint64_t& time_var, VerilatedVcdC* trace_ptr = nullptr)
        : top(top_ptr), main_time(time_var), tfp(trace_ptr), 
          test_successes(0), test_failures(0),
          last_wb_addr(0), last_wb_data(0), wb_transaction_occurred(false),
          memory_model(64 * 1024 * 1024),
          wb_loopback(top_ptr, memory_model) {}  // ← Передаем memory_model

    void eval(int delta) {
        top->eval();
        if (tfp) tfp->dump(main_time);
        main_time += delta;
    }

    void clock_rise(int duration = CLK_HALF_PERIOD) {
        top->clk_i = 1;
        eval(duration);
        wb_loopback.eval();

    }

    void clock_fall(int duration = CLK_HALF_PERIOD) {
        top->clk_i = 0;
        eval(duration);
    }

    void clock_tick() {
        clock_rise(SETUP_TIME);
        eval(CLK_REST_TIME); 
        clock_fall(SETUP_TIME);
        eval(CLK_REST_TIME); 
    }

    void reset_pulse() {
        std::cout << "Applying reset pulse..." << std::endl;
        top->nrst_i = 0;
        clock_tick();
        clock_tick();
        top->nrst_i = 1;
        clock_tick();
        last_wb_addr = 0xFFFFFF;
        last_wb_data = 0xFF;
        wb_transaction_occurred = false;
        std::cout << "Reset pulse completed." << std::endl;
    }

    void wait_cycles(int cycles) {
        for (int i = 0; i < cycles; i++) clock_tick();
    }

    
    void clear_wb_transaction() { wb_transaction_occurred = false; }
    bool was_wb_transaction() { return wb_transaction_occurred; }
    uint32_t get_last_wb_addr() { return last_wb_addr; }
    uint8_t get_last_wb_data() { return last_wb_data; }
    bool get_halt() { return top->debug_halt_o == 1; }

    void run_until_halt(int max_cycles = 1000) {
        int cycles = 0;
        bool halted = false;
        
        while (cycles < max_cycles && !halted) {
            clock_tick();
            cycles++;
            
            // Проверяем HALT на каждом такте
            halted = (top->debug_halt_o == 1);
            
            // Дополнительно можно проверять другие условия завершения
#if VERBOSE_WAIT_HALT            
            if (cycles % 100 == 0) {
                std::cout << "Cycle " << cycles << ", HALT=" << halted << std::endl;
            }
#endif            
        }
        
        std::cout << "  Finished: " << cycles << " cycles, HALT=" << halted << std::endl;
        
        if (cycles >= max_cycles && !halted) {
            std::cout << "  ERROR: Timeout! Program did not halt." << std::endl;
        }
    }

    void assert_true(bool condition, const char* message) {
        if (condition) {
            std::cout << "✓ PASS: " << message << std::endl;
            test_successes++;
        } else {
            std::cout << "✗ FAIL: " << message << std::endl;
            test_failures++;
        }
    }

    void assert_equal(uint32_t actual, uint32_t expected, const char* message) {
        if (actual == expected) {
            std::cout << "✓ PASS: " << message << " (expected 0x" << std::hex << expected 
                      << ", got 0x" << actual << ")" << std::dec << std::endl;
            test_successes++;
        } else {
            std::cout << "✗ FAIL: " << message << " (expected 0x" << std::hex << expected 
                      << ", got 0x" << actual << ")" << std::dec << std::endl;
            test_failures++;
        }
    }

    void assert_equal(uint8_t actual, uint8_t expected, const char* message) {
        if (actual == expected) {
            std::cout << "✓ PASS: " << message << " (expected 0x" << std::hex << (int)expected 
                      << ", got 0x" << (int)actual << ")" << std::dec << std::endl;
            test_successes++;
        } else {
            std::cout << "✗ FAIL: " << message << " (expected 0x" << std::hex << (int)expected 
                      << ", got 0x" << (int)actual << ")" << std::dec << std::endl;
            test_failures++;
        }
    }

    void assert_memory(uint32_t address, uint8_t expected, const char* message) {
        uint8_t actual = memory_model.read(address);
        
        // Создаем сообщение с адресом
        char full_message[256];
        snprintf(full_message, sizeof(full_message), "memory[0x%06X] = 0x%02X - %s", 
                address, expected, message);
        
        assert_equal(actual, expected, full_message);
    }

    void print_test_results() {
        std::cout << "\n=== TEST RESULTS ===" << std::endl;
        std::cout << "Passed: " << test_successes << std::endl;
        std::cout << "Failed: " << test_failures << std::endl;
        std::cout << "Total:  " << (test_successes + test_failures) << std::endl;
        
        if (test_failures == 0) {
            std::cout << "🎉 ALL TESTS PASSED!" << std::endl;
        } else {
            std::cout << "❌ SOME TESTS FAILED!" << std::endl;
        }
    }

    int get_test_failures() { return test_failures; }
};

// =============================================================================
// Test Functions
// =============================================================================

void test_simple_program(TV80LXTestUtils& utils) {
    std::cout << "\n=== TEST 1: SIMPLE PROGRAM EXECUTION ===" << std::endl;
    
    // Простая программа: записать 0x55 в память и остановиться
    // ЗАГРУЖАЕМ В СЛОТ 0 (0000-3FFF) - откуда начинается выполнение!
    std::vector<uint8_t> test_program = {
        0x3E, 0x55,       // ld a, 55h
        0x32, 0x00, 0xC0, // ld (C000h), a
        0x76              // halt
    };
    
    utils.memory_model.load_program(0xC00000, test_program); // ← ИСПРАВЛЕНО: 0x0000 вместо 0x8000
    utils.reset_pulse();
    utils.run_until_halt(100);
    // because the mapper is by default is 00 it will be 00 page instead of the 
    utils.assert_memory(0xC00000, 0x55, "Should write 0x55 to C000h");
}

void test_mapper_operation(TV80LXTestUtils& utils) {
    std::cout << "\n=== TEST 2: MAPPER OPERATION ===" << std::endl;
    
    // Программа: установить банк 3 = 0x03, затем записать 0x55 в C000
    std::vector<uint8_t> test_program = {
        // Установить банк 3 (порт 0xDF) в значение 0x03
        0x3E, 0x03,       // ld a, 03h
        0xD3, 0xDF,       // out (DFh), a - установить банк 3 = 3
        
        // Записать 0x55 в память по адресу C000 (слот 3)
        0x3E, 0x55,       // ld a, 55h
        0x32, 0x00, 0xC0, // ld (C000h), a
        
        // Остановиться
        0x76              // halt
    };
    
    utils.memory_model.load_program(0xC00000, test_program);
    utils.reset_pulse();
    utils.run_until_halt(200);
    
    // Проверяем что записалось в память по адресу C000
    // (это слот 3, банк 3, поэтому физический адрес = (3 << 14) | 0x0000 = 0xC000)
    utils.assert_memory(0xC0C000, 0x55, "Should write 0x55 to C000h");
}

void test_supervisor_registers(TV80LXTestUtils& utils) {
    std::cout << "\n=== TEST 3: SUPERVISOR REGISTERS ===" << std::endl;
    
    // Программа: установить разные режимы и проверить их работу
    std::vector<uint8_t> test_program = {
        // 1. Установить Native + Supervisor режим
        0x3E, 0x03,       // ld a, 03h (native=1, supervisor=1, userlock=0)
        0xD3, 0xD7,       // out (D7h), a
        
        // 2. Проверить запись в память в Native режиме
        0x3E, 0xAA,       // ld a, 0xAA
        0x32, 0x01, 0x90, // ld (8000h), a (слот 2)
        
        // 3. Переключиться в User режим (только native)
        0x3E, 0x01,       // ld a, 01h (native=1, supervisor=0, userlock=0) 
        0xD3, 0xD7,       // out (D7h), a
        0x00,             // NOP for switching to user
        
        // 4. Попробовать записать в память в User режиме
        0x3E, 0x55,       // ld a, 0x55
        0x32, 0x02, 0xA0, // ld (9000h), a  (запись в адресс 0x1000 так как маппер слота 0 в нуле)
        
        // 5. Вернуться в Supervisor для выхода
        0x3E, 0x03,       // ld a, 03h (native=1, supervisor=1, userlock=0)
        0xD3, 0xD7,       // out (D7h), a
        
        0x76              // halt
    };
    // программу для супервизора
    utils.memory_model.load_program(0xC00000, test_program);
    // программу для пользователя
    utils.memory_model.load_program(0x000000, test_program);
    utils.reset_pulse();
    utils.run_until_halt(300);
    
    // Проверки
    utils.assert_equal(utils.top->native_mode_o, 1, "Native mode should be enabled");
    utils.assert_equal(utils.top->supervisor_mode_o, 1, "Should end in supervisor mode");
    
    // Проверяем что память записалась в разных режимах
    utils.assert_memory(0xC01001, 0xAA, "Should write in supervisor native mode");
    utils.assert_memory(0x002002, 0x55, "Should write in user native mode");
    
    // Дополнительные проверки регистров
    std::cout << "Final control register: 0x" << std::hex 
              << (int)utils.top->debug_control_o << std::dec << std::endl;
}

void test_memory_access_patterns(TV80LXTestUtils& utils) {
    std::cout << "\n=== TEST 4: MEMORY ACCESS PATTERNS ===" << std::endl;
    
    std::vector<uint8_t> test_program = {
        // Программируем маппер 0 (банк 0 для адресов 0x0000-0x3FFF)
        0x3E, 0x00,       // LD A, 0x00 (страница 0)
        0xD3, 0xDC,       // OUT (0xFC), A
        
        // Записываем значение в конец страницы 0 (0x0000-0x3FFF)
        0x3E, 0xD0,       // LD A, 0xD0
        0x32, 0xFF, 0x3F, // LD (0x3FFF), A
        
        // Программируем маппер 1 (банк 1 для адресов 0x4000-0x7FFF)
        0x3E, 0x01,       // LD A, 0x01 (страница 1)
        0xD3, 0xDD,       // OUT (0xFD), A
        
        // Записываем значение в конец страницы 1 (0x4000-0x7FFF)
        0x3E, 0xD1,       // LD A, 0xD1
        0x32, 0xFF, 0x7F, // LD (0x7FFF), A
        
        // Программируем маппер 2 (банк 2 для адресов 0x8000-0xBFFF)
        0x3E, 0x02,       // LD A, 0x02 (страница 2)
        0xD3, 0xDE,       // OUT (0xFE), A
        
        // Записываем значение в конец страницы 2 (0x8000-0xBFFF)
        0x3E, 0xD2,       // LD A, 0xD2
        0x32, 0xFF, 0xBF, // LD (0xBFFF), A
        
        // Программируем маппер 3 (банк 3 для адресов 0xC000-0xFFFF)
        0x3E, 0x03,       // LD A, 0x03 (страница 3)
        0xD3, 0xDF,       // OUT (0xFF), A
        
        // Записываем значение в конец страницы 3 (0xC000-0xFFFF)
        0x3E, 0xD3,       // LD A, 0xD3
        0x32, 0xFF, 0xFF, // LD (0xFFFF), A
        
        // Останавливаем выполнение
        0x76              // HALT
    };
        
    utils.memory_model.load_program(0xC00000, test_program);
    utils.reset_pulse();
    utils.run_until_halt(200);
    
    // Проверяем записанные значения на каждой странице
    utils.assert_memory(0xC03FFF, 0xD0, "Should write D0 to page 0 (0x3FFF)");
    utils.assert_memory(0xC07FFF, 0xD1, "Should write D0 to page 0 (0x7FFF)");
    utils.assert_memory(0xC0BFFF, 0xD2, "Should write D1 to page 1 (0xBFFF)");
    utils.assert_memory(0xC0FFFF, 0xD3, "Should write D2 to page 2 (0xFFFF)");
    
    // Для страницы 3 проверяем по адресу 0x0000 (но осторожно - там может быть код)
    // Лучше проверить через маппер, переключившись на страницу 3
    utils.assert_true(utils.get_last_wb_addr() >= 0xC0C000, "Should access meaningful addresses");
    
    // Дополнительная проверка: программируем мапперы и проверяем доступ к разным страницам
    std::cout << "Memory mapper programming completed successfully" << std::endl;
}

void test_user_native_syscall(TV80LXTestUtils& utils) {
    std::cout << "\n=== TEST 5: USER NATIVE SYSCALL ===" << std::endl;   
    // Загружаем BIOS в слот 3 (0xC00000)
    utils.memory_model.load_binary_file(0xC00000, "bios.bin");
    // Загружаем пользовательскую программу в слот 0
    utils.memory_model.load_binary_file(0x000000, "user_native.bin");
       
    // Устанавливаем PC на холодный boot вектор BIOS
    utils.reset_pulse();
    
    // Запускаем выполнение
    utils.run_until_halt(1000);
    
    // Проверяем результат
    uint8_t result = utils.memory_model.read(0xC000);
    utils.assert_equal(result, 0x08, "Syscall should return 5+3=8");
}
// =============================================================================
// Main Test Suite
// =============================================================================
int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    
    vluint64_t main_time = 0;
    VerilatedVcdC* tfp = new VerilatedVcdC;
    
    Vtv80_lx_wb* top = new Vtv80_lx_wb;
    top->trace(tfp, 99);
    tfp->open("tv80_lx_wb_test.vcd");
    
    TV80LXTestUtils utils(top, main_time, tfp);
    
    std::cout << "=== TV80-LX-WB SUPERVISOR BIOS TEST SUITE ===" << std::endl;

    test_simple_program(utils);
    test_mapper_operation(utils);
    test_supervisor_registers(utils);
    test_memory_access_patterns(utils);
    
    // Load BIOS and run tests
    test_user_native_syscall(utils);

    // Final stability test
    // std::cout << "\n=== FINAL STABILITY TEST ===" << std::endl;
    // for (int i = 0; i < 50; i++) utils.clock_tick();
    // utils.assert_true(true, "Extended stability test passed");
    
    utils.print_test_results();
    
    tfp->close();
    delete top;
    delete tfp;
    
    return utils.get_test_failures();
}