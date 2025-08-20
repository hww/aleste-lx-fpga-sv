#include "Vtb_i8251.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <cstdio>
#include <cstdint>

VerilatedVcdC* tfp = nullptr;
vluint64_t sim_time = 0;

void tick(Vtb_i8251* top) {
    static int tx_clock_div = 0;
    static int rx_clock_div = 0;
    
    top->CLK = 0;
    top->eval();
    if (tfp) tfp->dump(sim_time);
    sim_time += 5;
    
    top->CLK = 1;
    top->eval();
    if (tfp) tfp->dump(sim_time);
    sim_time += 5;
    
    // Generate Tx clock (16x slower than main clock)
    tx_clock_div = (tx_clock_div + 1) % 16;
    top->TxC_n = (tx_clock_div < 8) ? 0 : 1;
    
    // Generate Rx clock (16x slower than main clock)
    rx_clock_div = (rx_clock_div + 1) % 16;
    top->RxC_n = (rx_clock_div < 8) ? 0 : 1;
}

void uart_write(Vtb_i8251* top, bool is_control, uint8_t data) {
    top->CS_n = 0;
    top->WR_n = 0;
    top->RD_n = 1;
    top->CD = is_control ? 1 : 0;
    top->D = data;
    
    tick(top);
    
    top->WR_n = 1;
    top->CS_n = 1;
    tick(top);
    
    printf("8251 Write: %s=0x%02X\n", is_control ? "CTRL" : "DATA", data);
}

uint8_t uart_read(Vtb_i8251* top, bool is_control) {
    top->CS_n = 0;
    top->RD_n = 0;
    top->WR_n = 1;
    top->CD = is_control ? 1 : 0;
    
    tick(top);
    
    uint8_t data = top->D;
    
    top->RD_n = 1;
    top->CS_n = 1;
    tick(top);
    
    printf("8251 Read: %s=0x%02X\n", is_control ? "CTRL" : "DATA", data);
    return data;
}

void uart_init(Vtb_i8251* top) {
    printf("Initializing 8251 UART...\n");
    
    // Reset sequence
    uart_write(top, true, 0x00); // dummy command for reset
    uart_write(top, true, 0x40); // internal reset
    uart_write(top, true, 0x40); // internal reset again
    
    // Mode word: 8N1, 16x baud rate divisor
    uart_write(top, true, 0x4E); // 01001110 = 8N1, 16x
    
    // Command word: Enable TX, RX, RTS, DTR
    uart_write(top, true, 0x37); // 00110111 = TXEN, RXEN, RTS, DTR
}

bool test_loopback(Vtb_i8251* top) {
    printf("\n=== Testing loopback transmission ===\n");
    
    // Simple test with one byte first
    uint8_t test_data = 0x55;
    int errors = 0;
    
    // Send data
    uart_write(top, false, test_data);
    printf("Sent: 0x%02X\n", test_data);
    
    // Wait for transmission to complete
    for (int i = 0; i < 200; i++) tick(top);
    
    // Check if data was transmitted
    printf("TxD line: ");
    for (int i = 0; i < 10; i++) {
        printf("%d", top->TxD);
        tick(top);
    }
    printf("\n");
    
    // For now, just check that something happened
    if (top->TxD == 1) {
        printf("TxD is still idle - transmission may not be working\n");
        errors++;
    } else {
        printf("TxD is active - transmission is occurring\n");
    }
    
    printf("Loopback test completed with %d errors\n", errors);
    return errors == 0;
}
int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    
    Vtb_i8251* top = new Vtb_i8251;
    
    tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("tb_i8251.vcd");
    
    printf("Starting i8251 UART test...\n");
    
    // Initialize - ALL SIGNALS TO IDLE STATE
    top->CLK = 0;
    top->RESET = 1;  // Start with reset active
    top->CS_n = 1;
    top->WR_n = 1;
    top->RD_n = 1;
    top->CD = 0;
    top->D = 0xFF;   // High impedance state
    top->RxD = 1;    // idle state
    top->TxC_n = 1;  // Clock idle
    top->RxC_n = 1;  // Clock idle
    top->DSR_n = 0;  // Data Set Ready active (low)
    top->CTS_n = 0;  // Clear To Send active (low)
    
    // Proper reset sequence
    printf("Resetting 8251...\n");
    for (int i = 0; i < 10; i++) tick(top);
    
    // Release reset
    top->RESET = 0;
    printf("Reset released\n");
    
    for (int i = 0; i < 10; i++) tick(top);
    
    // Test 1: Check if chip is alive
    printf("\n=== Test 1: Basic functionality ===\n");
    
    // Try to read status register immediately
    top->CS_n = 0;
    top->RD_n = 0;
    top->CD = 1;  // Read control/status
    tick(top);
    tick(top);
    
    uint8_t status = top->D;
    printf("Immediate status read: 0x%02X\n", status);
    printf("TxRDY: %d, RxRDY: %d, TxEMPTY: %d\n", 
           (status >> 0) & 1, (status >> 1) & 1, (status >> 2) & 1);
    
    top->CS_n = 1;
    top->RD_n = 1;
    tick(top);
    
    // Check actual output signals
    printf("Actual output signals:\n");
    printf("TxRDY pin: %d, RxRDY pin: %d, TxEMPTY pin: %d\n",
           top->TxRDY, top->RxRDY, top->TxEMPTY);
    printf("TxD pin: %d, DTR_n: %d, RTS_n: %d\n",
           top->TxD, top->DTR_n, top->RTS_n);
    
    // Test 2: Try simple initialization
    printf("\n=== Test 2: Simple initialization ===\n");
    
    // Send reset command
    top->CS_n = 0;
    top->WR_n = 0;
    top->CD = 1;  // Write control
    top->D = 0x40; // Internal reset
    tick(top);
    
    top->WR_n = 1;
    top->CS_n = 1;
    tick(top);
    
    // Wait a bit
    for (int i = 0; i < 20; i++) tick(top);
    
    // Read status again
    top->CS_n = 0;
    top->RD_n = 0;
    top->CD = 1;
    tick(top);
    tick(top);
    
    status = top->D;
    printf("Status after reset: 0x%02X\n", status);
    printf("TxRDY: %d, RxRDY: %d, TxEMPTY: %d\n", 
           (status >> 0) & 1, (status >> 1) & 1, (status >> 2) & 1);
    printf("TxRDY pin: %d\n", top->TxRDY);
    
    top->CS_n = 1;
    top->RD_n = 1;
    tick(top);
    
    // Test 3: Try to set mode
    printf("\n=== Test 3: Mode setting ===\n");
    
    top->CS_n = 0;
    top->WR_n = 0;
    top->CD = 1;
    top->D = 0x4E; // 8N1, 16x
    tick(top);
    
    top->WR_n = 1;
    top->CS_n = 1;
    tick(top);
    
    // Test 4: Check if we can get TxRDY
    printf("\n=== Test 4: Waiting for TxRDY ===\n");
    
    for (int i = 0; i < 100; i++) {
        tick(top);
        if (top->TxRDY) {
            printf("TxRDY became active at cycle %d!\n", i);
            break;
        }
        if (i == 99) printf("TxRDY never became active\n");
    }
    
    // Final status check
    printf("\n=== Final Status ===\n");
    printf("TxRDY pin: %d, RxRDY pin: %d, TxEMPTY pin: %d\n",
           top->TxRDY, top->RxRDY, top->TxEMPTY);
    printf("TxD pin: %d\n", top->TxD);
    
    // Cleanup
    top->final();
    if (tfp) {
        tfp->close();
        delete tfp;
    }
    delete top;
    
    printf("Waveform saved to tb_i8251.vcd\n");
    return 0;
}