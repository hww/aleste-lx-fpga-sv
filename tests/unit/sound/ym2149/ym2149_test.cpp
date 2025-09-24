#include "Vtb_ym2149.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <cstdio>
#include <cstdint>

VerilatedVcdC* tfp = nullptr;
vluint64_t sim_time = 0;

// Tick function
void tick(Vtb_ym2149* top) {
    static int ce_counter = 0;
    
    top->CLK = 0;
    top->CE = (ce_counter == 0); // Активировать CE каждый 4-ый такт
    top->eval();
    if (tfp) tfp->dump(sim_time);
    sim_time += 5;
    
    top->CLK = 1;
    top->CE = (ce_counter == 0);
    top->eval();
    if (tfp) tfp->dump(sim_time);
    sim_time += 5;
    
    ce_counter = (ce_counter + 1) % 4; // Делитель частоты 1/4
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
    
    // Write data
    top->BDIR = 1;
    top->BC = 0;
    top->DI = data;
    tick(top);
    
    // Finish write
    top->BDIR = 0;
    top->BC = 0;
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
    top->BDIR = 0;
    top->BC = 1;
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
    
    printf("Channel %d: freq=%d, volume=%d\n", channel, frequency, volume);
    
    // Set frequency (12-bit)
    ym_write(top, fine_reg, frequency & 0xFF);
    ym_write(top, coarse_reg, (frequency >> 8) & 0x0F);
    
    // Set volume
    ym_write(top, volume_reg, volume & 0x0F);
}
bool detect_signals(Vtb_ym2149* top)
{
    uint8_t a_prev = top->CHANNEL_A;
    uint8_t b_prev = top->CHANNEL_B;
    uint8_t c_prev = top->CHANNEL_C;
    int acnt = 0, bcnt = 0, ccnt = 0;
    int cycles = 1000000; // 1 миллион тактов = 1ms при 1GHz
    
    printf("Monitoring signal changes for %d cycles (~1ms)...\n", cycles);
    
    for (int i = 0; i < cycles; i++) {
        tick(top);
        
        if (a_prev != top->CHANNEL_A) { 
            acnt++; 
            a_prev = top->CHANNEL_A; 
        } 
        if (b_prev != top->CHANNEL_B) { 
            bcnt++; 
            b_prev = top->CHANNEL_B; 
        } 
        if (c_prev != top->CHANNEL_C) { 
            ccnt++; 
            c_prev = top->CHANNEL_C; 
        } 
    } 
    
    printf("Signal changes detected in 1ms:\n");
    printf("  Channel A (440Hz): %d changes\n", acnt);
    printf("  Channel B (880Hz): %d changes\n", bcnt);
    printf("  Channel C (1320Hz): %d changes\n", ccnt);
    
    // Для 440Hz ожидаем ~0.44 изменения за 1ms
    // Для 880Hz ожидаем ~0.88 изменений за 1ms  
    // Для 1320Hz ожидаем ~1.32 изменения за 1ms
    
    bool all_ok = true;
    if (acnt < 1) {
        printf("  ❌ ERROR: Channel A has insufficient activity (expected ~0.44)\n");
        all_ok = false;
    }
    if (bcnt < 1) {
        printf("  ❌ ERROR: Channel B has insufficient activity (expected ~0.88)\n");
        all_ok = false;
    }
    if (ccnt < 1) {
        printf("  ❌ ERROR: Channel C has insufficient activity (expected ~1.32)\n");
        all_ok = false;
    }
    
    if (all_ok) {
        printf("  ✅ All channels have proper signal activity\n");
    }
    
    return all_ok;
}
int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    
    Vtb_ym2149* top = new Vtb_ym2149;
    int errors = 0;
    // Initialize trace
    tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("tb_ym2149.vcd");
    
    printf("Starting YM2149 comprehensive test...\n");
    
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
    
    // Reset
    printf("Resetting YM2149...\n");
    for (int i = 0; i < 20; i++) tick(top);
    top->RESET = 0;
    for (int i = 0; i < 10; i++) tick(top);
    
    // Test 1: Register write/read
    printf("\n=== Test 1: Register access ===\n");
    ym_write(top, 0x07, 0x38);
    ym_write(top, 0x08, 0x0F);
    
    uint8_t val = ym_read(top, 0x07);
    if (val != 0x38) {errors++; printf("❌ERROR: Register 7 write/read failed! Expected 0x38, got 0x%02X\n", val); }
    
    val = ym_read(top, 0x08);
    if (val != 0x0F) {errors++;printf("❌ERROR: Register 8 write/read failed! Expected 0x0F, got 0x%02X\n", val); }
    
    // Test 2: Tone generation
    printf("\n=== Test 2: Tone generation ===\n");
    ym_write(top, 0x07, 0x38); // disable noice enable tone
    test_tone(top, 0, 440, 15);
    test_tone(top, 1, 880, 15);
    test_tone(top, 2, 1320, 15);
    
    // Let tones play and check outputs are not zero
    if (!detect_signals(top))
        errors++;
    
    // Test 3: Noise generation
    printf("\n=== Test 3: Noise generation ===\n");
    ym_write(top, 0x06, 0x1F);  // Noise frequency
    ym_write(top, 0x07, 0x07);  // Enable noise on all channels
    // Let tones play and check outputs are not zero
    if (!detect_signals(top))
        errors++;
        
    // Test 5: Mixed mode (tone + noise)
    printf("\n=== Test 5: Mixed mode ===\n");
    ym_write(top, 0x07, 0x00);  // Tone on A, noise on B and C
    ym_write(top, 0x06, 0x08);  // Noise frequency
    if (!detect_signals(top))
        errors++;

    // Test 4: I/O ports
    printf("\n=== Test 4: ports inputs ===\n");
    ym_write(top, 0x07, 0x3F);  // Set port directions to input

    top->IOA_in = 0x55;
    top->IOB_in = 0xAA;
    tick(top);
    int pa = ym_read(top, 0x0E);
    int pb = ym_read(top, 0x0F);

    if (pa != 0x55) { errors++;printf("❌ ERROR: Port A output wrong! Expected 0x55, got 0x%02X\n", pa); };
    if (pb != 0xAA) { errors++;printf("❌ ERROR: Port A output wrong! Expected 0xAA, got 0x%02X\n", pb); };

    printf("\n=== Test 4: ports outputs ===\n");
    ym_write(top, 0x07, 0xC0);  // Set port directions to output
    ym_write(top, 0x0E, 0x55);  // Write to port A
    ym_write(top, 0x0F, 0xAA);  // Write to port B
    if (top->IOA_out  != 0x55) { errors++; printf("❌ERROR: Port A output wrong! Expected 0x55, got 0x%02X\n", top->IOA_out );};
    if (top->IOB_out  != 0xAA) { errors++; printf("❌ERROR: Port A output wrong! Expected 0xAA, got 0x%02X\n", top->IOB_out );};
    printf("\n===============================\n");
    if (errors == 0) {
        printf("✅ ALL TESTS PASSED! YM2149 is working correctly.\n");
    } else {
        printf("❌ %d TESTS FAILED! Check above for errors.\n", errors);
    }
    
    // Cleanup
    top->final();
    if (tfp) {
        tfp->close();
        delete tfp;
    }
    delete top;
    
    printf("Waveform saved to tb_ym2149.vcd\n");
    return (errors == 0) ? 0 : 1;
}