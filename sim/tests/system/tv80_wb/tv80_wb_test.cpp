#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vtv80_wb_tb.h"
#include <iostream>
#include <memory>

class TV80_WB_Test {
private:
    std::unique_ptr<Vtv80_wb_tb> dut;
    std::unique_ptr<VerilatedVcdC> tfp;
    vluint64_t main_time;

    // Memory simulation
    uint8_t memory[65536];

public:
    TV80_WB_Test() : main_time(0) {
        dut = std::make_unique<Vtv80_wb_tb>();
        tfp = std::make_unique<VerilatedVcdC>();
        
        Verilated::traceEverOn(true);
        dut->trace(tfp.get(), 99);
        tfp->open("tv80_wb.vcd");
        
        // Initialize memory
        memset(memory, 0, sizeof(memory));
        
        // Initialize DUT inputs
        dut->nrst_i = 0;
        dut->clk_i = 0;
        dut->wbm_dat_i = 0;
        dut->wbm_ack_i = 0;
        dut->nmi_req_i = 0;
        dut->int_req_i = 0;
        dut->busrq_i = 0;
    }

    ~TV80_WB_Test() {
        tfp->close();
    }

    void tick() {
        // Первая половина такта
        dut->clk_i = 0;
        dut->eval();
        tfp->dump(main_time);
        main_time++;

        // Вторая половина такта - ЗАДНИЙ фронт
        dut->clk_i = 1;
        dut->eval();
        handle_wishbone();  // Обработка на заднем фронте!
        tfp->dump(main_time);
        main_time++;
    }

    void reset() {
        std::cout << "[CPP] Resetting CPU..." << std::endl;
        dut->nrst_i = 0;
        dut->wbm_ack_i = 0;
        for (int i = 0; i < 4; i++) tick();
        dut->nrst_i = 1;
        for (int i = 0; i < 4; i++) tick();
        std::cout << "[CPP] Reset complete" << std::endl;
    }

    // Глобальная переменная для управления задержкой
    int wishbone_latency = 0;
    int current_delay = 0;

    void handle_wishbone() {
        if (dut->clk_i && dut->nrst_i) {
            // Сбрасываем ACK и данные в каждом такте
            dut->wbm_ack_i = 0;
            dut->wbm_dat_i = 0;
            
            if (dut->wbm_cyc_o && dut->wbm_stb_o && !dut->wbm_ack_i) {
                current_delay++;
                
                if (current_delay > wishbone_latency) {
                    // Достигли нужной задержки - выдаем ACK
                    dut->wbm_ack_i = 1;
                    current_delay = 0;
                    
                    if (dut->wbm_we_o) {
                        // ЦИКЛ ЗАПИСИ
                        memory[dut->wbm_adr_o] = dut->wbm_dat_o;
                        std::cout << "[CPP] WRITE to 0x" << std::hex << dut->wbm_adr_o 
                                << " data: 0x" << (int)dut->wbm_dat_o 
                                << " latency: " << wishbone_latency << std::endl;
                    } else {
                        // ЦИКЛ ЧТЕНИЯ (включая код и операнды!)
                        dut->wbm_dat_i = memory[dut->wbm_adr_o];
                        std::cout << "[CPP] READ from 0x" << std::hex << dut->wbm_adr_o 
                                << " data: 0x" << (int)dut->wbm_dat_i
                                << " latency: " << wishbone_latency << std::endl;
                    }
                }
            } else {
                current_delay = 0;
            }
        }
    }

    // Test 1: Single NOP operation
    bool test_nop_single() {
        std::cout << "[CPP] Test 1: Single NOP operation" << std::endl;
        
        // Initialize memory with NOP (0x00)
        memory[0] = 0x00; // NOP
        
        reset();
        
        uint16_t initial_pc = dut->wbm_adr_o;
        std::cout << "[CPP] Initial PC: 0x" << std::hex << initial_pc << std::endl;
        
        // Execute one instruction
        for (int i = 0; i < 4; i++) {
            tick();
        }
        
        uint16_t final_pc = dut->wbm_adr_o;
        std::cout << "[CPP] Final PC: 0x" << std::hex << final_pc << std::endl;
        
        bool success = (final_pc == initial_pc + 1);
        std::cout << "[CPP] [RESULT] Test 1 " << (success ? "PASSED" : "FAILED") << std::endl;
        return success;
    }

    // Test 3: HALT operation
    bool test_halt() {
        std::cout << "[CPP] Test 3: HALT operation" << std::endl;
        
        // Initialize memory with HALT (0x76)
        for (int i = 0; i < 10; i++) 
            memory[i] = 0x76; // HALT

        reset();
        
        uint16_t initial_pc = dut->wbm_adr_o;
        std::cout << "[CPP] Initial PC: 0x" << std::hex << initial_pc << std::endl;
        
        // Execute multiple cycles after HALT
        for (int i = 0; i < 10; i++) {
            tick();
        }
        
        uint16_t final_pc = dut->wbm_adr_o;
        std::cout << "[CPP] Final PC: 0x" << std::hex << final_pc << std::endl;
        
        // PC should not change after HALT
        bool success = (final_pc == initial_pc + 1);
        std::cout << "[CPP] [RESULT] Test 3 " << (success ? "PASSED" : "FAILED") << std::endl;
        return success;
    }
    bool test_memory_write() {
        std::cout << "[CPP] Test 5: Memory Write cycle" << std::endl;
        
        // Простая программа: запись значения в память
        // LD A, 55h     ; 3E 55 - Загружаем 55h в аккумулятор
        // LD (8000h), A ; 32 00 80 - Записываем A в память по 8000h
        // HALT          ; 76 - Останавливаемся
        
        memory[0x0000] = 0x3E; // LD A, n
        memory[0x0001] = 0x55; // value 55h
        memory[0x0002] = 0x32; // LD (nn), A
        memory[0x0003] = 0x00; // low byte
        memory[0x0004] = 0x80; // high byte
        memory[0x0005] = 0x76; // HALT

        // Очищаем тестовую ячейку
        memory[0x8000] = 0x00;
        
        reset();
        
        std::cout << "[CPP] Starting memory write test..." << std::endl;
        std::cout << "[CPP] Initial value at 8000h: 0x" << std::hex << (int)memory[0x8000] << std::endl;
        
        // Выполняем достаточно тактов для завершения программы
        for (int i = 0; i < 40; i++) {
            handle_wishbone();
            tick();
        }
        
        // Проверяем результат записи
        bool write_ok = (memory[0x8000] == 0x55);
        
        std::cout << "[CPP] Final value at 8000h: 0x" << std::hex << (int)memory[0x8000] << std::endl;
        std::cout << "[CPP] Write test: " << (write_ok ? "PASS" : "FAIL") << std::endl;
        
        if (write_ok) {
            std::cout << "[CPP] SUCCESS: Processor correctly wrote 55h to memory 8000h" << std::endl;
        } else {
            std::cout << "[CPP] ERROR: Expected 55h, got 0x" << std::hex << (int)memory[0x8000] << std::endl;
        }
        
        return write_ok;
    }// Тест с разной латентностью
bool test_bus_latency() {
    std::cout << "[CPP] Test 6: Bus Latency test" << std::endl;
    
    // Программа: несколько операций
    memory[0x0000] = 0x3E; memory[0x0001] = 0x55; // LD A, 55h
    memory[0x0002] = 0x32; memory[0x0003] = 0x00; memory[0x0004] = 0x80; // LD (8000h), A
    memory[0x0005] = 0x3A; memory[0x0006] = 0x00; memory[0x0007] = 0x80; // LD A, (8000h)
    memory[0x0008] = 0x32; memory[0x0009] = 0x01; memory[0x000A] = 0x80; // LD (8001h), A
    memory[0x000B] = 0x76; // HALT

    memory[0x8000] = 0x00;
    memory[0x8001] = 0x00;
    
    reset();
    
    // Тестируем латентность 4, 2, 1, 0
    int latency_pattern[] = {4, 2, 1, 0};
    bool test_passed = true;

    for (int lat : latency_pattern) {
        wishbone_latency = lat;
        current_delay = 0;
        
        std::cout << "[CPP] Testing latency: " << lat << " cycles" << std::endl;
        
        // Выполняем несколько операций с текущей латентностью
        for (int i = 0; i < 30; i++) {
            handle_wishbone();
            tick();
            
            if (dut->wbm_adr_o == 0x000C) { // Адрес после HALT
                break;
            }
        }
        
        // Проверяем корректность выполнения
        if (memory[0x8000] != 0x55 || memory[0x8001] != 0x55) {
            std::cout << "[CPP] FAIL at latency " << lat << std::endl;
            test_passed = false;
            break;
        }
    }
    
    wishbone_latency = 0; // Сбрасываем для других тестов
    
    std::cout << "[CPP] Latency test: " << (test_passed ? "PASS" : "FAIL") << std::endl;
    return test_passed;
}
    void run_all_tests() {
        std::cout << "[CPP] Starting TV80 WB Tests..." << std::endl;
        
        bool test1 = test_nop_single();
        bool test3 = test_halt();
        bool test4 = test_memory_write();
        bool test5 = test_bus_latency();
        std::cout << "\n[CPP] === Test Results ===" << std::endl;
        std::cout << "[CPP] Test 1 (NOP single): " << (test1 ? "PASS" : "FAIL") << std::endl;
        std::cout << "[CPP] Test 3 (HALT): " << (test3 ? "PASS" : "FAIL") << std::endl;
        std::cout << "[CPP] Test 4 (WR): " << (test4 ? "PASS" : "FAIL") << std::endl;
        std::cout << "[CPP] Test 4 (Bus Latency): " << (test5 ? "PASS" : "FAIL") << std::endl;
        if (test1 && test3 && test4 && test5) {
            std::cout << "[CPP] All tests PASSED!" << std::endl;
        } else {
            std::cout << "[CPP] Some tests FAILED!" << std::endl;
        }
    }
};

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    
    TV80_WB_Test test;
    test.run_all_tests();
    
    return 0;
}