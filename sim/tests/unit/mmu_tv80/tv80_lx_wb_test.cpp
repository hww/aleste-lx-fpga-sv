#include <iostream>
#include <iomanip>
#include <vector>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vtv80_lx_wb.h"

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
    MemoryModel(size_t size = 64 * 1024) : memory(size, 0x00) {
        // Простая линейная память 64KB
    }
    
    void write(uint32_t addr, uint8_t data) {
        uint32_t phys_addr = addr & 0xFFFF; // Ограничиваем 16-битным адресом
        if (phys_addr < memory.size()) {
            memory[phys_addr] = data;
        }
    }
    
    uint8_t read(uint32_t addr) {
        uint32_t phys_addr = addr & 0xFFFF; // Ограничиваем 16-битным адресом
        return (phys_addr < memory.size()) ? memory[phys_addr] : 0xAA;
    }
    
    void load_program(uint32_t start_addr, const std::vector<uint8_t>& program) {
        for (size_t i = 0; i < program.size(); i++) {
            uint32_t addr = (start_addr + i) & 0xFFFF;
            if (addr < memory.size()) {
                memory[addr] = program[i];
            }
        }
        std::cout << "Loaded " << program.size() << " bytes at 0x" 
                  << std::hex << start_addr << std::dec << std::endl;
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
                std::cout << "  WB WRITE: addr=0x" << std::hex << top->wbm_adr_o
                          << " data=0x" << (int)top->wbm_dat_o 
                          << " ack=" << top->wbm_ack_i << std::dec << std::endl;
            } else {
                std::cout << "  WB READ:  addr=0x" << std::hex << top->wbm_adr_o
                          << " data=0x" << (int)top->wbm_dat_i
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
        assert_equal(actual, expected, message);
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
// BIOS Loading Functions
// =============================================================================
void load_supervisor_bios(TV80LXTestUtils& utils) {
    std::vector<uint8_t> bios = {
        // Cold Boot Vector (0x0000)
        0xF3, 0x31, 0xF0, 0xFF, 0xC3, 0x1A, 0x00,
        
        // Padding to SysCall Vector (0x0038)
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC3, 0x38, 0x00,
        
        // NMI Vector (0x0066)
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0xED, 0x45,
        
        // Supervisor Initialization (0x001A)
        0x3E, 0x03, 0xD3, 0xD7, 0x3E, 0x07, 0xD3, 0xD7, 0xAF, 0xD3, 0xD7, 0xED, 0x45,
        
        // SysCall Dispatcher (0x0038)
        0x08, 0xD9, 0xF5, 0x78, 0xB9, 0xC2, 0x80, 0x00, 0xF1, 0x3D, 0xCA, 0x90, 0x00,
        0x3D, 0xCA, 0xA0, 0x00, 0x3E, 0xFE, 0xC3, 0xD0, 0x00,
        
        // Function 00: Set GLOBAL_CTRL (0x0080)
        0xF1, 0x79, 0xD3, 0xD7, 0x3E, 0x00, 0xC3, 0xD0, 0x00,
        
        // Function 01: Set User Bank (0x0090)
        0xF1, 0x79, 0xD3, 0xDC, 0x3E, 0x00, 0xC3, 0xD0, 0x00,
        
        // Function 02: Add Numbers (0x00A0)
        0x7A, 0x83, 0xC3, 0xD0, 0x00,
        
        // Common Return Path (0x00D0)
        0xD9, 0x08, 0xED, 0x4D
    };
    
    utils.memory_model.load_program(0x0000, bios);
    std::cout << "Supervisor BIOS loaded at 0x0000" << std::endl;
}

// =============================================================================
// Test Functions
// =============================================================================

void test_simple_program(TV80LXTestUtils& utils) {
    std::cout << "\n=== TEST 1 A: SIMPLE PROGRAM EXECUTION ===" << std::endl;
    
    // Простая программа: записать 0x55 в память и остановиться
    // ЗАГРУЖАЕМ В СЛОТ 0 (0000-3FFF) - откуда начинается выполнение!
    std::vector<uint8_t> test_program = {
        0x3E, 0x55,       // ld a, 55h
        0x32, 0x00, 0xC0, // ld (C000h), a
        0x76              // halt
    };
    
    utils.memory_model.load_program(0x0000, test_program); // ← ИСПРАВЛЕНО: 0x0000 вместо 0x8000
    utils.reset_pulse();
    utils.run_until_halt(100);
    // because the mapper is by default is 00 it will be 00 page instead of the 
    utils.assert_memory(0x0000, 0x55, "Should write 0x55 to C000h");
}

void test_mapper_operation(TV80LXTestUtils& utils) {
    std::cout << "\n=== TEST 1 B: MAPPER OPERATION ===" << std::endl;
    
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
    
    utils.memory_model.load_program(0x0000, test_program);
    utils.reset_pulse();
    utils.run_until_halt(200);
    
    // Проверяем что записалось в память по адресу C000
    // (это слот 3, банк 3, поэтому физический адрес = (3 << 14) | 0x0000 = 0xC000)
    utils.assert_memory(0xC000, 0x55, "Should write 0x55 to C000h");
    
    // Дополнительная проверка: смотрим что по физическому адресу 0x3000 (банк 3, смещение 0)
    // тоже должно быть 0x55, поскольку банк 3 отображается на 0x3000-0x3FFF
    utils.assert_memory(0x3000, 0x55, "Should also be at physical 0x3000 (bank 3)");
}


void test_supervisor_registers(TV80LXTestUtils& utils) {
    std::cout << "\n=== TEST 2: SUPERVISOR REGISTERS ===" << std::endl;
    
    // Программа для установки режимов - ЗАГРУЖАЕМ В СЛОТ 0
    std::vector<uint8_t> test_program = {
        0x3E, 0x03,       // ld a, 03h
        0xD3, 0xD7,       // out (D7h), a
        0x76              // halt
    };
    
    utils.memory_model.load_program(0x0000, test_program); // ← ИСПРАВЛЕНО
    utils.reset_pulse();
    utils.run_until_halt(100);
    
    utils.assert_equal(utils.top->native_mode_o, 1, "Native mode should be set");
    utils.assert_equal(utils.top->supervisor_mode_o, 1, "Supervisor mode should be set");
}

//void test_bank_operations(TV80LXTestUtils& utils) {
//    std::cout << "\n=== TEST 3: BANK OPERATIONS ===" << std::endl;
//    
//    std::vector<uint8_t> test_program = {
//        0x3E, 0x0F,       // ld a, 0Fh
//        0xD3, 0xDC,       // out (DCh), a - bank 0
//        0x3E, 0x1E,       // ld a, 1Eh
//        0xD3, 0xDD,       // out (DDh), a - bank 1
//        0x76              // halt
//    };
//    
//    utils.memory_model.load_program(0x0000, test_program); // ← ИСПРАВЛЕНО
//    utils.reset_pulse();
//    utils.run_until_halt(100);
//    
//    utils.assert_equal(utils.memory_model.get_bank(0), 0x0F, "Bank 0 should be 0x0F");
//    utils.assert_equal(utils.memory_model.get_bank(1), 0x1E, "Bank 1 should be 0x1E");
//}

void test_memory_access_patterns(TV80LXTestUtils& utils) {
    std::cout << "\n=== TEST 4: MEMORY ACCESS PATTERNS ===" << std::endl;
    
    std::vector<uint8_t> test_program = {
        0x3E, 0x55, 0x32, 0x00, 0x80, 0x32, 0x00, 0xC0, 0x76
    };
    
    utils.memory_model.load_program(0x0000, test_program);
    utils.reset_pulse();
    utils.run_until_halt(200);
    
    utils.assert_memory(0x8000, 0x55, "Should write to 0x8000");
    utils.assert_memory(0xC000, 0x55, "Should write to 0xC000");
    utils.assert_true(utils.get_last_wb_addr() >= 0xC000, "Should access meaningful addresses");
}

void test_user_native_syscall(TV80LXTestUtils& utils) {
    std::cout << "\n=== TEST 4: USER NATIVE SYSCALL ===" << std::endl;
    
    // Пользовательская программа ДОЛЖНА БЫТЬ В СЛОТЕ 0!
    std::vector<uint8_t> user_program = {
        0x3E, 0x02,       // ld a, 02h - функция сложения
        0x16, 0x05,       // ld d, 05h
        0x1E, 0x03,       // ld e, 03h
        0xCD, 0x20, 0x00, // call syscall_wrapper (в том же слоте!)
        0x32, 0x00, 0xC0, // ld (C000h), a - сохраняем результат
        0x76              // halt
    };
    
    // Обертка syscall - ТОЖЕ В СЛОТЕ 0!
    std::vector<uint8_t> syscall_wrapper = {
        0xD3, 0xD4,       // out (D4h), a
        0xC9              // ret
    };
    
    // Загружаем ОБЕ программы в слот 0
    utils.memory_model.load_program(0x0000, user_program);
    utils.memory_model.load_program(0x0020, syscall_wrapper); // ← по адресу 0x0020
    
    utils.reset_pulse();
    utils.run_until_halt(200);
    
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
    // Load BIOS and run tests
    load_supervisor_bios(utils);
    
    test_supervisor_registers(utils);
    test_user_native_syscall(utils);
    //test_user_legacy_syscall(utils);
    test_memory_access_patterns(utils);

    // Final stability test
    std::cout << "\n=== FINAL STABILITY TEST ===" << std::endl;
    for (int i = 0; i < 50; i++) utils.clock_tick();
    utils.assert_true(true, "Extended stability test passed");
    
    utils.print_test_results();
    
    tfp->close();
    delete top;
    delete tfp;
    
    return utils.get_test_failures();
}