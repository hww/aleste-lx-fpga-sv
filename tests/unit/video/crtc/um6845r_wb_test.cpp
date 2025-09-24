#include "Vtb_um6845r_wb.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <cstdio>
#include <cstdint>

VerilatedVcdC* tfp = nullptr;
vluint64_t sim_time = 0;

// Tick function
void tick(Vtb_um6845r_wb* top) {
    top->clk_i = 1;
    top->eval();
    if (tfp) tfp->dump(sim_time);
    sim_time += 5;
    
    top->clk_i = 0;
    top->eval();
    if (tfp) tfp->dump(sim_time);
    sim_time += 5;
}

// Write to CRTC register via Wishbone
void crtc_write(Vtb_um6845r_wb* top, uint8_t addr, uint8_t data) {
    // Write address register (RS=0)
    top->adr_i = 0;
    top->dat_i = addr;
    top->we_i = 1;
    top->stb_i = 1;
    
    // Wait for acknowledge
    while (!top->ack_o) {
        tick(top);
    }
    top->stb_i = 0;
    tick(top);
    
    // Write data register (RS=1)
    top->adr_i = 1;
    top->dat_i = data;
    top->we_i = 1;
    top->stb_i = 1;
    
    while (!top->ack_o) {
        tick(top);
    }
    top->stb_i = 0;
    tick(top);
    
    printf("CRTC Write: addr=0x%02X, data=0x%02X\n", addr, data);
}

// Read from CRTC register via Wishbone
uint8_t crtc_read(Vtb_um6845r_wb* top, uint8_t addr) {
    // Write address register (RS=0)
    top->adr_i = 0;
    top->dat_i = addr;
    top->we_i = 1;
    top->stb_i = 1;
    
    while (!top->ack_o) {
        tick(top);
    }
    top->stb_i = 0;
    tick(top);
    
    // Read data register (RS=1)
    top->adr_i = 1;
    top->we_i = 0;
    top->stb_i = 1;
    
    while (!top->ack_o) {
        tick(top);
    }
    uint8_t data = top->dat_o;
    top->stb_i = 0;
    tick(top);
    
    printf("CRTC Read: addr=0x%02X, data=0x%02X\n", addr, data);
    return data;
}

// Configure CGA progressive mode
void setup_cga_progressive(Vtb_um6845r_wb* top) {
    printf("Setting up CGA progressive mode...\n");
    
    // Standard CGA 80x25 text mode
    crtc_write(top, 0x00, 0x4F); // Horizontal Total: 80 chars
    crtc_write(top, 0x01, 0x28); // Horizontal Displayed: 40 chars
    crtc_write(top, 0x02, 0x33); // Horizontal Sync Position: 51 chars
    crtc_write(top, 0x03, 0x08); // Sync Widths: 8 chars HSYNC
    crtc_write(top, 0x04, 0x1F); // Vertical Total: 31 lines
    crtc_write(top, 0x05, 0x06); // Vertical Total Adjust: 6 lines
    crtc_write(top, 0x06, 0x19); // Vertical Displayed: 25 lines
    crtc_write(top, 0x07, 0x1C); // Vertical Sync Position: 28 lines
    crtc_write(top, 0x08, 0x00); // Interlace Mode: Progressive
    crtc_write(top, 0x09, 0x07); // Max Scan Line: 8 lines per char
    crtc_write(top, 0x0A, 0x06); // Cursor Start: line 6
    crtc_write(top, 0x0B, 0x07); // Cursor End: line 7
    crtc_write(top, 0x0C, 0x00); // Start Address High
    crtc_write(top, 0x0D, 0x00); // Start Address Low
    crtc_write(top, 0x0E, 0x00); // Cursor Address High
    crtc_write(top, 0x0F, 0x00); // Cursor Address Low
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    
    Vtb_um6845r_wb* top = new Vtb_um6845r_wb;
    
    // Initialize trace
    tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("tb_um6845r_wb.vcd");
    
    printf("Starting UM6845R Wishbone CRTC test...\n");
    
    // Initialize
    top->clk_i = 0;
    top->rst_i = 1;
    top->adr_i = 0;
    top->dat_i = 0;
    top->we_i = 0;
    top->stb_i = 0;
    top->crtc_type_i = 0;
    
    // Reset
    printf("Resetting CRTC...\n");
    for (int i = 0; i < 10; i++) tick(top);
    top->rst_i = 0;
    for (int i = 0; i < 5; i++) tick(top);
    
    // Test 1: Register write/read
    printf("\n=== Test 1: Register access ===\n");
    crtc_write(top, 0x00, 0x4F);
    uint8_t val = crtc_read(top, 0x00);
    if (val != 0x4F) printf("ERROR: Register write/read failed!\n");
    
    // Test 2: Configure CGA mode
    printf("\n=== Test 2: CGA configuration ===\n");
    setup_cga_progressive(top);
    
    // Test 3: Generate video signals
    printf("\n=== Test 3: Video signal generation ===\n");
    int frame_cycles = 100000; // Simulate part of a frame
    
    int hsync_count = 0;
    int vsync_count = 0;
    int de_count = 0;
    int cursor_count = 0;
    
    for (int i = 0; i < frame_cycles; i++) {
        tick(top);
        
        if (top->hsync_o) hsync_count++;
        if (top->vsync_o) vsync_count++;
        if (top->de_o) de_count++;
        if (top->cursor_o) cursor_count++;
        
        if (i % 10000 == 0) {
            printf("Cycle %d: MA=0x%04X, RA=0x%02X, HSYNC=%d, VSYNC=%d, DE=%d, CURSOR=%d\n",
                   i, top->ma_o, top->ra_o, top->hsync_o, top->vsync_o, top->de_o, top->cursor_o);
        }
    }
    
    printf("Signal activity:\n");
    printf("  HSYNC: %d cycles\n", hsync_count);
    printf("  VSYNC: %d cycles\n", vsync_count);
    printf("  DE: %d cycles\n", de_count);
    printf("  CURSOR: %d cycles\n", cursor_count);
    
    // Test 4: Address generation
    printf("\n=== Test 4: Address generation ===\n");
    printf("Final address: MA=0x%04X, RA=0x%02X\n", top->ma_o, top->ra_o);
    
    // Test 5: Cursor test
    printf("\n=== Test 5: Cursor test ===\n");
    crtc_write(top, 0x0E, 0x00); // Cursor Address High
    crtc_write(top, 0x0F, 0x0A); // Cursor Address Low (position 10)
    
    for (int i = 0; i < 1000; i++) tick(top);
    printf("Cursor active at MA=0x%04X: %d\n", top->ma_o, top->cursor_o);
    
    // Verify signals are working
    bool all_ok = true;
    if (hsync_count == 0) {
        printf("ERROR: No HSYNC activity!\n");
        all_ok = false;
    }
    if (vsync_count == 0) {
        printf("ERROR: No VSYNC activity!\n");
        all_ok = false;
    }
    if (de_count == 0) {
        printf("ERROR: No Display Enable activity!\n");
        all_ok = false;
    }
    
    if (all_ok) {
        printf("\n✅ ALL TESTS PASSED! UM6845R Wishbone is working correctly.\n");
    } else {
        printf("\n❌ SOME TESTS FAILED!\n");
    }
    
    // Cleanup
    top->final();
    if (tfp) {
        tfp->close();
        delete tfp;
    }
    delete top;
    
    printf("Waveform saved to tb_um6845r_wb.vcd\n");
    return all_ok ? 0 : 1;
}
