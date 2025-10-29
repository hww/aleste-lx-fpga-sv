#include <iostream>
#include <iomanip>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vwb_wdt_simple.h"

class WDTTestbench {
private:
    Vwb_wdt_simple* dut;
    VerilatedVcdC* trace;
    vluint64_t sim_time;

public:
    WDTTestbench() {
        dut = new Vwb_wdt_simple;
        trace = new VerilatedVcdC;
        sim_time = 0;
        
        Verilated::traceEverOn(true);
        dut->trace(trace, 5);
        trace->open("wb_wdt_simple.vcd");
    }

    ~WDTTestbench() {
        trace->close();
        delete dut;
        delete trace;
    }

    void reset() {
        dut->clk_i = 0;
        dut->clke_i = 0;
        dut->rst_i = 1;
        dut->stb_i = 0;
        dut->cyc_i = 0;
        dut->ack_i = 0;
        tick();
        dut->rst_i = 0;
        tick();       
        std::cout << "Reset completed\n";
    }

    void tick() {
        dut->clk_i = 0;
        eval();
        dut->clk_i = 1;
        eval();
    }

    void eval() {
        dut->eval();
        trace->dump(sim_time);
        sim_time++;
    }

    void set_clke(bool enable) {
        dut->clke_i = enable;
    }

    void start_transaction() {
        dut->cyc_i = 1;
        dut->stb_i = 1;
    }

    void end_transaction() {
        dut->cyc_i = 0;
        dut->stb_i = 0;
    }

    void send_ack() {
        dut->ack_i = 1;
    }

    void clear_ack() {
        dut->ack_i = 0;
    }

    bool get_error() {
        return dut->err_o;
    }

    void print_state(const std::string& msg) {
        std::cout << "[" << std::setw(4) << sim_time << "] " << msg 
                  << " | err_o=" << (int)dut->err_o
                  << " cyc_i=" << (int)dut->cyc_i
                  << " stb_i=" << (int)dut->stb_i
                  << " ack_i=" << (int)dut->ack_i
                  << " clke_i=" << (int)dut->clke_i << std::endl;
    }

    void run_test_normal_operation() {
        std::cout << "\n=== Test 1: Normal operation (ACK received in time) ===\n";
        reset();
        tick();
        tick();

        set_clke(1);
        start_transaction();
        print_state("Transaction started");
        
        // Ждем немного, но не до таймаута
        for (int i = 0; i < 4; i++) {
            tick();
            print_state("Waiting for ACK");
        }
        
        // Отправляем ACK вовремя
        send_ack();
        tick();
        print_state("ACK sent");
        
        clear_ack();
        end_transaction();
        tick();
        print_state("Transaction ended");
        
        if (!get_error()) {
            std::cout << "✓ PASS: No error on normal operation\n";
        } else {
            std::cout << "✗ FAIL: Unexpected error\n";
        }
    }

    void run_test_timeout() {
        std::cout << "\n=== Test 2: Timeout (no ACK received) ===\n";
        reset();
        tick();
        tick();
            tick();
        tick();
    
        set_clke(1);
        start_transaction();
        print_state("Transaction started - no ACK will be sent");
        
        // Ждем до таймаута
        bool error_triggered = false;
        int error_duration = 0;
        
        for (int i = 0; i < 12; i++) {
            tick();
            if (get_error()) {
                if (!error_triggered) {
                    std::cout << "✓ ERROR triggered at cycle " << sim_time << "\n";
                    error_triggered = true;
                }
                error_duration++;
            }
            print_state("Waiting for timeout...");
        }
        
        if (error_triggered) {
            std::cout << "✓ PASS: Timeout error correctly triggered\n";
            std::cout << "  Error duration: " << error_duration << " cycles\n";
        } else {
            std::cout << "✗ FAIL: Timeout not triggered\n";
        }
    }

    void run_test_clke_disabled() {
        std::cout << "\n=== Test 3: CLKE disabled ===\n";
        reset();
        tick();
        tick();
        tick();
        tick();

        set_clke(0);  // Clock enable отключен
        start_transaction();
        print_state("Transaction started with CLKE=0");
        
        // Ждем долго - таймер не должен считать
        for (int i = 0; i < 12; i++) {
            tick();
            print_state("CLKE disabled - no counting");
        }
        
        if (!get_error()) {
            std::cout << "✓ PASS: No error when CLKE disabled\n";
        } else {
            std::cout << "✗ FAIL: Error triggered despite CLKE=0\n";
        }
    }

    void run_test_multiple_transactions() {
        std::cout << "\n=== Test 4: Multiple transactions ===\n";
        reset();
        tick();
        tick();
        tick();
        tick();

        set_clke(1);
        
        // Первая транзакция - успешная
        start_transaction();
        tick(); tick();
        send_ack();
        tick();
        clear_ack();
        end_transaction();
        tick();
        print_state("First transaction completed");
        
        // Вторая транзакция - таймаут
        start_transaction();
        bool got_timeout = false;
        for (int i = 0; i < 10; i++) {
            tick();
            if (get_error()) {
                got_timeout = true;
                break;
            }
        }
        print_state("Second transaction - should timeout");
        
        if (got_timeout) {
            std::cout << "✓ PASS: Multiple transactions work correctly\n";
        } else {
            std::cout << "✗ FAIL: Second transaction didn't timeout\n";
        }
    }
};

int main() {
    std::cout << "WDT Simple Testbench\n";
    std::cout << "=====================\n";

    WDTTestbench tb;

    // Запуск всех тестов
    tb.run_test_normal_operation();
    tb.run_test_timeout(); 
    tb.run_test_clke_disabled();
    tb.run_test_multiple_transactions();

    std::cout << "\n=====================\n";
    std::cout << "All tests completed\n";
    std::cout << "VCD trace saved to wb_wdt_simple.vcd\n";

    return 0;
}