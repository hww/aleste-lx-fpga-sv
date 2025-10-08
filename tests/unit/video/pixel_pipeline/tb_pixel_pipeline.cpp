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
        dut->rst_i = 1;
        dut->clk_i = 0;
        dut->pix_ena_i = 1;
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

    void set_inputs(uint8_t data, uint8_t bpp_mode, bool continuous_mode, bool byte_select)
    {
        dut->vmem_data_i = data;
        dut->bpp_mode_i = bpp_mode;
        dut->continuous_mode_i = continuous_mode;
        dut->byte_select_i = byte_select;
        dut->pix_ena_i = 1;
    }

    void strobe_word(uint16_t data, uint8_t byte_selectum)
    {
        dut->byte_strobe_i = 1;
        dut->vmem_data_i = data;
        dut->byte_select_i = byte_selectum;
        tick();
        dut->byte_strobe_i = 0;
    }

    void pulse_pix_shift(int cycles = 1)
    {
        for (int i = 0; i < cycles; i++)
        {
            dut->pix_shift_i = 1;
            tick();
            dut->pix_shift_i = 0;
            if (i < cycles - 1)
                tick(); // Пропускаем такты между стробами
        }
    }
    void print_vector_hex(const std::vector<uint8_t> &vec)
    {
        std::cout << "[";
        for (size_t i = 0; i < vec.size(); i++)
        {
            std::cout << "0x" << std::hex << std::setw(2) << std::setfill('0')
                      << static_cast<int>(vec[i]);
            if (i < vec.size() - 1)
            {
                std::cout << ", ";
            }
        }
        std::cout << "]" << std::dec;
    }
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
            print_pixels_hex(expected, expected.size() > 0 ? (expected[0] > 3 ? 4 : 2) : 2);
            std::cout << "\n   Got:      ";
            print_pixels_hex(actual, actual.size() > 0 ? (actual[0] > 3 ? 4 : 2) : 2);
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

        // Загружаем байт 0xAA (10101010)
        strobe_word(0xAA, 0);

        std::vector<uint8_t> expected = {1, 0, 1, 0, 1, 0, 1, 0};
        std::vector<uint8_t> actual;

        // Выдаем 8 пикселей
        for (int i = 0; i < 10; i++)
        {
            pulse_pix_shift(1);
            if (dut->pixel_valid_o)
            {
                actual.push_back(dut->pixel_index_o & 1);
            }
            if (actual.size() >= 8)
                break;
        }

        bool pass = validate_pixel_count(actual, 8, "1bpp Continuous") &&
                    validate_expected_pattern(actual, expected, "1bpp Continuous");

        if (pass)
        {
            std::cout << "✅ PASSED\n";
        }
        else
        {
            failed_tests++;
        }
        return pass;
    }

    bool test_2bpp_continuous()
    {
        std::cout << "🧪 2bpp Continuous: ";
        total_tests++;
        reset();

        // Загружаем байт 0x12 (00010010)
        strobe_word(0x12, 0);
        dut->bpp_mode_i = 1;
        dut->continuous_mode_i = 1;

        // Expected: [00 01 00 10] = 0, 1, 0, 2
        std::vector<uint8_t> expected = {0, 1, 0, 2};
        std::vector<uint8_t> actual;

        // Выдаем 4 пикселя (каждый второй pix_shift)
        for (int i = 0; i < 12; i++)
        {
            if (i % 2 == 0)
                pulse_pix_shift(1);
            else
                tick();

            if (dut->pixel_valid_o)
            {
                actual.push_back(dut->pixel_index_o & 3);
            }
            if (actual.size() >= 4)
                break;
        }

        bool pass = validate_pixel_count(actual, 4, "2bpp Continuous") &&
                    validate_expected_pattern(actual, expected, "2bpp Continuous");

        if (pass)
        {
            std::cout << "✅ PASSED\n";
        }
        else
        {
            failed_tests++;
        }
        return pass;
    }

    bool test_4bpp_continuous()
    {
        std::cout << "🧪 4bpp Continuous: "; // Исправлено название
        total_tests++;
        reset();

        // 4bpp = 2 пикселя на байт (4 бита на пиксель)
        // Загружаем байт 0x12 = 00010010 binary
        // Разбиваем на 4-битные пиксели: [0001, 0010] = 1, 2
        strobe_word(0x12, 0);
        dut->bpp_mode_i = 2; // 4bpp = mode 2 (2^2 = 4 бита)
        dut->continuous_mode_i = 1;

        std::vector<uint8_t> expected = {1, 2}; // 2 пикселя для 4bpp
        std::vector<uint8_t> actual;

        for (int i = 0; i < 8; i++)
        {
            if (i % 2 == 0)
                pulse_pix_shift(1);
            else
                tick();

            if (dut->pixel_valid_o)
            {
                actual.push_back(dut->pixel_index_o & 15); // Маска 4 бита (0-15)
            }
            if (actual.size() >= 2)
                break;
        }

        bool pass = validate_pixel_count(actual, 2, "4bpp Continuous") &&
                    validate_expected_pattern(actual, expected, "4bpp Continuous");

        if (pass)
        {
            std::cout << "✅ PASSED - Data: ";
            print_pixels_hex(actual, 1); // 1 hex digit для 4bpp
            std::cout << "\n";
        }
        else
        {
            failed_tests++;
            std::cout << "❌ FAILED\n";
            std::cout << "   Expected: ";
            print_vector_hex(expected);
            std::cout << "   Actual: ";
            print_vector_hex(actual);
        }
        return pass;
    }

    bool test_8bpp_continuous()
    {
        std::cout << "🧪 8bpp Continuous: "; // Исправлено название
        total_tests++;
        reset();

        // 8bpp = 1 пиксель на байт (8 бит на пиксель)
        // Загружаем байт 0x12 = 00010010 binary = 18 decimal
        strobe_word(0x12, 0);
        dut->bpp_mode_i = 3; // 8bpp = mode 3 (2^3 = 8 бит)
        dut->continuous_mode_i = 1;

        std::vector<uint8_t> expected = {0x12}; // 1 пиксель для 8bpp
        std::vector<uint8_t> actual;

        for (int i = 0; i < 4; i++)
        {
            if (i % 2 == 0)
                pulse_pix_shift(1);
            else
                tick();

            if (dut->pixel_valid_o)
            {
                actual.push_back(dut->pixel_index_o); // Полные 8 бит
            }
            if (actual.size() >= 1)
                break;
        }

        bool pass = validate_pixel_count(actual, 1, "8bpp Continuous") &&
                    validate_expected_pattern(actual, expected, "8bpp Continuous");

        if (pass)
        {
            std::cout << "✅ PASSED - Data: ";
            print_pixels_hex(actual, 2); // 2 hex digits для 8bpp
            std::cout << "\n";
        }
        else
        {
            failed_tests++;
            std::cout << "❌ FAILED\n";
            std::cout << "   Expected: ";
            print_vector_hex(expected);
            std::cout << "   Actual: ";
            print_vector_hex(actual);
        }
        return pass;
    }

    bool test_cpc_mode1()
    {
        std::cout << "🧪 CPC Mode1 (2bpp): ";
        total_tests++;
        reset();

        // CPC Mode1 = 2bpp = 4 цвета = 4 пикселя на байт
        // Загружаем байт 0x12 = 00010010 binary
        // В нашем железе порядок: [bit1:bit0], [bit3:bit2], [bit5:bit4], [bit7:bit6]
        // 0x12 = bits: 7-0: [0,0,0,1,0,0,1,0]
        // Пары: [1:0]=00, [3:2]=00, [5:4]=10, [7:6]=01 → 0, 0, 2, 1

        strobe_word(0x12, 0);
        dut->bpp_mode_i = 1; // 2bpp
        dut->continuous_mode_i = 0;

        std::vector<uint8_t> expected = {0, 0, 2, 1}; // Порядок нашего железа!
        std::vector<uint8_t> actual;

        for (int i = 0; i < 12; i++)
        {
            if (i % 2 == 0)
                pulse_pix_shift(1);
            else
                tick();

            if (dut->pixel_valid_o)
            {
                actual.push_back(dut->pixel_index_o & 3);
            }
            if (actual.size() >= 4)
                break;
        }

        bool pass = validate_pixel_count(actual, 4, "CPC Mode1") &&
                    (actual == expected);

        if (!pass)
        {
            failed_tests++;
            std::cout << "❌ FAILED\n";
            std::cout << "   Expected: ";
            print_vector_hex(expected);
            std::cout << "   Actual:   ";
            print_vector_hex(actual);
        }
        else
        {
            std::cout << "✅ PASSED - Data: ";
            print_pixels_hex(actual, 1);
            std::cout << "\n";
        }
        return pass;
    }

    bool test_cpc_mode2()
    {
        std::cout << "🧪 CPC Mode2 (1bpp): ";
        total_tests++;
        reset();

        // CPC Mode2 = 1bpp = 2 цвета = 8 пикселей на байт
        // Загружаем байт 0x12 = 00010010 binary
        // Разбиваем на отдельные биты: [0,0,0,1,0,0,1,0] = 0,0,0,1,0,0,1,0

        strobe_word(0x12, 0);
        dut->bpp_mode_i = 0; // 1bpp
        dut->continuous_mode_i = 0;

        std::vector<uint8_t> expected = {0, 0, 0, 1, 0, 0, 1, 0};
        std::vector<uint8_t> actual;

        for (int i = 0; i < 20; i++)
        {
            if (i % 2 == 0)
                pulse_pix_shift(1);
            else
                tick();

            if (dut->pixel_valid_o)
            {
                actual.push_back(dut->pixel_index_o & 1); // Маска 1 бит
            }
            if (actual.size() >= 8)
                break;
        }

        bool pass = validate_pixel_count(actual, 8, "CPC Mode2") &&
                    (actual == expected);

        if (!pass)
        {
            failed_tests++;
            std::cout << "❌ FAILED\n";
            std::cout << "   Expected: ";
            print_vector_hex(expected);
            std::cout << "   Actual:   ";
            print_vector_hex(actual);
            std::cout << "\n";
        }
        else
        {
            std::cout << "✅ PASSED - Data: ";
            print_pixels_hex(actual, 1);
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