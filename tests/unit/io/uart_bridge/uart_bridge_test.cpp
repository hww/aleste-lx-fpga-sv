#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vuart_bridge.h"
#include <iostream>
#include <iomanip>
#include <vector>
#include <random>
#include <cassert>
#include <cstring>

class UARTBridgeTest
{
private:
    Vuart_bridge *dut;
    VerilatedVcdC *tfp;
    vluint64_t main_time;
    bool last_clk;
    const int CLOCK_FREQ = 54000000;
    const int BAUD_RATE = 115200;
    const int CLOCKS_PER_BIT = CLOCK_FREQ / BAUD_RATE;

    // Memory arrays
    uint8_t wb_memory[65536]; // 64KB Wishbone memory
    uint8_t dbg_registers[256]; // 256 bytes Debug registers

    // Test statistics
    struct TestStats
    {
        int total_tests = 0;
        int passed_tests = 0;
        int failed_tests = 0;
        std::vector<std::string> failures;

        void add_failure(const std::string &test_name, const std::string &reason)
        {
            failed_tests++;
            failures.push_back(test_name + ": " + reason);
        }

        void print() const
        {
            std::cout << "\n=== TEST RESULTS ===" << std::endl;
            std::cout << "Total: " << total_tests << std::endl;
            std::cout << "Passed: " << passed_tests << std::endl;
            std::cout << "Failed: " << failed_tests << std::endl;

            if (!failures.empty())
            {
                std::cout << "\nFAILURES:" << std::endl;
                for (const auto &failure : failures)
                {
                    std::cout << "  - " << failure << std::endl;
                }
            }
        }
    };

    TestStats stats;

public:
    UARTBridgeTest() : main_time(0), last_clk(false)
    {
        dut = new Vuart_bridge;
        tfp = new VerilatedVcdC;

        Verilated::traceEverOn(true);
        dut->trace(tfp, 99);
        tfp->open("uart_bridge.vcd");

        // Initialize memory arrays with 0x00
        memset(wb_memory, 0x00, sizeof(wb_memory));
        memset(dbg_registers, 0x00, sizeof(dbg_registers));

        // Initialize inputs
        dut->clk_54m = 0;
        dut->rst = 1;
        dut->uart_rx = 1;
        dut->wb_dat_i = 0;
        dut->wb_ack_i = 0;
        dut->dbg_dat_i = 0;
        dut->dbg_ack_i = 0;

        // Reset sequence
        for (int i = 0; i < 10; i++) tick();
        dut->rst = 0;
        for (int i = 0; i < 10; i++) tick();
    }

    ~UARTBridgeTest()
    {
        tfp->close();
        delete dut;
        delete tfp;
    }

    void tick()
    {
        // First half of clock cycle - low
        dut->clk_54m = 0;
        handle_dbg_bus();
        handle_wb_bus();
        tfp->dump(main_time);
        dut->eval();
        main_time++;

        // Second half of clock cycle - high
        dut->clk_54m = 1;
        handle_dbg_bus();
        handle_wb_bus();
        tfp->dump(main_time);
        dut->eval();
        main_time++;

        last_clk = dut->clk_54m;
    }

    void handle_dbg_bus()
    {
        static int dbg_response_delay = 0;
        static uint8_t dbg_response_data = 0;

        if (dut->dbg_cyc_o && dut->dbg_stb_o && dbg_response_delay == 0)
        {
            uint8_t addr = dut->dbg_adr_o;
            
            if (dut->dbg_we_o) 
            {
                // Write operation - store to register
                dbg_registers[addr] = dut->dbg_dat_o;
                dbg_response_data = 0x00; // ACK for write
                std::cout << "DBG writing: 0x" << std::hex << addr<< " = 0x" << (int)dut->dbg_dat_o << std::dec << std::endl;
            }
            else 
            {
                // Read operation - read from register
                dbg_response_data = dbg_registers[addr];
                std::cout << "DBG reading: 0x" << std::hex << addr<< " = 0x" << (int)dbg_response_data << std::dec << std::endl;
            }
            dbg_response_delay = 2;
        }

        if (dbg_response_delay > 0)
        {
            dbg_response_delay--;
            if (dbg_response_delay == 0)
            {
                dut->dbg_ack_i = 1;
                dut->dbg_dat_i = dbg_response_data;
            }
            else
            {
                dut->dbg_ack_i = 0;
            }
        }
        else
        {
            dut->dbg_ack_i = 0;
        }
    }

    void handle_wb_bus()
    {
        static int wb_response_delay = 0;
        static uint8_t wb_response_data = 0;

        if (dut->wb_cyc_o && dut->wb_stb_o && wb_response_delay == 0)
        {
            uint32_t addr = dut->wb_adr_o;
            
            if (dut->wb_we_o) 
            {  
                // Write operation - store to memory
                wb_memory[addr & 0xFFFF] = dut->wb_dat_o;
                wb_response_data = 0x00; // ACK for write
                std::cout << "WB writing: 0x" << std::hex << addr<< " = 0x" << (int)dut->wb_dat_o << std::dec << std::endl;
            }
            else 
            {
                // Read operation - read from memory
                wb_response_data = wb_memory[addr & 0xFFFF];
                std::cout << "WB reading:  0x" << std::hex << addr<< " = 0x" << (int)wb_response_data << std::dec << std::endl;
            }
            wb_response_delay = 2;
        }

        if (wb_response_delay > 0)
        {
            wb_response_delay--;
            if (wb_response_delay == 0)
            {
                dut->wb_ack_i = 1;
                if (!dut->wb_we_o) 
                {
                    dut->wb_dat_i = wb_response_data;
                }
            }
            else
            {
                dut->wb_ack_i = 0;
            }
        }
        else
        {
            dut->wb_ack_i = 0;
        }
    }

    void uart_send_byte(uint8_t data)
    {
        std::cout << "UART sending: 0x" << std::hex << (int)data << std::dec << std::endl;

        dut->uart_rx = 0;
        wait_clocks(CLOCKS_PER_BIT);

        for (int bit = 0; bit < 8; bit++)
        {
            dut->uart_rx = (data >> bit) & 1;
            wait_clocks(CLOCKS_PER_BIT);
        }

        dut->uart_rx = 1;
        wait_clocks(CLOCKS_PER_BIT);
    }

    bool uart_receive_byte(uint8_t &data)
    {
        std::cout << "Waiting for UART response..." << std::endl;

        int timeout = CLOCKS_PER_BIT * 20;
        while (dut->uart_tx == 1 && timeout-- > 0) tick();

        if (timeout <= 0)
        {
            std::cout << "UART receive timeout" << std::endl;
            return false;
        }

        wait_clocks(CLOCKS_PER_BIT);

        data = 0;
        for (int bit = 0; bit < 8; bit++)
        {
            wait_clocks(CLOCKS_PER_BIT / 2);
            data |= (dut->uart_tx << bit);
            wait_clocks(CLOCKS_PER_BIT / 2);
        }

        wait_clocks(CLOCKS_PER_BIT);
        return true;
    }

    void wait_clocks(int num_clocks)
    {
        for (int i = 0; i < num_clocks; i++) tick();
    }

    void debug_uart_status(const std::string &context = "")
    {
        if (!context.empty()) std::cout << "[" << context << "] ";
        std::cout << "state: " << (int)dut->state_o 
                  << ", tx_busy: " << (int)dut->uart_tx_busy
                  << ", rx_ready: " << (int)dut->uart_rx_ready << std::endl;
    }

    void test_assert(bool condition, const std::string &test_name, const std::string &message)
    {
        stats.total_tests++;
        if (condition)
        {
            stats.passed_tests++;
            std::cout << "✅ " << test_name << std::endl;
        }
        else
        {
            stats.add_failure(test_name, message);
            std::cout << "❌ " << test_name << " - " << message << std::endl;
        }
    }


    void wait_uart_ready()
    {
        int timeout = 0;
        while ((dut->uart_tx_busy || !dut->uart_rx_ready) && timeout < 1000)
        {
            tick();
            timeout++;
        }
        if (timeout >= 1000)
        {
            std::cout << "Warning: UART ready timeout" << std::endl;
            debug_uart_status("timeout");
        }
    }

    void reset_dut()
    {
        std::cout << "Resetting DUT..." << std::endl;
        dut->rst = 1;
        wait_clocks(10);
        dut->rst = 0;
        wait_clocks(10);
        dut->dbg_ack_i = 0;
        dut->dbg_dat_i = 0;
        dut->wb_ack_i = 0;
        dut->wb_dat_i = 0;
    }

    // Individual test cases

    void test_ping_command()
    {
        std::cout << "\n=== Testing Ping Command (0xFF) ===" << std::endl;
        reset_dut();

        wait_uart_ready();
        debug_uart_status("Before ping");
        uart_send_byte(0xFF);

        uint8_t response;
        bool received = uart_receive_byte(response);

        test_assert(received && response == 0xFE, "Ping Response",
                    received ? "Expected 0xFE, got 0x" + to_hex(response) : "No response received");
    }

    void test_global_status_command()
    {
        std::cout << "\n=== Testing Global Status Command (0x50) ===" << std::endl;
        reset_dut();

        wait_uart_ready();
        debug_uart_status("Before global status");
        uart_send_byte(0x50);

        uint8_t response;
        bool received = uart_receive_byte(response);

        test_assert(received && response == dbg_registers[0x00], "Global Status Response",
                    received ? "Expected register 0 value, got 0x" + to_hex(response) : "No response received");
    }

    void test_register_read_write()
    {
        std::cout << "\n=== Testing Register Read/Write ===" << std::endl;
        
        uint8_t test_cases[][2] = {{0x00, 0x55}, {0x01, 0xAA}, {0x10, 0xF0}};

        for (auto &test_case : test_cases)
        {
            uint8_t addr = test_case[0];
            uint8_t expected = test_case[1];
            
            reset_dut();
            wait_uart_ready();

            // Setup expected value in register
            dbg_registers[addr] = expected;

            debug_uart_status("Before register read");
            uart_send_byte(0x20); // Register Read
            uart_send_byte(addr);


            uint8_t response;
            bool received = uart_receive_byte(response);

            test_assert(received && response == expected,
                       "Register Read 0x" + to_hex(addr),
                       received ? "Expected 0x" + to_hex(expected) + ", got 0x" + to_hex(response) : "No response");
        }

        for (auto &test_case : test_cases)
        {
            uint8_t addr = test_case[0];
            uint8_t expected = test_case[1];
            
            reset_dut();
            wait_uart_ready();

            // Clear register first
            dbg_registers[addr] = 0x00;

            debug_uart_status("Before register write");
            uart_send_byte(0x30); // Register Write
            uart_send_byte(addr);
            uart_send_byte(expected);
            wait_clocks(CLOCKS_PER_BIT*10);

            if (dbg_registers[addr] != expected) {
                test_assert(false, 
                            "Register Write 0x" + to_hex(addr) + " expected 0x" + to_hex(expected) + " found " + to_hex(dbg_registers[addr]), 
                            "Write verification failed");
            } else {
                test_assert(true, 
                            "Register Write 0x" + to_hex(addr) + " = 0x" + to_hex(expected),
                            "Success");
            }
        }
    }

    void test_memory_read_write()
    {
        std::cout << "\n=== Testing Memory Read/Write ===" << std::endl;
        
        uint32_t test_addr = 0x001234;
        uint8_t expected = 0x55;

        // Test memory read
        reset_dut();
        wait_uart_ready();

        // Setup expected value in memory
        wb_memory[test_addr] = expected;

        uart_send_byte(0x00); // Memory Read 1 byte
        uart_send_byte((test_addr >> 16) & 0xFF);
        uart_send_byte((test_addr >> 8) & 0xFF);
        uart_send_byte(test_addr & 0xFF);

        uint8_t response;
        bool received = uart_receive_byte(response);

        test_assert(received && response == expected,
                   "Memory Read 0x" + to_hex(test_addr),
                   received ? "Expected 0x" + to_hex(expected) + ", got 0x" + to_hex(response) : "No response");

        // Test memory write
        reset_dut();
        wait_uart_ready();

        uint8_t write_data = 0xAA;
        wb_memory[test_addr] = 0x00; // Clear first

        uart_send_byte(0x10); // Memory Write 1 byte
        uart_send_byte((test_addr >> 16) & 0xFF);
        uart_send_byte((test_addr >> 8) & 0xFF);
        uart_send_byte(test_addr & 0xFF);
        uart_send_byte(write_data);

        //received = uart_receive_byte(response);
        //bool write_ok = (wb_memory[test_addr] == write_data);
        wait_clocks(CLOCKS_PER_BIT * 10);
        wait_clocks(CLOCKS_PER_BIT * 10);

        if (wb_memory[test_addr] != write_data) {
            test_assert(false,
                        "Memory Write 0x" + to_hex(test_addr) + " = 0x" + to_hex(write_data),
                        "Write verification failed");
        } else {
            test_assert(true,
                        "Memory Write 0x" + to_hex(test_addr) + " = 0x" + to_hex(write_data),
                        "Success");
        }
    }

    void test_event_commands()
    {
        std::cout << "\n=== Testing Event Commands ===" << std::endl;
        reset_dut();

        wait_uart_ready();
        debug_uart_status("Before event");
        uart_send_byte(0x40);
        uart_send_byte(0x00);
        uart_send_byte(0x01);

        uint8_t response;
        bool received = uart_receive_byte(response);

        test_assert(received && response == 0x00,
                   "Event 0x00 param 0x01",
                   received ? "Expected ACK 0x00, got 0x" + to_hex(response) : "No response received");
    }

    void test_invalid_commands()
    {
        std::cout << "\n=== Testing Invalid Commands ===" << std::endl;

        uint8_t invalid_commands[] = {0x60, 0x70};

        for (auto cmd : invalid_commands)
        {
            reset_dut();
            wait_uart_ready();
            debug_uart_status("Before invalid command");
            uart_send_byte(cmd);

            uint8_t response;
            bool received = uart_receive_byte(response);

            test_assert(received && response == 0xFF,
                       "Invalid Command 0x" + to_hex(cmd),
                       received ? "Expected error 0xFF, got 0x" + to_hex(response) : "No response received");
        }
    }

    std::string to_hex(uint8_t value)
    {
        std::stringstream ss;
        ss << std::hex << std::setw(2) << std::setfill('0') << (int)value;
        return ss.str();
    }

    void run_all_tests()
    {
        std::cout << "Starting UART Bridge Test Suite" << std::endl;
        std::cout << "==============================" << std::endl;

        test_ping_command();
        test_global_status_command();
        test_register_read_write();
        test_memory_read_write();
        test_event_commands();
        test_invalid_commands();

        stats.print();

        if (stats.failed_tests == 0)
        {
            std::cout << "\n✅ ALL TESTS PASSED! 🎉" << std::endl;
        }
        else
        {
            std::cout << "\n❌ " << stats.failed_tests << "/" << stats.total_tests << " TESTS FAILED!" << std::endl;
        }

        for (int i = 0; i < 100; i++) tick();
    }
};

int main(int argc, char **argv)
{
    Verilated::commandArgs(argc, argv);
    UARTBridgeTest test;
    test.run_all_tests();
    return 0;
}