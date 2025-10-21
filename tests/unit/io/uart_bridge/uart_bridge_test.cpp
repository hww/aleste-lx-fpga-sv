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

    bool uart_receive_byte_timed(uint8_t &data, uint8_t time_bits)
    {
        //std::cout << "Waiting for UART response..." << std::endl;

        int timeout = CLOCKS_PER_BIT * time_bits;
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

    bool uart_receive_byte(uint8_t &data)
    {
        return uart_receive_byte_timed(data, 20);
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
        std::cout << "\n=== Testing Ping Command (0x55) ===" << std::endl;
        reset_dut();

        wait_uart_ready();
        debug_uart_status("Before ping");
        uart_send_byte(0x55);

        uint8_t response;
        bool received = uart_receive_byte(response);

        test_assert(received && response == 0x55, "Ping Response",
                    received ? "Expected 0xFE, got 0x" + to_hex(response) : "No response received");
    }

    void test_global_status_command()
    {
        std::cout << "\n=== Testing Global Status Command (0x50) ===" << std::endl;
        reset_dut();

        wait_uart_ready();
        debug_uart_status("Before global status");
        uart_send_byte(0x40);

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
        uart_send_byte(0x55); // Ping
        uint8_t ping_response;
        bool ping_received = uart_receive_byte(ping_response);
        bool ping_result = ping_received && (ping_response == 0x55);
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
        uart_send_byte(0x40); // Global Status
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

    void test_memory_read_overflow()
    {
        std::cout << "\n=== Testing Memory Read Overflow ===" << std::endl;
        reset_dut();
        wait_uart_ready();

        uint32_t addr = 0x001000;
        uint8_t expected_data = 0x55;
        wb_memory[addr] = expected_data;

        std::cout << "Testing single byte memory read for overflow..." << std::endl;

        // Отправляем команду чтения 1 байта
        uart_send_byte(0x00); // Memory Read 1 byte
        uart_send_byte((addr >> 16) & 0xFF);
        uart_send_byte((addr >> 8) & 0xFF);
        uart_send_byte(addr & 0xFF);

        // Получаем ожидаемый байт
        uint8_t response;
        bool received = uart_receive_byte(response);

        if (!received)
        {
            test_assert(false, "Memory Read Overflow - First Byte",
                        "Failed to receive first byte");
            return;
        }

        bool first_byte_correct = (response == expected_data);
        std::cout << "  First byte: " << (first_byte_correct ? "PASS" : "FAIL")
                  << " (expected 0x" << to_hex(expected_data)
                  << ", got 0x" << to_hex(response) << ")" << std::endl;

        // Теперь пытаемся получить дополнительные байты (которые не должны приходить)
        std::vector<uint8_t> extra_bytes;
        int timeout = CLOCKS_PER_BIT * 5; // Короткий таймаут
        int max_extra_bytes = 10;         // Ограничим количество проверяемых лишних байт

        std::cout << "Checking for overflow bytes..." << std::endl;

        for (int i = 0; i < max_extra_bytes; i++)
        {
            uint8_t extra_byte;
            bool extra_received = false;
            int attempts = 0;

            // Быстрая проверка на наличие данных
            while (attempts < timeout && !extra_received)
            {
                if (dut->uart_tx == 0)
                { // Start bit detected
                    extra_received = uart_receive_byte(extra_byte);
                    break;
                }
                tick();
                attempts++;
            }

            if (extra_received)
            {
                extra_bytes.push_back(extra_byte);
                std::cout << "  ❌ Overflow byte " << (i + 1) << ": 0x" << to_hex(extra_byte) << std::endl;
            }
            else
            {
                break; // Больше данных нет - это хорошо
            }
        }

        bool no_overflow = extra_bytes.empty();

        if (no_overflow)
        {
            std::cout << "  ✅ No overflow bytes detected" << std::endl;
            test_assert(first_byte_correct, "Memory Read Overflow Test",
                        "Single byte read completed without overflow");
        }
        else
        {
            std::cout << "  ❌ Detected " << extra_bytes.size() << " overflow bytes!" << std::endl;
            test_assert(false, "Memory Read Overflow Test",
                        "Expected 1 byte, got " + std::to_string(1 + extra_bytes.size()) +
                            " bytes (overflow: " + std::to_string(extra_bytes.size()) + " bytes)");
        }
    }

    void test_memory_block_read_overflow()
    {
        std::cout << "\n=== Testing Memory Block Read Overflow ===" << std::endl;
        reset_dut();
        wait_uart_ready();

        uint32_t base_addr = 0x002000;
        const int BLOCK_SIZE = 8;
        std::vector<uint8_t> test_data = {0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77, 0x88};

        // Заполняем память тестовыми данными
        for (int i = 0; i < BLOCK_SIZE; i++)
        {
            wb_memory[base_addr + i] = test_data[i];
        }

        std::cout << "Testing 8-byte block read for overflow..." << std::endl;

        // Отправляем команду чтения 8 байт
        uart_send_byte(0x03); // Memory Read 8 bytes
        uart_send_byte((base_addr >> 16) & 0xFF);
        uart_send_byte((base_addr >> 8) & 0xFF);
        uart_send_byte(base_addr & 0xFF);

        // Получаем ожидаемые 8 байт
        std::vector<uint8_t> received_data;
        for (int i = 0; i < BLOCK_SIZE; i++)
        {
            uint8_t response;
            bool received = uart_receive_byte(response);
            if (received)
            {
                received_data.push_back(response);
                std::cout << "  Byte " << i << ": 0x" << to_hex(response)
                          << (response == test_data[i] ? " ✅" : " ❌") << std::endl;
            }
            else
            {
                std::cout << "  ❌ Failed to receive byte " << i << std::endl;
            }
        }

        // Проверяем корректность полученных данных
        bool data_correct = (received_data.size() == BLOCK_SIZE);
        if (data_correct)
        {
            for (int i = 0; i < BLOCK_SIZE; i++)
            {
                if (received_data[i] != test_data[i])
                {
                    data_correct = false;
                    break;
                }
            }
        }

        // Теперь проверяем overflow
        std::vector<uint8_t> overflow_bytes;
        int max_overflow_check = 20; // Проверим на 20 лишних байт
        int overflow_timeout = CLOCKS_PER_BIT * 3;

        std::cout << "Checking for block read overflow..." << std::endl;

        for (int i = 0; i < max_overflow_check; i++)
        {
            uint8_t extra_byte;
            bool extra_received = false;
            int attempts = 0;

            while (attempts < overflow_timeout && !extra_received)
            {
                if (dut->uart_tx == 0)
                {
                    extra_received = uart_receive_byte(extra_byte);
                    break;
                }
                tick();
                attempts++;
            }

            if (extra_received)
            {
                overflow_bytes.push_back(extra_byte);
                std::cout << "  ❌ Overflow byte " << i + 1 << ": 0x" << to_hex(extra_byte) << std::endl;
            }
            else
            {
                break;
            }
        }

        bool no_overflow = overflow_bytes.empty();

        if (data_correct && no_overflow)
        {
            std::cout << "  ✅ Block read completed correctly - no overflow" << std::endl;
            test_assert(true, "Memory Block Read Overflow Test",
                        "8 bytes read successfully without overflow");
        }
        else if (!no_overflow)
        {
            std::cout << "  ❌ Block read overflow: " << overflow_bytes.size() << " extra bytes!" << std::endl;
            test_assert(false, "Memory Block Read Overflow Test",
                        "Expected " + std::to_string(BLOCK_SIZE) + " bytes, got " +
                            std::to_string(BLOCK_SIZE + overflow_bytes.size()) + " bytes");
        }
        else
        {
            test_assert(false, "Memory Block Read Overflow Test",
                        "Data corruption: received " + std::to_string(received_data.size()) + "/8 bytes correctly");
        }
    }

    void test_register_read_overflow()
    {
        std::cout << "\n=== Testing Register Read Overflow ===" << std::endl;
        reset_dut();
        wait_uart_ready();

        uint8_t reg_addr = 0x40;
        uint8_t expected_data = 0x99;
        dbg_registers[reg_addr] = expected_data;

        std::cout << "Testing single register read for overflow..." << std::endl;

        uart_send_byte(0x20); // Register Read
        uart_send_byte(reg_addr);

        uint8_t response;
        bool received = uart_receive_byte(response);

        if (!received)
        {
            test_assert(false, "Register Read Overflow - First Byte",
                        "Failed to receive register data");
            return;
        }

        bool first_byte_correct = (response == expected_data);
        std::cout << "  Register value: " << (first_byte_correct ? "PASS" : "FAIL")
                  << " (expected 0x" << to_hex(expected_data)
                  << ", got 0x" << to_hex(response) << ")" << std::endl;

        // Проверяем overflow
        std::vector<uint8_t> overflow_bytes;
        int max_check = 10;
        int timeout = CLOCKS_PER_BIT * 3;

        std::cout << "Checking for register read overflow..." << std::endl;

        for (int i = 0; i < max_check; i++)
        {
            uint8_t extra_byte;
            bool extra_received = false;
            int attempts = 0;

            while (attempts < timeout && !extra_received)
            {
                if (dut->uart_tx == 0)
                {
                    extra_received = uart_receive_byte(extra_byte);
                    break;
                }
                tick();
                attempts++;
            }

            if (extra_received)
            {
                overflow_bytes.push_back(extra_byte);
                std::cout << "  ❌ Overflow byte " << (i + 1) << ": 0x" << to_hex(extra_byte) << std::endl;
            }
            else
            {
                break;
            }
        }

        bool no_overflow = overflow_bytes.empty();

        if (no_overflow)
        {
            std::cout << "  ✅ No register read overflow" << std::endl;
            test_assert(first_byte_correct, "Register Read Overflow Test",
                        "Single register read completed without overflow");
        }
        else
        {
            std::cout << "  ❌ Register read overflow: " << overflow_bytes.size() << " bytes!" << std::endl;
            test_assert(false, "Register Read Overflow Test",
                        "Expected 1 register byte, got " + std::to_string(1 + overflow_bytes.size()));
        }
    }

    void test_continuous_overflow_detection()
    {
        std::cout << "\n=== Testing Continuous Overflow Detection ===" << std::endl;
        std::cout << "This test will detect the 130-150 byte overflow issue..." << std::endl;

        reset_dut();
        wait_uart_ready();

        uint32_t addr = 0x003000;
        uint8_t test_value = 0x42;
        wb_memory[addr] = test_value;

        // Выполняем простой read
        uart_send_byte(0x00); // Memory Read
        uart_send_byte((addr >> 16) & 0xFF);
        uart_send_byte((addr >> 8) & 0xFF);
        uart_send_byte(addr & 0xFF);

        // Получаем первый (корректный) байт
        uint8_t first_byte;
        uart_receive_byte(first_byte);

        // Теперь мониторим линию в течение длительного времени
        std::cout << "Monitoring UART TX for overflow data (this may take a moment)..." << std::endl;

        std::vector<uint8_t> overflow_data;
        const int MONITOR_CYCLES = CLOCKS_PER_BIT * 200; // Мониторим достаточно долго
        bool capturing = false;
        int bit_count = 0;
        uint8_t current_byte = 0;
        int bytes_captured = 0;

        for (int i = 0; i < MONITOR_CYCLES; i++)
        {
            if (dut->uart_tx == 0 && !capturing)
            {
                // Обнаружили start bit - начинаем захват
                capturing = true;
                bit_count = 0;
                current_byte = 0;
            }

            if (capturing)
            {
                // Ждем середину бита
                if (i % CLOCKS_PER_BIT == CLOCKS_PER_BIT / 2)
                {
                    if (bit_count >= 1 && bit_count <= 8)
                    {
                        // Data bits
                        current_byte |= (dut->uart_tx << (bit_count - 1));
                    }
                    bit_count++;

                    if (bit_count > 9)
                    { // Start + 8 data + stop
                        capturing = false;
                        overflow_data.push_back(current_byte);
                        bytes_captured++;

                        if (bytes_captured % 10 == 0)
                        {
                            std::cout << "  Captured " << bytes_captured << " overflow bytes..." << std::endl;
                        }

                        if (bytes_captured >= 150)
                        {
                            std::cout << "  Reached 150 bytes - stopping capture" << std::endl;
                            break;
                        }
                    }
                }
            }

            tick();
        }

        std::cout << "Overflow capture completed: " << overflow_data.size() << " bytes captured" << std::endl;

        if (overflow_data.size() > 1)
        {
            std::cout << "  ❌ MAJOR OVERFLOW DETECTED: " << overflow_data.size() << " bytes!" << std::endl;
            std::cout << "  First 10 overflow bytes: ";
            for (int i = 0; i < std::min(10, (int)overflow_data.size()); i++)
            {
                std::cout << "0x" << to_hex(overflow_data[i]) << " ";
            }
            std::cout << std::endl;

            // Анализ паттерна overflow данных
            int zero_count = 0;
            int pattern_count = 0;
            for (size_t i = 0; i < overflow_data.size(); i++)
            {
                if (overflow_data[i] == 0x00)
                    zero_count++;
                if (i > 0 && overflow_data[i] == overflow_data[i - 1])
                    pattern_count++;
            }

            std::cout << "  Overflow analysis: " << zero_count << "/" << overflow_data.size()
                      << " zeros, " << pattern_count << " repeating patterns" << std::endl;
        }

        bool overflow_detected = (overflow_data.size() > 1);
        test_assert(!overflow_detected, "Continuous Overflow Detection",
                    overflow_detected ? "MAJOR OVERFLOW: " + std::to_string(overflow_data.size()) + " bytes detected after single read!" : "No significant overflow detected");
    }
    void test_block_size_loading()
    {
        std::cout << "\n=== Simple Block Reading Test ===" << std::endl;

        // Простейший паттерн: значение = младший байт адреса
        for (int i = 0; i < 256; i++)
        {
            wb_memory[i] = i & 0xFF; // Заполняем память: data = address
        }

        int block_sizes[] = {1, 2, 4, 8, 16, 32, 64, 128};
        bool error = false;

        for (int block_size : block_sizes)
        {
            std::cout << "\n--- Testing " << block_size << " bytes ---" << std::endl;

            reset_dut();
            wait_uart_ready();

            uint32_t base_addr = 0x000000; // Начинаем с адреса 0
            uint8_t cmd = log2(block_size);  // Команда: 0x00=1байт, 0x01=2байта, etc.

            // Отправляем команду чтения
            uart_send_byte(cmd);
            uart_send_byte((base_addr >> 16) & 0xFF);
            uart_send_byte((base_addr >> 8) & 0xFF);
            uart_send_byte(base_addr & 0xFF);

            // Получаем данные
            std::vector<uint8_t> received;
            for (int i = 0; i < block_size; i++)
            {
                uint8_t byte;
                if (uart_receive_byte_timed(byte,128))
                {
                    received.push_back(byte);
                }
                else
                {
                    break;
                }
            }

            // Простая проверка
            bool correct = (received.size() == block_size);

            if (correct)
            {
                // Проверяем что данные совпадают с адресом
                for (int i = 0; i < block_size; i++)
                {
                    uint8_t expected = (base_addr + i) & 0xFF; // Ожидаем: data = address
                    if (received[i] != expected)
                    {
                        correct = false;
                        std::cout << "  ❌ Byte " << i << ": expected 0x" << to_hex(expected)
                                  << ", got 0x" << to_hex(received[i]) << std::endl;
                        break;
                    }
                }
            }
            // Проверяем нет ли лишних байт
            uint8_t extra_byte;
            if (uart_receive_byte(extra_byte))
            {
                error = true;
                std::cout << "  ❌ OVERFLOW: extra byte 0x" << to_hex(extra_byte) << std::endl;
            }

            if (correct)
            {
                std::cout << "  ✅ Received " << received.size() << " correct bytes" << std::endl;
            }
            else
            {               
                error = true;
                std::cout << "  ❌ Expected " << block_size << " bytes, got " << received.size() << std::endl;
            }
        }
        if (error) stats.failed_tests++;
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
        test_invalid_commands();
        // Существующие комплексные тесты
        test_sequential_operations();
        test_mixed_operations();
        // НОВЫЕ ТЕСТЫ ДЛЯ ОБНАРУЖЕНИЯ OVERFLOW
        test_memory_read_overflow();
        test_memory_block_read_overflow();
        test_register_read_overflow();
        test_continuous_overflow_detection(); // Главный тест для поимки 130-150 байт
        test_block_size_loading();

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