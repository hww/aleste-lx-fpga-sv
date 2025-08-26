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

int img_read(int sd_rd) {
    if (!sd_rd) return 0;
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
            if (read_ptr == 512) reading = 0;
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

// Wishbone write function
void wb_write(int addr, int data) {
    tb->wb_adr_i = addr;
    tb->wb_dat_i = data;
    tb->wb_we_i = 1;
    tb->wb_cyc_i = 1;
    tb->wb_stb_i = 1;
    
    // Wait for acknowledge
    while (!tb->wb_ack_o) {
        tick(1);
        tick(0);
    }
    
    tb->wb_cyc_i = 0;
    tb->wb_stb_i = 0;
    tb->wb_we_i = 0;
}

// Wishbone read function
int wb_read(int addr) {
    tb->wb_adr_i = addr;
    tb->wb_we_i = 0;
    tb->wb_cyc_i = 1;
    tb->wb_stb_i = 1;
    
    // Wait for acknowledge and data
    while (!tb->wb_ack_o) {
        tick(1);
        tick(0);
    }
    
    int data = tb->wb_dat_o;
    tb->wb_cyc_i = 0;
    tb->wb_stb_i = 0;
    
    return data;
}

void wait(int t) {
    for (int i = 0; i < t; i++) {
        tick(1);
        tick(0);
    }
}

int readstatus() {
    int status = wb_read(0); // A0=0 for status register
    //printf("READ STATUS = 0x%02x\n", status);
    return status;
}

void sendbyte(int byte) {
    while ((readstatus() & 0xcf) != 0x80) {
        wait(1);
    }
    wb_write(1, byte); // A0=1 for data register
}

int readbyte() {
    while ((readstatus() & 0xcf) != 0xc0) {
        wait(1);
    }
    return wb_read(1); // A0=1 for data register
}

void read_result() {
    printf("[CPP] --- COMMAND RESULT ----\n");
    printf("ST0 = 0x%02x\n", readbyte());
    printf("ST1 = 0x%02x\n", readbyte());
    printf("ST2 = 0x%02x\n", readbyte());
    printf("C   = 0x%02x\n", readbyte());
    printf("H   = 0x%02x\n", readbyte());
    printf("R   = 0x%02x\n", readbyte());
    printf("N   = 0x%02x\n", readbyte());
}

void read_data() {
    int status, byte;
    int offs = 0;
    long chksum = 0;

    while (true) {
        while (((status = readstatus()) & 0xcf) != 0xc0) {
            wait(1);
        }
        if ((status & 0x20) != 0x20) {
            printf("[CPP] Data sum: %ld\n", chksum);
            return;
        }
        byte = readbyte();
        chksum += byte;
        //printf("%02x ", byte);
        //offs++;
        //if ((offs % 16) == 0) printf("\n %03x ", offs);
    }
}

void cmd_recalibrate() {
    printf("[CPP] === RECALIBRATE ===\n");
    sendbyte(0x07);
    sendbyte(0x00);
}

void cmd_seek(int ncn) {
    printf("=== SEEK ===\n");
    sendbyte(0x0f);
    sendbyte(0x00);
    sendbyte(ncn);
}

void cmd_read_id(int head) {
    printf("[CPP] === READ ID ===\n");
    sendbyte(0x0a);
    sendbyte(head << 2);
    read_result();
}

void cmd_read(int c, int h, int r, int n, int eot, int gpl, int dtl) {
    printf("[CPP] === READ ===\n");
    sendbyte(0x06);
    sendbyte(h << 2);
    sendbyte(c);
    sendbyte(h);
    sendbyte(r);
    sendbyte(n);
    sendbyte(eot);
    sendbyte(gpl);
    sendbyte(dtl);

    read_data();
    read_result();
}

void mount(FILE *edsk, int dno) {
    int fsize;

    fseek(edsk, 0, SEEK_END);
    fsize = ftell(edsk);
    tb->img_size = fsize;
    tb->img_mounted = 1 << dno;
    tick(1);
    tick(0);
    tb->img_mounted = 0;
    wait(1000);
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
    tick(1);
    tick(0);
    tick(1);
    tick(0);
    tb->wb_rst_i = 0;

    // Initialize FDC control signals
    tb->motor = 1;
    tb->ready = 1;
    tb->available = 1;
    tb->fast = 0;

    // Mount disk image
    reading = 0;
    mount(edsk, 0);
    wait(100000);

    // Test commands
    cmd_recalibrate();
    wait(1000);
    cmd_read(0, 0, 0x41, 2, 0xff, 2, 0xff);
    cmd_seek(1);
    wait(1000);
    cmd_read(1, 0, 0, 5, 0xff, 2, 0xff);
    cmd_read(1, 0, 0x1d, 2, 0xff, 2, 0xff);
    cmd_read(1, 0, 0xff, 0, 0xff, 2, 1);

    // Multiple ID reads
    for (int i = 0; i < 10; i++) {
        cmd_read_id(0);
        wait(1000);
    }

    // Cleanup
    fclose(edsk);
    trace->close();
    delete trace;
    delete tb;
    
    printf("[CPP] Test completed successfully.\n");
    return 0;
}