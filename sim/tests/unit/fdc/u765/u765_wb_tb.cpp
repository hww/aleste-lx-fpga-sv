#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <getopt.h>
#include "Vu765_wb_tb.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iomanip>
#include <sstream>

static Vu765_wb_tb *tb;
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
            case 0: std::cout << "[INFO] " << message << std::endl; break;
            case 1: std::cout << "[IO] " << message << std::endl; break;
            case 2: std::cout << "[DEBUG] " << message << std::endl; break;
            case 3: std::cout << "[TRACE] " << message << std::endl; break;
        }
    }
}

void log_result(const std::string& message, bool success = true) {
    if (success) {
        std::cout << "✅ [RESULT] " << message << std::endl;
    } else {
        std::cout << "❌ [RESULT] " << message << std::endl;
    }
}

void log_error(const std::string& message) {
    std::cerr << "🔥 [ERROR] " << message << std::endl;
}

void log_command(const std::string& command) {
    std::cout << "🚀 [COMMAND] " << command << std::endl;
}

void log_status(const std::string& status) {
    std::cout << "📊 [STATUS] " << status << std::endl;
}

int img_read(int sd_rd) {
    if (!sd_rd) return 0;
    log_message(2, "SD card read request, LBA: " + std::to_string(tb->sd_lba));
    int lba = tb->sd_lba;
    fseek(edsk, lba << 9, SEEK_SET);
    fread(&sdbuf, 512, 1, edsk);
    reading = 1;
    read_ptr = 0;
    return 0;
}

void handle_sd_card() {   
    static int sd_rd_prev = 0;
    
    // Handle SD card reading
    if (reading) {
        tb->sd_ack = 1;
        tb->sd_buff_wr = 1;
        tb->sd_buff_dout = sdbuf[read_ptr];
        tb->sd_buff_addr = read_ptr;
        read_ptr++;
        if (read_ptr == 512) {
            reading = 0;
            log_message(2, "SD read completed successfully");
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

void handle_wb() {
    static int prev_wb_cyc_i = 0;
    static int prev_wb_we_i = 1;

    // Log register access
    if (verbosity >= 1) {
        if (tb->wb_cyc_i != prev_wb_cyc_i || tb->wb_we_i != prev_wb_we_i) {
            if (tb->wb_cyc_i && tb->wb_stb_i) {
                char buf[256];
                if (tb->wb_we_i == 1) {
                    sprintf(buf, "WRITE (addr 0x%02X): 0x%02X", 
                            tb->wb_adr_i, tb->wb_dat_i);
                } else {
                    sprintf(buf, "READ (addr 0x%02X): 0x%02X", 
                            tb->wb_adr_i, tb->wb_dat_o);
                }
                log_message(1, buf);
            }    
        }
        prev_wb_cyc_i = tb->wb_cyc_i;
        prev_wb_we_i = tb->wb_we_i;
    }
}

static int byte_buffer;

void tick(bool cyc = 0, bool we = 0, bool out = 0, int byte = 0xFF) {
    static vluint64_t sim_time = 0;

    tb->wb_clk_i = 1;
    tb->eval();
    if (trace) trace->dump(sim_time);
    sim_time += 1;

    handle_sd_card();
    handle_wb();

    tb->wb_cyc_i = cyc;
    tb->wb_stb_i = cyc;     
    tb->wb_we_i = we;
    if (out)
       tb->wb_dat_i = byte;
    
    if (cyc && !we && tb->wb_ack_o)
       byte_buffer = tb->wb_dat_o;

    tb->eval();
    if (trace) trace->dump(sim_time);
    sim_time += 4;

    tb->wb_clk_i = 0;
    tb->eval();
    if (trace) trace->dump(sim_time);
    sim_time += 5;
}

void wait(int t) {
    for (int i = 0; i < t; i++) {
        tick();
    }
}

int readstatus() {
    tb->wb_adr_i = 0;
    tick(true, false);
    
    // Wait for acknowledge
    while (!tb->wb_ack_o) {
        tick(true, false);
    }
    tick(false, false);
    
    if (verbosity >= 1) {
        char buf[64];
        sprintf(buf, "Status register: 0x%02X", byte_buffer);
        log_message(1, buf);
    }
    return byte_buffer;
}

bool wait_for_fdc_data(int mask, int value, int timeout_ms = 1000) {
    int timeout = 0;
    while (timeout < timeout_ms) {
        int status = readstatus();
        if ((status & mask) == value) {
            return true;
        }
        wait(10);
        timeout++;
    }
    log_error("Timeout waiting for FDC data (mask: 0x" + 
              std::to_string(mask) + ", expected: 0x" + 
              std::to_string(value) + ")");
    return false;
}

void sendbyte(int byte) {
    if (!wait_for_fdc_data(0xcf, 0x80)) {
        log_error("Failed to send byte 0x" + std::to_string(byte));
        return;
    }
    
    tb->wb_adr_i = 1;
    tick(true, true, true, byte);
    
    // Wait for acknowledge
    while (!tb->wb_ack_o) {
        tick(true, true, true, byte);
    }
    tick(false, false, true, 0xFF);
    
    if (verbosity >= 1) {
        char buf[64];
        sprintf(buf, "Data write: 0x%02X", byte);
        log_message(1, buf);
    }
}

int readbyte() {
    if (!wait_for_fdc_data(0xcf, 0xc0)) {
        log_error("Failed to read byte");
        return 0xFF;
    }        
    
    tb->wb_adr_i = 1;
    tick(true, false);
    
    // Wait for acknowledge
    while (!tb->wb_ack_o) {
        tick(true, false);
    }
    tick();
    
    if (verbosity >= 1) {
        char buf[64];
        sprintf(buf, "Data read: 0x%02X", byte_buffer);
        log_message(1, buf);
    }
    return byte_buffer;
}

void read_result() {
    log_message(0, "--- Command Result ---");
    
    int st0 = readbyte();
    int st1 = readbyte();
    int st2 = readbyte();
    int c = readbyte();
    int h = readbyte();
    int r = readbyte();
    int n = readbyte();
    
    // Форматированный вывод результатов
    std::stringstream ss;
    ss << "ST0:0x" << std::hex << std::setw(2) << std::setfill('0') << st0
       << " ST1:0x" << std::setw(2) << st1
       << " ST2:0x" << std::setw(2) << st2
       << " C:" << std::dec << c
       << " H:" << h
       << " R:" << r
       << " N:" << n;
    
    log_message(0, ss.str());
    
    // Проверка на ошибки
    if (st0 & 0xC0) { // Бит ошибки в ST0
        log_result("Command completed with errors", false);
    } else {
        log_result("Command completed successfully", true);
    }
}

void read_data() {
    int status, byte;
    int offs = 0;
    long chksum = 0;

    log_message(0, "Reading data...");
    
    while (true) {
        while (((status = readstatus()) & 0xcf) != 0xc0) {};
        if ((status & 0x20) != 0x20) {
            log_message(0, "Data transfer complete, checksum: " + std::to_string(chksum));
            return;
        }
        
        tb->wb_adr_i = 1;
        tick(true, false);
        
        // Wait for acknowledge
        while (!tb->wb_ack_o) {
            tick(true, false);
        }
        byte = tb->wb_dat_o;
        tb->wb_cyc_i = 0;
        tb->wb_stb_i = 0;
        tick();
        chksum += byte;
        
        if (verbosity >= 3) {
            std::cout << std::hex << std::setw(2) << std::setfill('0') << byte << " ";
            offs++;
            if ((offs % 16) == 0) std::cout << "\n" << std::dec << std::setw(3) << offs << " ";
        }
    }
}

void cmd_recalibrate() {
    log_command("Recalibrate drive");
    sendbyte(0x07);
    sendbyte(0x00);
    
    // Ждем завершения и проверяем результат
    wait(1000);
    int status = readstatus();
    
    if ((status & 0xC0) == 0) {
        log_result("Recalibration successful - Drive returned to cylinder 0", true);
    } else {
        log_result("Recalibration failed", false);
        log_error("Recalibration error code: 0x" + std::to_string(status));
    }
}

void cmd_seek(int ncn) {
    log_command("Seek to cylinder " + std::to_string(ncn));
    sendbyte(0x0f);
    sendbyte(0x00);
    sendbyte(ncn);
    
    wait(1000);
    int status = readstatus();
    
    if ((status & 0xC0) == 0) {
        log_result("Seek completed successfully", true);
    } else {
        log_result("Seek failed", false);
    }
}

void cmd_read_id(int head) {
    log_command("Read ID (head " + std::to_string(head) + ")");
    sendbyte(0x0a);
    sendbyte(head << 2);
    read_result();
}

void cmd_read(int c, int h, int r, int n, int eot, int gpl, int dtl) {
    std::stringstream cmd_desc;
    cmd_desc << "Read C:" << c << " H:" << h << " R:" << r << " N:" << n;
    log_command(cmd_desc.str());
    
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
    log_message(0, "Read operation completed");
}

void mount_disk(FILE *edsk_file, int drive_number) {
    int fsize;

    fseek(edsk_file, 0, SEEK_END);
    fsize = ftell(edsk_file);
    tb->img_size = fsize;
    tb->img_mounted = 1 << drive_number;
    tick();
    tb->img_mounted = 0;
    wait(1000);
    
    log_result("Disk mounted in drive " + std::to_string(drive_number) + 
               ", size: " + std::to_string(fsize) + " bytes", true);
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

    std::cout << "🔧 Starting FDC Test Bench" << std::endl;
    std::cout << "📊 Verbosity level: " << verbosity << std::endl;

    // Initialize test disk
    edsk = fopen("test.dsk", "rb");
    if (!edsk) {
        log_error("Cannot open test.dsk file");
        return -1;
    }
    log_result("Disk image opened successfully", true);

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
    log_message(0, "Waveform tracing enabled");

    // Initialize signals
    tb->wb_rst_i = 1;
    tb->enable = 1;
    tb->wb_we_i = 0;
    tb->wb_stb_i = 0;
    tb->wb_cyc_i = 0;
    tick();

    // Reset sequence
    log_command("Starting reset sequence...");
    for (int i = 0; i < 10; i++) {
        tick();
    }
    tb->wb_rst_i = 0;
    log_result("Reset completed", true);

    // Mount disk image
    reading = 0;
    mount_disk(edsk, 0);
    
    // Initialize FDC control signals
    tb->motor = 1;
    tb->ready = 1;
    tb->available = 1;

    wait(100000);

    log_command("Starting test commands...");

    // Test commands
    log_command("Testing status read");
    int status = readstatus();
    log_status("Initial status: 0x" + std::to_string(status));
    
    // Основные команды тестирования
    if (status != 0xFF) {
        cmd_recalibrate();
        wait(1000);
    }
    
    cmd_read(0, 0, 0x41, 2, 0xff, 2, 0xff);
    cmd_seek(1);
    wait(1000);
    cmd_read(1, 0, 0, 5, 0xff, 2, 0xff);
    cmd_read(1, 0, 0x1d, 2, 0xff, 2, 0xff);
    cmd_read(1, 0, 0xff, 0, 0xff, 2, 1);

    // Multiple ID reads
    log_command("Starting multiple ID read test");
    for (int i = 0; i < 10; i++) {
        cmd_read_id(0);
        wait(1000);
    }

    // Cleanup
    fclose(edsk);
    trace->close();
    delete trace;
    delete tb;
    
    log_result("Test bench completed successfully", true);
    return 0;
}