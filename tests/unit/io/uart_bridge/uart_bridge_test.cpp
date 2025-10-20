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
    uint8_t wb_memory[65536];   // 64KB Wishbone memory
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
        for (int i = 0; i < 10; i++)
            tick();
        dut->rst = 0;
        for (int i = 0; i < 10; i++)
            tick();
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
                std::cout << "DBG writing: 0x" << std::hex << addr << " = 0x" << (int)dut->dbg_dat_o << std::dec << std::endl;
            }
            else
            {
                // Read operation - read from register
                dbg_response_data = dbg_registers[addr];
                std::cout << "DBG reading: 0x" << std::hex << addr << " = 0x" << (int)dbg_response_data << std::dec << std::endl;
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
                std::cout << "WB writing: 0x" << std::hex << addr << " = 0x" << (int)dut->wb_dat_o << std::dec << std::endl;
            }
            else
            {
                // Read operation - read from memory
                wb_response_data = wb_memory[addr & 0xFFFF];
                std::cout << "WB reading:  0x" << std::hex << addr << " = 0x" << (int)wb_response_data << std::dec << std::endl;
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
        while (dut->uart_tx == 1 && timeout-- > 0)
            tick();

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
        for (int i = 0; i < num_clocks; i++)
            tick();
    }

    void debug_uart_status(const std::string &context = "")
    {
        if (!context.empty())
            std::cout << "[" << context << "] ";
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
            wait_clocks(CLOCKS_PER_BIT * 10);

            if (dbg_registers[addr] != expected)
            {
                test_assert(false,
                            "Register Write 0x" + to_hex(addr) + " expected 0x" + to_hex(expected) + " found " + to_hex(dbg_registers[addr]),
                            "Write verification failed");
            }
            else
            {
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

        // received = uart_receive_byte(response);
        // bool write_ok = (wb_memory[test_addr] == write_data);
        wait_clocks(CLOCKS_PER_BIT * 10);
        wait_clocks(CLOCKS_PER_BIT * 10);

        if (wb_memory[test_addr] != write_data)
        {
            test_assert(false,
                        "Memory Write 0x" + to_hex(test_addr) + " = 0x" + to_hex(write_data),
                        "Write verification failed");
        }
        else
        {
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
    void test_memory_block_read_write()
    {
        std::cout << "\n=== Testing Memory Block Read/Write ===" << std::endl;

        uint32_t base_addr = 0x002000;
        const int BLOCK_SIZE = 8;
        std::vector<uint8_t> test_data = {0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77, 0x88};

        // Test memory block write
        reset_dut();
        wait_uart_ready();

        // Clear memory area first
        for (int i = 0; i < BLOCK_SIZE; i++)
        {
            wb_memory[base_addr + i] = 0x00;
        }

        std::cout << "Sending memory block write command..." << std::endl;
        uart_send_byte(0x13); // Memory Write 8 bytes (cmd[3:0]=3 means 8 bytes)
        uart_send_byte((base_addr >> 16) & 0xFF);
        uart_send_byte((base_addr >> 8) & 0xFF);
        uart_send_byte(base_addr & 0xFF);

        // Send all data bytes
        for (int i = 0; i < BLOCK_SIZE; i++)
        {
            uart_send_byte(test_data[i]);
            std::cout << "Sent data byte " << i << ": 0x" << to_hex(test_data[i]) << std::endl;
        }

        // Wait for operation to complete
        wait_clocks(CLOCKS_PER_BIT * 50);

        // Verify all bytes were written
        bool write_success = true;
        for (int i = 0; i < BLOCK_SIZE; i++)
        {
            if (wb_memory[base_addr + i] != test_data[i])
            {
                write_success = false;
                std::cout << "Write mismatch at offset " << i
                          << ": expected 0x" << to_hex(test_data[i])
                          << ", got 0x" << to_hex(wb_memory[base_addr + i]) << std::endl;
            }
        }

        test_assert(write_success, "Memory Block Write 8 bytes",
                    write_success ? "All 8 bytes written correctly" : "Write verification failed");

        // Test memory block read
        reset_dut();
        wait_uart_ready();

        // Setup test data in memory
        for (int i = 0; i < BLOCK_SIZE; i++)
        {
            wb_memory[base_addr + i] = test_data[i];
        }

        std::cout << "Sending memory block read command..." << std::endl;
        uart_send_byte(0x03); // Memory Read 8 bytes (cmd[3:0]=3 means 8 bytes)
        uart_send_byte((base_addr >> 16) & 0xFF);
        uart_send_byte((base_addr >> 8) & 0xFF);
        uart_send_byte(base_addr & 0xFF);

        // Receive all data bytes
        std::vector<uint8_t> received_data;
        for (int i = 0; i < BLOCK_SIZE; i++)
        {
            uint8_t response;
            bool received = uart_receive_byte(response);
            if (received)
            {
                received_data.push_back(response);
                std::cout << "Received data byte " << i << ": 0x" << to_hex(response) << std::endl;
            }
            else
            {
                std::cout << "Failed to receive byte " << i << std::endl;
            }
        }

        // Verify all bytes were read correctly
        bool read_success = (received_data.size() == BLOCK_SIZE);
        if (read_success)
        {
            for (int i = 0; i < BLOCK_SIZE; i++)
            {
                if (received_data[i] != test_data[i])
                {
                    read_success = false;
                    std::cout << "Read mismatch at offset " << i
                              << ": expected 0x" << to_hex(test_data[i])
                              << ", got 0x" << to_hex(received_data[i]) << std::endl;
                }
            }
        }

        test_assert(read_success, "Memory Block Read 8 bytes",
                    read_success ? "All 8 bytes read correctly" : "Expected " + std::to_string(BLOCK_SIZE) + " bytes, got " + std::to_string(received_data.size()));
    }

    void test_register_block_read_write()
    {
        std::cout << "\n=== Testing Register Block Read/Write ===" << std::endl;

        uint8_t base_addr = 0x20;
        const int BLOCK_SIZE = 4;
        std::vector<uint8_t> test_data = {0xA1, 0xB2, 0xC3, 0xD4};

        // Test register block write
        reset_dut();
        wait_uart_ready();

        // Clear registers first
        for (int i = 0; i < BLOCK_SIZE; i++)
        {
            dbg_registers[base_addr + i] = 0x00;
        }

        std::cout << "Sending register block write command..." << std::endl;
        uart_send_byte(0x33); // Register Write 4 bytes (cmd[3:0]=2 means 4 bytes)
        uart_send_byte(base_addr);

        // Send all data bytes
        for (int i = 0; i < BLOCK_SIZE; i++)
        {
            uart_send_byte(test_data[i]);
            std::cout << "Sent data byte " << i << ": 0x" << to_hex(test_data[i]) << std::endl;
        }

        // Wait for operation to complete
        wait_clocks(CLOCKS_PER_BIT * 50);

        // Verify all bytes were written
        bool write_success = true;
        for (int i = 0; i < BLOCK_SIZE; i++)
        {
            if (dbg_registers[base_addr + i] != test_data[i])
            {
                write_success = false;
                std::cout << "Write mismatch at register 0x" << to_hex(base_addr + i)
                          << ": expected 0x" << to_hex(test_data[i])
                          << ", got 0x" << to_hex(dbg_registers[base_addr + i]) << std::endl;
            }
        }

        test_assert(write_success, "Register Block Write 4 bytes",
                    write_success ? "All 4 bytes written correctly" : "Write verification failed");

        // Test register block read
        reset_dut();
        wait_uart_ready();

        // Setup test data in registers
        for (int i = 0; i < BLOCK_SIZE; i++)
        {
            dbg_registers[base_addr + i] = test_data[i];
        }

        std::cout << "Sending register block read command..." << std::endl;
        uart_send_byte(0x23); // Register Read 4 bytes (cmd[3:0]=2 means 4 bytes)
        uart_send_byte(base_addr);

        // Receive all data bytes
        std::vector<uint8_t> received_data;
        for (int i = 0; i < BLOCK_SIZE; i++)
        {
            uint8_t response;
            bool received = uart_receive_byte(response);
            if (received)
            {
                received_data.push_back(response);
                std::cout << "Received data byte " << i << ": 0x" << to_hex(response) << std::endl;
            }
            else
            {
                std::cout << "Failed to receive byte " << i << std::endl;
            }
        }

        // Verify all bytes were read correctly
        bool read_success = (received_data.size() == BLOCK_SIZE);
        if (read_success)
        {
            for (int i = 0; i < BLOCK_SIZE; i++)
            {
                if (received_data[i] != test_data[i])
                {
                    read_success = false;
                    std::cout << "Read mismatch at register 0x" << to_hex(base_addr + i)
                              << ": expected 0x" << to_hex(test_data[i])
                              << ", got 0x" << to_hex(received_data[i]) << std::endl;
                }
            }
        }

        test_assert(read_success, "Register Block Read 4 bytes",
                    read_success ? "All 4 bytes read correctly" : "Expected " + std::to_string(BLOCK_SIZE) + " bytes, got " + std::to_string(received_data.size()));
    }
    void test_sequential_operations()
    {
        std::cout << "\n=== Testing Sequential Operations ===" << std::endl;
        reset_dut();
        wait_uart_ready();

        // Подготовка тестовых данных
        uint32_t addr1 = 0x001000;
        uint32_t addr2 = 0x002000;
        uint32_t addr3 = 0x003000;
        uint8_t test_data1 = 0xAA;
        uint8_t test_data2 = 0xBB;
        uint8_t test_data3 = 0xCC;

        // Установка начальных значений в память
        wb_memory[addr1] = test_data1;
        wb_memory[addr2] = test_data2;
        wb_memory[addr3] = test_data3;

        std::vector<std::string> operations;
        std::vector<bool> results;

        std::cout << "Testing sequential memory reads..." << std::endl;

        // Последовательные чтения из памяти
        operations.push_back("Read addr 0x" + to_hex(addr1 >> 8) + " from memory");
        uart_send_byte(0x00); // Memory Read
        uart_send_byte((addr1 >> 16) & 0xFF);
        uart_send_byte((addr1 >> 8) & 0xFF);
        uart_send_byte(addr1 & 0xFF);

        uint8_t response1;
        bool received1 = uart_receive_byte(response1);
        bool result1 = received1 && (response1 == test_data1);
        results.push_back(result1);
        std::cout << "  Read 1: " << (result1 ? "PASS" : "FAIL")
                  << " (expected 0x" << to_hex(test_data1)
                  << ", got 0x" << to_hex(response1) << ")" << std::endl;

        // Немедленно следующее чтение (без reset)
        operations.push_back("Read addr 0x" + to_hex(addr2 >> 8) + " from memory");
        uart_send_byte(0x00); // Memory Read
        uart_send_byte((addr2 >> 16) & 0xFF);
        uart_send_byte((addr2 >> 8) & 0xFF);
        uart_send_byte(addr2 & 0xFF);

        uint8_t response2;
        bool received2 = uart_receive_byte(response2);
        bool result2 = received2 && (response2 == test_data2);
        results.push_back(result2);
        std::cout << "  Read 2: " << (result2 ? "PASS" : "FAIL")
                  << " (expected 0x" << to_hex(test_data2)
                  << ", got 0x" << to_hex(response2) << ")" << std::endl;

        // Третье чтение подряд
        operations.push_back("Read addr 0x" + to_hex(addr3 >> 8) + " from memory");
        uart_send_byte(0x00); // Memory Read
        uart_send_byte((addr3 >> 16) & 0xFF);
        uart_send_byte((addr3 >> 8) & 0xFF);
        uart_send_byte(addr3 & 0xFF);

        uint8_t response3;
        bool received3 = uart_receive_byte(response3);
        bool result3 = received3 && (response3 == test_data3);
        results.push_back(result3);
        std::cout << "  Read 3: " << (result3 ? "PASS" : "FAIL")
                  << " (expected 0x" << to_hex(test_data3)
                  << ", got 0x" << to_hex(response3) << ")" << std::endl;

        // Последовательные записи в память
        uint32_t write_addr1 = 0x004000;
        uint32_t write_addr2 = 0x005000;
        uint8_t write_data1 = 0x11;
        uint8_t write_data2 = 0x22;

        // Очистка области перед записью
        wb_memory[write_addr1] = 0x00;
        wb_memory[write_addr2] = 0x00;

        std::cout << "Testing sequential memory writes..." << std::endl;

        operations.push_back("Write 0x" + to_hex(write_data1) + " to addr 0x" + to_hex(write_addr1 >> 8));
        uart_send_byte(0x10); // Memory Write
        uart_send_byte((write_addr1 >> 16) & 0xFF);
        uart_send_byte((write_addr1 >> 8) & 0xFF);
        uart_send_byte(write_addr1 & 0xFF);
        uart_send_byte(write_data1);

        // Ждем завершения операции
        wait_clocks(CLOCKS_PER_BIT * 20);
        bool write_result1 = (wb_memory[write_addr1] == write_data1);
        results.push_back(write_result1);
        std::cout << "  Write 1: " << (write_result1 ? "PASS" : "FAIL")
                  << " (expected 0x" << to_hex(write_data1)
                  << ", found 0x" << to_hex(wb_memory[write_addr1]) << ")" << std::endl;

        // Немедленно следующая запись
        operations.push_back("Write 0x" + to_hex(write_data2) + " to addr 0x" + to_hex(write_addr2 >> 8));
        uart_send_byte(0x10); // Memory Write
        uart_send_byte((write_addr2 >> 16) & 0xFF);
        uart_send_byte((write_addr2 >> 8) & 0xFF);
        uart_send_byte(write_addr2 & 0xFF);
        uart_send_byte(write_data2);

        wait_clocks(CLOCKS_PER_BIT * 20);
        bool write_result2 = (wb_memory[write_addr2] == write_data2);
        results.push_back(write_result2);
        std::cout << "  Write 2: " << (write_result2 ? "PASS" : "FAIL")
                  << " (expected 0x" << to_hex(write_data2)
                  << ", found 0x" << to_hex(wb_memory[write_addr2]) << ")" << std::endl;

        // Проверяем все результаты
        bool all_pass = true;
        for (size_t i = 0; i < results.size(); i++)
        {
            if (!results[i])
            {
                all_pass = false;
                break;
            }
        }

        test_assert(all_pass, "Sequential Operations",
                    all_pass ? "All " + std::to_string(results.size()) + " sequential operations completed successfully" : "Some sequential operations failed - check detailed output above");
    }

    void test_mixed_operations()
    {
        std::cout << "\n=== Testing Mixed Operations ===" << std::endl;
        reset_dut();
        wait_uart_ready();

        // Подготовка тестовых данных
        uint32_t mem_addr = 0x006000;
        uint8_t reg_addr = 0x30;
        uint8_t initial_mem_value = 0x77;
        uint8_t new_mem_value = 0x88;
        uint8_t reg_value = 0x99;

        // Инициализация памяти и регистров
        wb_memory[mem_addr] = initial_mem_value;
        dbg_registers[reg_addr] = reg_value;

        std::vector<std::string> operations;
        std::vector<bool> results;

        std::cout << "Testing mixed operation sequence..." << std::endl;

        // 1. Ping команда
        operations.push_back("Ping command");
        uart_send_byte(0xFF); // Ping
        uint8_t ping_response;
        bool ping_received = uart_receive_byte(ping_response);
        bool ping_result = ping_received && (ping_response == 0xFE);
        results.push_back(ping_result);
        std::cout << "  Ping: " << (ping_result ? "PASS" : "FAIL")
                  << " (expected 0xFE, got 0x" << to_hex(ping_response) << ")" << std::endl;

        // 2. Чтение из памяти
        operations.push_back("Memory read after ping");
        uart_send_byte(0x00); // Memory Read
        uart_send_byte((mem_addr >> 16) & 0xFF);
        uart_send_byte((mem_addr >> 8) & 0xFF);
        uart_send_byte(mem_addr & 0xFF);

        uint8_t mem_read_response;
        bool mem_read_received = uart_receive_byte(mem_read_response);
        bool mem_read_result = mem_read_received && (mem_read_response == initial_mem_value);
        results.push_back(mem_read_result);
        std::cout << "  Memory Read: " << (mem_read_result ? "PASS" : "FAIL")
                  << " (expected 0x" << to_hex(initial_mem_value)
                  << ", got 0x" << to_hex(mem_read_response) << ")" << std::endl;

        // 3. Запись в память
        operations.push_back("Memory write after read");
        uart_send_byte(0x10); // Memory Write
        uart_send_byte((mem_addr >> 16) & 0xFF);
        uart_send_byte((mem_addr >> 8) & 0xFF);
        uart_send_byte(mem_addr & 0xFF);
        uart_send_byte(new_mem_value);

        wait_clocks(CLOCKS_PER_BIT * 20);
        bool mem_write_result = (wb_memory[mem_addr] == new_mem_value);
        results.push_back(mem_write_result);
        std::cout << "  Memory Write: " << (mem_write_result ? "PASS" : "FAIL")
                  << " (expected 0x" << to_hex(new_mem_value)
                  << ", found 0x" << to_hex(wb_memory[mem_addr]) << ")" << std::endl;

        // 4. Чтение регистра
        operations.push_back("Register read after memory operations");
        uart_send_byte(0x20); // Register Read
        uart_send_byte(reg_addr);

        uint8_t reg_read_response;
        bool reg_read_received = uart_receive_byte(reg_read_response);
        bool reg_read_result = reg_read_received && (reg_read_response == reg_value);
        results.push_back(reg_read_result);
        std::cout << "  Register Read: " << (reg_read_result ? "PASS" : "FAIL")
                  << " (expected 0x" << to_hex(reg_value)
                  << ", got 0x" << to_hex(reg_read_response) << ")" << std::endl;

        // 5. Global Status
        operations.push_back("Global status command");
        uart_send_byte(0x50); // Global Status
        uint8_t status_response;
        bool status_received = uart_receive_byte(status_response);
        bool status_result = status_received && (status_response == dbg_registers[0x00]);
        results.push_back(status_result);
        std::cout << "  Global Status: " << (status_result ? "PASS" : "FAIL")
                  << " (expected 0x" << to_hex(dbg_registers[0x00])
                  << ", got 0x" << to_hex(status_response) << ")" << std::endl;

        // 6. Запись регистра
        uint8_t new_reg_value = 0x66;
        operations.push_back("Register write to complete sequence");
        uart_send_byte(0x30); // Register Write
        uart_send_byte(reg_addr);
        uart_send_byte(new_reg_value);

        wait_clocks(CLOCKS_PER_BIT * 20);
        bool reg_write_result = (dbg_registers[reg_addr] == new_reg_value);
        results.push_back(reg_write_result);
        std::cout << "  Register Write: " << (reg_write_result ? "PASS" : "FAIL")
                  << " (expected 0x" << to_hex(new_reg_value)
                  << ", found 0x" << to_hex(dbg_registers[reg_addr]) << ")" << std::endl;

        // Финальная проверка всех операций
        bool all_pass = true;
        for (size_t i = 0; i < results.size(); i++)
        {
            if (!results[i])
            {
                all_pass = false;
                std::cout << "  ❌ Failed: " << operations[i] << std::endl;
            }
        }

        if (all_pass)
        {
            std::cout << "  ✅ All " << results.size() << " mixed operations completed successfully!" << std::endl;
        }

        test_assert(all_pass, "Mixed Operations Sequence",
                    all_pass ? "All " + std::to_string(results.size()) + " mixed operations completed successfully" : "Some operations in mixed sequence failed - check detailed output above");
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
        test_memory_block_read_write();
        test_register_block_read_write();
        test_event_commands();
        test_invalid_commands();
        test_sequential_operations();
        test_mixed_operations();

        stats.print();

        if (stats.failed_tests == 0)
        {
            std::cout << "\n✅ ALL TESTS PASSED! 🎉" << std::endl;
        }
        else
        {
            std::cout << "\n❌ " << stats.failed_tests << "/" << stats.total_tests << " TESTS FAILED!" << std::endl;
        }

        for (int i = 0; i < 100; i++)
            tick();
    }
};

int main(int argc, char **argv)
{
    Verilated::commandArgs(argc, argv);
    UARTBridgeTest test;
    test.run_all_tests();
    return 0;
}