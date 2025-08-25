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
        for (int i = 0; i < 4; i++) tick();
        dut->nrst_i = 1;
        for (int i = 0; i < 4; i++) tick();
        std::cout << "[CPP] Reset complete" << std::endl;
    }

    void handle_wishbone() {
        if (dut->clk_i && dut->nrst_i) {
            // Немедленный ACK при запросе
            dut->wbm_ack_i = (dut->wbm_cyc_o && dut->wbm_stb_o);
            if (dut->wbm_ack_i) {
                dut->wbm_dat_i = memory[dut->wbm_adr_o];
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
        for (int i = 0; i < 10; i++) {
            tick();
        }
        
        uint16_t final_pc = dut->wbm_adr_o;
        std::cout << "[CPP] Final PC: 0x" << std::hex << final_pc << std::endl;
        
        bool success = (final_pc == initial_pc + 1);
        std::cout << "[CPP] Test 1 " << (success ? "PASSED" : "FAILED") << std::endl;
        return success;
    }

    // Test 3: HALT operation
    bool test_halt() {
        std::cout << "[CPP] Test 3: HALT operation" << std::endl;
        
        // Initialize memory with HALT (0x76)
        memory[0] = 0x76; // HALT
        
        reset();
        
        uint16_t initial_pc = dut->wbm_adr_o;
        std::cout << "[CPP] Initial PC: 0x" << std::hex << initial_pc << std::endl;
        
        // Execute multiple cycles after HALT
        for (int i = 0; i < 30; i++) {
            tick();
        }
        
        uint16_t final_pc = dut->wbm_adr_o;
        std::cout << "[CPP] Final PC: 0x" << std::hex << final_pc << std::endl;
        
        // PC should not change after HALT
        bool success = (final_pc == initial_pc);
        std::cout << "[CPP] Test 3 " << (success ? "PASSED" : "FAILED") << std::endl;
        return success;
    }

    void run_all_tests() {
        std::cout << "[CPP] Starting TV80 WB Tests..." << std::endl;
        
        bool test1 = test_nop_single();
        bool test3 = test_halt();
        
        std::cout << "\n[CPP] === Test Results ===" << std::endl;
        std::cout << "[CPP] Test 1 (NOP single): " << (test1 ? "PASS" : "FAIL") << std::endl;
        std::cout << "[CPP] Test 3 (HALT): " << (test3 ? "PASS" : "FAIL") << std::endl;
        
        if (test1 && test3) {
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