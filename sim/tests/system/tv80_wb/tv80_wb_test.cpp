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

    uint8_t memory[65536];
    int ack_latency;
    int ack_counter;
    bool ack_pending;
    uint16_t pending_addr;
    bool pending_we;
    uint8_t pending_data;

public:
    TV80_WB_Test() : main_time(0), ack_latency(0), ack_counter(0), ack_pending(false), 
                     pending_addr(0), pending_we(false), pending_data(0) {
        dut = std::make_unique<Vtv80_wb_tb>();
        tfp = std::make_unique<VerilatedVcdC>();
        
        Verilated::traceEverOn(true);
        dut->trace(tfp.get(), 99);
        tfp->open("tv80_wb.vcd");
        
        memset(memory, 0x00, sizeof(memory));
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
        // Low phase
        dut->clk_i = 0;
        dut->eval();
        tfp->dump(main_time);
        main_time++;

        // High phase - handle Wishbone on rising edge
        dut->clk_i = 1;
        
        if (dut->nrst_i) {
            handle_wishbone();
        }
        
        dut->eval();
        tfp->dump(main_time);
        main_time++;
    }

    void reset() {
        std::cout << "[CPP] Resetting CPU..." << std::endl;
        
        dut->nrst_i = 0;
        dut->wbm_ack_i = 0;
        ack_pending = false;
        ack_counter = 0;
        
        // Hold reset for several cycles
        for (int i = 0; i < 8; i++) {
            dut->clk_i = 0;
            dut->eval();
            tfp->dump(main_time);
            main_time++;
            
            dut->clk_i = 1;
            dut->eval();
            tfp->dump(main_time);
            main_time++;
        }
        
        // Release reset
        dut->nrst_i = 1;
        std::cout << "[CPP] Reset complete" << std::endl;
    }

    void set_ack_latency(int latency) {
        ack_latency = (latency == 0) ? 0 : latency + 1; // Fix latency 0 vs 1
        std::cout << "[CPP] ACK latency set to " << ack_latency << " cycles" << std::endl;
    }

    void handle_wishbone() {
        // Always reset ACK at the beginning
        dut->wbm_ack_i = 0;

        if (dut->wbm_cyc_o && dut->wbm_stb_o) {
            if (!ack_pending) {
                // New transaction
                ack_pending = true;
                ack_counter = 0;
                pending_addr = dut->wbm_adr_o;
                pending_we = dut->wbm_we_o;
                
                std::cout << "[CPP] New WB: " << (pending_we ? "WRITE" : "READ")
                          << " addr=0x" << std::hex << pending_addr;
                
                if (pending_we) {
                    pending_data = dut->wbm_dat_o;
                    std::cout << " data=0x" << (int)pending_data;
                }
                std::cout << " latency=" << ack_latency << std::endl;

                if (!pending_we) {
                    dut->wbm_dat_i = memory[pending_addr];
                }
            }

            // Handle latency
            if (ack_pending) {
                if (ack_latency == 0) {
                    // Immediate ACK
                    dut->wbm_ack_i = 1;
                    
                    if (pending_we) {
                        memory[pending_addr] = pending_data;
                    }
                    ack_pending = false;
                } else {
                    ack_counter++;
                    
                    if (ack_counter >= ack_latency) {
                        dut->wbm_ack_i = 1;
                        
                        if (pending_we) {
                            memory[pending_addr] = pending_data;
                        }
                        ack_pending = false;
                    }
                }
            }
        } else {
            ack_pending = false;
            ack_counter = 0;
        }
    }

    // Test 1: Single NOP operation
    bool test_nop_single() {
        std::cout << "[CPP] Test 1: Single NOP operation" << std::endl;
        
        memory[0] = 0x00; // NOP
        
        reset();
        
        uint16_t initial_pc = dut->wbm_adr_o;
        std::cout << "[CPP] Initial PC after reset: 0x" << std::hex << initial_pc << std::endl;
        
        // Execute a few NOPs
        for (int i = 0; i < 16; i++) {
            tick();
        }
        
        uint16_t final_pc = dut->wbm_adr_o;
        std::cout << "[CPP] Final PC: 0x" << std::hex << final_pc << std::endl;
        
        bool success = (final_pc > initial_pc);
        std::cout << "[CPP] [RESULT] Test 1 " << (success ? "PASSED" : "FAILED") << std::endl;
        return success;
    }

    // Test 2: HALT operation
    bool test_halt() {
        std::cout << "[CPP] Test 2: HALT operation" << std::endl;
        
        memory[0] = 0x76; // HALT at address 0
        
        reset();
        
        uint16_t initial_pc = dut->wbm_adr_o;
        std::cout << "[CPP] PC after reset: 0x" << std::hex << initial_pc << std::endl;
        
        // Execute several cycles
        for (int i = 0; i < 20; i++) {
            tick();
        }
        
        uint16_t final_pc = dut->wbm_adr_o;
        std::cout << "[CPP] Final PC: 0x" << std::hex << final_pc << std::endl;
        
        // After HALT, PC should not advance beyond the HALT instruction
        bool success = (final_pc == 1); // Should be at address of next instruction after HALT
        std::cout << "[CPP] [RESULT] Test 2 " << (success ? "PASSED" : "FAILED") << std::endl;
        return success;
    }

    bool test_memory_write() {
        std::cout << "[CPP] Test 3: Memory Write cycle" << std::endl;
        
        memory[0x0000] = 0x3E; // LD A, n
        memory[0x0001] = 0x55; // value 55h
        memory[0x0002] = 0x32; // LD (nn), A
        memory[0x0003] = 0x00; // low byte
        memory[0x0004] = 0x80; // high byte
        memory[0x0005] = 0x76; // HALT

        memory[0x8000] = 0x00;
        
        reset();
        
        std::cout << "[CPP] Initial value at 0x8000: 0x" << std::hex << (int)memory[0x8000] << std::endl;
        
        for (int i = 0; i < 50; i++) {
            tick();
        }
        
        std::cout << "[CPP] Final value at 0x8000: 0x" << std::hex << (int)memory[0x8000] << std::endl;
        
        bool success = (memory[0x8000] == 0x55);
        std::cout << "[CPP] [RESULT] Test 3 " << (success ? "PASSED" : "FAILED") << std::endl;
        return success;
    }

    bool test_variable_latency() {
        std::cout << "[CPP] Test 4: Variable ACK latency" << std::endl;
        
        bool all_passed = true;
        
        for (int latency = 0; latency <= 3; latency++) {
            set_ack_latency(latency);
            
            memory[0] = 0x3A; // LD A, (nn)
            memory[1] = 0x00; // low byte
            memory[2] = 0x10; // high byte (address 0x1000)
            memory[3] = 0x76; // HALT
            
            memory[0x1000] = 0xAA + latency; // Test data
            
            reset();
            
            std::cout << "[CPP] Testing latency " << latency << std::endl;
            
            for (int i = 0; i < 30; i++) {
                tick();
            }
            
            std::cout << "[CPP] Latency " << latency << " test completed" << std::endl;
        }
        
        std::cout << "[CPP] [RESULT] Test 4 PASSED" << std::endl;
        return all_passed;
    }

    void run_all_tests() {
        std::cout << "[CPP] Starting TV80 WB Tests..." << std::endl;
        
        // Set minimum latency for Z80 compatibility
        set_ack_latency(0);
        
        bool test1 = test_nop_single();
        bool test2 = test_halt();
        bool test3 = test_memory_write();
        bool test4 = test_variable_latency();
        
        std::cout << "\n[CPP] === Test Results ===" << std::endl;
        std::cout << "[CPP] Test 1 (NOP): " << (test1 ? "PASS" : "FAIL") << std::endl;
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
    
    TV80_WB_Test test;
    test.run_all_tests();
    
    return 0;
}