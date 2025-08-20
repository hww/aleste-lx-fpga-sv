#include "Vsdram_controller.h"
#include <iostream>
#include <vector>
#include <random>
#include <verilated.h>

class SDRAMAdvancedTest {
private:
    Vsdram_controller* dut;
    vluint64_t time;
    
public:
    SDRAMAdvancedTest() : time(0) {
        dut = new Vsdram_controller;
        reset();
    }
    
    ~SDRAMAdvancedTest() {
        delete dut;
    }
    
    void reset() {
        dut->rst = 1;
        dut->locked = 0;
        tick(10);
        dut->rst = 0;
        dut->locked = 1;
        tick(5);
        std::cout << "DUT reset complete" << std::endl;
    }
    
    void tick(int cycles = 1) {
        for (int i = 0; i < cycles; i++) {
            dut->clk_sys = 0;
            dut->eval();
            time += 5;
            
            dut->clk_sys = 1;
            dut->eval();
            time += 5;
        }
    }
    
    bool write(uint32_t addr, uint16_t data) {
        if (dut->host_busy) {
            std::cout << "Controller busy, waiting..." << std::endl;
            while (dut->host_busy) tick();
        }
        
        dut->host_wr_req = 1;
        dut->host_addr = addr;
        dut->host_data_in = data;
        tick();
        dut->host_wr_req = 0;
        
        // Wait for completion
        while (dut->host_busy) tick();
        
        return true;
    }
    
    uint16_t read(uint32_t addr) {
        if (dut->host_busy) {
            std::cout << "Controller busy, waiting..." << std::endl;
            while (dut->host_busy) tick();
        }
        
        dut->host_rd_req = 1;
        dut->host_addr = addr;
        tick();
        dut->host_rd_req = 0;
        
        // Wait for data
        while (!dut->host_rd_valid) tick();
        
        uint16_t data = dut->host_data_out;
        tick(); // Clear valid
        
        return data;
    }
    
    void run_comprehensive_test() {
        std::cout << "\n=== Comprehensive SDRAM Test ===" << std::endl;
        
        // Test 1: Basic write/read
        std::cout << "Test 1: Basic operations" << std::endl;
        uint32_t addr = 0x1000;
        uint16_t test_data = 0x55AA;
        
        std::cout << "Writing: 0x" << std::hex << test_data 
                  << " to 0x" << addr << std::endl;
        write(addr, test_data);
        
        std::cout << "Reading from 0x" << std::hex << addr << std::endl;
        uint16_t read_data = read(addr);
        
        if (read_data == test_data) {
            std::cout << "✓ PASS: Data match" << std::endl;
        } else {
            std::cout << "✗ FAIL: Expected 0x" << std::hex << test_data 
                      << ", got 0x" << read_data << std::endl;
        }
        
        // Test 2: Multiple addresses
        std::cout << "\nTest 2: Multiple addresses" << std::endl;
        for (int i = 0; i < 5; i++) {
            uint32_t test_addr = 0x2000 + i * 4;
            uint16_t test_val = 0x1000 + i;
            
            write(test_addr, test_val);
            uint16_t result = read(test_addr);
            
            if (result == test_val) {
                std::cout << "✓ Address 0x" << std::hex << test_addr 
                          << ": OK" << std::endl;
            }
        }
        
        // Test 3: Random access
        std::cout << "\nTest 3: Random access pattern" << std::endl;
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<uint16_t> dist(0, 0xFFFF);
        
        int errors = 0;
        for (int i = 0; i < 20; i++) {
            uint32_t rand_addr = 0x3000 + i;
            uint16_t rand_data = dist(gen);
            
            write(rand_addr, rand_data);
            uint16_t verify = read(rand_addr);
            
            if (verify != rand_data) {
                errors++;
                std::cout << "✗ Error at 0x" << std::hex << rand_addr 
                          << ": wrote 0x" << rand_data 
                          << ", read 0x" << verify << std::endl;
            }
        }
        
        std::cout << "Random test: " << (20 - errors) << "/20 correct" << std::endl;
        
        // Test 4: Performance check
        std::cout << "\nTest 4: Performance metrics" << std::endl;
        std::cout << "Total simulation time: " << time << " units" << std::endl;
        std::cout << "Final SDRAM state: "
                  << "CKE=" << (int)dut->sdram_cke
                  << ", CS_N=" << (int)dut->sdram_cs_n
                  << std::endl;
    }
};

int main() {
    SDRAMAdvancedTest test;
    test.run_comprehensive_test();
    std::cout << "\n=== All tests completed ===" << std::endl;
    return 0;
}