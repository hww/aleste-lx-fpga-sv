// i8251_test.cpp - Verilator test for i8251
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vtb_i8251.h"

vluint64_t main_time = 0;
const vluint64_t sim_time = 10000;

double sc_time_stamp() {
    return main_time;
}

void write_reg(Vtb_i8251* dut, bool is_control, uint8_t addr, uint8_t data) {
    dut->cs_n = 0;
    dut->c_d = is_control;
    dut->wr_n = 0;
    dut->addr = addr;
    dut->data_in = data;
    dut->eval();
    
    dut->clken = 1;
    dut->eval();
    main_time += 10;
    
    dut->wr_n = 1;
    dut->cs_n = 1;
    dut->eval();
    
    dut->clken = 0;
    dut->eval();
    main_time += 10;
}

uint8_t read_reg(Vtb_i8251* dut, bool is_control, uint8_t addr) {
    dut->cs_n = 0;
    dut->c_d = is_control;
    dut->rd_n = 0;
    dut->addr = addr;
    dut->eval();
    
    dut->clken = 1;
    dut->eval();
    main_time += 10;
    
    uint8_t data = dut->data_out;
    
    dut->rd_n = 1;
    dut->cs_n = 1;
    dut->eval();
    
    dut->clken = 0;
    dut->eval();
    main_time += 10;
    
    return data;
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    
    Vtb_i8251* dut = new Vtb_i8251;
    VerilatedVcdC* tfp = new VerilatedVcdC;
    
    dut->trace(tfp, 99);
    tfp->open("tb_i8251.vcd");
    
    // Initialize
    dut->clk = 0;
    dut->clken = 0;
    dut->reset_n = 0;
    dut->eval();
    
    // Release reset
    main_time += 100;
    dut->reset_n = 1;
    dut->eval();
    
    std::cout << "Starting i8251 test..." << std::endl;
    
    // Test 1: Register access
    std::cout << "Test 1: Register access" << std::endl;
    
    // Write mode register
    write_reg(dut, true, 0, 0x4E); // 8 bits, no parity, 1 stop bit
    std::cout << "Mode register written: 0x4E" << std::endl;
    
    // Write command register
    write_reg(dut, true, 0, 0x13); // TX and RX enable, reset errors
    std::cout << "Command register written: 0x13" << std::endl;
    
    // Read status register
    uint8_t status = read_reg(dut, true, 0);
    std::cout << "Status register: 0x" << std::hex << (int)status << std::endl;
    
    // Test 2: Loopback test
    std::cout << "Test 2: Loopback test" << std::endl;
    
    // Connect TX to RX
    dut->rx = dut->tx;
    
    // Send test data
    write_reg(dut, false, 0, 0x5A);
    std::cout << "Data written: 0x5A" << std::endl;
    
    // Wait for transmission
    for (int i = 0; i < 100; i++) {
        dut->clk = !dut->clk;
        dut->eval();
        tfp->dump(main_time);
        main_time += 5;
    }
    
    // Read received data
    uint8_t received = read_reg(dut, false, 0);
    std::cout << "Data received: 0x" << std::hex << (int)received << std::endl;
    
    if (received == 0x5A) {
        std::cout << "Loopback test PASSED" << std::endl;
    } else {
        std::cout << "Loopback test FAILED" << std::endl;
    }
    
    // Test 3: Multiple transmissions
    std::cout << "Test 3: Multiple transmissions" << std::endl;
    
    for (int i = 0; i < 5; i++) {
        uint8_t test_data = 0x10 + i;
        write_reg(dut, false, 0, test_data);
        
        // Wait
        for (int j = 0; j < 50; j++) {
            dut->clk = !dut->clk;
            dut->eval();
            tfp->dump(main_time);
            main_time += 5;
        }
        
        uint8_t recv_data = read_reg(dut, false, 0);
        std::cout << "Sent: 0x" << std::hex << (int)test_data 
                  << " Received: 0x" << (int)recv_data << std::endl;
    }
    
    tfp->close();
    delete dut;
    delete tfp;
    
    std::cout << "Test completed" << std::endl;
    return 0;
}