#include <iostream>
#include <iomanip>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vz80_system.h"

using namespace std;

class Z80DebugTest {
private:
    Vz80_system* dut;
    VerilatedVcdC* vcd;
    vluint64_t main_time;
    bool trace_enabled;
    
public:
    Z80DebugTest(bool enable_trace = true) : main_time(0), trace_enabled(enable_trace) {
        Verilated::traceEverOn(true);
        dut = new Vz80_system;
        
        if (trace_enabled) {
            vcd = new VerilatedVcdC;
            dut->trace(vcd, 99);
            vcd->open("tb_aleste_dbus.vcd");
        }
        
        // Initial reset
        dut->clk_i = 0;
        dut->res_i = 1;
        dut->res_short_i = 1;
        tick();
        tick();
        dut->res_short_i = 0;
        tick();
        tick();
        dut->clk_i = 0;
        tick();
        // Release reset
        dut->res_i = 0;
        for (int i = 0; i < 10; i++) tick();
    }
    
    ~Z80DebugTest() {
        if (trace_enabled) {
            vcd->close();
            delete vcd;
        }
        delete dut;
    }
    
    void eval() {
        dut->wbm_ack_i = dut->wbm_stb_o;
        dut->eval();
        if (trace_enabled && vcd) {
            vcd->dump(main_time);
        }
    }
    
    void tick() {
        dut->clk_i = 1;
        eval();
        main_time += 5;
        dut->clk_i = 0;
        eval();
        main_time += 5;
    }
    
    // Debug bus operations
    void dbus_write(uint8_t addr, uint8_t data) {
        dut->dbg_adr_i = addr;
        dut->dbg_dat_i = data;
        dut->dbg_we_i = 1;
        dut->dbg_cyc_i = 1;
        dut->dbg_stb_i = 1;
        dut->dbg_cs_i = 1;
        
        // Wait for ack
        int timeout = 100;
        while (!dut->dbg_ack_o && timeout-- > 0) {
            tick();
        }
        
        if (timeout <= 0) {
            cout << "ERROR: Timeout waiting for ack on write to 0x" 
                 << hex << (int)addr << endl;
        }
        
        // Clear signals
        dut->dbg_we_i = 0;
        dut->dbg_cyc_i = 0;
        dut->dbg_stb_i = 0;
        dut->dbg_cs_i = 0;
        
        tick(); // Extra tick
    }
    
    uint8_t dbus_read(uint8_t addr) {
        dut->dbg_adr_i = addr;
        dut->dbg_we_i = 0;
        dut->dbg_cyc_i = 1;
        dut->dbg_stb_i = 1;
        dut->dbg_cs_i = 1;
        
        // Wait for ack
        int timeout = 100;
        while (!dut->dbg_ack_o && timeout-- > 0) {
            tick();
        }
        
        if (timeout <= 0) {
            cout << "ERROR: Timeout waiting for ack on read from 0x" 
                 << hex << (int)addr << endl;
            return 0xFF;
        }
        
        uint8_t data = dut->dbg_dat_o;
        
        // Clear signals
        dut->dbg_cyc_i = 0;
        dut->dbg_stb_i = 0;
        dut->dbg_cs_i = 0;
        
        tick(); // Extra tick
        
        return data;
    }
    
    void run_z80_cycles(int cycles) {
        for (int i = 0; i < cycles; i++) {
            tick();
        }
    }
    
    void test_magic_register() {
        cout << "=== Test 1: Magic Register 0x01 ===" << endl;
        int errors = 0;
        
        for (int i = 0; i < 100; i++) {
            uint8_t val = dbus_read(0x01);
            if (val != 0xA5) {
                cout << "ERROR at iteration " << i 
                     << ": expected 0xA5, got 0x" << hex << (int)val << endl;
                errors++;
            }
            run_z80_cycles(rand() % 10 + 1);
        }
        
        if (errors == 0) {
            cout << "PASS: Register 0x01 always returns 0xA5" << endl;
        } else {
            cout << "FAIL: " << errors << " errors" << endl;
        }
    }
    
    void test_ctrl_action_register() {
        cout << "\n=== Test 2: CTRL_ACTION Register 0x00 ===" << endl;
        
        // Write 0xFF
        dbus_write(0x00, 0xFF);
        
        // dummy read the data will nore toggle yet
        uint8_t read_back = dbus_read(0x00);
          cout << "Wrote 0xFF to 0x00, read back 0x" << hex << (int)read_back << endl;
        if (read_back == 0xFF) {
            cout << "PASS: Bits set correctly" << endl;
        } else {
            cout << "FAIL: Expected 0xFF" << endl;
        }

        // Read back - импульсные биты должны сброситься
        read_back = dbus_read(0x00);
        cout << "Wrote 0xFF to 0x00, read back 0x" << hex << (int)read_back << endl;
        
        // Bit 0 (RESET) should remain 1, bits 1-3 (pulse) auto-clear
        if (read_back == 0xF1) {
            cout << "PASS: Pulse bits auto-cleared correctly" << endl;
        } else {
            cout << "FAIL: Expected 0xF1" << endl;
        }
    }
    

    void test_pc_registers() {
        cout << "\n=== Test 3: PC Registers 0x12-0x14 ===" << endl;
        // Makes the debugging on
        dbus_write(0x02, 0xFF);
        // Remove reset
        dbus_write(0x00, 0x00);

        int zero_reads = 0;

        for (int i=0;i<2;i++) {
            // Also read full PC
            uint8_t hi = dbus_read(0x12);
            uint8_t mid = dbus_read(0x13);
            uint8_t lo = dbus_read(0x14);

            uint32_t addr = (hi<<16) + (mid<<8) + lo;

            
            uint32_t expected = 0xC00000  + i;
            cout << "PC = 0x" << hex << addr << endl;      
            if (addr != expected) {
                cout << "PROBLEM DETECTED: Expected " << hex << expected << " found " <<  addr  << endl;
            } else {
                cout << "OK: Register 0x14 stable" << endl;
            }

            // step
            dbus_write(0x00, 0x08);
            tick();
            tick();
            tick();
            tick();
            tick();
            tick();
            tick();
            tick();
        }
    }
    
    void test_breakpoint() {
        cout << "\n=== Test 4: Breakpoint Registers ===" << endl;
        
        // Write breakpoint address
        dbus_write(0x03, 0x12); // High
        dbus_write(0x04, 0x34); // Middle
        dbus_write(0x05, 0x56); // Low
        
        // Read back
        uint8_t hi = dbus_read(0x03);
        uint8_t mid = dbus_read(0x04);
        uint8_t lo = dbus_read(0x05);
        
        cout << "Breakpoint address: 0x" << hex 
             << (int)hi << (int)mid << (int)lo << endl;
        
        if (hi == 0x12 && mid == 0x34 && lo == 0x56) {
            cout << "PASS: Breakpoint registers work correctly" << endl;
        } else {
            cout << "FAIL: Breakpoint registers corrupted" << endl;
        }
    }
    
    void run_all_tests() {
        cout << "=== Z80 Debug Interface Hardware Test ===" << endl;
        cout << "Testing actual HDL module: z80_system" << endl;
        
        test_magic_register();
        test_ctrl_action_register();
        test_pc_registers();
        test_breakpoint();
        
        cout << "\n=== Test Complete ===" << endl;
        cout << "VCD trace saved to: z80_system_trace.vcd" << endl;
        cout << "Open with: gtkwave z80_system_trace.vcd" << endl;
    }
};

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    
    bool enable_trace = true;
    for (int i = 1; i < argc; i++) {
        if (string(argv[i]) == "--no-trace") {
            enable_trace = false;
        }
    }
    
    Z80DebugTest test(enable_trace);
    test.run_all_tests();
    
    return 0;
}