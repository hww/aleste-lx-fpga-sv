#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <getopt.h>
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

// Logging system
static int verbosity = 0;

void print_help() {
    std::cout << "Usage: u765_wb_tb [options]\n";
    std::cout << "Options:\n";
    std::cout << "  -v, --verbose LEVEL  Set verbosity level (0-3, default: 0)\n";
    std::cout << "  -h, --help           Show this help message\n";
    std::cout << "  -d, --debug          Enable debug output (equivalent to -v2)\n";
    std::cout << std::endl;
}

void log_message(int level, const std::string& message) {
    if (verbosity >= level) {
        std::cout << "[CPP] " << message << std::endl;
    }
}

void log_io(const std::string& message) {
    if (verbosity >= 1) {
        std::cout << "[CPP:IO] " << message << std::endl;
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
    size_t result = fread(&sdbuf, 512, 1, edsk);
    if (result != 1) {
        log_error("Failed to read from disk image");
    }
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
                log_message(2, "SD read completed");
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
    log_io("WB WRITE ADDR=0x" + std::to_string(addr) + " DATA=0x" + std::to_string(data));
    
    tb->wb_adr_i = addr;
    tb->wb_dat_i = data;
    tb->wb_we_i = 1;
    tb->wb_cyc_i = 1;
    tb->wb_stb_i = 1;
    
    int timeout = 0;
    while (!tb->wb_ack_o && timeout < 100) {
        tick(1);
        tick(0);
        timeout++;
    }
    
    if (timeout >= 100) {
        log_error("WB write timeout");
    }
    
    tb->wb_cyc_i = 0;
    tb->wb_stb_i = 0;
    tb->wb_we_i = 0;
    
    tick(1);
    tick(0);
}

// Wishbone read function
int wb_read(int addr) {
    log_io("WB READ ADDR=0x" + std::to_string(addr));
    
    tb->wb_adr_i = addr;
    tb->wb_we_i = 0;
    tb->wb_cyc_i = 1;
    tb->wb_stb_i = 1;
    
    int timeout = 0;
    while (!tb->wb_ack_o && timeout < 100) {
        tick(1);
        tick(0);
        timeout++;
    }
    
    int data = 0xFF;
    if (timeout >= 100) {
        log_error("WB read timeout");
    } else {
        data = tb->wb_dat_o;
    }
    
    tb->wb_cyc_i = 0;
    tb->wb_stb_i = 0;
    
    tick(1);
    tick(0);
    
    log_io("WB READ RESULT ADDR=0x" + std::to_string(addr) + " DATA=0x" + std::to_string(data));
    return data;
}

int readstatus() {
    int status = wb_read(0);
    log_io("STATUS = 0x" + std::to_string(status));
    return status;
}

void sendbyte(int byte) {
    log_io("Sending byte: 0x" + std::to_string(byte));
    
    // Wait for FDC to be ready to receive data
    int timeout = 0;
    while (timeout < 1000) {
        int status = readstatus();
        if ((status & 0xC0) == 0x80) { // Ready for command
            break;
        }
        wait(10);
        timeout++;
    }
    
    if (timeout >= 1000) {
        log_error("Timeout waiting for FDC to be ready");
        return;
    }
    
    wb_write(1, byte);
}

int readbyte() {
    log_io("Reading byte...");
    
    // Wait for FDC to have data ready
    int timeout = 0;
    while (timeout < 1000) {
        int status = readstatus();
        if ((status & 0xC0) == 0xC0) { // Data ready
            break;
        }
        wait(10);
        timeout++;
    }
    
    if (timeout >= 1000) {
        log_error("Timeout waiting for data");
        return 0xFF;
    }
    
    int data = wb_read(1);
    log_io("Read byte: 0x" + std::to_string(data));
    return data;
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
    long chksum = 0;
    int bytes_read = 0;

    log_message(0, "Reading data...");
    
    while (bytes_read < 512) {
        status = readstatus();
        if ((status & 0xC0) == 0xC0 && (status & 0x20)) {
            byte = readbyte();
            chksum += byte;
            bytes_read++;
        }
        wait(1);
        
        if (bytes_read > 0 && bytes_read % 64 == 0) {
            log_message(2, "Read " + std::to_string(bytes_read) + " bytes, checksum: " + std::to_string(chksum));
        }
    }
    
    log_message(0, "Data sum: " + std::to_string(chksum));
}

void cmd_recalibrate() {
    log_message(0, "=== RECALIBRATE ===");
    sendbyte(0x07);
    sendbyte(0x00);
    wait(2000); // Give time for recalibration
}

void cmd_seek(int ncn) {
    log_message(0, "=== SEEK ===");
    sendbyte(0x0f);
    sendbyte(0x00);
    sendbyte(ncn);
    wait(2000); // Give time for seek
}

void cmd_read_id(int head) {
    log_message(0, "=== READ ID ===");
    sendbyte(0x0a);
    sendbyte(head << 2);
    read_result();
}

void cmd_read(int c, int h, int r, int n, int eot, int gpl, int dtl) {
    log_message(0, "=== READ C:" + std::to_string(c) + " H:" + std::to_string(h) + 
                   " R:" + std::to_string(r) + " N:" + std::to_string(n) + " ===");
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
    log_message(0, "Starting reset sequence...");
    for (int i = 0; i < 10; i++) {
        tick(1);
        tick(0);
    }
    tb->wb_rst_i = 0;
    log_message(0, "Reset completed");
    
    // Mount disk image
    reading = 0;
    read_ptr = 0;
    mount_disk(edsk, 0);
    
    // Initialize FDC control signals
    tb->motor = 1;
    tb->ready = 1;
    tb->available = 1;
    tb->fast = 0;

    wait(10000);

    log_message(0, "Starting test commands...");

    // First, let's just test basic status reading
    log_message(0, "Testing simple status read...");
    int status = readstatus();
    log_message(0, "Initial status: 0x" + std::to_string(status));

    if (status == 0xFF) {
        log_error("FDC not responding");
        fclose(edsk);
        trace->close();
        delete trace;
        delete tb;
        return -1;
    }

    // Start with simple commands
    log_message(0, "Testing RECALIBRATE...");
    cmd_recalibrate();
    
    log_message(0, "Testing READ ID...");
    cmd_read_id(0);
    
    log_message(0, "Testing READ command...");
    cmd_read(0, 0, 0x41, 2, 0xff, 2, 0xff);

    // Завершение
    fclose(edsk);
    trace->close();
    delete trace;
    delete tb;
    
    log_message(0, "Test completed.");
    return 0;
}