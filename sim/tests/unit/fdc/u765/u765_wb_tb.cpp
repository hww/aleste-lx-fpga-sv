#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <iomanip>
#include "Vu765_wb_tb.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

static Vu765_wb_tb *tb;
static VerilatedVcdC *trace;
static int tickcount;

static unsigned char sdbuf[512];
static FILE *edsk;
static int reading;
static int read_ptr;

int verbosity = 2; // Increased verbosity for debugging

int img_read(int sd_rd) {
    if (!sd_rd) return 0;
    if (verbosity > 0)
        printf("[CPP] img_read: %02x lba: %d\n", sd_rd, tb->sd_lba);
    int lba = tb->sd_lba;
    fseek(edsk, lba << 9, SEEK_SET);
    fread(&sdbuf, 512, 1, edsk);
    reading = 1;
    read_ptr = 0;
    return 0;
}

void tick(int c) {
    static int sd_rd_prev = 0;
    
    tb->wb_clk_i = c;
    tb->eval();
    
    if (trace) {
        trace->dump(tickcount++);
    }

    if (c) {
        // Handle SD card reading
        if (reading) {
            tb->sd_ack = 1;
            tb->sd_buff_wr = 1;
            tb->sd_buff_dout = sdbuf[read_ptr];
            tb->sd_buff_addr = read_ptr;
            read_ptr++;
            if (read_ptr == 512) {
                reading = 0;
                if (verbosity > 0)
                    printf("[CPP] SD read completed\n");
            }
        } else {
            tb->sd_ack = 0;
            tb->sd_buff_wr = 0;
        }

        // Check for SD read requests
        if (sd_rd_prev != tb->sd_rd) {
            img_read(tb->sd_rd);
        }
        sd_rd_prev = tb->sd_rd;
    }
}

void wait(int t) {
    for (int i = 0; i < t; i++) {
        tick(1);
        tick(0);
    }
}

// Wishbone write function
void wb_write(int addr, int data) {
    tb->wb_adr_i = addr;
    tb->wb_dat_i = data;
    tb->wb_we_i = 1;
    tb->wb_cyc_i = 1;
    tb->wb_stb_i = 1;
    
    int timeout = 0;
    while (!tb->wb_ack_o && timeout < 50) {
        tick(1);
        tick(0);
        timeout++;
    }
    
    if (timeout >= 50 && verbosity > 0) {
        printf("[WB_WRITE] TIMEOUT writing to addr 0x%x, data 0x%02x\n", addr, data);
    }
    
    tb->wb_cyc_i = 0;
    tb->wb_stb_i = 0;
    tb->wb_we_i = 0;
    
    tick(1);
    tick(0);
}

// Wishbone read function
int wb_read(int addr) {
    tb->wb_adr_i = addr;
    tb->wb_we_i = 0;
    tb->wb_cyc_i = 1;
    tb->wb_stb_i = 1;
    
    int timeout = 0;
    while (!tb->wb_ack_o && timeout < 50) {
        tick(1);
        tick(0);
        timeout++;
    }
    
    if (timeout >= 50 && verbosity > 0) {
        printf("[WB_READ] TIMEOUT reading from addr 0x%x\n", addr);
    }
    
    int data = tb->wb_dat_o;
    tb->wb_cyc_i = 0;
    tb->wb_stb_i = 0;
    
    tick(1);
    tick(0);
    
    return data;
}

int readstatus() {
    int status = wb_read(0); // A0=0 for status register
    if (verbosity > 1) {
        printf("[CPP] READ STATUS = 0x%02x\n", status);
    }
    return status;
}

void sendbyte(int byte) {
    if (verbosity > 0) {
        printf("[CPP] Sending byte: 0x%02x\n", byte);
    }
    
    // Wait for FDC to be ready to receive data (bit 7 = 1, bit 6 = 0)
    int timeout = 0;
    int status;
    
    while (timeout < 1000) {
        status = readstatus();
        if ((status & 0xC0) == 0x80) { // Ready for command
            break;
        }
        wait(10);
        timeout++;
    }
    
    if (timeout >= 1000) {
        printf("[CPP] ERROR: FDC not ready for command after 1000 attempts\n");
        printf("[CPP] Last status: 0x%02x\n", status);
        return;
    }
    
    wb_write(1, byte); // A0=1 for data register
}

int readbyte() {
    if (verbosity > 0) {
        printf("[CPP] Reading byte...\n");
    }
    
    // Wait for FDC to have data ready (bit 7 = 1, bit 6 = 1)
    int timeout = 0;
    int status;
    
    while (timeout < 1000) {
        status = readstatus();
        if ((status & 0xC0) == 0xC0) { // Data ready
            break;
        }
        wait(10);
        timeout++;
    }
    
    if (timeout >= 1000) {
        printf("[CPP] ERROR: FDC data not ready after 1000 attempts\n");
        printf("[CPP] Last status: 0x%02x\n", status);
        return 0xFF;
    }
    
    int data = wb_read(1); // A0=1 for data register
    if (verbosity > 0) {
        printf("[CPP] Read byte: 0x%02x\n", data);
    }
    return data;
}

void read_result() {
    printf("[CPP] --- COMMAND RESULT ----\n");
    int st0 = readbyte();
    int st1 = readbyte();
    int st2 = readbyte();
    int c = readbyte();
    int h = readbyte();
    int r = readbyte();
    int n = readbyte();
    
    printf("[CPP] ST0 = 0x%02x\n", st0);
    printf("[CPP] ST1 = 0x%02x\n", st1);
    printf("[CPP] ST2 = 0x%02x\n", st2);
    printf("[CPP] C   = 0x%02x\n", c);
    printf("[CPP] H   = 0x%02x\n", h);
    printf("[CPP] R   = 0x%02x\n", r);
    printf("[CPP] N   = 0x%02x\n", n);
    
    // Check if command was successful
    if (st0 & 0xC0) {
        printf("[CPP] WARNING: Command terminated abnormally (ST0: 0x%02x)\n", st0);
    }
}

void terminate_command() {
    printf("[CPP] Terminating current command...\n");
    // Send terminate command (write to data register with specific value)
    wb_write(1, 0xD0); // Force interrupt command
    wait(100);
    
    // Read any remaining result bytes to clear the FDC
    int status = readstatus();
    if ((status & 0xC0) == 0xC0) {
        printf("[CPP] Clearing leftover data: ");
        while ((status & 0xC0) == 0xC0) {
            int data = wb_read(1);
            printf("0x%02x ", data);
            status = readstatus();
        }
        printf("\n");
    }
}

void cmd_recalibrate() {
    printf("[CPP] === RECALIBRATE ===\n");
    sendbyte(0x07);
    sendbyte(0x00);
    wait(2000); // Longer wait for recalibration
}

void cmd_seek(int ncn) {
    printf("[CPP] === SEEK ===\n");
    sendbyte(0x0F);
    sendbyte(0x00);
    sendbyte(ncn);
    wait(2000); // Longer wait for seek
}

void cmd_read_id(int head) {
    printf("[CPP] === READ ID ===\n");
    sendbyte(0x0A);
    sendbyte(head << 2);
    read_result();
}

void cmd_read(int c, int h, int r, int n, int eot, int gpl, int dtl) {
    printf("[CPP] === READ C:%d H:%d R:%d N:%d ===\n", c, h, r, n);
    
    // Make sure FDC is ready
    terminate_command();
    
    sendbyte(0x06);
    sendbyte(h << 2);
    sendbyte(c);
    sendbyte(h);
    sendbyte(r);
    sendbyte(n);
    sendbyte(eot);
    sendbyte(gpl);
    sendbyte(dtl);

    // For read command, we need to handle data transfer differently
    printf("[CPP] Data transfer phase...\n");
    
    int timeout = 0;
    int status;
    long chksum = 0;
    int bytes_read = 0;
    
    while (bytes_read < 512 && timeout < 5000) {
        status = readstatus();
        
        if ((status & 0xC0) == 0xC0) {
            if (status & 0x20) { // Data ready bit
                int data = readbyte();
                chksum += data;
                bytes_read++;
                
                if (verbosity > 1 && bytes_read % 64 == 0) {
                    printf("[CPP] Read %d bytes, checksum: %ld\n", bytes_read, chksum);
                }
            }
        }
        
        wait(1);
        timeout++;
    }
    
    printf("[CPP] Data read: %d bytes, checksum: %ld\n", bytes_read, chksum);
    read_result();
}

void mount_disk(FILE *edsk_file, int drive_number) {
    int fsize;

    fseek(edsk_file, 0, SEEK_END);
    fsize = ftell(edsk_file);
    tb->img_size = fsize;
    tb->img_mounted = 1 << drive_number;
    tick(1);
    tick(0);
    tb->img_mounted = 0;
    wait(1000);
    printf("[CPP] Disk mounted in drive %d, size: %d bytes\n", drive_number, fsize);
}

int main(int argc, char **argv) {
    // Initialize test disk
    edsk = fopen("test.dsk", "rb");
    if (!edsk) {
        printf("[CPP] Cannot open test.dsk.\n");
        return -1;
    }

    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    // Create trace object
    trace = new VerilatedVcdC;

    // Create DUT
    tb = new Vu765_wb_tb;
    tb->trace(trace, 99);

    // Open waveform file
    trace->open("u765_wb_tb.vcd");

    // Initialize signals
    tb->wb_rst_i = 1;
    tb->wb_cyc_i = 0;
    tb->wb_stb_i = 0;
    tb->wb_we_i = 0;
    tb->wb_adr_i = 0;
    tb->wb_dat_i = 0;
    
    // Reset sequence
    printf("[CPP] Starting reset sequence...\n");
    for (int i = 0; i < 10; i++) {
        tick(1);
        tick(0);
    }
    tb->wb_rst_i = 0;
    printf("[CPP] Reset completed\n");
    
    // Mount disk image
    reading = 0;
    read_ptr = 0;
    mount_disk(edsk, 0);
    
    // Initialize FDC control signals
    tb->motor = 1;
    tb->ready = 1;
    tb->available = 1;
    tb->fast = 0;

    wait(5000);

    printf("[CPP] Starting test commands...\n");

    // First check status
    printf("[CPP] Testing simple status read...\n");
    int status = readstatus();
    printf("[CPP] Initial status: 0x%02x\n", status);

    if (status == 0xFF) {
        printf("[CPP] ERROR: Cannot read status register\n");
        fclose(edsk);
        trace->close();
        delete trace;
        delete tb;
        return -1;
    }

    // Start with recalibrate
    cmd_recalibrate();
    
    // Then read ID to verify
    cmd_read_id(0);
    
    // Terminate any previous command before new one
    terminate_command();
    
    // Try simple read
    cmd_read(0, 0, 1, 2, 0xFF, 2, 0xFF);

    // Завершение
    fclose(edsk);
    trace->close();
    delete trace;
    delete tb;
    
    printf("[CPP] Test completed.\n");
    return 0;
}