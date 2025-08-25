#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vtv80_wb_tb.h"
#include <iostream>
#include <memory>
#include <cstring>

class TV80_WB_Test {
private:
    std::unique_ptr<Vtv80_wb_tb> dut;
    std::unique_ptr<VerilatedVcdC> tfp;
    vluint64_t main_time;

    // Memory simulation
    uint8_t memory[65536];

    // Wishbone control variables
    int ack_latency;
    int ack_counter;
    bool ack_pending;


public:
    TV80_WB_Test() : main_time(0), ack_latency(1), ack_counter(0), ack_pending(false)
    {
        dut = std::make_unique<Vtv80_wb_tb>();
        tfp = std::make_unique<VerilatedVcdC>();
        
        Verilated::traceEverOn(true);
        dut->trace(tfp.get(), 99);
        tfp->open("tv80_wb.vcd");
        
        // Initialize memory with NOPs (0x00)
        memset(memory, 0x00, sizeof(memory));
        
        // Initialize DUT inputs
        initialize_dut();
    }

    ~TV80_WB_Test() {
        tfp->close();
    }

    void initialize_dut() {
        dut->nrst_i = 1;
        dut->clk_i = 0;
        dut->wbm_dat_i = 0;
        dut->wbm_ack_i = 0;
        dut->nmi_req_i = 0;
        dut->int_req_i = 0;
        dut->busrq_i = 0;
        dut->eval();
    }

    void tick() {
        // Низкий уровень такта
        dut->clk_i = 0;
        evalDump();

        // Высокий уровень такта
        dut->clk_i = 1;
        evalDump();

        // Обработка Wishbone на заднем фронте
        handle_wishbone();
        evalDump();

    }

    void evalDump()
    {        
        dut->eval();
        tfp->dump(main_time);
        main_time++;   
    }

    void reset() {
        std::cout << "[CPP] Resetting CPU..." << std::endl;
        
        // Активный низкий сброс
        dut->nrst_i = 0;
        dut->wbm_ack_i = 0;
        ack_pending = false;
        ack_counter = 0;
        
        // Держим сброс несколько тактов
        for (int i = 0; i < 5; i++) {
            tick();
        }
        
        // Снимаем сброс
        dut->nrst_i = 1;
        std::cout << "[CPP] Reset complete" << std::endl;
        
        // Несколько тактов после сброса
        for (int i = 0; i < 5; i++) {
            tick();
        }
    }

    void set_ack_latency(int latency) {
        ack_latency = latency;
        std::cout << "[CPP] ACK latency set to " << latency << " cycles" << std::endl;
    }

void handle_wishbone() {
    dut->wbm_ack_i = 0;
    if (dut->nrst_i == 0) return;

    if (dut->wbm_cyc_o && dut->wbm_stb_o) {
        if (!ack_pending) {
            // Новая транзакция
            ack_pending = true;
            ack_counter = 0;
            
            // Мгновенный ACK для нулевой латентности
            if (ack_latency == 0) {
                process_memory_operation();
                dut->wbm_ack_i = 1;
                ack_pending = false;
            }
        } else {
            // Транзакция в процессе
            ack_counter++;
            
            if (ack_counter >= ack_latency) {
                process_memory_operation();
                dut->wbm_ack_i = 1;
                ack_pending = false;
            }
        }
    } else {
        ack_pending = false;
        ack_counter = 0;
    }
}

void process_memory_operation() {
    if (dut->wbm_we_o) {
        memory[dut->wbm_adr_o] = dut->wbm_dat_o;
        std::cout << "[CPP] Memory WRITE: 0x" << std::hex << dut->wbm_adr_o 
                  << " = 0x" << (int)dut->wbm_dat_o << std::endl;
    } else {
        dut->wbm_dat_i = memory[dut->wbm_adr_o];
        std::cout << "[CPP] Memory READ: 0x" << std::hex << dut->wbm_adr_o 
                  << " = 0x" << (int)dut->wbm_dat_i << std::endl;
    }
}

    void dump_wb_state() {
        std::cout << "[CPP] WB State: "
                  << "CYC=" << (int)dut->wbm_cyc_o
                  << " STB=" << (int)dut->wbm_stb_o
                  << " WE=" << (int)dut->wbm_we_o
                  << " ADR=0x" << std::hex << (int)dut->wbm_adr_o
                  << " DAT_O=0x" << std::hex << (int)dut->wbm_dat_o
                  << " ACK_I=" << (int)dut->wbm_ack_i
                  << " DAT_I=0x" << std::hex << (int)dut->wbm_dat_i
                  << std::endl;
    }

    // Test 1: Single NOP operation
    bool test_nop_single() {
        std::cout << "[CPP] Test 1: Single NOP operation" << std::endl;
        
        // Убедимся что по адресу 0x0 находится NOP
        memory[0] = 0x00; // NOP
        
        reset();
        
        std::cout << "[CPP] Starting NOP test..." << std::endl;
        
        uint16_t initial_pc = dut->wbm_adr_o;
        std::cout << "[CPP] Initial PC: 0x" << std::hex << initial_pc << std::endl;
        
        // Выполним несколько инструкций
        for (int i = 0; i < 10; i++) {
            tick();
        }
        
        uint16_t final_pc = dut->wbm_adr_o;
        std::cout << "[CPP] Final PC: 0x" << std::hex << final_pc << std::endl;
        
        // Проверяем что PC увеличился на количество выполненных инструкций
        bool success = (final_pc > initial_pc);
        std::cout << "[CPP] [RESULT] Test 1 " << (success ? "PASSED" : "FAILED") << std::endl;
        return success;
    }

    // Test 2: HALT operation
    bool test_halt() {
        std::cout << "[CPP] Test 2: HALT operation" << std::endl;
        
        // Помещаем HALT инструкцию по адресу 0x0
        memory[0] = 0x76; // HALT
        
        reset();
        
        std::cout << "[CPP] Starting HALT test..." << std::endl;
        
        uint16_t initial_pc = dut->wbm_adr_o;
        std::cout << "[CPP] Initial PC: 0x" << std::hex << initial_pc << std::endl;
        
        // Выполняем несколько тактов
        for (int i = 0; i < 15; i++) {
            tick();
        }
        
        uint16_t final_pc = dut->wbm_adr_o;
        std::cout << "[CPP] Final PC: 0x" << std::hex << final_pc << std::endl;
        
        // После HALT PC не должен меняться
        bool success = (final_pc == initial_pc+1); // PC останавливается после чтения HALT
        std::cout << "[CPP] [RESULT] Test 2 " << (success ? "PASSED" : "FAILED") << std::endl;
        return success;
    }

    // Test 3: Memory Write operation
    bool test_memory_write() {
        std::cout << "[CPP] Test 3: Memory Write cycle" << std::endl;
        
        // Программа: LD A, 0x55; LD (0x8000), A; HALT
        memory[0x0000] = 0x3E; // LD A, n
        memory[0x0001] = 0x55; // value 55h
        memory[0x0002] = 0x32; // LD (nn), A
        memory[0x0003] = 0x00; // low byte of address
        memory[0x0004] = 0x80; // high byte of address
        memory[0x0005] = 0x76; // HALT

        memory[0x8000] = 0x00; // Initialize target memory
        
        reset();
        
        std::cout << "[CPP] Starting memory write test..." << std::endl;
        std::cout << "[CPP] Initial value at 0x8000: 0x" << std::hex << (int)memory[0x8000] << std::endl;
        
        // Выполняем достаточно тактов для завершения программы
        for (int i = 0; i < 40; i++) {
            tick();
        }
        
        std::cout << "[CPP] Final value at 0x8000: 0x" << std::hex << (int)memory[0x8000] << std::endl;
        
        bool success = (memory[0x8000] == 0x55);
        std::cout << "[CPP] [RESULT] Test 3 " << (success ? "PASSED" : "FAILED") << std::endl;
        return success;
    }

    // Test 4: Variable ACK latency
    bool test_variable_latency() {
    std::cout << "[CPP] Test 4: Variable ACK latency" << std::endl;
    
    bool all_passed = true;
    
    for (int latency = 0; latency <= 3; latency++) {
        set_ack_latency(latency);
        
        // Простая программа: три NOP для проверки timing
        memory[0] = 0x00; // NOP
        memory[1] = 0x00; // NOP  
        memory[2] = 0x00; // NOP
        memory[3] = 0x76; // HALT
        
        reset();
        
        std::cout << "[CPP] === Testing latency " << latency << " ===" << std::endl;
        
        int cycle_count = 0;
        int ack_count = 0;
        
        for (int i = 0; i < 40; i++) {
            tick();
            cycle_count++;
            
            if (dut->wbm_ack_i) {
                ack_count++;
                std::cout << "[CPP] ACK at cycle " << cycle_count << std::endl;
            }
            
            if (cycle_count > 35) break; // Avoid infinite loop
        }
        
        std::cout << "[CPP] Latency " << latency << ": " << ack_count 
                  << " ACKs in " << cycle_count << " cycles" << std::endl;
        
        // Для latency > 0 должно быть меньше ACK'ов
        if (latency > 0 && ack_count >= 10) {
            std::cout << "[CPP] WARNING: Too many ACKs for latency " << latency << std::endl;
            all_passed = false;
        }
    }
    
    std::cout << "[CPP] [RESULT] Test 4 " << (all_passed ? "PASSED" : "FAILED") << std::endl;
    return all_passed;
}
    void run_all_tests() {
        std::cout << "[CPP] Starting TV80 WB Tests..." << std::endl;
        set_ack_latency(1);
        bool test1 = test_nop_single();
        bool test2 = test_halt();
        bool test3 = test_memory_write();
        bool test4 = test_variable_latency();
        
        std::cout << "\n[CPP] === Test Results ===" << std::endl;
        std::cout << "[CPP] Test 1 (NOP single): " << (test1 ? "PASS" : "FAIL") << std::endl;
        std::cout << "[CPP] Test 2 (HALT): " << (test2 ? "PASS" : "FAIL") << std::endl;
        std::cout << "[CPP] Test 3 (Memory Write): " << (test3 ? "PASS" : "FAIL") << std::endl;
        std::cout << "[CPP] Test 4 (Bus Latency): " << (test4 ? "PASS" : "FAIL") << std::endl;
        
        if (test1 && test2 && test3 && test4) {
            std::cout << "[CPP] All tests PASSED!" << std::endl;
        } else {
            std::cout << "[CPP] Some tests FAILED!" << std::endl;
        }
    }
};

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::debug(0);
    
    TV80_WB_Test test;
    test.run_all_tests();
    
    return 0;
}