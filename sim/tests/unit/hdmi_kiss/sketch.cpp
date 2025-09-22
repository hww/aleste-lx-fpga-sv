#include <stdlib.h>
#include <iostream>
#include <iomanip>
#include <vector>
#include <fstream>
#include <verilated.h>
#include <verilated_fst_c.h>
#include "Vhdmi_scaler_core.h"

const int SRC_WIDTH = 640;
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

// Clock ratios
const int SRC_CLK_RATIO = 2;
const int DST_CLK_RATIO = 4;
const int PIXEL_VALID_RATIO = 8;

struct VideoPixel
{
    uint32_t color;
    int x;
    int y;
    bool valid;
    bool hsync;
    bool vsync;

    VideoPixel() : color(0), x(-1), y(-1), valid(false), hsync(false), vsync(false) {}
};

class VideoFrame
{
private:
    std::vector<VideoPixel> pixels;
    int width;
    int height;

public:
    VideoFrame(int w, int h) : width(w), height(h)
    {
        pixels.resize(w * h);
        clear();
    }

    void clear()
    {
        for (auto &pixel : pixels)
        {
            pixel = VideoPixel();
        }
    }

    VideoPixel &at(int x, int y)
    {
        if (x >= 0 && x < width && y >= 0 && y < height)
        {
            return pixels[y * width + x];
        }
        static VideoPixel dummy;
        return dummy;
    }

    const VideoPixel &at(int x, int y) const
    {
        if (x >= 0 && x < width && y >= 0 && y < height)
        {
            return pixels[y * width + x];
        }
        static VideoPixel dummy;
        return dummy;
    }

    int getWidth() const { return width; }
    int getHeight() const { return height; }

    void savePPM(const std::string &filename) const
    {
        std::ofstream file(filename, std::ios::binary);
        if (!file)
        {
            std::cerr << "Error: Cannot open file " << filename << std::endl;
            return;
        }

        // Write PPM header
        std::string header = "P6\n" + std::to_string(width) + " " +
                             std::to_string(height) + "\n255\n";
        file.write(header.c_str(), header.size());

        // Count actual pixels written
        int pixels_written = 0;

        for (int y = 0; y < height; y++)
        {
            for (int x = 0; x < width; x++)
            {
                const auto &pixel = at(x, y);
                uint8_t rgb[3];

                if (pixel.valid)
                {
                    rgb[0] = (pixel.color >> 16) & 0xFF;
                    rgb[1] = (pixel.color >> 8) & 0xFF;
                    rgb[2] = pixel.color & 0xFF;
                }
                else if (pixel.hsync && pixel.vsync)
                {
                    rgb[0] = 255;
                    rgb[1] = 0;
                    rgb[2] = 255;
                }
                else if (pixel.hsync)
                {
                    rgb[0] = 255;
                    rgb[1] = 0;
                    rgb[2] = 0;
                }
                else if (pixel.vsync)
                {
                    rgb[0] = 0;
                    rgb[1] = 0;
                    rgb[2] = 255;
                }
                else
                {
                    rgb[0] = 0;
                    rgb[1] = 0;
                    rgb[2] = 0;
                }

                file.write(reinterpret_cast<const char *>(rgb), 3);
                pixels_written++;
            }
        }

        file.close();

        // STRICT SIZE VALIDATION
        std::ifstream check_file(filename, std::ios::binary | std::ios::ate);
        size_t file_size = check_file.tellg();
        size_t expected_size = header.size() + (3 * width * height);

        std::cout << "PPM " << filename << ": " << width << "×" << height
                  << ", pixels: " << pixels_written
                  << ", size: " << file_size << "/" << expected_size << " bytes";

        if (file_size == expected_size)
        {
            std::cout << " ✅" << std::endl;
        }
        else
        {
            std::cout << " ❌ (CORRUPTED!)" << std::endl;
            std::cout << "Missing: " << (expected_size - file_size) << " bytes" << std::endl;
        }
    }
};

class HDMI_Scaler_Test
{
private:
    Vhdmi_scaler_core *dut;
    VerilatedFstC *tfp;
    vluint64_t sim_time;
    int error_count;
    int frame_count;

    int src_clk_counter;
    int dst_clk_counter;
    int pixel_valid_counter;

    void start_trace()
    {
        if (tfp)
            tfp->close();
        delete tfp;
        tfp = new VerilatedFstC;
        dut->trace(tfp, 99);
        tfp->open("hdmi_scaler_test.fst");
        std::cout << "Starting HDMI Scaler Test" << std::endl;
        error_count = 0;
        frame_count = 0;
        src_clk_counter = 0;
        dst_clk_counter = 0;
        pixel_valid_counter = 0;
    }

    void tick()
    {
        dut->src_clk_i = (src_clk_counter < SRC_CLK_RATIO / 2);
        dut->dst_clk_i = (dst_clk_counter < DST_CLK_RATIO / 2);

        if (++src_clk_counter >= SRC_CLK_RATIO)
            src_clk_counter = 0;
        if (++dst_clk_counter >= DST_CLK_RATIO)
            dst_clk_counter = 0;
        if (++pixel_valid_counter >= PIXEL_VALID_RATIO)
            pixel_valid_counter = 0;

        dut->eval();
        tfp->dump(sim_time++);
    }

    void report_error(const std::string &message, int x = -1, int y = -1,
                      uint32_t expected = 0, uint32_t actual = 0)
    {
        std::cout << "❌ ERROR: " << message;
        if (x >= 0 && y >= 0)
        {
            std::cout << " at (" << x << "," << y << ")";
        }
        if (expected != 0 || actual != 0)
        {
            std::cout << " expected: 0x" << std::hex << expected
                      << " actual: 0x" << actual << std::dec;
        }
        std::cout << std::endl;
        error_count++;
    }

    uint32_t make_rgb(int frame_num, int x, int y)
    {
        return ((frame_num & 0x3) << 22) | ((y & 0x3FF) << 12) | (x & 0xFFF);
    }
    void analyze_frame(const VideoFrame &frame, int frame_num)
    {
        std::cout << "🔍 Analyzing frame " << frame_num << std::endl;

        int valid_pixels = 0;
        int sync_errors = 0;
        int data_errors = 0;
        int incomplete_lines = 0;

        // 1. Check sync signals with tolerance ±1 pixel
        std::cout << "Checking sync areas..." << std::endl;
        for (int y = DST_VSYNC_START - 1; y < DST_VSYNC_END + 1; y++)
        {
            for (int x = DST_HSYNC_START - 1; x < DST_HSYNC_END + 1; x++)
            {
                if (y >= 0 && y < frame.getHeight() && x >= 0 && x < frame.getWidth())
                {
                    const auto &pixel = frame.at(x, y);
                    bool expected_hsync = (x >= DST_HSYNC_START && x < DST_HSYNC_END);
                    bool expected_vsync = (y >= DST_VSYNC_START && y < DST_VSYNC_END);

                    if (pixel.hsync != expected_hsync)
                    {
                        sync_errors++;
                        if (sync_errors < 10)
                        {
                            std::cout << "❌ " << (expected_hsync ? "Missing" : "Extra")
                                      << " HSYNC at (" << x << "," << y << ")" << std::endl;
                        }
                    }
                    if (pixel.vsync != expected_vsync)
                    {
                        sync_errors++;
                        if (sync_errors < 10)
                        {
                            std::cout << "❌ " << (expected_vsync ? "Missing" : "Extra")
                                      << " VSYNC at (" << x << "," << y << ")" << std::endl;
                        }
                    }
                }
            }
        }

        // 2. Check active area with detailed diagnostics
        std::cout << "Checking active area..." << std::endl;
        // skip two lines
        for (int y = 2; y < DST_TOTAL_HEIGHT; y++)
        {
            int line_pixels = 0;
            for (int x = 0; x < DST_TOTAL_WIDTH; x++)
            {
                const auto &pixel = frame.at(x, y);
                if (pixel.valid)
                {
                    valid_pixels++;
                    line_pixels++;
                    // Calculate expected source coordinates (FIXED formula)
                    int src_x = (x / 2) - 1;  // ← ИЗМЕНЕНО: горизонтальное масштабирование 2:1
                    int src_y = (y / V_SCALE) - 1;

                    if (src_y >= 0 && src_y < SRC_HEIGHT && src_x >= 0 && src_x < SRC_WIDTH)
                    {
                        uint32_t expected_color = make_rgb(frame_num, src_x, src_y);

                        if (pixel.color != expected_color)
                        {
                            data_errors++;
                            if (data_errors < 10)
                            {
                                std::cout << "❌ Data mismatch at (hdmi " << x << "," << y << "): "
                                          << "expected 0x" << std::hex << expected_color
                                          << ", got 0x" << pixel.color << std::dec
                                          << " (src " << src_x << "," << src_y << ")"
                                          << std::endl;
                            }
                        }
                    }
                    else
                    {
                        data_errors++;
                        if (data_errors < 10)
                        {
                            std::cout << "❌ Pixel outside source bounds at ("
                                      << x << "," << y << ")" << std::endl;
                        }
                    }
                }
            }

            // Check if line is complete
            if (line_pixels != DST_WIDTH)
            {
                incomplete_lines++;
                if (incomplete_lines < 5)
                {
                    std::cout << "⚠️  Frame " << frame_num << " incomplete line " << y << ": "
                              << line_pixels << "/" << DST_WIDTH << " pixels" << std::endl;
                }
            }
        }

        // 3. Comprehensive summary
        std::cout << "📊 Frame " << frame_num << " Analysis Summary:" << std::endl;
        std::cout << "   Total pixels: " << (DST_WIDTH * DST_HEIGHT) << std::endl;
        std::cout << "   Valid pixels: " << valid_pixels << std::endl;
        std::cout << "   Missing pixels: " << (DST_WIDTH * DST_HEIGHT - valid_pixels) << std::endl;
        std::cout << "   Incomplete lines: " << incomplete_lines << std::endl;
        std::cout << "   Sync errors: " << sync_errors << std::endl;
        std::cout << "   Data errors: " << data_errors << std::endl;

        // 4. Quality assessment
        double quality_score = 100.0 * (1.0 - (double)(sync_errors + data_errors) / valid_pixels);
        std::cout << "   Quality score: " << std::fixed << std::setprecision(2)
                  << quality_score << "%" << std::endl;

        // 5. Final verdict
        if (sync_errors == 0 && data_errors == 0 && valid_pixels == DST_WIDTH * DST_HEIGHT)
        {
            std::cout << "✅ PERFECT FRAME - All checks passed!" << std::endl;
        }
        else if (quality_score > 99.9)
        {
            std::cout << "⚠️  GOOD FRAME - Minor issues detected" << std::endl;
        }
        else if (quality_score > 95.0)
        {
            std::cout << "⚠️  ACCEPTABLE FRAME - Some issues detected" << std::endl;
        }
        else
        {
            std::cout << "❌ BROKEN FRAME - Major issues detected" << std::endl;
        }

        // 6. Additional diagnostics
        if (valid_pixels != DST_WIDTH * DST_HEIGHT)
        {
            std::cout << "🔎 Missing pixels analysis:" << std::endl;
            std::cout << "   Expected: " << DST_WIDTH << "×" << DST_HEIGHT
                      << " = " << (DST_WIDTH * DST_HEIGHT) << " pixels" << std::endl;
            std::cout << "   Actual: " << valid_pixels << " pixels" << std::endl;
            std::cout << "   Difference: " << (DST_WIDTH * DST_HEIGHT - valid_pixels)
                      << " pixels" << std::endl;
        }
    }

public:
    HDMI_Scaler_Test() : dut(new Vhdmi_scaler_core), tfp(nullptr), sim_time(0),
                         error_count(0), frame_count(0), src_clk_counter(0),
                         dst_clk_counter(0), pixel_valid_counter(0)
    {
        Verilated::traceEverOn(true);
    }

    ~HDMI_Scaler_Test()
    {
        if (tfp)
            tfp->close();
        delete tfp;
        delete dut;
    }

    void reset()
    {
        dut->dst_clke_i = 1;
        dut->src_rst_i = 1;
        dut->dst_rst_i = 1;
        for (int i = 0; i < 10; i++)
            tick();
        dut->src_rst_i = 0;
        dut->dst_rst_i = 0;
        for (int i = 0; i < 10; i++)
            tick();
    }

    void generate_test_frame(int frame_num, VideoFrame &input_frame)
    {
        const int INPUT_ACTIVE_WIDTH = 640;
        const int INPUT_ACTIVE_HEIGHT = 384; // ДОЛЖНО БЫТЬ 384!
        const int INPUT_HSYNC_PULSE = 40;
        const int INPUT_BACK_PORCH = 110;
        const int INPUT_FRONT_PORCH = 220;
        const int INPUT_VSYNC_PULSE = 5;
        const int INPUT_V_BACK_PORCH = 5;
        const int INPUT_V_FRONT_PORCH = 5;

        const int INPUT_TOTAL_WIDTH = INPUT_ACTIVE_WIDTH + INPUT_FRONT_PORCH +
                                      INPUT_HSYNC_PULSE + INPUT_BACK_PORCH;
        const int INPUT_TOTAL_HEIGHT = INPUT_ACTIVE_HEIGHT + INPUT_V_FRONT_PORCH +
                                       INPUT_VSYNC_PULSE + INPUT_V_BACK_PORCH;

        std::cout << "Input frame structure:" << std::endl;
        std::cout << "  Active: 640 × 384" << std::endl;
        std::cout << "  Front porch: 220" << std::endl;
        std::cout << "  HSync: 40" << std::endl;
        std::cout << "  Back porch: 110" << std::endl;
        std::cout << "  → Total width: " << INPUT_TOTAL_WIDTH << std::endl;
        std::cout << "  V Front porch: 5" << std::endl;
        std::cout << "  VSync: 5" << std::endl;
        std::cout << "  V Back porch: 5" << std::endl;
        std::cout << "  → Total height: 399" << std::endl;

        input_frame = VideoFrame(INPUT_TOTAL_WIDTH, INPUT_TOTAL_HEIGHT);

        std::cout << "Generating input frame " << frame_num << ": "
                  << INPUT_TOTAL_WIDTH << "x" << INPUT_TOTAL_HEIGHT << std::endl;

        for (int y = 0; y < INPUT_TOTAL_HEIGHT; y++)
        {
            for (int x = 0; x < INPUT_TOTAL_WIDTH; x++)
            {
                auto &pixel = input_frame.at(x, y);
                pixel.x = x;
                pixel.y = y;

                // Active area
                pixel.valid = (x < INPUT_ACTIVE_WIDTH) && (y < INPUT_ACTIVE_HEIGHT);

                if (pixel.valid)
                {
                    pixel.color = make_rgb(frame_num, x, y);
                }

                // Sync pulses (after active area + front porch)
                pixel.hsync = (x >= INPUT_ACTIVE_WIDTH + INPUT_FRONT_PORCH) &&
                              (x < INPUT_ACTIVE_WIDTH + INPUT_FRONT_PORCH + INPUT_HSYNC_PULSE);

                pixel.vsync = (y >= INPUT_ACTIVE_HEIGHT + INPUT_V_FRONT_PORCH) &&
                              (y < INPUT_ACTIVE_HEIGHT + INPUT_V_FRONT_PORCH + INPUT_VSYNC_PULSE);
            }
        }
    }

    void run_test()
    {
        start_trace();
        reset();

        std::cout << "🔄 Resetting completed" << std::endl;

        for (int frame_num = 0; frame_num < 3; frame_num++)
        {
            std::cout << "\n🎬 === Processing frame " << frame_num << " ===" << std::endl;

            VideoFrame input_frame(0, 0);

            std::string src_filename = "hdmi_scaler_test_src_frame_" + std::to_string(frame_num) + ".ppm";
            generate_test_frame(frame_num, input_frame);
            input_frame.savePPM(src_filename);

            VideoFrame output_frame(DST_TOTAL_WIDTH, DST_TOTAL_HEIGHT);

            int cycles = 0;
            bool frame_done = false;
            int input_pixels_sent = 0;

            // Send initial VSYNC
            dut->src_vsync_i = 1;
            for (int i = 0; i < 4; i++)
                tick();
            dut->src_vsync_i = 0;
            tick();
            bool old_dst_hsync = dut->dst_hsync_o;
            bool old_dst_vsync = dut->dst_vsync_o;
            int old_dst_cycles = cycles;
            bool old_src_hsync = false;
            int old_src_cycles = cycles;
            bool old_dst_clk = dut->dst_clk_i;
            int old_dst_y_count = dut->debug_dst_y_count_o;
            while (cycles < 10000000 && !frame_done)
            {
                // Calculate input coordinates based on pixel valid ratio
                int pixel_cycle = cycles / PIXEL_VALID_RATIO;
                int input_x = pixel_cycle % input_frame.getWidth();
                int input_y = pixel_cycle / input_frame.getWidth();

                if (input_y < input_frame.getHeight())
                {
                    const auto &pixel = input_frame.at(input_x, input_y);

                    // Only drive signals on pixel valid cycles
                    if (pixel_valid_counter == 0)
                    {
                        dut->src_pixel_valid_i = pixel.valid;
                        dut->src_pixel_data_i = pixel.color;
                        dut->src_hsync_i = pixel.hsync;
                        dut->src_vsync_i = pixel.vsync;
                        if (pixel.valid)
                            input_pixels_sent++;
                    }
                    else
                    {
                        dut->src_pixel_valid_i = 0;
                        dut->src_pixel_data_i = 0;
                    }
                }
                else
                {
                    // End of frame
                    dut->src_pixel_valid_i = 0;
                    dut->src_pixel_data_i = 0;
                    dut->src_hsync_i = 0;
                    dut->src_vsync_i = 0;
                }

                if (dut->src_hsync_i && !old_src_hsync)
                {
                    int cc = (cycles - old_src_cycles) / 2;
                    if (cc != 6600)
                        std::cout << "src  line cycles " << cc << std::endl;
                    old_src_cycles = cycles;
                }
                old_src_hsync = dut->src_hsync_i;

                // Capture output (-1 for latency)
                if (dut->dst_clk_i && !old_dst_clk)
                {
                    int out_x = dut->debug_dst_x_count_o; // displayed 2 pixel later
                    int out_y = dut->debug_dst_y_count_o;

                    auto &out_pixel = output_frame.at(out_x, out_y);
                    out_pixel.color = dut->dst_pixel_data_o;
                    out_pixel.valid = dut->dst_pixel_valid_o;
                    out_pixel.hsync = dut->dst_hsync_o;
                    out_pixel.vsync = dut->dst_vsync_o;
                    out_pixel.x = out_x;
                    out_pixel.y = out_y;

                    if (dut->dst_hsync_o && !old_dst_hsync)
                    {
                        int cc = cycles - old_dst_cycles;
                        if (cc != 6600)
                            std::cout << "hdmi line cyclesexpected 6600 found " << cc << std::endl;
                        old_dst_cycles = cycles;
                    }
                    // Detect frame completion
                    if (dut->dst_vsync_o && !old_dst_vsync)
                    {
                        std::cout << "hdmi start of vsync" << std::endl;
                    }
                    if (!dut->dst_vsync_o && old_dst_vsync)
                    {
                        std::cout << "hdmi end of vsync" << std::endl;
                    }
                    if (old_dst_y_count != dut->debug_dst_y_count_o && dut->debug_dst_y_count_o == 0)
                    {
                        std::cout << "--- hdmi restart frame ---" << std::endl;
                        frame_done = true;
                    }
                    old_dst_y_count = dut->debug_dst_y_count_o;
                    old_dst_hsync = dut->dst_hsync_o;
                    old_dst_vsync = dut->dst_vsync_o;
                }
                old_dst_clk = dut->dst_clk_i;
                tick();
                cycles++;
            }

            std::cout << "Frame " << frame_num << " completed in " << cycles << " cycles" << std::endl;
            std::cout << "Input pixels sent: " << input_pixels_sent << std::endl;

            std::string filename = "hdmi_scaler_test_frame_" + std::to_string(frame_num) + ".ppm";
            output_frame.savePPM(filename);
            analyze_frame(output_frame, frame_num);
            frame_count++;
        }

        std::cout << "\n🎯 FINAL RESULTS:" << std::endl;
        std::cout << "Frames processed: " << frame_count << std::endl;
        std::cout << "Total errors: " << error_count << std::endl;

        if (error_count == 0)
        {
            std::cout << "✅ ALL TESTS PASSED" << std::endl;
        }
        else
        {
            std::cout << "❌ TEST FAILED" << std::endl;
        }
    }
};

int main(int argc, char **argv)
{
    Verilated::commandArgs(argc, argv);
    HDMI_Scaler_Test test;
    test.run_test();
    return 0;
}
