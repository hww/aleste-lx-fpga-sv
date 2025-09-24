#include "Vtb_i8255.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <cstdio>
#include <cassert>

VerilatedVcdC* tfp = nullptr;
vluint64_t sim_time = 0;

void tick(Vtb_i8255* top) {
    top->clk = 1;
    top->eval();
    if (tfp) tfp->dump(sim_time);
    sim_time += 5;
    
    top->clk = 0;
    top->eval();
    if (tfp) tfp->dump(sim_time);
    sim_time += 5;
}

uint8_t read_register(Vtb_i8255* top, int addr, const char* reg_name) {
    // Важно: установить данные в Z-состояние перед чтением
    top->idata = 0xFF;
    
    top->addr = addr;
    top->cs = 0;    // Active low
    top->oe = 0;    // Active low  
    top->we = 1;    // Write disabled
    
    tick(top);
    
    top->cs = 1;
    top->oe = 1;
    tick(top);

    uint8_t value = top->odata;
    printf("[CPP] READ  %s (addr %d): 0x%02X\n", reg_name, addr, value);
    

    return value;
}

void write_register(Vtb_i8255* top, int addr, uint8_t value, const char* reg_name) {
    top->addr = addr;
    top->idata = value;
    top->cs = 0;    // Active low
    top->we = 0;    // Active low
    top->oe = 1;    // Read disabled
    
    tick(top);
    
    printf("[CPP] WRITE %s (addr %d): 0x%02X\n", reg_name, addr, value);
    
    top->cs = 1;
    top->we = 1;
    tick(top);
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    
    Vtb_i8255* top = new Vtb_i8255;
    
    tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("tb_i8255.vcd");
    
    printf("[CPP] Starting i8255 test...\n");
    
    // Initialize
    top->reset = 1;
    top->clk = 0;
    top->addr = 0;
    top->idata = 0xFF;  // High impedance
    top->cs = 1;
    top->we = 1;
    top->oe = 1;
    top->ipa = 0xFF;
    top->ipb = 0xFF;
    top->ipc = 0xFF;
    
    // Reset
    printf("[CPP] Applying reset...\n");
    for (int i = 0; i < 10; i++) tick(top);
    top->reset = 0;
    printf("[CPP] Reset released\n");
    for (int i = 0; i < 5; i++) tick(top);
    
    // Test 1: Check initial mode register
    printf("\n[CPP] === Test 1: Initial state ===\n");
    uint8_t mode_reg = read_register(top, 3, "MODE_REG");
    printf("[CPP] Initial mode register: 0x%02X\n", mode_reg);
    
    // Test 2: Configure all ports as OUTPUT
    uint8_t mode_reg_exp = 0x80;
    printf("\n[CPP] === Test 2: Configure ports as OUTPUT ===\n");
    write_register(top, 3, mode_reg_exp, "MODE_REG"); // 10000000 - все порты output
    
    // Verify configuration
    mode_reg = read_register(top, 3, "MODE_REG");
    printf("[CPP] Configured mode register: 0x%02X\n", mode_reg);

    if (mode_reg != mode_reg_exp)
        printf("[CPP] [RESULT] FAILED Configured mode register expected 0x%02X got 0x%02X\n", mode_reg_exp, mode_reg);

    // Test 3: Write values to ports
    printf("\n[CPP] === Test 3: Write to ports ===\n");
    write_register(top, 0, 0x55, "PORT_A");
    write_register(top, 1, 0xAA, "PORT_B"); 
    write_register(top, 2, 0x33, "PORT_C");
    
    printf("[CPP] Port outputs - A: 0x%02X, B: 0x%02X, C: 0x%02X\n", 
           top->opa, top->opb, top->opc);
    
    // Test 4: Try to read output registers (может не работать для выходных портов)
    printf("\n[CPP] === Test 4: Try to read output registers ===\n");
    printf("[CPP] NOTE: Reading output registers may not work in some i8255 implementations\n");
    
    uint8_t read_a = read_register(top, 0, "PORT_A");
    uint8_t read_b = read_register(top, 1, "PORT_B");
    uint8_t read_c = read_register(top, 2, "PORT_C");

    printf("[CPP] Read values - A: 0x%02X, B: 0x%02X, C: 0x%02X\n", read_a, read_b, read_c);

    if (read_a != 0x55)
        printf("[CPP] [RESULT] FAILED Configured A register expected 0x%02X got 0x%02X\n", 0x55, read_a);
    if (read_b != 0xAA)
        printf("[CPP] [RESULT] FAILED Configured B register expected 0x%02X got 0x%02X\n", 0xAA, read_b);
    if (read_c != 0x33)
        printf("[CPP] [RESULT] FAILED Configured C register expected 0x%02X got 0x%02X\n", 0x33, read_c);

    // Test 5: Test input ports
    printf("\n[CPP] === Test 5: Test input ports ===\n");
    
    // Configure port A as input to test reading
    write_register(top, 3, 0x9B, "MODE_REG"); // 10010000 - Port A input, others output
    
    // Set input values

    int a = 0x12; int b =  0x34; int c = 0x56; 
    top->ipa = a;
    top->ipb = b; 
    top->ipc = c;
    
    for (int i = 0; i < 3; i++) tick(top); // Let inputs stabilize
    
    read_a = read_register(top, 0, "PORT_A_IN");
    read_b = read_register(top, 1, "PORT_B_IN");
    read_c = read_register(top, 2, "PORT_C_IN");
    printf("[CPP] Read values - A: 0x%02X, B: 0x%02X, C: 0x%02X\n", read_a, read_b, read_c);

    if (read_a != a)
        printf("[CPP] [RESULT] FAILED Configured A register expected 0x%02X got 0x%02X\n", a, read_a);
    if (read_b != b)
        printf("[CPP] [RESULT] FAILED Configured B register expected 0x%02X got 0x%02X\n", b, read_b);
    if (read_c != c)
        printf("[CPP] [RESULT] FAILED Configured C register expected 0x%02X got 0x%02X\n", c, read_c);

    
    // Cleanup
    if (tfp) {
        tfp->close();
        delete tfp;
    }
    delete top;
    
    printf("\n[CPP] Test completed.\n");
    return 0;
}