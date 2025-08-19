#include "Vtb_ym2149.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <cstdio>
#include <cstdint>

VerilatedVcdC* tfp = nullptr;
vluint64_t sim_time = 0;

// Tick function
void tick(Vtb_ym2149* top) {
    top->CLK = 0;
    top->eval();
    if (tfp) tfp->dump(sim_time);
    sim_time += 5;
    
    top->CLK = 1;
    top->eval();
    if (tfp) tfp->dump(sim_time);
    sim_time += 5;
}

// Write to YM2149 register
void ym_write(Vtb_ym2149* top, uint8_t addr, uint8_t data) {
    // Set address
    top->BDIR = 1;
    top->BC = 1;
    top->DI = addr;
    tick(top);
    
    // Latch address
    top->BDIR = 0;
    top->BC = 0;
    tick(top);
    tick(top);
    
    // Write data
    top->BDIR = 1;
    top->BC = 1;
    top->DI = data;
    tick(top);
    
    // Finish write
    top->BDIR = 0;
    top->BC = 0;
    tick(top);
    tick(top);
    
    printf("YM2149 Write: addr=0x%02X, data=0x%02X\n", addr, data);
}

// Read from YM2149 register
uint8_t ym_read(Vtb_ym2149* top, uint8_t addr) {
    // Set address
    top->BDIR = 1;
    top->BC = 1;
    top->DI = addr;
    tick(top);
    
    // Latch address
    top->BDIR = 0;
    top->BC = 0;
    tick(top);
    tick(top);
    
    // Read data
    top->BDIR = 1;
    top->BC = 0;
    tick(top);
    tick(top);
    
    uint8_t data = top->DO;
    
    // Finish read
    top->BDIR = 0;
    top->BC = 0;
    tick(top);
    
    printf("YM2149 Read: addr=0x%02X, data=0x%02X\n", addr, data);
    return data;
}

// Simple test tone generator
void test_tone(Vtb_ym2149* top, uint8_t channel, uint16_t frequency, uint8_t volume) {
    uint8_t fine_reg = 0x00 + channel * 2;
    uint8_t coarse_reg = 0x01 + channel * 2;
    uint8_t volume_reg = 0x08 + channel;
    
    // Set frequency (12-bit)
    ym_write(top, fine_reg, frequency & 0xFF);
    ym_write(top, coarse_reg, (frequency >> 8) & 0x0F);
    
    // Set volume
    ym_write(top, volume_reg, volume & 0x0F);
    
    printf("Channel %d: freq=%d, volume=%d\n", channel, frequency, volume);
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    
    Vtb_ym2149* top = new Vtb_ym2149;
    
    // Initialize trace
    tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("tb_ym2149.vcd");
    
    printf("Starting YM2149 test...\n");
    
    // Initialize
    top->RESET = 1;
    top->CLK = 0;
    top->CE = 1;
    top->BDIR = 0;
    top->BC = 0;
    top->DI = 0;
    top->SEL = 0;
    top->MODE = 0;
    top->IOA_in = 0xFF;
    top->IOB_in = 0xFF;
    
    // Reset sequence
    printf("Resetting YM2149...\n");
    for (int i = 0; i < 10; i++) tick(top);
    top->RESET = 0;
    for (int i = 0; i < 5; i++) tick(top);
    
    // Test 1: Basic register write/read
    printf("\n=== Test 1: Register access ===\n");
    ym_write(top, 0x07, 0x38); // Enable tone for channels A, B, C
    ym_write(top, 0x08, 0x0F); // Max volume on channel A
    
    // Test 2: Generate tones
    printf("\n=== Test 2: Tone generation ===\n");
    test_tone(top, 0, 440, 15);  // Channel A: 440Hz, max volume
    test_tone(top, 1, 880, 10);  // Channel B: 880Hz, volume 10
    test_tone(top, 2, 1320, 8);  // Channel C: 1320Hz, volume 8
    
    // Let it play for a while
    printf("\n=== Test 3: Playing tones ===\n");
    for (int i = 0; i < 1000; i++) {
        tick(top);
        if (i % 100 == 0) {
            printf("Time: %luns, Outputs: A=0x%02X, B=0x%02X, C=0x%02X\n",
                   sim_time, top->CHANNEL_A, top->CHANNEL_B, top->CHANNEL_C);
        }
    }
    
    // Test 4: I/O ports
    printf("\n=== Test 4: I/O ports ===\n");
    ym_write(top, 0x07, 0x3F); // Set port directions
    ym_write(top, 0x0E, 0x55); // Write to port A
    
    top->IOA_in = 0xAA;
    top->IOB_in = 0xBB;
    tick(top);
    tick(top);
    
    printf("Port A out: 0x%02X, Port B out: 0x%02X\n", top->IOA_out, top->IOB_out);
    
    // Cleanup
    top->final();
    if (tfp) {
        tfp->close();
        delete tfp;
    }
    delete top;
    
    printf("\nYM2149 test completed successfully!\n");
    printf("Waveform saved to tb_ym2149.vcd\n");
    
    return 0;
}