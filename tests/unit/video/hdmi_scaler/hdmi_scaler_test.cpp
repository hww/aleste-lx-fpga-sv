#include <stdlib.h>
#include <iostream>
#include <iomanip>
#include <vector>
#include <fstream>
#include <verilated.h>
#include <verilated_fst_c.h>
#include "Vhdmi_scaler.h"

// Clock ratios - ПРОСТАЯ СХЕМА
const int CLK_RATIO = 4;       // Базовая тактовая 27MHz для обоих доменов
const int SRC_PIXEL_RATIO = 2; // 1 пиксель каждые 8 тактов (медленнее)
const int DST_PIXEL_RATIO = 1; // 1 пиксель каждые 4 такта (быстрее)

// Settings
const int V_SCALE = 2;

// Output timing parameters (PAL 720x576)
const int DST_WIDTH = 720;
const int DST_HEIGHT = 480;
const int DST_TOTAL_WIDTH = 864;
const int DST_TOTAL_HEIGHT = 525;

// Input timing - ОДНА строка 6845 = ДВЕ строки HDMI по времени
const int SRC_WIDTH = 720;
const int SRC_HEIGHT = 240;
const int SRC_TOTAL_WIDTH = 864;
const int SRC_TOTAL_HEIGHT = 262; // 525 / 2 ~ 262

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
                    rgb[0] = 255; // White for newline+newframe
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

    // Тактовые счетчики
    int src_clk_counter;
    int dst_clk_counter;
    int src_pixel_counter;
    int dst_pixel_counter;

    // Состояние тактов
    bool src_clk_prev;
    bool dst_clk_prev;

    // HDMI timing
    int dst_x_count;
    int dst_y_count;
    bool dst_de;
    bool dst_newline;
    bool dst_newframe;

    // 6845 state
    bool crt_frame_started;
    int crt_x;
    int crt_y;

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
        src_pixel_counter = 0;
        dst_pixel_counter = 0;

        src_clk_prev = false;
        dst_clk_prev = false;

        dst_x_count = 0;
        dst_y_count = 0;
        dst_de = false;
        dst_newline = false;
        dst_newframe = false;

        crt_frame_started = false;
        crt_x = 0;
        crt_y = 0;
    }

    void tick()
    {
        src_clk_prev = dut->src_clk_i;
        dst_clk_prev = dut->dst_clk_i;

        // Тактовые сигналы
        dut->src_clk_i = (src_clk_counter < CLK_RATIO / 2);
        dut->dst_clk_i = (dst_clk_counter < CLK_RATIO / 2);

        src_clk_counter++;
        dst_clk_counter++;

        if (src_clk_counter >= CLK_RATIO)
            src_clk_counter = 0;
        if (dst_clk_counter >= CLK_RATIO)
            dst_clk_counter = 0;
        dut->src_pix_en_i = src_pixel_strobe();

        // Счетчики пикселей увеличиваются ТОЛЬКО на rising edge
        if (src_clk_rising_edge())
        {
            src_pixel_counter++;
            if (src_pixel_counter >= SRC_PIXEL_RATIO)
                src_pixel_counter = 0;
        }

        if (dst_clk_rising_edge())
        {
            dst_pixel_counter++;
            if (dst_pixel_counter >= DST_PIXEL_RATIO)
                dst_pixel_counter = 0;
        }

        dut->eval();
        tfp->dump(sim_time++);

        // 2. Тактирование и HDMI timing на каждом цикле
        if (dst_clk_rising_edge() && dst_pixel_strobe())
        {        
            generate_hdmi_timing();
        }
        //dut->eval();
        //tfp->dump(sim_time++);
    }

    // Стробы пикселей - ПРАВИЛЬНАЯ ЛОГИКА
    bool src_pixel_strobe() const { return src_pixel_counter == 0; }
    bool dst_pixel_strobe() const { return dst_pixel_counter == 0; }

    // Детекторы фронтов
    bool src_clk_rising_edge() const { return !src_clk_prev && dut->src_clk_i; }
    bool dst_clk_rising_edge() const { return !dst_clk_prev && dut->dst_clk_i; }
    bool dst_clk_falling_edge() const { return dst_clk_prev && !dut->dst_clk_i; }

    void generate_hdmi_timing()
    {          
        // УВЕЛИЧИВАЕМ СЧЕТЧИКИ НА КАЖДОМ ВЫЗОВЕ
        dst_x_count++;    

        if (dst_x_count >= DST_TOTAL_WIDTH)
        {
            dst_x_count = 0;
            dst_y_count++;
            if (dst_y_count >= DST_TOTAL_HEIGHT)
            {
                dst_y_count = 0;
                std::cout << "HDMI: FRAME COMPLETED!" << std::endl;
            }
        }
        // Отладка: показываем прогресс
        if (dst_newline)
        {
            // std::cout << "HDMI: line " << dst_y_count << " completed" << std::endl;
        }

        dst_de = (dst_x_count < DST_WIDTH) && (dst_y_count < DST_HEIGHT);
        dst_newline = (dst_x_count == DST_WIDTH - 1);
        dst_newframe = dst_newline && (dst_y_count == DST_HEIGHT - 1);

        dut->dst_rd_i = dst_de; // && dst_pixel_strobe();
        dut->dst_newline_i = dst_newline;
        dut->dst_newframe_i = dst_newframe;
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
        return ((rgb >> 12) & 0xFFF);
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

        // Check active area
        for (int y = 0; y < DST_HEIGHT; y++)
        {
            for (int x = 0; x < DST_WIDTH; x++)
            {
                const auto &pixel = frame.at(x, y);
                if (pixel.valid)
                {
                    valid_pixels++;

                    // Calculate expected source coordinates
                    int src_x = x;
                    int src_y = y / V_SCALE;

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
                         error_count(0), frame_count(0), src_clk_counter(0), dst_clk_counter(0),
                         src_pixel_counter(0), dst_pixel_counter(0),
                         src_clk_prev(false), dst_clk_prev(false),
                         dst_x_count(0), dst_y_count(0), dst_de(false),
                         dst_newline(false), dst_newframe(false),
                         crt_frame_started(false), crt_x(0), crt_y(0)
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
        dut->src_pixel_data_i = 0;
        dut->src_de_i = 0;
        dut->src_pix_en_i = 0;
        dut->src_newline_i = 0;
        dut->src_newframe_i = 0;
        dut->dst_rd_i = 0;
        dut->dst_newline_i = 0;
        dut->dst_newframe_i = 0;

        for (int i = 0; i < 10; i++)
            tick();
        dut->src_rst_i = 0;
        dut->dst_rst_i = 0;
        for (int i = 0; i < 10; i++)
            tick();
    }

    void generate_test_frame(int frame_count, VideoFrame &input_frame)
    {
        input_frame = VideoFrame(SRC_TOTAL_WIDTH, SRC_TOTAL_HEIGHT);

        for (int y = 0; y < SRC_TOTAL_HEIGHT; y++)
        {
            for (int x = 0; x < SRC_TOTAL_WIDTH; x++)
            {
                auto &pixel = input_frame.at(x, y);
                pixel.x = x;
                pixel.y = y;
                pixel.valid = (x < SRC_WIDTH) && (y < SRC_HEIGHT);
                if (pixel.valid)
                    pixel.color = make_rgb(x, y);
                pixel.newline = (x == SRC_WIDTH - 1);
                pixel.newframe = pixel.newline && (y == SRC_HEIGHT - 1);
            }
        }
    }

    void run_test()
    {
        start_trace();
        reset();
        std::cout << "🔄 Resetting completed" << std::endl;

        VideoFrame input_frame(0, 0);
        generate_test_frame(0, input_frame);
        input_frame.savePPM("hdmi_scaler_test_src_frame_0.ppm");
        input_frame.saveHexDump("hdmi_scaler_test_src_frame_0.hex", 80);

        int cycles = 0;
        const int MAX_CYCLES = 30000000; // Общий лимит

        // Инициализация состояний
        bool src_sync_received = false;
        bool dst_frame_active = false;
        bool src_frame_active = false;

        crt_x = SRC_WIDTH - SRC_TOTAL_WIDTH / 2; // Начальная позиция 6845
        crt_y = SRC_HEIGHT;

        VideoFrame output_frame(DST_TOTAL_WIDTH, DST_TOTAL_HEIGHT);
        int frame_count = 0;
        int input_pixels_sent = 0;

        // 1. Главный цикл для времени симуляции
        while (cycles < MAX_CYCLES && frame_count < 4)
        {            

            // 3. Обработка SRC данных (только после sync)
            if (src_clk_rising_edge())
            {
                if (src_sync_received && src_pixel_strobe() && src_clk_rising_edge())
                {
                    // Передача данных от 6845
                    bool active = (crt_x < SRC_WIDTH) && (crt_y < SRC_HEIGHT);
                    bool newline = (crt_x == SRC_WIDTH - 1);
                    bool newframe = newline && (crt_y == SRC_HEIGHT - 1);

                    const auto &pixel = input_frame.at(crt_x, crt_y);
                    dut->src_pixel_data_i = pixel.color;
                    dut->src_de_i = active;
                    dut->src_newline_i = newline;
                    dut->src_newframe_i = newframe;
    
                    if (active)
                        input_pixels_sent++;

                    // Обновление позиции 6845
                    crt_x++;
                    if (crt_x >= SRC_TOTAL_WIDTH)
                    {
                        crt_x = 0;
                        crt_y++;
                    } 

                    if (crt_x == SRC_TOTAL_WIDTH/2) 
                    {
                        if (crt_y >= SRC_TOTAL_HEIGHT) 
                        {
                            crt_x = 0;
                            crt_y = 0;
                            std::cout << "🔄 6845: frame wrap-around to (0,0)" << std::endl;
                        }
                    }
                }
                else
                {
                    dut->src_de_i = 0;
                    dut->src_newline_i = 0;
                    dut->src_newframe_i = 0;
                }
            }

#ifdef VERBOSE
            if (frame_count > 0 && out_y == 0 && out_x < 10)
            {
                std::cout << "CAPTURING: (" << out_x << "," << out_y << ") = 0x"
                          << std::hex << dut->dst_pixel_data_o << std::dec
                          << " dst_rd_i=" << (dut->dst_rd_i ? 1 : 0)
                          << " dst_clk_rising_edge=" << dst_clk_rising_edge()
                          << " dst_clk_falling_edge=" << dst_clk_falling_edge()
                          << " dst_clk_i=" << (dut->dst_clk_i ? 1 : 0)
                          << " dst_clk_counter=" << dst_clk_counter
                          << std::endl;
            }
#endif

            // 4. Захват HDMI выхода
            if (dst_clk_rising_edge() && dst_pixel_strobe())
            {
                auto &out_pixel = output_frame.at(dst_x_count, dst_y_count);
                out_pixel.color = dut->dst_pixel_data_o;
                out_pixel.valid = dut->dst_rd_i;
                out_pixel.newline = dst_newline;
                out_pixel.newframe = dst_newframe;
                out_pixel.x = dst_x_count;
                out_pixel.y = dst_y_count;
#ifdef VERBOSE
                // ДЕБАГ: диагностика смещения
                if (out_y < 3 && out_x < 3)
                {
                    int expected_x = out_x;
                    int expected_y = out_y;
                    uint32_t expected_color = make_rgb(expected_x, expected_y / V_SCALE);

                    std::cout << "📍 HDMI pos: (" << out_x << "," << out_y
                              << ") got: 0x" << std::hex << out_pixel.color
                              << " expected: 0x" << expected_color
                              << " for src(" << expected_x << "," << (expected_y / V_SCALE) << ")"
                              << std::dec << std::endl;
                }
#endif
                // 5. Сохранение кадра при завершении
                if (dut->dst_newframe_i)
                {
                    std::cout << "🎯 HDMI frame " << frame_count << " COMPLETED" << std::endl;
                    std::cout << "6845 progress: x=" << crt_x << ", y=" << crt_y << std::endl;
                    std::cout << "Input pixels sent: " << input_pixels_sent << std::endl;

                    output_frame.savePPM("hdmi_scaler_test_frame_" + std::to_string(frame_count) + ".ppm");
                    output_frame.saveHexDump("hdmi_scaler_test_frame_" + std::to_string(frame_count) + ".hex", 80);
                    if (frame_count > 0) // Skip first frame as invalid
                        analyze_frame(output_frame, frame_count);

                    frame_count++;

                    // Сброс для следующего кадра
                    output_frame = VideoFrame(DST_TOTAL_WIDTH, DST_TOTAL_HEIGHT);
                    input_pixels_sent = 0;
                }
            }

            // 6. Обработка событий (не циклы ожидания!)
            if (!src_sync_received && dut->src_sync_o)
            {
                crt_x = SRC_WIDTH; // next pixel
                crt_y = SRC_HEIGHT; // next line
                src_sync_received = true;
                std::cout << "✅ src_sync_o received at cycle " << cycles << std::endl;
                std::cout << "Starting 6845 at (" << crt_x << "," << crt_y << ")" << std::endl;
            }

            tick();
            cycles++;

        }

        if (cycles >= MAX_CYCLES)
        {
            std::cout << "⏰ Simulation timeout after " << cycles << " cycles" << std::endl;
        }

        std::cout << "\n🎯 TEST COMPLETE" << std::endl;
        std::cout << "Frames captured: " << frame_count << std::endl;
    }
};

int main(int argc, char **argv)
{
    Verilated::commandArgs(argc, argv);
    HDMI_Scaler_Test test;
    test.run_test();
    return 0;
}
