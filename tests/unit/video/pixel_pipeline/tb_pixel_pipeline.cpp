#include <verilated.h>
#include <verilated_fst_c.h>
#include "Vpixel_pipeline.h"
#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

class PixelPipelineTest
{
private:
    Vpixel_pipeline *dut;
    VerilatedFstC *vcd;
    vluint64_t sim_time;
    int failed_tests;
    int total_tests;

public:
    PixelPipelineTest() : sim_time(0), failed_tests(0), total_tests(0)
    {
        Verilated::traceEverOn(true);
        dut = new Vpixel_pipeline;
        vcd = new VerilatedFstC;
        dut->trace(vcd, 99);
        vcd->open("pixel_pipeline.fst");
    }

    ~PixelPipelineTest()
    {
        vcd->close();
        delete dut;
        delete vcd;
    }

    void reset()
    { 
        dut->de_i = 1;
        dut->rst_i = 1;
        dut->clk_i = 0;
        dut->pix_ena_i = 1;
        dut->byte_strobe_i = 0;
        dut->next_pixel_i = 0;
        tick();
        tick();
        dut->rst_i = 0;
        tick();
    }

    void tick()
    {
        dut->clk_i = 0;
        eval();
        dut->clk_i = 1;
        eval();
    }

    void eval()
    {
        dut->eval();
        vcd->dump(sim_time);
        sim_time++;
    }

    void strobe_word(uint8_t data, uint8_t byte_select, uint8_t bpp_mode, bool continuous_mode)
    {
        // Устанавливаем все сигналы ДО такта
        dut->vmem_data_i = data;
        dut->byte_select_i = byte_select;
        dut->bpp_mode_i = bpp_mode;
        dut->continuous_mode_i = continuous_mode;
        
        // Строб на один такт
        dut->byte_strobe_i = 1;
        tick();
        dut->byte_strobe_i = 0;
        
        // Дополнительный такт для обработки
        tick();
    }

    void run_pixel_clock_cycle(bool capture_output = true)
    {
        // Фаза 1: Устанавливаем next_pixel_i
        dut->next_pixel_i = 1;
        tick();
        
        // Фаза 2: Захватываем выходы (они должны быть стабильны)
        if (capture_output && dut->pixel_valid_o) {
            // Определяем маску в зависимости от bpp_mode
            uint8_t mask = 0xFF;
            switch(dut->bpp_mode_i) {
                case 0: mask = 0x01; break; // 1bpp
                case 1: mask = 0x03; break; // 2bpp  
                case 2: mask = 0x0F; break; // 4bpp
                case 3: mask = 0xFF; break; // 8bpp
            }
            uint8_t pixel_value = dut->pixel_index_o & mask;
            actual_pixels.push_back(pixel_value);
        }
        
        // Фаза 3: Снимаем next_pixel_i
        dut->next_pixel_i = 0;
        tick();
    }

    std::vector<uint8_t> actual_pixels;

    void print_pixels_hex(const std::vector<uint8_t> &pixels, int hex_digits = 1)
    {
        std::cout << "[";
        for (size_t i = 0; i < pixels.size(); i++)
        {
            std::cout << "0x" << std::hex << std::setw(hex_digits) << std::setfill('0')
                      << static_cast<int>(pixels[i]);
            if (i < pixels.size() - 1)
            {
                std::cout << ", ";
            }
        }
        std::cout << "]" << std::dec;
    }

    bool validate_pixel_count(const std::vector<uint8_t> &pixels, int expected_count, const std::string &test_name)
    {
        if (pixels.size() != expected_count)
        {
            std::cout << "❌ " << test_name << " - WRONG PIXEL COUNT: expected "
                      << expected_count << " got " << pixels.size() << "\n";
            return false;
        }
        return true;
    }

    bool validate_expected_pattern(const std::vector<uint8_t> &actual, const std::vector<uint8_t> &expected, const std::string &test_name)
    {
        if (actual != expected)
        {
            std::cout << "❌ " << test_name << " - PATTERN MISMATCH\n";
            std::cout << "   Expected: ";
            print_pixels_hex(expected, expected.size() > 0 ? (expected[0] > 0xF ? 2 : (expected[0] > 0x3 ? 1 : 1)) : 1);
            std::cout << "\n   Got:      ";
            print_pixels_hex(actual, actual.size() > 0 ? (actual[0] > 0xF ? 2 : (actual[0] > 0x3 ? 1 : 1)) : 1);
            std::cout << "\n";
            return false;
        }
        return true;
    }

    bool test_1bpp_continuous()
    {
        std::cout << "🧪 1bpp Continuous: ";
        total_tests++;
        reset();
        actual_pixels.clear();

        // Загружаем байт 0xAA (10101010)
        strobe_word(0xAA, 0, 0, 1); // bpp_mode=0 (1bpp), continuous_mode=1

        std::vector<uint8_t> expected = {1, 0, 1, 0, 1, 0, 1, 0};

        // Выдаем 8 пикселей
        for (int i = 0; i < 16; i++) {
            run_pixel_clock_cycle(true);
            if (actual_pixels.size() >= 8) break;
        }

        bool pass = validate_pixel_count(actual_pixels, 8, "1bpp Continuous") &&
                    validate_expected_pattern(actual_pixels, expected, "1bpp Continuous");

        if (pass) {
            std::cout << "✅ PASSED - Data: ";
            print_pixels_hex(actual_pixels, 1);
            std::cout << "\n";
        } else {
            failed_tests++;
        }
        return pass;
    }

    bool test_2bpp_continuous()
    {
        std::cout << "🧪 2bpp Continuous: ";
        total_tests++;
        reset();
        actual_pixels.clear();

        // Загружаем байт 0x12 (00010010)
        strobe_word(0x12, 0, 1, 1); // bpp_mode=1, continuous_mode=1

        // Expected: [00 01 00 10] = 0, 1, 0, 2
        std::vector<uint8_t> expected = {0, 1, 0, 2};

        // Выдаем 4 пикселя
        for (int i = 0; i < 12; i++) {
            run_pixel_clock_cycle(true);
            if (actual_pixels.size() >= 4) break;
        }

        bool pass = validate_pixel_count(actual_pixels, 4, "2bpp Continuous") &&
                    validate_expected_pattern(actual_pixels, expected, "2bpp Continuous");

        if (pass) {
            std::cout << "✅ PASSED - Data: ";
            print_pixels_hex(actual_pixels, 1);
            std::cout << "\n";
        } else {
            failed_tests++;
        }
        return pass;
    }

    bool test_4bpp_continuous()
    {
        std::cout << "🧪 4bpp Continuous: ";
        total_tests++;
        reset();
        actual_pixels.clear();

        // 4bpp = 2 пикселя на байт
        strobe_word(0x12, 0, 2, 1); // bpp_mode=2, continuous_mode=1

        std::vector<uint8_t> expected = {1, 2}; // 2 пикселя для 4bpp

        for (int i = 0; i < 8; i++) {
            run_pixel_clock_cycle(true);
            if (actual_pixels.size() >= 2) break;
        }

        bool pass = validate_pixel_count(actual_pixels, 2, "4bpp Continuous") &&
                    validate_expected_pattern(actual_pixels, expected, "4bpp Continuous");

        if (pass) {
            std::cout << "✅ PASSED - Data: ";
            print_pixels_hex(actual_pixels, 1);
            std::cout << "\n";
        } else {
            failed_tests++;
        }
        return pass;
    }

    bool test_8bpp_continuous()
    {
        std::cout << "🧪 8bpp Continuous: ";
        total_tests++;
        reset();
        actual_pixels.clear();

        // 8bpp = 1 пиксель на байт
        strobe_word(0x12, 0, 3, 1); // bpp_mode=3, continuous_mode=1

        std::vector<uint8_t> expected = {0x12};

        for (int i = 0; i < 4; i++) {
            run_pixel_clock_cycle(true);
            if (actual_pixels.size() >= 1) break;
        }

        bool pass = validate_pixel_count(actual_pixels, 1, "8bpp Continuous") &&
                    validate_expected_pattern(actual_pixels, expected, "8bpp Continuous");

        if (pass) {
            std::cout << "✅ PASSED - Data: ";
            print_pixels_hex(actual_pixels, 2);
            std::cout << "\n";
        } else {
            failed_tests++;
        }
        return pass;
    }

    bool test_cpc_mode1()
    {
        std::cout << "🧪 CPC Mode1 (2bpp): ";
        total_tests++;
        reset();
        actual_pixels.clear();

        strobe_word(0x12, 0, 1, 0); // bpp_mode=1, continuous_mode=0

        std::vector<uint8_t> expected = {0, 0, 2, 1};

        for (int i = 0; i < 12; i++) {
            run_pixel_clock_cycle(true);
            if (actual_pixels.size() >= 4) break;
        }

        bool pass = validate_pixel_count(actual_pixels, 4, "CPC Mode1") &&
                    (actual_pixels == expected);

        if (!pass) {
            failed_tests++;
            std::cout << "❌ FAILED\n";
            std::cout << "   Expected: ";
            print_pixels_hex(expected, 1);
            std::cout << "   Actual:   ";
            print_pixels_hex(actual_pixels, 1);
            std::cout << "\n";
        } else {
            std::cout << "✅ PASSED - Data: ";
            print_pixels_hex(actual_pixels, 1);
            std::cout << "\n";
        }
        return pass;
    }

    bool test_cpc_mode2()
    {
        std::cout << "🧪 CPC Mode2 (1bpp): ";
        total_tests++;
        reset();
        actual_pixels.clear();

        strobe_word(0x12, 0, 0, 0); // bpp_mode=0, continuous_mode=0

        std::vector<uint8_t> expected = {0, 0, 0, 1, 0, 0, 1, 0};

        for (int i = 0; i < 20; i++) {
            run_pixel_clock_cycle(true);
            if (actual_pixels.size() >= 8) break;
        }

        bool pass = validate_pixel_count(actual_pixels, 8, "CPC Mode2") &&
                    (actual_pixels == expected);

        if (!pass) {
            failed_tests++;
            std::cout << "❌ FAILED\n";
            std::cout << "   Expected: ";
            print_pixels_hex(expected, 1);
            std::cout << "   Actual:   ";
            print_pixels_hex(actual_pixels, 1);
            std::cout << "\n";
        } else {
            std::cout << "✅ PASSED - Data: ";
            print_pixels_hex(actual_pixels, 1);
            std::cout << "\n";
        }
        return pass;
    }

    void run_all_tests()
    {
        std::cout << "🚀 Starting NEW Pixel Pipeline Tests\n";
        std::cout << "====================================\n";

        test_1bpp_continuous();
        test_2bpp_continuous();
        test_4bpp_continuous();
        test_8bpp_continuous();
        test_cpc_mode1();
        test_cpc_mode2();

        std::cout << "====================================\n";
        std::cout << "📊 Test Results: "
                  << (total_tests - failed_tests) << "/" << total_tests
                  << " tests passed\n";

        if (failed_tests == 0)
        {
            std::cout << "🎉 All tests PASSED!\n";
        }
        else
        {
            std::cout << "💥 " << failed_tests << " tests FAILED!\n";
        }
        std::cout << "💾 Waveform saved to pixel_pipeline.fst\n";
    }
};

int main(int argc, char **argv)
{
    Verilated::commandArgs(argc, argv);
    PixelPipelineTest test;
    test.run_all_tests();
    return 0;
}