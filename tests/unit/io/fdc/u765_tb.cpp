#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <getopt.h>
#include "Vu765_tb.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

static Vu765_tb *tb;
static VerilatedVcdC *trace;
static int tickcount;

static unsigned char sdbuf[512];
static FILE *edsk;
static int reading;
static int read_ptr;

// Logging system
static int verbosity = 0;
static int io_count = 0;

void print_help() {
    std::cout << "Usage: u765_tb [options]\n";
    std::cout << "Options:\n";
    std::cout << "  -v, --verbose LEVEL  Set verbosity level (0-3, default: 0)\n";
    std::cout << "  -h, --help           Show this help message\n";
    std::cout << "  -d, --debug          Enable debug output (equivalent to -v2)\n";
    std::cout << std::endl;
    std::cout << "Verbosity levels:\n";
    std::cout << "  0: Basic test output only\n";
    std::cout << "  1: IO operations (register access)\n";
    std::cout << "  2: Detailed internal operations\n";
    std::cout << "  3: Very detailed tracing\n";
}

void log_message(int level, const std::string& message) {
    if (verbosity >= level) {
        switch (level) {
            case 0: std::cout << "[CPP] " << message << std::endl; break;
            case 1: std::cout << "[CPP:IO] " << message << std::endl; break;
            case 2: std::cout << "[CPP:V1] " << message << std::endl; break;
            case 3: std::cout << "[CPP:V2] " << message << std::endl; break;
        }
    }
}

void log_result(const std::string& message) {
    std::cout << "[CPP:RESULT] " << message << std::endl;
}

void log_error(const std::string& message) {
    std::cerr << "[CPP:ERROR] " << message << std::endl;
}

int img_read(int sd_rd) {
    if (!sd_rd) return 0;
    log_message(2, "img_read: " + std::to_string(sd_rd) + " lba: " + std::to_string(tb->sd_lba));
    int lba = tb->sd_lba;
    fseek(edsk, lba << 9, SEEK_SET);
    fread(&sdbuf, 512, 1, edsk);
    reading = 1;
    read_ptr = 0;
    return 0;
}

void tick(int c) {
    static int sd_rd_prev = 0;
    static int prev_a0 = 0;
    static int prev_nRD = 1;
    static int prev_nWR = 1;

    tb->clk_sys = c;
    tb->eval();
    trace->dump(tickcount++);

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
                log_message(2, "SD read completed");
            }
        } else {
            tb->sd_ack = 0;
            tb->sd_buff_wr = 0;
        }

        // Log register access
        if (verbosity >= 1) {
            if (tb->a0 != prev_a0 || tb->nRD != prev_nRD || tb->nWR != prev_nWR) {
                std::string operation;
                if (tb->nRD == 0) operation = "READ";
                else if (tb->nWR == 0) operation = "WRITE";
                else operation = "NONE";
                
                log_message(1, "REG " + operation + " A0=" + std::to_string(tb->a0) + 
                              " DATA=" + (operation == "READ" ? std::to_string(tb->dout) : std::to_string(tb->din)));
            }
            prev_a0 = tb->a0;
            prev_nRD = tb->nRD;
            prev_nWR = tb->nWR;
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

int readstatus() {
    int dout;

    tb->a0 = 0;
    tick(1);
    tick(0);
    tb->nRD = 0;
    tb->nWR = 1;
    tick(1);
    tick(0);
    tick(1);
    tick(0);
    dout = tb->dout;
    tb->nRD = 1;
    tick(1);
    tick(0);
    
    if (verbosity >= 1) {
        log_message(1, "STATUS READ = 0x" + std::to_string(dout));
    }
    return dout;
}

void sendbyte(int byte) {
    while ((readstatus() & 0xcf) != 0x80) {};
    tb->a0 = 1;
    tick(1);
    tick(0);
    tb->nRD = 1;
    tb->nWR = 0;
    tb->din = byte;
    tick(1);
    tick(0);
    tick(1);
    tick(0);
    tb->nWR = 1;
    tick(1);
    tick(0);
    
    if (verbosity >= 1) {
        log_message(1, "DATA WRITE = 0x" + std::to_string(byte));
    }
}

int readbyte() {
    int byte;

    while ((readstatus() & 0xcf) != 0xc0) {};
    tb->a0 = 1;
    tick(1);
    tick(0);
    tb->nRD = 0;
    tb->nWR = 1;
    tick(1);
    tick(0);
    tick(1);
    tick(0);
    byte = tb->dout;
    tb->nRD = 1;
    tick(1);
    tick(0);
    
    if (verbosity >= 1) {
        log_message(1, "DATA READ = 0x" + std::to_string(byte));
    }
    return byte;
}

void read_result() {
    log_message(0, "--- COMMAND RESULT ----");
    int st0 = readbyte();
    int st1 = readbyte();
    int st2 = readbyte();
    int c = readbyte();
    int h = readbyte();
    int r = readbyte();
    int n = readbyte();
    
    log_message(0, "ST0 = 0x" + std::to_string(st0));
    log_message(0, "ST1 = 0x" + std::to_string(st1));
    log_message(0, "ST2 = 0x" + std::to_string(st2));
    log_message(0, "C   = 0x" + std::to_string(c));
    log_message(0, "H   = 0x" + std::to_string(h));
    log_message(0, "R   = 0x" + std::to_string(r));
    log_message(0, "N   = 0x" + std::to_string(n));
}

void read_data() {
    int status, byte;
    int offs = 0;
    long chksum = 0;

    while (true) {
        while (((status = readstatus()) & 0xcf) != 0xc0) {};
        if ((status & 0x20) != 0x20) {
            log_message(0, "Data sum: " + std::to_string(chksum));
            return;
        }
        tb->a0 = 1;
        tb->nRD = 0;
        tb->nWR = 1;
        tick(1);
        tick(0);
        tick(1);
        tick(0);
        byte = tb->dout;
        tb->nRD = 1;
        tick(1);
        tick(0);
        chksum += byte;
        
        if (verbosity >= 3) {
            std::cout << std::hex << std::setw(2) << std::setfill('0') << byte << " ";
            offs++;
            if ((offs % 16) == 0) std::cout << "\n" << std::dec << std::setw(3) << offs << " ";
        }
    }
}

void cmd_recalibrate() {
    log_message(0, "=== RECALIBRATE ===");
    sendbyte(0x07);
    sendbyte(0x00);
}

void cmd_seek(int ncn) {
    log_message(0, "=== SEEK ===");
    sendbyte(0x0f);
    sendbyte(0x00);
    sendbyte(ncn);
}

void cmd_read_id(int head) {
    log_message(0, "=== READ ID ===");
    sendbyte(0x0a);
    sendbyte(head << 2);
    read_result();
}

void cmd_read(int c, int h, int r, int n, int eot, int gpl, int dtl) {
    log_message(0, "=== READ ===");
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
    log_message(0, "Disk mounted in drive " + std::to_string(drive_number) + 
                   ", size: " + std::to_string(fsize) + " bytes");
}

int main(int argc, char **argv) {
    // Parse command line arguments
    static struct option long_options[] = {
        {"verbose", required_argument, 0, 'v'},
        {"help", no_argument, 0, 'h'},
        {"debug", no_argument, 0, 'd'},
        {0, 0, 0, 0}
    };

    int opt;
    while ((opt = getopt_long(argc, argv, "v:hd", long_options, NULL)) != -1) {
        switch (opt) {
            case 'v':
                verbosity = atoi(optarg);
                break;
            case 'h':
                print_help();
                return 0;
            case 'd':
                verbosity = 2;
                break;
            default:
                print_help();
                return 1;
        }
    }

    // Initialize test disk
    edsk = fopen("test.dsk", "rb");
    if (!edsk) {
        log_error("Cannot open test.dsk");
        return -1;
    }

    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    // Create trace object
    trace = new VerilatedVcdC;

    // Create DUT
    tb = new Vu765_tb;
    tb->trace(trace, 99);

    // Open waveform file
    trace->open("u765_tb.vcd");

    // Initialize signals
    tb->reset = 1;
    tb->ce = 1;
    tb->nWR = 1;
    tb->nRD = 1;
    tick(1);
    tick(0);

    // Reset sequence
    log_message(0, "Starting reset sequence...");
    for (int i = 0; i < 10; i++) {
        tick(1);
        tick(0);
    }
    tb->reset = 0;
    log_message(0, "Reset completed");

    // Mount disk image
    reading = 0;
    mount_disk(edsk, 0);
    
    // Initialize FDC control signals
    tb->motor = 1;
    tb->ready = 1;
    tb->available = 1;

    wait(100000);

    log_message(0, "Starting test commands...");

    // Test commands - start with simple status read
    log_message(0, "Testing simple status read...");
    int status = readstatus();
    log_message(0, "Initial status: 0x" + std::to_string(status));
    
    // If status read works, try recalibrate
    if (status != 0xFF) {
        cmd_recalibrate();
        wait(1000);
    }
    
    // Команды чтения как в оригинальном тесте
    cmd_read(0, 0, 0x41, 2, 0xff, 2, 0xff);
    cmd_seek(1);
    wait(1000);
    cmd_read(1, 0, 0, 5, 0xff, 2, 0xff);
    cmd_read(1, 0, 0x1d, 2, 0xff, 2, 0xff);
    cmd_read(1, 0, 0xff, 0, 0xff, 2, 1);

    // Многократное чтение ID
    for (int i = 0; i < 10; i++) {
        cmd_read_id(0);
        wait(1000);
    }

    // Завершение
    fclose(edsk);
    trace->close();
    delete trace;
    delete tb;
    
    log_message(0, "Test completed.");
    return 0;
}