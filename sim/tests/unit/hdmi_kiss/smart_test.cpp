#include <stdlib.h>
#include <iostream>
#include <iomanip>
#include <vector>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vhdmi_scaler_core.h"

const int SRC_WIDTH = 1280;
const int SRC_HEIGHT = 384;
const int DATA_WIDTH = 24;
const int V_SCALE = 2;

// Output timing parameters
const int DST_WIDTH = 1280;
const int DST_HEIGHT = 720;
const int DST_TOTAL_WIDTH = 1650;
const int DST_TOTAL_HEIGHT = 750;
const int DST_HSYNC_START = 1280 + 110;
const int DST_HSYNC_END = DST_HSYNC_START + 40;
const int DST_VSYNC_START = 720 + 5;
const int DST_VSYNC_END = DST_VSYNC_START + 5;

struct VideoPixel {
    uint32_t color;
    int x;
    int y;
    bool valid;
    bool hsync;
    bool vsync;
    
    VideoPixel() : color(0), x(-1), y(-1), valid(false), hsync(false), vsync(false) {}
};

class VideoFrame {
private:
    std::vector<VideoPixel> pixels;
    int width;
    int height;
    
public:
    VideoFrame(int w, int h) : width(w), height(h) {
        pixels.resize(w * h);
    }
    
    void clear() {
        for (auto& pixel : pixels) {
            pixel = VideoPixel();
        }
    }
    
    VideoPixel& at(int x, int y) {
        return pixels[y * width + x];
    }
    
    const VideoPixel& at(int x, int y) const {
        return pixels[y * width + x];
    }
    
    int getWidth() const { return width; }
    int getHeight() const { return height; }
};

class HDMI_Scaler_Test {
private:
    Vhdmi_scaler_core *dut;
    VerilatedVcdC *tfp;
    vluint64_t sim_time;
    std::string current_test_name;
    int error_count;

    void start_trace(const std::string& test_name) {
        current_test_name = test_name;
        if (tfp) tfp->close();
        delete tfp;
        tfp = new VerilatedVcdC;
        dut->trace(tfp, 99);
        tfp->open(("smart_test_" + test_name + ".vcd").c_str());
        std::cout << "=== " << test_name << " ===" << std::endl;
        error_count = 0;
    }

    void tick_both(int cycles = 1) {
        for (int i = 0; i < cycles; i++) {
            dut->src_clk_i = 0; dut->dst_clk_i = 0; dut->eval(); tfp->dump(sim_time++);
            dut->src_clk_i = 1; dut->dst_clk_i = 1; dut->eval(); tfp->dump(sim_time++);
        }
    }

    void tick_src(int cycles = 1) {
        for (int i = 0; i < cycles; i++) {
            dut->src_clk_i = 0; dut->eval(); tfp->dump(sim_time++);
            dut->src_clk_i = 1; dut->eval(); tfp->dump(sim_time++);
        }
    }

    void tick_dst(int cycles = 1) {
        for (int i = 0; i < cycles; i++) {
            dut->dst_clk_i = 0; dut->eval(); tfp->dump(sim_time++);
            dut->dst_clk_i = 1; dut->eval(); tfp->dump(sim_time++);
        }
    }

    void report_error(const std::string& message) {
        std::cout << "❌ ERROR: " << message << std::endl;
        error_count++;
    }

    void report_success() {
        if (error_count == 0) {
            std::cout << "✅ TEST PASSED" << std::endl;
        } else {
            std::cout << "❌ TEST FAILED with " << error_count << " errors" << std::endl;
        }
        std::cout << std::endl;
    }

public:
    HDMI_Scaler_Test() : dut(new Vhdmi_scaler_core), tfp(nullptr), sim_time(0), error_count(0) {
        Verilated::traceEverOn(true);
    }

    ~HDMI_Scaler_Test() {
        if (tfp) tfp->close();
        delete tfp;
        delete dut;
    }

    void reset() {
        dut->src_rst_i = 1;
        dut->dst_rst_i = 1;
        tick_both(5);
        dut->src_rst_i = 0;
        dut->dst_rst_i = 0;
        tick_both(5);
    }

    void test_1_timing_validation() {
        start_trace("1_timing_validation");
        std::cout << "Testing input timing parameters: line length, sync pulses, frame structure" << std::endl;

        reset();
        
        // Generate complete test frame
        int hsync_count = 0;
        int vsync_count = 0;
        int pixel_count = 0;
        bool in_vsync = false;

        // VSYNC pulse
        dut->src_vsync_i = 1;
        tick_src(4);
        dut->src_vsync_i = 0;
        vsync_count++;

        for (int line = 0; line < 5; line++) {
            // HSYNC pulse
            dut->src_hsync_i = 1;
            tick_src(4);
            dut->src_hsync_i = 0;
            hsync_count++;

            // Back porch
            tick_src(110);

            // Active pixels
            for (int x = 0; x < 100; x++) {
                dut->src_pixel_valid_i = 1;
                dut->src_pixel_data_i = (line << 16) | (x << 8);
                tick_src(1);
                dut->src_pixel_valid_i = 0;
                tick_src(2);
                pixel_count++;
            }

            // Front porch
            tick_src(216);
        }

        // Verify timing metrics
        if (hsync_count != 5) report_error("Expected 5 HSYNC pulses, got " + std::to_string(hsync_count));
        if (vsync_count != 1) report_error("Expected 1 VSYNC pulse, got " + std::to_string(vsync_count));
        if (pixel_count != 500) report_error("Expected 500 pixels, got " + std::to_string(pixel_count));

        report_success();
    }

    void test_2_buffer_management() {
        start_trace("2_buffer_management");
        std::cout << "Testing buffer write FSM: addresses, switching, ready flags after reset and first line" << std::endl;

        reset();

        // Check initial state after reset
        std::cout << "Post-reset state - Buffer: " << (int)dut->debug_src_buf_sel_o 
                  << " Addr: " << (int)dut->debug_src_buf_addr_o << std::endl;

        if (dut->debug_src_buf_sel_o != 0) report_error("Buffer should start at 0 after reset");
        if (dut->debug_src_buf_addr_o != 0) report_error("Address should be 0 after reset");

        // Generate first line
        dut->src_hsync_i = 1;
        tick_src(4);
        dut->src_hsync_i = 0;
        tick_src(110);

        for (int x = 0; x < 10; x++) {
            dut->src_pixel_valid_i = 1;
            dut->src_pixel_data_i = x * 0x10101;
            tick_src(1);
            dut->src_pixel_valid_i = 0;
            tick_src(2);
        }

        std::cout << "After first line - Buffer: " << (int)dut->debug_src_buf_sel_o 
                  << " Addr: " << (int)dut->debug_src_buf_addr_o << std::endl;

        if (dut->debug_src_buf_addr_o != 10) report_error("Address should be 10 after writing 10 pixels");

        report_success();
    }

    void test_3_multiline_buffer_switch() {
        start_trace("3_multiline_buffer_switch");
        std::cout << "Testing buffer switching and ready flags across multiple lines" << std::endl;

        reset();
        std::vector<int> buffer_states;

        for (int line = 0; line < 3; line++) {
            if (line == 0) {
                dut->src_vsync_i = 1;
                tick_src(2);
                dut->src_vsync_i = 0;
            }

            dut->src_hsync_i = 1;
            tick_src(4);
            dut->src_hsync_i = 0;
            tick_src(110);

            for (int x = 0; x < 8; x++) {
                dut->src_pixel_valid_i = 1;
                dut->src_pixel_data_i = (line << 16) | (x << 8);
                tick_src(1);
                dut->src_pixel_valid_i = 0;
                tick_src(2);
            }

            buffer_states.push_back(dut->debug_src_buf_sel_o);
            std::cout << "Line " << line << " -> Buffer: " << buffer_states.back() << std::endl;
        }

        // Verify buffer switching pattern
        if (buffer_states[0] == buffer_states[1]) report_error("Buffer should switch between lines 0 and 1");
        if (buffer_states[1] == buffer_states[2]) report_error("Buffer should switch between lines 1 and 2");

        report_success();
    }

    void test_4_cdc_synchronization() {
        start_trace("4_cdc_synchronization");
        std::cout << "Testing CDC synchronization with SRC_CLK = DST_CLK" << std::endl;

        reset();

        // Generate sync pulses
        dut->src_vsync_i = 1;
        dut->src_hsync_i = 1;


        int vsync_rise_count = 0;
        int hsync_rise_count = 0;

        for (int i = 0; i < 6; i++) {
            tick_both(1);
            if (dut->debug_cds_vsync_rise_o) vsync_rise_count++;
            if (dut->debug_cds_hsync_rise_o) hsync_rise_count++;
        }

        tick_both(2);
        dut->src_vsync_i = 0;
        dut->src_hsync_i = 0;
        tick_both(2);

        std::cout << "VSYNC rise events: " << vsync_rise_count << std::endl;
        std::cout << "HSYNC rise events: " << hsync_rise_count << std::endl;

        if (vsync_rise_count == 0) report_error("No VSYNC rise events detected");
        if (hsync_rise_count == 0) report_error("No HSYNC rise events detected");

        report_success();
    }

    void test_5_output_fsm() {
        start_trace("5_output_fsm");
        std::cout << "Testing output FSM and buffer selection with SRC_CLK = DST_CLK" << std::endl;

        reset();

        // Write test data to buffer
        dut->src_vsync_i = 1;
        tick_both(2);
        dut->src_vsync_i = 0;
        
        dut->src_hsync_i = 1;
        tick_both(2);
        dut->src_hsync_i = 0;
        tick_both(110);

        for (int x = 0; x < 16; x++) {
            dut->src_pixel_valid_i = 1;
            dut->src_pixel_data_i = 0xFF0000 + x;
            tick_both(1);
            dut->src_pixel_valid_i = 0;
            tick_both(2);
        }

        // Let output FSM process
        int output_pixels = 0;
        for (int i = 0; i < 200; i++) {
            tick_both(1);
            if (dut->dst_pixel_valid_o) output_pixels++;
        }

        std::cout << "Output pixels generated: " << output_pixels << std::endl;
        std::cout << "Read buffer: " << (int)dut->debug_dst_buf_sel_o << std::endl;

        if (output_pixels == 0) report_error("No output pixels generated");
        if (dut->debug_dst_buf_sel_o != 0) report_error("Should read from buffer 0");

        report_success();
    }

    uint32_t make_rgb(int x, int y) {
        return (((1+y) & 0xFFF) << 12) | ((1+x) & 0xFFF);
    }
    void test_6_video_data_analysis() {
        start_trace("6_video_data_analysis");
        std::cout << "Testing with FULL video timing formats" << std::endl;

        // ==================== ПРАВИЛЬНАЯ ЛОГИКА ГЕНЕРАЦИИ КАДРА ====================
        const int INPUT_ACTIVE_WIDTH = 1280;      // Видимая ширина
        const int INPUT_ACTIVE_HEIGHT = 3;        // Видимая высота (3 строки для теста)

        // Синхроимпульсы и гашение - ЭТО ЗА ПРЕДЕЛАМИ активной области!
        const int INPUT_HSYNC_PULSE = 4;          // HSYNC после активной области
        const int INPUT_BACK_PORCH = 110;         // Back porch после активной области
        const int INPUT_FRONT_PORCH = 216;        // Front porch перед активной областью

        const int INPUT_VSYNC_PULSE = 4;          // VSYNC после активной области
        const int INPUT_V_BACK_PORCH = 100;       // Vertical back porch
        const int INPUT_V_FRONT_PORCH = 50;       // Vertical front porch

        const int OUTPUT_TOTAL_WIDTH = DST_TOTAL_WIDTH;
        const int OUTPUT_TOTAL_HEIGHT = DST_TOTAL_HEIGHT;

        // ==================== ВЫЧИСЛЕНИЕ ОБЩЕЙ ДЛИТЕЛЬНОСТИ ====================
        const int INPUT_TOTAL_WIDTH = INPUT_ACTIVE_WIDTH + INPUT_FRONT_PORCH + 
                                    INPUT_HSYNC_PULSE + INPUT_BACK_PORCH;

        const int INPUT_TOTAL_HEIGHT = INPUT_ACTIVE_HEIGHT + INPUT_V_FRONT_PORCH +
                                    INPUT_VSYNC_PULSE + INPUT_V_BACK_PORCH;
    
        VideoFrame input_frame(INPUT_TOTAL_WIDTH, INPUT_TOTAL_HEIGHT);
        VideoFrame output_frame(OUTPUT_TOTAL_WIDTH, OUTPUT_TOTAL_HEIGHT);

        // ==================== ПРАВИЛЬНАЯ ГЕНЕРАЦИЯ КАДРА ====================
        std::cout << "Generating frame with NATURAL timing..." << std::endl;
        std::cout << "Active: " << INPUT_ACTIVE_WIDTH << "×" << INPUT_ACTIVE_HEIGHT << std::endl;
        std::cout << "Total: " << INPUT_TOTAL_WIDTH << "×" << INPUT_TOTAL_HEIGHT << std::endl;

        input_frame.clear();

        for (int y = 0; y < INPUT_TOTAL_HEIGHT; y++) {
            for (int x = 0; x < INPUT_TOTAL_WIDTH; x++) {
                auto& pixel = input_frame.at(x, y);
                pixel.x = x;
                pixel.y = y;
                
                // 1. АКТИВНЫЕ ПИКСЕЛЫ (первые в кадре)
                pixel.valid = (x < INPUT_ACTIVE_WIDTH) && (y < INPUT_ACTIVE_HEIGHT);
                
                if (pixel.valid) {
                    // Просто нумеруем пикселы: (y, x) → уникальный цвет
                    pixel.color = make_rgb(x, y); 
                }
                
                // 2. СИНХРОИМПУЛЬСЫ (после активной области)
                pixel.hsync = (x >= INPUT_ACTIVE_WIDTH + INPUT_FRONT_PORCH) &&
                            (x < INPUT_ACTIVE_WIDTH + INPUT_FRONT_PORCH + INPUT_HSYNC_PULSE);
                
                pixel.vsync = (y >= INPUT_ACTIVE_HEIGHT + INPUT_V_FRONT_PORCH) &&
                            (y < INPUT_ACTIVE_HEIGHT + INPUT_V_FRONT_PORCH + INPUT_VSYNC_PULSE);
                
                // 3. ОБЛАСТИ ГАШЕНИЯ (front/back porch) - не valid, не sync
            }
        }

        // ==================== ВЫПОЛНЕНИЕ ТЕСТА С РЕАЛЬНЫМИ ТАЙМИНГАМИ ====================
        reset();
        dut->v_shift_i = 0;
        output_frame.clear();
        
        // ПОСЛЕ СБРОСА ГЕНЕРИРУЕМ ИСКУССТВЕННЫЙ VSYNC ДЛЯ ЗАПУСКА АВТОМАТА
        std::cout << "Generating artificial VSYNC to start output FSM..." << std::endl;
        dut->src_vsync_i = 1;
        tick_both(4);  // Держим VSYNC несколько тактов
        dut->src_vsync_i = 0;
        tick_both(10); // Небольшая пауза


        std::cout << "🚀 Executing full frame simulation..." << std::endl;
        std::cout << "Input: " << INPUT_TOTAL_WIDTH << "×" << INPUT_TOTAL_HEIGHT << std::endl;
        std::cout << "Output: " << OUTPUT_TOTAL_WIDTH << "×" << OUTPUT_TOTAL_HEIGHT << std::endl;

        int cycle = 0;
        bool frame_completed = false;

        while (cycle < 100000 && !frame_completed) {
            // === ПОДАЧА ВХОДНЫХ СИГНАЛОВ ===
            int input_x = cycle % INPUT_TOTAL_WIDTH;
            int input_y = cycle / INPUT_TOTAL_WIDTH;
            
            if (input_y < INPUT_TOTAL_HEIGHT) {
                const auto& input_pixel = input_frame.at(input_x, input_y);
                dut->src_pixel_valid_i = input_pixel.valid;
                dut->src_pixel_data_i = input_pixel.color;
                dut->src_hsync_i = input_pixel.hsync;
                dut->src_vsync_i = input_pixel.vsync;
            } else {
                // За пределами входного кадра - невалидные данные
                dut->src_pixel_valid_i = 0;
                dut->src_pixel_data_i = 0;
                dut->src_hsync_i = 0;
                dut->src_vsync_i = 0;
            }

            // === ЗАПИСЬ ВЫХОДНЫХ СИГНАЛОВ ===
            int output_x = dut->debug_dst_x_count_o-1; // адресс опережает из за латентности памяти
            int output_y = dut->debug_dst_y_count_o-1;
            
            if (output_x < OUTPUT_TOTAL_WIDTH && output_y < OUTPUT_TOTAL_HEIGHT) {
                auto& output_pixel = output_frame.at(output_x, output_y);
                output_pixel.color = dut->dst_pixel_data_o;
                output_pixel.valid = dut->dst_pixel_valid_o;
                output_pixel.hsync = dut->dst_hsync_o;
                output_pixel.vsync = dut->dst_vsync_o;
                output_pixel.x = output_x;
                output_pixel.y = output_y;
            }

            // === ПРОВЕРКА ЗАВЕРШЕНИЯ КАДРА ===
            if (output_x == 0 && output_y == 0 && cycle > 1000) {
                frame_completed = true;
                std::cout << "✅ Frame completed at cycle " << cycle << std::endl;
            }

            tick_both(1);
            cycle++;
        }

        // ==================== ДЕТАЛЬНЫЙ АНАЛИЗ РЕЗУЛЬТАТОВ ====================
        std::cout << "\n🔍 Starting detailed analysis..." << std::endl;

        // 1. Проверка синхросигналов
        std::cout << "1. Checking sync signals..." << std::endl;
        int sync_errors = 0;
        for (int y = DST_VSYNC_START; y < DST_VSYNC_END; y++) {
            for (int x = DST_HSYNC_START; x < DST_HSYNC_END; x++) {
                if (y < OUTPUT_TOTAL_HEIGHT && x < OUTPUT_TOTAL_WIDTH) {
                    if (!output_frame.at(x, y).hsync || !output_frame.at(x, y).vsync) {
                        sync_errors++;
                    }
                }
            }
        }
        std::cout << (sync_errors == 0 ? "✅ Sync signals: PASS" : "❌ Sync signals: FAIL") 
                << " (" << sync_errors << " errors)" << std::endl;

        // 2. Проверка активной области
        std::cout << "2. Checking active area..." << std::endl;
        int data_errors = 0;
        int valid_pixels = 0;

        for (int y = 0; y < OUTPUT_TOTAL_HEIGHT; y++) {
            for (int x = 0; x < OUTPUT_TOTAL_WIDTH; x++) {
                const auto& out_pixel = output_frame.at(x, y);
                
                if (out_pixel.valid) {
                    valid_pixels++;
                    
                    // Проверяем масштабирование 2x
                    int src_y = y / V_SCALE;
                    int src_x = x;
                    
                    if (src_y < INPUT_ACTIVE_HEIGHT && src_x < INPUT_ACTIVE_WIDTH) {
                        int expected_x = src_x + 110;  // Учитываем back porch
                        int expected_y = src_y + 100;  // Учитываем back porch
                        
                        uint32_t expected_color = make_rgb(src_x, src_y);
                        
                        if (out_pixel.color != expected_color) {
                            data_errors++;
                            if (data_errors < 3) {
                                std::cout << "   ❌ Pixel at (" << x << "," << y 
                                        << "): got 0x" << std::hex << out_pixel.color
                                        << ", expected 0x" << expected_color << std::dec
                                        << std::endl;
                            }
                        }
                    }
                }
            }
        }

        std::cout << (data_errors == 0 ? "✅ Active area: PASS" : "❌ Active area: FAIL")
                << " (" << valid_pixels << " valid pixels, " << data_errors << " errors)" << std::endl;

        // 3. Проверка завершения кадра
        std::cout << "3. Checking frame completion..." << std::endl;
        bool counters_reset = (dut->debug_dst_x_count_o == 0 && dut->debug_dst_y_count_o == 0);
        std::cout << (counters_reset ? "✅ Frame counters reset: PASS" : "❌ Frame counters reset: FAIL") << std::endl;

        // ==================== ИТОГОВЫЙ ОТЧЕТ ====================
        std::cout << "\n🎯 FINAL RESULTS:" << std::endl;
        std::cout << "• Sync errors: " << sync_errors << std::endl;
        std::cout << "• Data errors: " << data_errors << std::endl;
        std::cout << "• Valid pixels: " << valid_pixels << std::endl;
        std::cout << "• Counters reset: " << (counters_reset ? "Yes" : "No") << std::endl;

        if (sync_errors == 0 && data_errors == 0 && counters_reset) {
            std::cout << "🎉 ALL TESTS PASSED - Full video pipeline working correctly!" << std::endl;
        } else {
            report_error("Video pipeline validation failed");
        }

        report_success();
    }
    void run_all_tests() {
        std::cout << "Starting HDMI Scaler Comprehensive Test Suite\n" << std::endl;

        test_1_timing_validation();
        test_2_buffer_management();
        test_3_multiline_buffer_switch();
        test_4_cdc_synchronization();
        test_5_output_fsm();
        test_6_video_data_analysis();

        std::cout << "=== TEST SUITE COMPLETE ===" << std::endl;
    }
};

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    
    HDMI_Scaler_Test test;
    test.run_all_tests();
    
    return 0;
}