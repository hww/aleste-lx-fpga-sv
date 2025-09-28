#include <stdlib.h>
#include <iostream>
#include <iomanip>
#include <vector>
#include <fstream>
#include <verilated.h>
#include <verilated_fst_c.h>
#include "Vhdmi_scaler.h"

// Clock ratios
const int SRC_CLK_RATIO = 4; // Медленнее в 2 раза (13.5MHz)
const int DST_CLK_RATIO = 4; // Быстрее в 2 раза (27MHz)
const int PIXEL_VALID_RATIO = 8;

// Settings
const int V_SCALE = 2;

// Output timing parameters (PAL 720x576)
const int DST_WIDTH = 720;
const int DST_HEIGHT = 576;
const int DST_TOTAL_WIDTH = 864;
const int DST_TOTAL_HEIGHT = 625; //+1 make it dividavle by 2

// PAL 720x576 Configuration but fake timing for test
const int SRC_WIDTH = DST_WIDTH;
const int SRC_HEIGHT = (DST_HEIGHT / 2);
const int SRC_TOTAL_WIDTH = DST_TOTAL_WIDTH;
const int SRC_TOTAL_HEIGHT = 312;

struct VideoPixel
{
    uint32_t color;
    int x;
    int y;
    bool valid;
    bool newline;
    bool newframe;

    VideoPixel() : color(0), x(-1), y(-1), valid(false), newline(false), newframe(false) {}
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

        int pixels_written = 0;

        for (int y = 0; y < height; y++)
        {
            for (int x = 0; x < width; x++)
            {
                const auto &pixel = at(x, y);
                uint8_t rgb[3];

                if (pixel.newline && pixel.newframe)
                {
                    rgb[0] = 255; // While for newline+newframe
                    rgb[1] = 255;
                    rgb[2] = 255;
                }
                else if (pixel.newline)
                {
                    rgb[0] = 255; // Red for newline
                    rgb[1] = 0;
                    rgb[2] = 0;
                }
                else if (pixel.newframe)
                {
                    rgb[0] = 0; // Blue for newframe
                    rgb[1] = 0;
                    rgb[2] = 255;
                }
                else if (pixel.valid)
                {
                    rgb[0] = (pixel.color >> 16) & 0xFF;
                    rgb[1] = (pixel.color >> 8) & 0xFF;
                    rgb[2] = pixel.color & 0xFF;
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
        }
    }

    void saveHexDump(const std::string &filename, int maxPointsPerLine = 80) const
    {
        std::ofstream file(filename);
        if (!file)
        {
            std::cerr << "Error: Cannot open file " << filename << std::endl;
            return;
        }

        int lineNumberWidth = 4;
        if (height >= 10000)
        {
            lineNumberWidth = static_cast<int>(std::to_string(height).length());
        }

        int pointsPerLine = maxPointsPerLine / 7;
        if (pointsPerLine <= 0)
            pointsPerLine = 1;
        bool useTruncation = (pointsPerLine < width);

        for (int y = 0; y < height; y++)
        {
            file << std::setw(lineNumberWidth) << std::setfill('0') << y << " ";

            if (!useTruncation)
            {
                for (int x = 0; x < width; x++)
                {
                    const auto &pixel = at(x, y);
                    file << std::hex << std::uppercase << std::setw(6)
                         << std::setfill('0') << pixel.color;
                    if (x < width - 1)
                        file << " ";
                }
            }
            else
            {
                int firstHalf = pointsPerLine / 2;
                int secondHalf = pointsPerLine - firstHalf;

                for (int x = 0; x < firstHalf; x++)
                {
                    const auto &pixel = at(x, y);
                    file << std::hex << std::uppercase << std::setw(6)
                         << std::setfill('0') << pixel.color << " ";
                }

                file << ".... ";

                for (int x = width - secondHalf; x < width; x++)
                {
                    const auto &pixel = at(x, y);
                    file << std::hex << std::uppercase << std::setw(6)
                         << std::setfill('0') << pixel.color;
                    if (x < width - 1)
                        file << " ";
                }
            }
            file << std::endl;
        }

        file.close();
        std::cout << "Hex dump " << filename << ": " << width << "×" << height
                  << (useTruncation ? " (with truncation)" : " (full)") << std::endl;
    }
};

class HDMI_Scaler_Test
{
private:
    Vhdmi_scaler *dut;
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
            std::cout << " at (" << x << "," << y << ")";
        if (expected != 0 || actual != 0)
        {
            std::cout << " expected: 0x" << std::hex << expected
                      << " actual: 0x" << actual << std::dec;
        }
        std::cout << std::endl;
        error_count++;
    }

    uint32_t make_rgb(int x, int y)
    {
        return ((x & 0xFFF) << 12) | (y & 0xFFF);
    }
    uint32_t decode_rgb_x(uint32_t rgb)
    {
        return ((rgb>>12) & 0xFFF);
    }
    uint32_t decode_rgb_y(uint32_t rgb)
    {
        return (rgb & 0xFFF);
    }

    void analyze_frame(const VideoFrame &frame, int frame_count)
    {
        std::cout << "🔍 Analyzing frame " << frame_count << std::endl;

        int valid_pixels = 0;
        int newline_errors = 0;
        int newframe_errors = 0;
        int data_errors = 0;

        // Check active area (skip 2 lines)
        for (int y = 2; y < DST_HEIGHT; y++)
        {
            for (int x = 0; x < DST_WIDTH; x++)
            {
                const auto &pixel = frame.at(x, y);
                if (pixel.valid)
                {
                    valid_pixels++;

                    // Calculate expected source coordinates
                    int src_x = x;
                    int src_y = (y-2) / V_SCALE;
                    
                    if (src_y >= 0 && src_y < SRC_HEIGHT && src_x >= 0 && src_x < SRC_WIDTH)
                    {
                        uint32_t expected_color = make_rgb(src_x, src_y);
                        
                        int pix_x = decode_rgb_x(pixel.color); 
                        int pix_y = decode_rgb_y(pixel.color);

                        if (src_x != pix_x || src_y != pix_y)
                        {
                            data_errors++;
                            if (data_errors < 10)
                            {
                                std::cout << "❌ Data mismatch at (dst " << x << "," << y << ") "
                                          << "(src " << src_x << "," << src_y << ") "
                                          << " got (" << pix_x << "," << pix_y << ")" << std::endl;
                            }
                        }
                    }
                }

                // Check strobe signals
                if (x == DST_WIDTH - 1) // Last pixel in line
                {
                    if (y == DST_HEIGHT - 1) // Last pixel in frame
                    {
                        if (!pixel.newframe)
                            newframe_errors++;
                    }
                    if (!pixel.newline)
                        newline_errors++;
                }
            }
        }

        std::cout << "📊 Frame " << frame_count << " Analysis:" << std::endl;
        std::cout << "   Valid pixels: " << valid_pixels << "/" << (DST_WIDTH * DST_HEIGHT) << std::endl;
        std::cout << "   Newline errors: " << newline_errors << std::endl;
        std::cout << "   Newframe errors: " << newframe_errors << std::endl;
        std::cout << "   Data errors: " << data_errors << std::endl;

        if (newline_errors == 0 && newframe_errors == 0 && data_errors == 0 &&
            valid_pixels == DST_WIDTH * DST_HEIGHT)
        {
            std::cout << "✅ PERFECT FRAME" << std::endl;
        }
    }

public:
    HDMI_Scaler_Test() : dut(new Vhdmi_scaler), tfp(nullptr), sim_time(0),
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
        dut->src_rst_i = 1;
        dut->dst_rst_i = 1;
        for (int i = 0; i < 10; i++)
            tick();
        dut->src_rst_i = 0;
        dut->dst_rst_i = 0;
        for (int i = 0; i < 10; i++)
            tick();
    }

    void generate_test_frame(int frame_count, VideoFrame &input_frame)
    {
        std::cout << "Input frame structure:" << std::endl;
        std::cout << "  Active: " << SRC_WIDTH << " × " << SRC_HEIGHT << std::endl;
        std::cout << "  Total: " << SRC_TOTAL_WIDTH << " × " << SRC_TOTAL_HEIGHT << std::endl;

        input_frame = VideoFrame(SRC_TOTAL_WIDTH, SRC_TOTAL_HEIGHT);

        for (int y = 0; y < SRC_TOTAL_HEIGHT; y++)
        {
            for (int x = 0; x < SRC_TOTAL_WIDTH; x++)
            {
                auto &pixel = input_frame.at(x, y);
                pixel.x = x;
                pixel.y = y;

                // Active area
                pixel.valid = (x < SRC_WIDTH) && (y < SRC_HEIGHT);
                if (pixel.valid)
                    pixel.color = make_rgb(x, y);

                // Newline strobe (last pixel in active line)
                pixel.newline = (x == SRC_WIDTH - 1);

                // Newframe strobe (last pixel in active frame)
                pixel.newframe = pixel.newline && (y == SRC_HEIGHT - 1);
            }
        }
    }

    void run_test()
    {
        start_trace();
        reset();
        std::cout << "🔄 Resetting completed" << std::endl;

        // 1. Генерируем входной кадр только один раз
        VideoFrame input_frame(0, 0);
        generate_test_frame(0, input_frame);
        std::string src_filename = "hdmi_scaler_test_src_frame_0.ppm";
        input_frame.savePPM(src_filename);
        std::cout << "📁 Input frame saved: " << src_filename << std::endl;

        int cycles = 0;

        while (true)
        {
            std::cout << "\n🎬 Processing frame " << frame_count << std::endl;

            VideoFrame output_frame(DST_TOTAL_WIDTH, DST_TOTAL_HEIGHT);

            bool frame_done = false;
            int input_pixels_sent = 0;

            // Output position counters
            int out_x = 0;
            int out_y = 0;

            // Track previous strobes for edge detection
            bool old_dst_clk_i = false;

            // ИСПРАВЛЕНИЕ: счетчик пикселей в текущем кадре
            int pixel_counter = 0;
            int total_pixels = input_frame.getWidth() * input_frame.getHeight();

            while (cycles < 10000000 && !frame_done)
            {
                // ИСПРАВЛЕНИЕ: простой расчет координат из счетчика пикселей
                int pixel_index = pixel_counter % total_pixels;
                int input_x = pixel_index % input_frame.getWidth();
                int input_y = pixel_index / input_frame.getWidth();

                const auto &pixel = input_frame.at(input_x, input_y);

                if (pixel_valid_counter == 0) // Pixel valid cycle
                {
                    dut->src_pixel_stb_i = pixel.valid;
                    dut->src_pixel_data_i = pixel.color;
                    dut->src_newline_i = pixel.newline;
                    dut->src_newframe_i = pixel.newframe;
                    if (pixel.valid)
                        input_pixels_sent++;

                    // ИСПРАВЛЕНИЕ: увеличиваем счетчик пикселей каждый раз
                    pixel_counter++;
                }
                else if (pixel_valid_counter == PIXEL_VALID_RATIO / 2)
                {
                    dut->src_pixel_stb_i = 0;
                    dut->src_newline_i = 0;
                    dut->src_newframe_i = 0;
                }

                // Capture output on destination clock
                if (!old_dst_clk_i && dut->dst_clk_i)
                {
                    // Сначала сохраняем текущий пиксель (последний в кадре)
                    if (out_x < DST_TOTAL_WIDTH && out_y < DST_TOTAL_HEIGHT)
                    {
                        auto &out_pixel = output_frame.at(out_x, out_y);
                        out_pixel.color = dut->dst_pixel_data_o;
                        out_pixel.valid = dut->dst_de_o;
                        out_pixel.newline = dut->dst_newline_o;
                        out_pixel.newframe = dut->dst_newframe_o;
                        out_pixel.x = out_x;
                        out_pixel.y = out_y;
                    }

                    // Затем обрабатываем сброс
                    if (dut->dst_vreset_o)
                    {
                        // dst_vreset_o в последнем пикселе кадра - сбрасываем на начало
                        out_x = 0;
                        out_y = 0;
                        std::cout << std::endl; 
                        std::cout << "Frame completed in " << cycles << " cycles" << std::endl;
                        std::cout << "Input pixels sent: " << input_pixels_sent << std::endl;

                        std::string filename = "hdmi_scaler_test_frame_" + std::to_string(frame_count) + ".ppm";
                        output_frame.savePPM(filename);
                        std::string hexname = "hdmi_scaler_test_frame_" + std::to_string(frame_count) + ".hex";
                        output_frame.saveHexDump(hexname, 2048);
                        analyze_frame(output_frame, frame_count);
                        frame_count++;

                        if (frame_count > 2)
                            goto exit;
                    }
                    else
                    {
                        // Нормальное увеличение счетчиков, если не было сброса
                        if (dut->dst_newframe_o)
                        {
                            //std::cout << "(newframe x,y" << out_x << "," << out_y << ")" << std::endl;
                            out_x = DST_WIDTH - 1;
                            out_y = DST_HEIGHT - 1;
                        }
                        else if (dut->dst_newline_o)
                        {                
                            //std::cout << "(newline x,y" << out_x << "," << out_y << ")" << std::endl;
                            out_x = DST_WIDTH - 1;
                        }
        
   
                        out_x++;

                        // Проверка переполнения строки
                        if (out_x >= DST_TOTAL_WIDTH)
                        {
                            std::cout << "  " << out_y;
                            out_x = 0;
                            out_y++;
                        }


                        // Проверка переполнения кадра
                        if (out_y >= DST_TOTAL_HEIGHT)
                        {
                            std::cout << std::endl << "Dst Frame reset overloop " << frame_count << " completed" << std::endl;
                            out_x = 0;
                            out_y = 0;
                        }
                    }
                }
                old_dst_clk_i = dut->dst_clk_i;

                tick();
                cycles++;
            }
        }
    exit:
        std::cout << "\n🎯 FINAL RESULTS:" << std::endl;
        std::cout << "Frames processed: " << frame_count << std::endl;
        std::cout << "Total errors: " << error_count << std::endl;

        if (error_count == 0)
            std::cout << "✅ ALL TESTS PASSED" << std::endl;
        else
            std::cout << "❌ TEST FAILED" << std::endl;
    }
};

int main(int argc, char **argv)
{
    Verilated::commandArgs(argc, argv);
    HDMI_Scaler_Test test;
    test.run_test();
    return 0;
}