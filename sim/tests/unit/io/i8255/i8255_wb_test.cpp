#include "Vtb_i8255_wb.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <cstdio>
#include <cassert>

VerilatedVcdC* tfp = nullptr;
vluint64_t sim_time = 0;

void tick(Vtb_i8255_wb* top) {
    top->clk_i = 1;
    top->eval();
    if (tfp) tfp->dump(sim_time);
    sim_time += 5;
    
    top->clk_i = 0;
    top->eval();
    if (tfp) tfp->dump(sim_time);
    sim_time += 5;
}

uint8_t read_register(Vtb_i8255_wb* top, int addr, const char* reg_name) {
    // Setup read transaction
    top->adr_i = addr;
    top->dat_i = 0x00;  // Don't care for read
    top->we_i = 0;      // Read operation
    top->stb_i = 1;     // Strobe active
    
    tick(top);
    
    // Wait for acknowledge
    while (!top->ack_o) {
        tick(top);
    }
    
    uint8_t value = top->dat_o;
    printf("[CPP] READ  %s (addr %d): 0x%02X\n", reg_name, addr, value);
    
    // End transaction
    top->stb_i = 0;
    top->we_i = 1;
    tick(top);
    
    return value;
}

void write_register(Vtb_i8255_wb* top, int addr, uint8_t value, const char* reg_name) {
    // Setup write transaction
    top->adr_i = addr;
    top->dat_i = value;
    top->we_i = 1;      // Write operation
    top->stb_i = 1;     // Strobe active
    
    tick(top);
    
    // Wait for acknowledge
    while (!top->ack_o) {
        tick(top);
    }
    
    printf("[CPP] WRITE %s (addr %d): 0x%02X\n", reg_name, addr, value);
    
    // End transaction
    top->stb_i = 0;
    top->we_i = 0;
    tick(top);
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    
    Vtb_i8255_wb* top = new Vtb_i8255_wb;
    
    tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("tb_i8255_wb.vcd");
    
    printf("[CPP] Starting i8255 Wishbone test...\n");
    
    // Initialize
    top->rst_i = 1;
    top->clk_i = 0;
    top->adr_i = 0;
    top->dat_i = 0x00;
    top->we_i = 0;
    top->stb_i = 0;
    top->ipa_i = 0xFF;
    top->ipb_i = 0xFF;
    top->ipc_i = 0xFF;
    
    // Reset
    printf("[CPP] Applying reset...\n");
    for (int i = 0; i < 10; i++) tick(top);
    top->rst_i = 0;
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
           top->opa_o, top->opb_o, top->opc_o);
    
    // Test 4: Try to read output registers
    printf("\n[CPP] === Test 4: Try to read output registers ===\n");
    
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
    
    // Configure all ports as input
    write_register(top, 3, 0x9B, "MODE_REG"); // 10011011 - все порты input
    
    // Set input values
    int a = 0x12; int b = 0x34; int c = 0x56; 
    top->ipa_i = a;
    top->ipb_i = b; 
    top->ipc_i = c;
    
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

    // Test 6: Test individual port C bit control
    printf("\n[CPP] === Test 6: Individual port C bit control ===\n");
    
    // Set port C bit 3 to 1
    write_register(top, 3, 0x07, "PORT_C_BIT"); // 00000111 - set bit 3
    
    // Set port C bit 0 to 0  
    write_register(top, 3, 0x0E, "PORT_C_BIT"); // 00001110 - clear bit 0
    
    read_c = read_register(top, 2, "PORT_C_MODIFIED");
    printf("[CPP] Port C after bit manipulation: 0x%02X\n", read_c);
    
    // Cleanup
    if (tfp) {
        tfp->close();
        delete tfp;
    }
    delete top;
    
    printf("\n[CPP] Wishbone test completed.\n");
    return 0;
}