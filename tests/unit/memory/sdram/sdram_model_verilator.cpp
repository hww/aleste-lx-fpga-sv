#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vsdram_model_verilator_tb.h"
#include <iostream>
#include <cstdlib>
#include <cstdio>

// Current simulation time
vluint64_t main_time = 0;
double sc_time_stamp() {
    return main_time;
}

class SDRAMTest {
private:
    Vsdram_model_verilator_tb* dut;
    VerilatedVcdC* tfp;
    vluint64_t time_counter;
    bool tracing_enabled;
    
    // Test status
    bool test_completed;
    bool test_passed;
    uint32_t error_count;

public:
    SDRAMTest() : dut(new Vsdram_model_verilator_tb), tfp(nullptr), 
                 time_counter(0), tracing_enabled(false),
                 test_completed(false), test_passed(false), error_count(0) {}

    ~SDRAMTest() {
        if (tracing_enabled) {
            tfp->close();
            delete tfp;
        }
        delete dut;
    }

    void enable_tracing(const char* filename) {
        Verilated::traceEverOn(true);
        tfp = new VerilatedVcdC;
        dut->trace(tfp, 99);
        tfp->open(filename);
        tracing_enabled = true;
    }

    void reset() {
        std::cout << "Resetting DUT..." << std::endl;
        
        // Initialize all control signals
        dut->rst_n = 0;
        dut->clk = 0;
        dut->cke = 1;
        dut->cs_n = 1;
        dut->ras_n = 1;
        dut->cas_n = 1;
        dut->we_n = 1;
        dut->ba = 0;
        dut->a = 0;
        dut->dq_in = 0;
        dut->dq_oe = 0;
        dut->dqm = 0;
        
        tick();
        tick();
        dut->rst_n = 1;
        tick();
        tick();
        std::cout << "Reset complete" << std::endl;
    }

    void tick() {
        dut->clk = !dut->clk;
        dut->eval();
        
        if (tracing_enabled) {
            tfp->dump(main_time);
        }
        
        main_time += 5; // 10ns period = 5ns half period
        time_counter++;
    }

    void send_command(uint8_t cmd) {
        dut->cs_n = (cmd >> 3) & 1;
        dut->ras_n = (cmd >> 2) & 1;
        dut->cas_n = (cmd >> 1) & 1;
        dut->we_n = cmd & 1;
    }

    void send_nop() {
        send_command(0b0111); // NOP
    }

    void wait_cycles(int cycles) {
        for (int i = 0; i < cycles * 2; i++) {
            tick();
        }
    }

    void run_test() {
        std::cout << "=== SDRAM MODEL TEST START ===" << std::endl;
        
        reset();

        // 1. PRECHARGE ALL
        std::cout << "\n[TEST] 1. Precharge all banks" << std::endl;
        send_command(0b0010); // Precharge
        dut->a = 0x0400; // A10=1 for all banks
        wait_cycles(3);
        send_nop();
        wait_cycles(10);

        // 2. ACTIVE
        std::cout << "\n[TEST] 2. ACTIVE bank 1, row 0x1ABC" << std::endl;
        send_command(0b0011); // Active
        dut->ba = 0x01;
        dut->a = 0x1ABC;
        wait_cycles(3);
        send_nop();
        wait_cycles(10);

        // 3. WRITE
        std::cout << "\n[TEST] 3. WRITE to bank 1, col 0x00F1" << std::endl;
        send_command(0b0100); // Write
        dut->ba = 0x01;
        dut->a = 0x00F1;
        dut->dq_in = 0xDEAD;
        dut->dq_oe = 1; // Drive data bus
        wait_cycles(2);
        send_nop();
        dut->dq_oe = 0; // Release data bus
        wait_cycles(10);

        // 4. READ
        std::cout << "\n[TEST] 4. READ from bank 1, col 0x00F1" << std::endl;
        send_command(0b0101); // Read
        dut->ba = 0x01;
        dut->a = 0x00F1;
        wait_cycles(2);
        send_nop();

        // Wait for data with timeout
        bool data_received = false;
        uint16_t received_data = 0;
        
        for (int i = 0; i < 40; i++) {
            tick();
            if (dut->debug_data_valid) {
                data_received = true;
                received_data = dut->debug_captured_data;
                std::cout << "CAPTURED DATA: 0x" << std::hex << received_data 
                          << " at time " << std::dec << main_time << "ns" << std::endl;
                break;
            }
        }

        // Verify data
        if (data_received) {
            if (received_data == 0xDEAD) {
                std::cout << "[TEST] SUCCESS: Correct data read: 0xDEAD" << std::endl;
                test_passed = true;
            } else {
                std::cout << "[TEST] ERROR: Expected 0xDEAD, got 0x" 
                          << std::hex << received_data << std::endl;
                error_count++;
            }
        } else {
            std::cout << "[TEST] ERROR: No data received within timeout" << std::endl;
            error_count++;
        }

        wait_cycles(10);
        test_completed = true;

        std::cout << "=== TEST COMPLETE ===" << std::endl;
        std::cout << "Test result: " << (test_passed ? "PASS" : "FAIL") << std::endl;
        std::cout << "Error count: " << std::dec << error_count << std::endl;
        
        // Final ticks to flush
        for (int i = 0; i < 10; i++) {
            tick();
        }
    }
};

int main(int argc, char** argv) {
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    Verilated::debug(0);

    SDRAMTest test;

    // Enable tracing if requested
    const char* vcd_file = "sdram_model.vcd";
    test.enable_tracing(vcd_file);

    try {
        test.run_test();
    } catch (const std::exception& e) {
        std::cerr << "Test failed with exception: " << e.what() << std::endl;
        return 1;
    }

    std::cout << "Simulation completed successfully" << std::endl;
    return 0;
}