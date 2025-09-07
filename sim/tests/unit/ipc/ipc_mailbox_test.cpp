#include "Vipc_mailbox_tb.h"
#include "verilated.h"
#include <iostream>
#include <verilated_vcd_c.h>
#include "wb_ipc_utils.h"

class IPCMailboxTest {
private:
    VerilatedVcdC* tfp;
    Vipc_mailbox_tb* dut;
    WbIpcTestUtils* wb_utils;
    uint64_t main_time;

public:
    IPCMailboxTest() : main_time(0) {
        Verilated::traceEverOn(true);
        tfp = new VerilatedVcdC;
        dut = new Vipc_mailbox_tb;
        dut->trace(tfp, 99); // Trace 99 levels of hierarchy
        tfp->open("ipc_mailbox_tb.vcd");
        
        wb_utils = new WbIpcTestUtils(dut, main_time, tfp);
    }

    ~IPCMailboxTest() {
        tfp->close();
        delete wb_utils;
        delete dut;
        delete tfp;
    }

    void reset() {
        wb_utils->reset_pulse(2);
    }

    void run_test() {
        std::cout << "Starting IPC Mailbox test..." << std::endl;
        
        reset();
        
        // Test 1: Write to command register
        wb_utils->write_reg(0xFC0040, 0x02); // Write CMD = 2
        uint8_t cmd = wb_utils->read_reg(0xFC0040);
        std::cout << "CMD register: 0x" << std::hex << (int)cmd << std::endl;
        
        // Test 2: Write to data register
        wb_utils->write_reg(0xFC0041, 0x01); // Write DATA = 1 (channel 1)
        uint8_t data = wb_utils->read_reg(0xFC0041);
        std::cout << "DATA register: 0x" << std::hex << (int)data << std::endl;
        
        // Test 3: Trigger interrupt by writing to status
        wb_utils->write_reg(0xFC0042, 0x00); // Any write to STATUS
        std::cout << "IRQ signal: " << (dut->ipc_irq_o ? "HIGH" : "LOW") << std::endl;
        
        // Test 4: Read status (should be busy)
        uint8_t status = wb_utils->read_reg(0xFC0042);
        std::cout << "STATUS register: 0x" << std::hex << (int)status 
                  << " (BUSY=" << ((status & 1) ? "YES" : "NO") << ")" << std::endl;
        
        // Wait few cycles to see the interrupt
        wb_utils->wait_cycles(5);
        
        std::cout << "Test completed!" << std::endl;
    }
};

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::debug(0);

    IPCMailboxTest test;
    test.run_test();
    
    return 0;
}