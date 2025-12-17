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
    const int CLOCK_FREQ = 108000000;  // Исправлено: 108 MHz
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
        dut->clk_i = 0;
        dut->rst = 1;
        dut->uart_rx = 1;
        dut->wb_dat_i = 0;
        dut->wb_ack_i = 0;
        dut->wb_err_i = 0;
        dut->dbg_dat_i = 0;
        dut->dbg_ack_i = 0;
        dut->dbg_err_i = 0;

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
        dut->clk_i = 0;
        handle_dbg_bus();
        handle_wb_bus();
        tfp->dump(main_time);
        dut->eval();
        main_time++;

        dut->clk_i = 1;
        handle_dbg_bus();
        handle_wb_bus();
        tfp->dump(main_time);
        dut->eval();
        main_time++;

        last_clk = dut->clk_i;
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
                std::cout << "[DBG] WRITE: 0x" << std::hex << (int)addr 
                          << " = 0x" << (int)dut->dbg_dat_o << std::dec << std::endl;
            }
            else
            {
                // Read operation - read from register
                dbg_response_data = dbg_registers[addr];
                std::cout << "[DBG] READ: 0x" << std::hex << (int)addr 
                          << " = 0x" << (int)dbg_response_data << std::dec << std::endl;
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
                std::cout << "[WB] WRITE: 0x" << std::hex << addr 
                          << " = 0x" << (int)dut->wb_dat_o << std::dec << std::endl;
            }
            else
            {
                // Read operation - read from memory
                wb_response_data = wb_memory[addr & 0xFFFF];
                std::cout << "[WB] READ: 0x" << std::hex << addr 
                          << " = 0x" << (int)wb_response_data << std::dec << std::endl;
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
        std::cout << "[UART] TX: 0x" << std::hex << (int)data << std::dec << std::endl;

        // Ждем готовности передатчика
        int timeout = 0;
        while (!dut->uart_tx_ready && timeout < 1000) {
            tick();
            timeout++;
        }
        
        if (timeout >= 1000) {
            std::cout << "WARNING: UART TX not ready before send" << std::endl;
        }

        dut->uart_rx = 0;
        wait_clocks(CLOCKS_PER_BIT);

        for (int bit = 0; bit < 8; bit++) {
            dut->uart_rx = (data >> bit) & 1;
            wait_clocks(CLOCKS_PER_BIT);
        }

        dut->uart_rx = 1;
        wait_clocks(CLOCKS_PER_BIT); // single stop bit
    }

    bool uart_receive_byte_timed(uint8_t &data, int timeout_bits = 20)
    {
        // Ждем старт-бит (1→0)
        int timeout = CLOCKS_PER_BIT * 20;
        while (dut->uart_tx != 0 && timeout-- > 0)
            tick();
        
        if (timeout <= 0) return false;
        
        // Обнаружили начало старт-бита
        
        // Ждем первый uart_tx_tick (конец старт-бита)
        timeout = CLOCKS_PER_BIT * 3;
        while (!dut->uart_tx_tick && timeout-- > 0)
            tick();
        
        if (timeout <= 0) return false;
        
        // Пропускаем tick (это был конец старт-бита)
        while (dut->uart_tx_tick)
            tick();
        
        // Теперь принимаем 8 битов данных
        data = 0;
        
        for (int bit = 0; bit < 8; bit++) {
            // Ждем uart_tx_tick (конец бита данных)
            timeout = CLOCKS_PER_BIT * 3;
            while (!dut->uart_tx_tick && timeout-- > 0)
                tick();
            
            if (timeout <= 0) return false;
            
            // Сразу сэмплируем линию
            int bit_value = dut->uart_tx;
            data |= (bit_value << bit);
            
            // Пропускаем импульс tick
            while (dut->uart_tx_tick)
                tick();
        }
        while (!dut->uart_tx_tick)
                tick();
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

    void debug_status(const std::string &context = "")
    {
        if (!context.empty())
            std::cout << "[" << context << "] ";
        std::cout << "CMD_STATE: " << (int)dut->cmd_state_o
                  << ", BUS_STATE: " << (int)dut->bus_state_o
                  << ", TX_READY: " << (int)dut->uart_tx_ready
                  << ", RX_READY: " << (int)dut->uart_rx_ready << std::endl;
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
        while ((!dut->uart_tx_ready || !dut->uart_rx_ready) && timeout < 1000)
        {
            tick();
            timeout++;
        }
        if (timeout >= 1000)
        {
            std::cout << "Warning: UART ready timeout" << std::endl;
            debug_status("timeout");
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

    // Helper function to build command byte
    uint8_t build_cmd(uint8_t cmd_type, uint8_t size_code) {
        return ((cmd_type & 0x7) << 4) | (size_code & 0xF);
    }

    // ===========================
    // INDIVIDUAL TEST CASES
    // ===========================

    void test_state_read_command()
    {
        std::cout << "\n=== Testing State Read Command (0x5X) ===" << std::endl;
        reset_dut();
        wait_uart_ready();

        // CMD_TYPE_STATE_READ = 0x5, SIZE_1_BYTE = 0x0
        uart_send_byte(build_cmd(0x5, 0x0));

        // Should receive 8 bytes of state information
        std::vector<uint8_t> state_data;
        for (int i = 0; i < 7; i++)
        {
            uint8_t byte;
            if (uart_receive_byte_timed(byte, 30))
            {
                state_data.push_back(byte);
                std::cout << "  State byte " << i << ": 0x" << to_hex(byte) << std::endl;
            }
            else
            {
                break;
            }
        }

        bool success = (state_data.size() == 7);
        test_assert(success, "State Read Command", 
                   success ? "Received 7 state bytes" : 
                   "Expected 8 bytes, got " + std::to_string(state_data.size()));
    }

    void test_status_command()
    {
        std::cout << "\n=== Testing Status Command (0x4X) ===" << std::endl;
        reset_dut();
        wait_uart_ready();

        // Setup register 0 with test value
        dbg_registers[0] = 0xAA;

        // CMD_TYPE_STATUS = 0x4, SIZE_1_BYTE = 0x0
        uart_send_byte(build_cmd(0x4, 0x0));

        uint8_t response;
        bool received = uart_receive_byte(response);

        test_assert(received && response == 0xAA, 
                   "Status Command",
                   received ? "Expected 0xAA, got 0x" + to_hex(response) : 
                   "No response received");
    }

    void test_memory_read_single()
    {
        std::cout << "\n=== Testing Memory Read Single Byte ===" << std::endl;
        reset_dut();
        wait_uart_ready();

        uint32_t addr = 0x001234;
        uint8_t expected = 0x55;
        wb_memory[addr] = expected;

        // CMD_TYPE_MEM_READ = 0x0, SIZE_1_BYTE = 0x0
        uart_send_byte(build_cmd(0x0, 0x0));
        uart_send_byte((addr >> 16) & 0xFF);
        uart_send_byte((addr >> 8) & 0xFF);
        uart_send_byte(addr & 0xFF);

        uint8_t response;
        bool received = uart_receive_byte(response);

        test_assert(received && response == expected,
                   "Memory Read Single Byte",
                   received ? "Expected 0x" + to_hex(expected) + ", got 0x" + to_hex(response) :
                   "No response");
    }

    void test_memory_write_single()
    {
        std::cout << "\n=== Testing Memory Write Single Byte ===" << std::endl;
        reset_dut();
        wait_uart_ready();

        uint32_t addr = 0x001234;
        uint8_t data = 0xAA;
        wb_memory[addr] = 0x00; // Clear first

        // CMD_TYPE_MEM_WRITE = 0x1, SIZE_1_BYTE = 0x0
        uart_send_byte(build_cmd(0x1, 0x0));
        uart_send_byte((addr >> 16) & 0xFF);
        uart_send_byte((addr >> 8) & 0xFF);
        uart_send_byte(addr & 0xFF);
        uart_send_byte(data);

        // Wait for write to complete
        wait_clocks(CLOCKS_PER_BIT * 20);

        bool success = (wb_memory[addr] == data);
        test_assert(success, "Memory Write Single Byte",
                   success ? "Write successful" : 
                   "Write failed, expected 0x" + to_hex(data) + 
                   ", got 0x" + to_hex(wb_memory[addr]));
    }

    void test_memory_read_multiple()
    {
        std::cout << "\n=== Testing Memory Read Multiple Bytes ===" << std::endl;
        reset_dut();
        wait_uart_ready();

        uint32_t base_addr = 0x001000;
        int block_size = 4; // 4 bytes
        std::vector<uint8_t> expected = {0x11, 0x22, 0x33, 0x44};

        // Setup memory
        for (int i = 0; i < block_size; i++)
        {
            wb_memory[base_addr + i] = expected[i];
        }

        // CMD_TYPE_MEM_READ = 0x0, SIZE_4_BYTES = 0x2
        uart_send_byte(build_cmd(0x0, 0x2));
        uart_send_byte((base_addr >> 16) & 0xFF);
        uart_send_byte((base_addr >> 8) & 0xFF);
        uart_send_byte(base_addr & 0xFF);

        std::vector<uint8_t> received;
        for (int i = 0; i < block_size; i++)
        {
            uint8_t byte;
            if (uart_receive_byte_timed(byte, 30))
            {
                received.push_back(byte);
            }
            else
            {
                break;
            }
        }

        bool success = (received.size() == block_size);
        if (success)
        {
            for (int i = 0; i < block_size; i++)
            {
                if (received[i] != expected[i])
                {
                    success = false;
                    break;
                }
            }
        }

        test_assert(success, "Memory Read 4 Bytes",
                   success ? "Read 4 bytes successfully" :
                   "Expected " + std::to_string(block_size) + " bytes, got " + 
                   std::to_string(received.size()));
    }

    void test_register_read_single()
    {
        std::cout << "\n=== Testing Register Read Single Byte ===" << std::endl;
        reset_dut();
        wait_uart_ready();

        uint8_t addr = 0x10;
        uint8_t expected = 0xBB;
        dbg_registers[addr] = expected;

        // CMD_TYPE_REG_READ = 0x2, SIZE_1_BYTE = 0x0
        uart_send_byte(build_cmd(0x2, 0x0));
        uart_send_byte(addr);

        uint8_t response;
        bool received = uart_receive_byte(response);

        test_assert(received && response == expected,
                   "Register Read Single Byte",
                   received ? "Expected 0x" + to_hex(expected) + ", got 0x" + to_hex(response) :
                   "No response");
    }

    void test_register_write_single()
    {
        std::cout << "\n=== Testing Register Write Single Byte ===" << std::endl;
        reset_dut();
        wait_uart_ready();

        uint8_t addr = 0x10;
        uint8_t data = 0xCC;
        dbg_registers[addr] = 0x00; // Clear first

        // CMD_TYPE_REG_WRITE = 0x3, SIZE_1_BYTE = 0x0
        uart_send_byte(build_cmd(0x3, 0x0));
        uart_send_byte(addr);
        uart_send_byte(data);

        // Wait for write to complete
        wait_clocks(CLOCKS_PER_BIT * 20);

        bool success = (dbg_registers[addr] == data);
        test_assert(success, "Register Write Single Byte",
                   success ? "Write successful" :
                   "Write failed, expected 0x" + to_hex(data) +
                   ", got 0x" + to_hex(dbg_registers[addr]));
    }

    void test_invalid_command()
    {
        std::cout << "\n=== Testing Invalid Command ===" << std::endl;
        reset_dut();
        wait_uart_ready();

        // Invalid command: cmd_type = 0x6 (not defined)
        uart_send_byte(build_cmd(0x6, 0x0));

        uint8_t response;
        bool received = uart_receive_byte(response);

        test_assert(received && response == 0xFF,
                   "Invalid Command Error",
                   received ? "Expected error 0xFF, got 0x" + to_hex(response) :
                   "No response");
    }

    void test_sequential_operations()
    {
        std::cout << "\n=== Testing Sequential Operations ===" << std::endl;
        reset_dut();
        wait_uart_ready();

        std::vector<bool> results;
        
        // 1. Register write
        dbg_registers[0x20] = 0x00;
        uart_send_byte(build_cmd(0x3, 0x0)); // REG_WRITE
        uart_send_byte(0x20);
        uart_send_byte(0x55);
        wait_clocks(CLOCKS_PER_BIT * 20);
        results.push_back(dbg_registers[0x20] == 0x55);

        // 2. Memory write
        wb_memory[0x1000] = 0x00;
        uart_send_byte(build_cmd(0x1, 0x0)); // MEM_WRITE
        uart_send_byte(0x00);
        uart_send_byte(0x10);
        uart_send_byte(0x00);
        uart_send_byte(0xAA);
        wait_clocks(CLOCKS_PER_BIT * 20);
        results.push_back(wb_memory[0x1000] == 0xAA);

        // 3. Register read
        uart_send_byte(build_cmd(0x2, 0x0)); // REG_READ
        uart_send_byte(0x20);
        uint8_t reg_response;
        bool reg_received = uart_receive_byte(reg_response);
        results.push_back(reg_received && reg_response == 0x55);
        std::cout << "  Test Read 0x" << to_hex(reg_response) << std::endl;

        // 4. Memory read
        uart_send_byte(build_cmd(0x0, 0x0)); // MEM_READ
        uart_send_byte(0x00);
        uart_send_byte(0x10);
        uart_send_byte(0x00);
        uint8_t mem_response;
        bool mem_received = uart_receive_byte(mem_response);
        results.push_back(mem_received && mem_response == 0xAA);
        std::cout << "  Test Write 0x" << to_hex(reg_response) << std::endl;

        // 5. State read
        int expectStatusBytes = 7;
        uart_send_byte(build_cmd(0x5, 0x0)); // STATE_READ
        std::vector<uint8_t> state_bytes;
        for (int i = 0; i < expectStatusBytes; i++)
        {
            uint8_t byte;
            if (uart_receive_byte_timed(byte, 30)) {
                state_bytes.push_back(true);
                std::cout << "  Test Read 0x" << to_hex(byte) << std::endl;
            } else {
                 state_bytes.push_back(false);
            }        
        }
        results.push_back(state_bytes.size() == expectStatusBytes);

        bool all_pass = true;
        for (bool r : results)
        {
            if (!r)
            {
                all_pass = false;
                break;
            }
        }

        test_assert(all_pass, "Sequential Operations",
                   all_pass ? "All 5 operations completed successfully" :
                   "Some operations failed");
    }

    void test_all_block_sizes()
    {
        std::cout << "\n=== Testing All Block Sizes ===" << std::endl;
        
        // Test sizes: 1, 2, 4, 8, 16, 32, 64, 128 bytes
        int sizes[] = {1, 2, 4, 8, 16, 32, 64, 128};
        int size_codes[] = {0, 1, 2, 3, 4, 5, 6, 7};
        
        bool all_pass = true;
        
        int start_test = 0;
        int last_test = 7;

        for (int i = start_test; i <= last_test; i++)
        {
            std::cout << "\n--- Testing " << sizes[i] << " bytes ---" << std::endl;
            reset_dut();
            wait_uart_ready();
            
            // Prepare test data
            uint32_t base_addr = 0x002000;
            std::vector<uint8_t> expected;
            for (int j = 0; j < sizes[i]; j++)
            {
                uint8_t val = (base_addr + j) & 0xFF;
                wb_memory[base_addr + j] = val;
                expected.push_back(val);
            }
            
            // Send read command
            uart_send_byte(build_cmd(0x0, size_codes[i])); // MEM_READ
            uart_send_byte((base_addr >> 16) & 0xFF);
            uart_send_byte((base_addr >> 8) & 0xFF);
            uart_send_byte(base_addr & 0xFF);
            
            // Receive data
            std::vector<uint8_t> received;
            for (int j = 0; j < sizes[i]; j++)
            {
                uint8_t byte;
                if (uart_receive_byte_timed(byte, 50))
                {
                     std::cout << "  Byte " << j << ": got 0x" << to_hex(byte) << std::endl;
                    received.push_back(byte);
                }
                else
                { std::cout << "  ❌ Receiveing cancel " << std::endl;
                    break;
                }
            }
            
            // Verify
            bool size_match = (received.size() == sizes[i]);
            bool data_match = true;
            if (size_match)
            {
                for (int j = 0; j < sizes[i]; j++)
                {
                    if (received[j] != expected[j])
                    {
                        data_match = false;
                        std::cout << "  ❌ Byte " << j << ": expected 0x" << to_hex(expected[j])
                                  << ", got 0x" << to_hex(received[j]) << std::endl;
                        break;
                    }
                }
            }
            
            if (size_match && data_match)
            {
                std::cout << "  ✅ " << sizes[i] << " bytes read correctly" << std::endl;
            }
            else
            {
                std::cout << "  ❌ Failed: expected " << sizes[i] 
                          << " bytes, got " << received.size() << std::endl;
                all_pass = false;
            }

            wait_clocks(CLOCKS_PER_BIT * 128);
        }
        
        test_assert(all_pass, "All Block Sizes",
                   all_pass ? "All block sizes tested successfully" :
                   "Some block sizes failed");
    }

    void test_error_handling()
    {
        std::cout << "\n=== Testing Error Handling ===" << std::endl;
        reset_dut();
        wait_uart_ready();
        
        // Test 1: Invalid command
        uart_send_byte(0x60); // cmd_type=6 (invalid)
        uint8_t response;
        bool received = uart_receive_byte(response);
        test_assert(received && response == 0xFF, "Invalid Command Error",
                   "Expected error response 0xFF");
        
        reset_dut();
        wait_uart_ready();
        
        // Test 2: Incomplete command sequence (timeout)
        uart_send_byte(build_cmd(0x0, 0x0)); // MEM_READ
        // Don't send address bytes - should timeout
        
        // Wait for timeout (watchdog should trigger)
        wait_clocks(CLOCKS_PER_BIT * 50000); // Enough for watchdog timeout
        
        // The module should reset to idle state
        test_assert(dut->cmd_state_o == 0, "Timeout Recovery",
                   "Module should recover from timeout");
    }

    void test_bus_states()
    {
        std::cout << "\n=== Testing Bus States ===" << std::endl;
        reset_dut();
        wait_uart_ready();
        
        // Monitor bus states during operation
        std::cout << "Monitoring bus states during memory read..." << std::endl;
        
        uint32_t addr = 0x003000;
        wb_memory[addr] = 0x77;
        
        uart_send_byte(build_cmd(0x0, 0x0)); // MEM_READ
        uart_send_byte((addr >> 16) & 0xFF);
        uart_send_byte((addr >> 8) & 0xFF);
        uart_send_byte(addr & 0xFF);
        
        // Track bus states
        std::vector<int> cmd_states;
        std::vector<int> bus_states;
        
        for (int i = 0; i < 1000; i++)
        {
            cmd_states.push_back(dut->cmd_state_o);
            bus_states.push_back(dut->bus_state_o);
            tick();
            
            // Stop if we've returned to idle
            if (dut->cmd_state_o == 0 && i > 100)
                break;
        }
        
        uint8_t response;
        uart_receive_byte(response);
        
        std::cout << "CMD states observed: ";
        for (int state : cmd_states)
        {
            if (state < 10) std::cout << state;
        }
        std::cout << std::endl;
        
        std::cout << "BUS states observed: ";
        for (int state : bus_states)
        {
            if (state < 4) std::cout << state;
        }
        std::cout << std::endl;
        
        test_assert(response == 0x77, "Bus States Operation",
                   "Bus operation completed successfully");
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
        std::cout << "===============================" << std::endl;

        // Basic functionality tests
        test_state_read_command();
        test_status_command();
        test_memory_read_single();
        test_memory_write_single();
        test_register_read_single();
        test_register_write_single();
        //
        // Advanced tests
        test_memory_read_multiple();
        test_sequential_operations();
        test_all_block_sizes();
        test_invalid_command();
        test_error_handling();
        test_bus_states();

        stats.print();

        if (stats.failed_tests == 0)
        {
            std::cout << "\n✅ ALL TESTS PASSED! 🎉" << std::endl;
        }
        else
        {
            std::cout << "\n❌ " << stats.failed_tests << "/" << stats.total_tests << " TESTS FAILED!" << std::endl;
        }

        // Final cleanup
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