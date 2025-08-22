#include "Vtb_sdram_controller.h"
#include <verilated.h>
#include <verilated_vcd_c.h>
#include <iostream>
#include <cassert>

vluint64_t main_time = 0;
double sc_time_stamp() { return main_time; }

class SDRAMTest {
private:
    Vtb_sdram_controller* dut;
    VerilatedVcdC* tfp;
    vluint64_t time;
    
public:
    SDRAMTest() : time(0) {
        Verilated::traceEverOn(true);
        dut = new Vtb_sdram_controller;
        tfp = new VerilatedVcdC;
        dut->trace(tfp, 99);
        tfp->open("sdram_advanced.vcd");
        
        // Initialize
        dut->clk_sys = 0;
        dut->rst = 1;
        dut->locked = 0;
        dut->host_wr_req = 0;
        dut->host_rd_req = 0;
        dut->host_addr = 0;
        dut->host_data_in = 0;
    }
    
    ~SDRAMTest() {
        tfp->close();
        delete dut;
        delete tfp;
    }
    
    void tick(int cycles = 1) {
        for (int i = 0; i < cycles; i++) {
            dut->clk_sys = 0;
            dut->eval();
            tfp->dump(main_time);
            main_time += 5;
            
            dut->clk_sys = 1;
            dut->eval();
            tfp->dump(main_time);
            main_time += 5;
            
            time += 10;
        }
    }
    
    void rst() {
        std::cout << "rstting..." << std::endl;
        dut->rst = 1;
        dut->locked = 0;
        tick(10);
        dut->rst = 0;
        dut->locked = 1;
        tick(5);
        std::cout << "rst complete" << std::endl;
    }
    
    void wait_until_ready() {
        int timeout = 1000;
        while (dut->host_busy && timeout > 0) {
            tick();
            timeout--;
        }
        if (timeout == 0) {
            std::cout << "✗ TIMEOUT: Controller stuck busy" << std::endl;
        }
    }
    
    bool write(uint32_t addr, uint16_t data) {
        std::cout << "WRITE: addr=0x" << std::hex << addr 
              << ", data=0x" << data << std::endl;
        // Check if controller is ready with timeout
        int timeout = 100;
        while (dut->host_busy && timeout > 0) {
            tick();
            timeout--;
        }
        
        if (dut->host_busy) {
            std::cout << "✗ Controller still busy, cannot write" << std::endl;
            return false;
        }
        
        std::cout << "DEBUG: Starting write, state=" << (int)dut->debug_state
                  << ", BUSY=" << (int)dut->host_busy << std::endl;
        
        // Activate write request
        dut->host_wr_req = 1;
        dut->host_addr = addr;
        dut->host_data_in = data;
        
        tick(2); // Hold request for 2 cycles
        
        // Deactivate request
        dut->host_wr_req = 0;
        
        // Wait for completion
        int wait_count = 0;
        while (dut->host_busy && wait_count < 200) {
            tick();
            wait_count++;
            if (wait_count % 20 == 0) {
                std::cout << "DEBUG: Write in progress, state=" << (int)dut->debug_state
                          << ", BUSY=" << (int)dut->host_busy 
                          << ", count=" << wait_count << std::endl;
            }
        }
        
        if (dut->host_busy) {
            std::cout << "✗ WRITE TIMEOUT after " << wait_count << " cycles" << std::endl;
            return false;
        }
        
        std::cout << "✓ Write completed in " << wait_count << " cycles" << std::endl;
        return true;
    }
    
    uint16_t read(uint32_t addr) {
        // Check if controller is ready with timeout
        int timeout = 100;
        while (dut->host_busy && timeout > 0) {
            tick();
            timeout--;
        }
        
        if (dut->host_busy) {
            std::cout << "✗ Controller still busy, cannot read" << std::endl;
            return 0xFFFF;
        }
        
        std::cout << "DEBUG: Starting read, state=" << (int)dut->debug_state
                  << ", BUSY=" << (int)dut->host_busy << std::endl;
        
        // Activate read request
        dut->host_rd_req = 1;
        dut->host_addr = addr;
        
        // Ждем пока контроллер увидит запрос
        int ack_timeout = 20;
        while (!dut->host_busy && ack_timeout > 0) {
            tick();
            ack_timeout--;
        }

        if (!dut->host_busy) {
            std::cout << "✗ Controller didn't acknowledge read request" << std::endl;
            dut->host_rd_req = 0;
            return 0xFFFF;
        }

        // Продолжаем держать запрос еще немного
        tick(5);
        dut->host_rd_req = 0;

        // Deactivate request
        dut->host_rd_req = 0;
        
        // Wait for data
        int wait_count = 0;
        while (!dut->host_rd_valid && wait_count < 200) {
            tick();
            wait_count++;
            if (wait_count % 20 == 0) {
                std::cout << "DEBUG: Read in progress, state=" << (int)dut->debug_state
                          << ", RD_VALID=" << (int)dut->host_rd_valid
                          << ", count=" << wait_count << std::endl;
            }
        }
        
        if (!dut->host_rd_valid) {
            std::cout << "✗ READ TIMEOUT: No data received" << std::endl;
            return 0xFFFF;
        }
        
        uint16_t data = dut->host_data_out;
        tick(); // Clear valid

        std::cout << "READ: addr=0x" << std::hex << addr
              << ", data=0x" << data << std::endl;        
       
        std::cout << "✓ Read completed in " << wait_count << " cycles" << std::endl;
        return data;
    }
    
    void run_comprehensive_test() {
        std::cout << "\n=== Comprehensive SDRAM Test ===" << std::endl;
        
        rst();
        
        // Wait for initialization completion
        int timeout = 500;
        while (dut->host_busy && timeout > 0) {
            tick();
            timeout--;
        }
        
        if (dut->host_busy) {
            std::cout << "✗ Controller never became ready after rst" << std::endl;
            return;
        }
        
        std::cout << "✓ Controller ready for commands" << std::endl;
        
        // Test 1: Basic write/read
        std::cout << "\nTest 1: Basic write/read operations" << std::endl;
        uint32_t test_addr = 0x1000;
        uint16_t test_data = 0x55AA;
        
        if (write(test_addr, test_data)) {
            uint16_t read_data = read(test_addr);
            std::cout << "Read data: 0x" << std::hex << read_data << std::endl;

            if (read_data == test_data) {
                std::cout << "✓ Basic test PASSED: Data matches" << std::endl;
            } else {
                std::cout << "✗ Basic test FAILED: Expected 0x" << std::hex << test_data 
                        << ", got 0x" << read_data << std::endl;
            }
            if (read_data == test_data) {
                std::cout << "✓ Basic test PASSED: Data matches" << std::endl;
            } else {
                std::cout << "✗ Basic test FAILED: Expected 0x" << std::hex << test_data 
                          << ", got 0x" << read_data << std::endl;
            }
        }
        
        // Test 2: Multiple addresses
        std::cout << "\nTest 2: Multiple address pattern" << std::endl;
        for (int i = 0; i < 4; i++) {
            uint32_t addr = 0x2000 + i * 0x100;
            uint16_t data = 0x1000 + i;
            
            if (write(addr, data)) {
                uint16_t result = read(addr);
                if (result == data) {
                    std::cout << "✓ Address 0x" << std::hex << addr << " OK" << std::endl;
                }
            }
        }
        
        // Test 3: Verify final state
        std::cout << "\nTest 3: Final state verification" << std::endl;
        std::cout << "Final SDRAM state: "
                  << "CKE=" << (int)dut->sdram_cke
                  << ", CS_N=" << (int)dut->sdram_cs_n
                  << ", RAS_N=" << (int)dut->sdram_ras_n
                  << ", CAS_N=" << (int)dut->sdram_cas_n
                  << ", WE_N=" << (int)dut->sdram_we_n
                  << std::endl;
        
        std::cout << "Final controller state: "
                  << "BUSY=" << (int)dut->host_busy
                  << ", RD_VALID=" << (int)dut->host_rd_valid
                  << ", DEBUG_STATE=" << (int)dut->debug_state
                  << std::endl;
        
        std::cout << "\n✓ All tests completed!" << std::endl;
        std::cout << "Total simulation time: " << time << " units" << std::endl;
    }
};

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    
    SDRAMTest test;
    test.run_comprehensive_test();
    
    return 0;
}