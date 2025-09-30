#include <stdlib.h>
#include <iostream>
#include <iomanip>
#include <vector>
#include <verilated.h>
#include <verilated_fst_c.h>
#include "Vmc6845mod.h"

class MC6845_Test {
private:
    Vmc6845mod *dut;
    VerilatedFstC *tfp;
    vluint64_t sim_time;
    
    // Clock counters
    int wb_clk_counter;
    int pix_clk_counter;
    int pix_en_counter;
    
    // Clock states
    bool wb_clk_prev;
    bool pix_clk_prev;
    
    // Test state
    int frame_count;
    int error_count;

public:
    MC6845_Test() : dut(new Vmc6845mod), tfp(nullptr), sim_time(0),
                   wb_clk_counter(0), pix_clk_counter(0), pix_en_counter(0),
                   wb_clk_prev(false), pix_clk_prev(false),
                   frame_count(0), error_count(0) {
        Verilated::traceEverOn(true);
    }

    ~MC6845_Test() {
        if (tfp) tfp->close();
        delete tfp;
        delete dut;
    }

    void start_trace() {
        tfp = new VerilatedFstC;
        dut->trace(tfp, 99);
        tfp->open("mc6845_test.fst");
    }

    void tick() {
        wb_clk_prev = dut->wb_clk_i;
        pix_clk_prev = dut->pix_clk_i;

        // Generate clocks (WB: 100MHz, Pixel: 32MHz)
        dut->wb_clk_i = (wb_clk_counter < 5);
        dut->pix_clk_i = (pix_clk_counter < 16);
        
        // Pixel enable (8 MHz strobe)
        dut->pix_en_i = (pix_en_counter == 0);

        wb_clk_counter++;
        pix_clk_counter++;
        pix_en_counter++;

        if (wb_clk_counter >= 10) wb_clk_counter = 0;
        if (pix_clk_counter >= 50) pix_clk_counter = 0;  // 32 MHz
        if (pix_en_counter >= 4) pix_en_counter = 0;     // 8 MHz enable

        dut->eval();
        tfp->dump(sim_time++);
    }

    bool wb_clk_rising_edge() const {
        return !wb_clk_prev && dut->wb_clk_i;
    }

    bool pix_clk_rising_edge() const {
        return !pix_clk_prev && dut->pix_clk_i;
    }

    void reset() {
        dut->wb_rst_i = 1;
        dut->wb_rst_i = 1;
        dut->wb_cyc_i = 0;
        dut->wb_stb_i = 0;
        dut->wb_we_i = 0;
        dut->sync_i = 0;

        for (int i = 0; i < 10; i++) tick();
        
        dut->wb_rst_i = 0;
        dut->wb_rst_i = 0;
        
        for (int i = 0; i < 10; i++) tick();
    }

    // Wishbone write operation
    void wb_write(uint32_t addr, uint8_t data) {
        dut->wb_cyc_i = 1;
        dut->wb_stb_i = 1;
        dut->wb_we_i = 1;
        dut->wb_adr_i = addr;
        dut->wb_dat_i = data;
        dut->wb_sel_i = 0xF;

        // Wait for acknowledge
        int timeout = 100;
        while (!dut->wb_ack_o && timeout > 0) {
            tick();
            timeout--;
        }

        if (!dut->wb_ack_o) {
            std::cout << "❌ WB write timeout at address 0x" << std::hex << addr << std::dec << std::endl;
            error_count++;
        }

        dut->wb_cyc_i = 0;
        dut->wb_stb_i = 0;
        tick();
    }

    // Wishbone read operation  
    uint8_t wb_read(uint32_t addr) {
        dut->wb_cyc_i = 1;
        dut->wb_stb_i = 1;
        dut->wb_we_i = 0;
        dut->wb_adr_i = addr;
        dut->wb_sel_i = 0xF;

        int timeout = 100;
        while (!dut->wb_ack_o && timeout > 0) {
            tick();
            timeout--;
        }

        uint8_t data = 0;
        if (dut->wb_ack_o) {
            data = dut->wb_dat_o & 0xFF;
        } else {
            std::cout << "❌ WB read timeout at address 0x" << std::hex << addr << std::dec << std::endl;
            error_count++;
        }

        dut->wb_cyc_i = 0;
        dut->wb_stb_i = 0;
        tick();

        return data;
    }

    void test_registers() {
        std::cout << "🧪 Testing register access..." << std::endl;

        // Test address register write
        wb_write(0x6840, 0x01);  // Write to address register (R1 - HDISPLAY)
        wb_write(0x6841, 80);    // Write 80 chars to R1

        // Verify write
        wb_write(0x6840, 0x01);  // Select R1
        uint8_t readback = wb_read(0x6841);  // Read R1
        if (readback == 80) {
            std::cout << "✅ Register write/read test PASSED" << std::endl;
        } else {
            std::cout << "❌ Register test FAILED: wrote 80, read " << (int)readback << std::endl;
            error_count++;
        }

        // Test multiple registers
        wb_write(0x6840, 0x02); wb_write(0x6841, 90);  // HSYNCPOS
        wb_write(0x6840, 0x06); wb_write(0x6841, 25);  // VDISPLAY
        wb_write(0x6840, 0x07); wb_write(0x6841, 26);  // VSYNCPOS
        wb_write(0x6840, 0x0A); wb_write(0x6841, 6);   // CURSOR START
        wb_write(0x6840, 0x0B); wb_write(0x6841, 7);   // CURSOR END

        std::cout << "📝 Register test complete" << std::endl;
    }

    void test_cursor() {
        std::cout << "🎯 Testing cursor..." << std::endl;

        // Set cursor position
        wb_write(0x6840, 0x0E); wb_write(0x6841, 0x00);  // Cursor high
        wb_write(0x6840, 0x0F); wb_write(0x6841, 0x10);  // Cursor low (position 16)

        // Generate some video to see cursor
        int cursor_detected = 0;
        int frames_to_test = 2;
        int cycles = 0;
        int MAXCYCLES = 10000;
        while (frame_count < frames_to_test && ++cycles<MAXCYCLES) {
            // Generate sync pulse occasionally
            if (sim_time % 10000 == 0) {
                dut->sync_i = 1;
                tick();
                dut->sync_i = 0;
            }

            // Monitor cursor output
            if (dut->cursor_o && dut->de_o) {
                cursor_detected++;
                if (cursor_detected == 1) {
                    std::cout << "✅ Cursor detected at MA=" << dut->ma_o 
                              << " RA=" << (int)dut->ra_o << std::endl;
                }
            }

            // Count frames
            if (pix_clk_rising_edge() && dut->newframe_o) {
                frame_count++;
                std::cout << "📊 Frame " << frame_count << " completed" << std::endl;
            }

            tick();
        }

        if (cursor_detected > 0) {
            std::cout << "✅ Cursor test PASSED (" << cursor_detected << " activations)" << std::endl;
        } else {
            std::cout << "❌ Cursor test FAILED - no cursor detected" << std::endl;
            error_count++;
        }
    }

    void test_video_timing() {
        std::cout << "📺 Testing video timing..." << std::endl;

        int de_pulses = 0;
        int newline_count = 0;
        int newframe_count = 0;
        int max_cycles = 1000000;

        frame_count = 0;

        while (sim_time < max_cycles && frame_count < 3) {
            // Random sync pulses
            if (rand() % 5000 == 0) {
                dut->sync_i = 1;
                tick();
                dut->sync_i = 0;
            }

            // Count timing events
            if (dut->de_o) de_pulses++;
            if (dut->newline_o) newline_count++;
            if (dut->newframe_o) {
                newframe_count++;
                frame_count++;
                std::cout << "🎬 Frame " << frame_count 
                          << " - DE: " << de_pulses 
                          << " Lines: " << newline_count << std::endl;
            }

            tick();
        }

        // Basic timing checks
        if (de_pulses > 0 && newline_count > 0 && newframe_count > 0) {
            std::cout << "✅ Video timing test PASSED" << std::endl;
            std::cout << "   DE pulses: " << de_pulses << std::endl;
            std::cout << "   Newlines: " << newline_count << std::endl;
            std::cout << "   Newframes: " << newframe_count << std::endl;
        } else {
            std::cout << "❌ Video timing test FAILED" << std::endl;
            error_count++;
        }
    }

    void run_all_tests() {
        start_trace();
        std::cout << "🚀 Starting MC6845 Mod Test Suite" << std::endl;

        reset();
        std::cout << "🔄 Reset completed" << std::endl;

        test_registers();
        test_video_timing();
        test_cursor();

        std::cout << "\n🎯 TEST SUITE COMPLETE" << std::endl;
        std::cout << "Errors: " << error_count << std::endl;
        std::cout << "Frames simulated: " << frame_count << std::endl;

        if (error_count == 0) {
            std::cout << "💚 ALL TESTS PASSED" << std::endl;
        } else {
            std::cout << "💔 SOME TESTS FAILED" << std::endl;
        }
    }
};

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    
    MC6845_Test test;
    test.run_all_tests();
    
    return 0;
}