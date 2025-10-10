#include <stdlib.h>
#include <iostream>
#include <iomanip>
#include <vector>
#include <verilated.h>
#include <verilated_fst_c.h>
#include "Vmc6845mod.h"

class MC6845_Test
{
private:
    static const int FRAME_TIMEOUT = 2000000;
    static const int LINE_TIMEOUT = 100000;

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
    bool pix_en_prev;

    // Test state
    int frame_count;
    int error_count;
    u_int32_t base_address;

public:
    MC6845_Test(u_int32_t base_address) : dut(new Vmc6845mod), tfp(nullptr), sim_time(0),
                                          wb_clk_counter(0), pix_clk_counter(0), pix_en_counter(0),
                                          wb_clk_prev(false), pix_clk_prev(false),
                                          frame_count(0), error_count(0), base_address(base_address)
    {
        Verilated::traceEverOn(true);
    }

    ~MC6845_Test()
    {
        if (tfp)
            tfp->close();
        delete tfp;
        delete dut;
    }

    void start_trace()
    {
        tfp = new VerilatedFstC;
        dut->trace(tfp, 99);
        tfp->open("mc6845_test.fst");
    }

    void print_ma(u_int32_t ma, u_int32_t ra)
    {
        std::cout << "ma: 0x" << std::hex << std::setw(4) << std::setfill('0') << dut->crtc_ma_o
                  << " ra: 0x" << std::setw(2) << std::setfill('0') << (int)dut->crtc_ra_o
                  << " (dec ma: " << std::dec << std::setw(4) << std::setfill('0') << dut->crtc_ma_o
                  << " ra: " << std::setw(2) << std::setfill('0') << (int)dut->crtc_ra_o << ")" << std::endl;
    }

    const int HDMI_VISIBLE_H = 720;
    const int HDMI_VISIBLE_V = 480;
    const int HDMI_TOTAL_H = 1024;
    const int HDMI_TOTAL_V = 525;

 void tick()
{
    static int tick_count = 0;
    static int hdmi_x = 0;
    static int hdmi_y = 0;
    static bool last_pix_clk = false;

    // Только генерация clock - больше НИЧЕГО не трогаем!
    dut->pix_clk_i = (tick_count % 2) == 0;
    dut->pix_en_i = (tick_count % 4) == 0;  // Только каждый 4-й такт!
    dut->wb_clk_i = (tick_count % 3) == 0;

    // Сброс координат при reset
    if (dut->wb_rst_i) {
        hdmi_x = HDMI_TOTAL_H - 2;
        hdmi_y = HDMI_TOTAL_V - 2;
    }
    // Увеличиваем координаты ТОЛЬКО когда:
    // 1. Есть rising edge pix_clk 
    // 2. И pix_en_i активен
    else if (dut->pix_clk_i && !last_pix_clk && dut->pix_en_i) {
        if (hdmi_x == HDMI_TOTAL_H - 1) {
            hdmi_x = 0;
            hdmi_y = (hdmi_y == HDMI_TOTAL_V - 1) ? 0 : hdmi_y + 1;
        } else {
            hdmi_x++;
        }
    }

    // Всегда обновляем выходы
    dut->hdmi_x_i = hdmi_x;
    dut->hdmi_y_i = hdmi_y;
    dut->hdmi_newline_i = (hdmi_x == HDMI_VISIBLE_H - 1);
    dut->hdmi_newframe_i = (hdmi_x == HDMI_VISIBLE_H - 1 && hdmi_y == HDMI_VISIBLE_V - 1);

    // Сохраняем состояние clock для следующего вызова
    last_pix_clk = dut->pix_clk_i;

    // Обновляем остальные prev состояния
    wb_clk_prev = dut->wb_clk_i;
    pix_clk_prev = dut->pix_clk_i; 
    pix_en_prev = dut->pix_en_i;

    tick_count++;
    dut->eval();
    if (tfp) tfp->dump(sim_time++);
}

    bool wb_clk_rising_edge() const
    {
        return !wb_clk_prev && dut->wb_clk_i;
    }

    bool pix_clk_rising_edge() const
    {
        return !pix_clk_prev && dut->pix_clk_i;
    }

    bool pix_en_rising_edge() const
    {
        return !pix_en_prev && dut->pix_en_i;
    }

    void reset()
    {
        dut->wb_rst_i = 1;
        dut->wb_cyc_i = 0;
        dut->wb_stb_i = 0;
        dut->wb_we_i = 0;

        for (int i = 0; i < 10; i++)
            tick();

        dut->wb_rst_i = 0;

        for (int i = 0; i < 10; i++)
            tick();
    }

    void wb_write(uint32_t addr, uint8_t data)
    {
        // Устанавливаем сигналы по заднему фронту wb_clk
        while (dut->wb_clk_i)
        {
            tick();
        }

        dut->wb_cyc_i = 1;
        dut->wb_stb_i = 1;
        dut->wb_we_i = 1;
        dut->wb_adr_i = base_address + addr;
        dut->wb_dat_i = data;
        dut->wb_sel_i = 0xF;

        tick();

        // Ждем ACK (появляется на переднем фронте после установки сигналов)
        int timeout = 100;
        while (!dut->wb_ack_o && timeout > 0)
        {
            tick();
            timeout--;
        }

        if (!dut->wb_ack_o)
        {
            std::cout << "❌ WB write timeout at address 0x" << std::hex << addr << std::dec << std::endl;
            error_count++;
            return;
        }

        // ACK получен - снимаем STB по заднему фронту
        while (dut->wb_clk_i)
        {
            tick();
        }

        dut->wb_stb_i = 0;
        dut->wb_we_i = 0;

        tick(); // Переходим к переднему фронту

        // Ждем снятия ACK
        timeout = 100;
        while (dut->wb_ack_o && timeout > 0)
        {
            tick();
            timeout--;
        }

        // Снимаем CYC по заднему фронту
        while (dut->wb_clk_i)
        {
            tick();
        }

        dut->wb_cyc_i = 0;

        // Даем еще один такт для завершения
        tick();
    }

    // Wishbone read operation - CORRECTED
    uint8_t wb_read(uint32_t addr)
    {
        // Устанавливаем сигналы по заднему фронту wb_clk
        while (dut->wb_clk_i)
        {
            tick();
        }

        dut->wb_cyc_i = 1;
        dut->wb_stb_i = 1;
        dut->wb_we_i = 0;
        dut->wb_adr_i = base_address + addr;
        dut->wb_sel_i = 0xF;

        tick(); // Переходим к переднему фронту

        // Ждем ACK и валидные данные
        int timeout = 100;
        while (!dut->wb_ack_o && timeout > 0)
        {
            tick();
            timeout--;
        }

        uint8_t data = 0;
        if (dut->wb_ack_o)
        {
            data = dut->wb_dat_o & 0xFF;
        }
        else
        {
            std::cout << "❌ WB read timeout at address 0x" << std::hex << addr << std::dec << std::endl;
            error_count++;
        }

        // ACK получен - снимаем STB по заднему фронту
        while (dut->wb_clk_i)
        {
            tick();
        }

        dut->wb_stb_i = 0;

        tick(); // Переходим к переднему фронту

        // Ждем снятия ACK
        timeout = 100;
        while (dut->wb_ack_o && timeout > 0)
        {
            tick();
            timeout--;
        }

        // Снимаем CYC по заднему фронту
        while (dut->wb_clk_i)
        {
            tick();
        }

        dut->wb_cyc_i = 0;

        // Даем еще один такт для завершения
        tick();

        return data;
    }

    // ============================================================================
    // ОСНОВНЫЕ ТЕСТЫ (совместимость)
    // ============================================================================

    void test_registers()
    {
        std::cout << "🧪 Testing register access..." << std::endl;
        reset();

        uint8_t test_value = 32;
        // Test address register write
        wb_write(0x00, 0x01);       // Write to address register (R1 - HDISPLAY)
        wb_write(0x01, test_value); // Write 80 chars to R1

        // Verify write
        wb_write(0x00, 0x01);             // Select R1
        uint8_t readback = wb_read(0x01); // Read R1
        if (readback == test_value)
        {
            std::cout << "✅ Register write/read test PASSED" << std::endl;
        }
        else
        {
            std::cout << "❌ Register test FAILED: wrote " << test_value << ", read " << (int)readback << std::endl;
            error_count++;
        }

        // Test multiple registers
        wb_write(0x00, 0x02);
        wb_write(0x01, 90); // HSYNCPOS
        wb_write(0x00, 0x06);
        wb_write(0x01, 25); // VDISPLAY
        wb_write(0x00, 0x07);
        wb_write(0x01, 26); // VSYNCPOS
        wb_write(0x00, 0x0A);
        wb_write(0x01, 6); // CURSOR START
        wb_write(0x00, 0x0B);
        wb_write(0x01, 7); // CURSOR END

        std::cout << "📝 Register test complete" << std::endl;
    }

    void test_video_timing()
    {
        std::cout << "📺 Testing video timing..." << std::endl;
        reset();

        int de_pulses = 0;
        int newline_count = 0;
        int newframe_count = 0;
        int max_cycles = 5000000;

        frame_count = 0;

        bool old_de = dut->crtc_de_o;
        int cycles = 0;
        while (cycles < max_cycles && frame_count < 3)
        {
            if (pix_clk_rising_edge())
            {
                if (!old_de && dut->crtc_de_o)
                    de_pulses++;
                if (dut->crtc_newline_o) // ИСПРАВЛЕНО: было hdmi_newline_o
                    newline_count++;
                if (dut->crtc_newframe_o) // ИСПРАВЛЕНО: было hdmi_newframe_o
                {
                    cycles = 0;
                    newframe_count++;
                    frame_count++;
                    std::cout << "🎬 Frame " << frame_count
                              << " - DE: " << de_pulses
                              << " Lines: " << newline_count << std::endl;
                }
                old_de = dut->crtc_de_o;
            }
            cycles++;
            tick();
        }
        // Basic timing checks
        if (de_pulses > 0 && newline_count > 0 && newframe_count > 0)
        {
            std::cout << "✅ Video timing test PASSED" << std::endl;
            std::cout << "✅   DE pulses: " << de_pulses << std::endl;
            std::cout << "✅   Newlines: " << newline_count << std::endl;
            std::cout << "✅   Newframes: " << newframe_count << std::endl;
        }
        else
        {
            if (cycles >= max_cycles)
                std::cout << "❌ timeout completed" << std::endl;
            std::cout << "❌ Video timing test FAILED" << std::endl;
            std::cout << "❌   DE pulses: " << de_pulses << std::endl;
            std::cout << "❌   Newlines: " << newline_count << std::endl;
            std::cout << "❌   Newframes: " << newframe_count << std::endl;
            error_count++;
        }
    }

    void test_detailed_address_sequence()
    {
        std::cout << "🔍 Detailed address sequence test..." << std::endl;
        reset();

        wb_write(0x00, 0x01);
        wb_write(0x01, 40); // 40 chars/line
        wb_write(0x00, 0x06);
        wb_write(0x01, 25); // 25 lines
        wb_write(0x00, 0x09);
        wb_write(0x01, 7); // 8 scanlines
        wb_write(0x00, 0x0C);
        wb_write(0x01, 0x00); // Start address 0
        wb_write(0x00, 0x0D);
        wb_write(0x01, 0x00);

        std::cout << "⏳ Waiting for frame start..." << std::endl;

        // Ждем начало кадра: newframe_o -> потом crtc_de_o
        bool saw_newframe = false;
        bool in_active_area = false;
        int timeout = 30000000;
        int start_time = sim_time;

        while ((sim_time - start_time) < timeout)
        {
            if (pix_clk_rising_edge())
            {
                if (dut->crtc_newframe_o && !saw_newframe)
                {
                    std::cout << "🎬 Frame start detected at time " << sim_time << std::endl;
                    saw_newframe = true;
                }

                // После newframe ждем начала активной области
                if (saw_newframe && dut->crtc_de_o && !in_active_area)
                {
                    std::cout << "📺 Active area started at time " << sim_time << std::endl;
                    std::cout << "   MA: " << dut->crtc_ma_o << " RA: " << (int)dut->crtc_ra_o << std::hex << "   MA: 0x" << dut->crtc_ma_o << " RA: 0x" << (int)dut->crtc_ra_o << std::dec << std::endl;
                    in_active_area = true;
                    break;
                }
            }
            tick();
        }

        if (!in_active_area)
        {
            std::cout << "❌ Timeout waiting for active area" << std::endl;
            error_count++;
            return;
        }

        std::cout << "🧮 Testing address sequence in active area..." << std::endl;

        // Тестируем последовательность адресов в активной области
        int checks = 0;
        int errors = 0;
        uint16_t last_ma = dut->crtc_ma_o;
        uint8_t last_ra = dut->crtc_ra_o;

        while (in_active_area && checks < 1000) // Тестируем первые 1000 пикселей
        {
            if (pix_clk_rising_edge())
            {
                if (dut->crtc_de_o)
                {
                    // RA должен увеличиваться на 1 каждый CHAR_WIDTH пикселей
                    // MA должен увеличиваться на 1 каждый CHAR_WIDTH пикселей при RA=0
                    // и сбрасываться к началу строки при смене RA

                    if (checks > 0) // Первую проверку пропускаем
                    {
                        // Простые проверки последовательности
                        if (dut->crtc_ra_o > 7)
                        {
                            std::cout << "❌ RA out of range: " << (int)dut->crtc_ra_o << std::endl;
                            errors++;
                        }

                        if (dut->crtc_ma_o < last_ma && last_ra != 7)
                        {
                            std::cout << "❌ MA decreased unexpectedly: " << last_ma
                                      << " -> " << dut->crtc_ma_o << " RA: " << (int)last_ra << std::endl;
                            errors++;
                        }

                        // Логируем каждую 50-ю проверку
                        if (checks % 50 == 0)
                        {
                            std::cout << "   Check " << checks << " - MA: " << dut->crtc_ma_o
                                      << " RA: " << (int)dut->crtc_ra_o << std::endl;
                        }
                    }

                    last_ma = dut->crtc_ma_o;
                    last_ra = dut->crtc_ra_o;
                    checks++;
                }
                else if (dut->pix_en_i)
                {
                    // Выход из активной области - заканчиваем тест
                    in_active_area = false;
                    std::cout << "📺 Active area ended at time " << sim_time << std::endl;
                }
            }
            tick();
        }

        std::cout << "📊 Address sequence test complete:" << std::endl;
        std::cout << "   Checks: " << checks << std::endl;
        std::cout << "   Errors: " << errors << std::endl;

        if (errors == 0 && checks > 100)
        {
            std::cout << "💚 Address sequence test PASSED" << std::endl;
        }
        else
        {
            std::cout << "💔 Address sequence test FAILED" << std::endl;
            error_count++;
        }
    }

    void test_cursor_movement()
    {
        std::cout << "🎯 Testing cursor movement..." << std::endl;
        reset();

        wb_write(0x00, 0x01);
        wb_write(0x01, 40);
        wb_write(0x00, 0x06);
        wb_write(0x01, 25);
        wb_write(0x00, 0x09);
        wb_write(0x01, 7);
        wb_write(0x00, 0x0A);
        wb_write(0x01, 6); // Cursor lines 6-7
        wb_write(0x00, 0x0B);
        wb_write(0x01, 7);
        wb_write(0x00, 0x0C);
        wb_write(0x01, 0x00);
        wb_write(0x00, 0x0D);
        wb_write(0x01, 0x00);

        // Test cursor positions
        int test_positions[] = {10, 45, 100, 500};
        int total_cursor_detections = 0;
        int cursor_errors = 0;

        for (int pos : test_positions)
        {
            std::cout << "  Waiting VSYNC..." << std::endl;

            int MAXCYCLES = 10000000;
            int samples = 0;
            while (samples < MAXCYCLES)
            {
                if (pix_clk_rising_edge())
                {
                    if (!dut->crtc_vsync_o)
                        break;
                    samples++;
                }
                tick();
            }

            if (samples >= MAXCYCLES)
            {
                std::cout << "❌ Did not receive a crtc_vsync_o signal equals 0" << std::endl;
                error_count++;
                return;
            }

            std::cout << "📍 Setting cursor to line 6-7 and position 0x" << std::hex << pos
                      << " (" << std::dec << pos << ")" << std::endl;

            wb_write(0x00, 0x0E);
            wb_write(0x01, (pos >> 8) & 0x3F);
            wb_write(0x00, 0x0F);
            wb_write(0x01, pos & 0xFF);

            // Wait for frame start
            bool in_active = false;
            int cursor_detections = 0;
            std::vector<std::pair<uint16_t, uint8_t>> wrong_positions;

            samples = 0;
            while (samples < MAXCYCLES)
            {
                if (pix_clk_rising_edge())
                {
                    if (dut->crtc_de_o)
                    {
                        if (!in_active)
                        {
                            std::cout << "   Active area started" << std::endl;
                            in_active = true;
                        }

                        if (dut->crtc_cursor_o)
                        {
                            cursor_detections++;
                            total_cursor_detections++;

                            if (dut->crtc_ma_o == pos && (dut->crtc_ra_o >= 6 && dut->crtc_ra_o <= 7))
                            {
                                // Correct position - log first few
                                if (cursor_detections <= 3)
                                {
                                    std::cout << "   ✅ Cursor at correct position: MA=0x" << std::hex << dut->crtc_ma_o
                                              << " RA=0x" << (int)dut->crtc_ra_o << std::dec << std::endl;
                                }
                            }
                            else
                            {
                                // Wrong position
                                wrong_positions.push_back({dut->crtc_ma_o, dut->crtc_ra_o});
                                cursor_errors++;

                                if (wrong_positions.size() <= 10)
                                {
                                    std::cout << "   ❌ Cursor at WRONG position: MA=0x"
                                              << std::hex
                                              << (int)dut->crtc_ma_o
                                              << " RA=0x"
                                              << (int)dut->crtc_ra_o
                                              << " Expected: MA=0x"
                                              << pos
                                              << " RA=6 or RA=7"
                                              << std::dec << std::endl;
                                }
                            }
                        }
                    }
                    if (dut->crtc_vsync_o)
                        break;
                }
                samples++;
                tick();
            }
            if (samples >= MAXCYCLES)
            {
                std::cout << "❌ Did not receive a DE and CURSOR signals equals 1" << std::endl;
                error_count++;
                return;
            }

            // Report results for this cursor position
            std::cout << "   📊 Cursor detections: " << cursor_detections
                      << ", Errors: " << wrong_positions.size() << std::endl;

            if (wrong_positions.size() > 10)
            {
                std::cout << "   ⚠️  ... and " << (wrong_positions.size() - 10) << " more errors" << std::endl;
            }

            // Small delay between tests
            for (int i = 0; i < 1000; i++)
                tick();
        }

        // Final cursor test summary
        std::cout << "\n🎯 CURSOR TEST SUMMARY:" << std::endl;
        std::cout << "   Total cursor detections: " << total_cursor_detections << std::endl;
        std::cout << "   Total cursor errors: " << cursor_errors << std::endl;

        if (cursor_errors == 0 && total_cursor_detections > 0)
        {
            std::cout << "💚 Cursor test PASSED" << std::endl;
        }
        else
        {
            std::cout << "💔 Cursor test FAILED" << std::endl;
            error_count++;
        }
    }

    // ============================================================================
    // НОВЫЕ ТЕСТЫ ДЛЯ РАСШИРЕННЫХ ФУНКЦИЙ
    // ============================================================================

    void test_extended_registers()
    {
        std::cout << "🧪 Testing extended registers..." << std::endl;
        reset();

        // Test HIGH_ADDRESS register (0x19)
        wb_write(0x00, 0x19);
        wb_write(0x01, 0xAB);
        wb_write(0x00, 0x19);
        uint8_t high_addr = wb_read(0x01);
        if (high_addr == 0xAB)
        {
            std::cout << "✅ HIGH_ADDRESS register test PASSED" << std::endl;
        }
        else
        {
            std::cout << "❌ HIGH_ADDRESS test FAILED: wrote 0xAB, read 0x"
                      << std::hex << (int)high_addr << std::dec << std::endl;
            error_count++;
        }

        // Test ADDR_MODE register (0x1A)
        wb_write(0x00, 0x1A);
        wb_write(0x01, 0x85); // Linear32 + burst
        wb_write(0x00, 0x1A);
        uint8_t addr_mode = wb_read(0x01);
        if (addr_mode == 0x85)
        {
            std::cout << "✅ ADDR_MODE register test PASSED" << std::endl;
        }
        else
        {
            std::cout << "❌ ADDR_MODE test FAILED: wrote 0x85, read 0x"
                      << std::hex << (int)addr_mode << std::dec << std::endl;
            error_count++;
        }

        // Test PIXEL_CTRL register (0x1B)
        wb_write(0x00, 0x1B);
        wb_write(0x01, 0x03); // 2px mode
        wb_write(0x00, 0x1B);
        uint8_t pixel_ctrl = wb_read(0x01);
        if (pixel_ctrl == 0x03)
        {
            std::cout << "✅ PIXEL_CTRL register test PASSED" << std::endl;
        }
        else
        {
            std::cout << "❌ PIXEL_CTRL test FAILED: wrote 0x03, read 0x"
                      << std::hex << (int)pixel_ctrl << std::dec << std::endl;
            error_count++;
        }
    }

    void test_linear_addressing()
    {
        std::cout << "📍 Testing linear addressing..." << std::endl;
        reset();

        // Setup
        wb_write(0x00, 0x01);
        wb_write(0x01, 20);
        wb_write(0x00, 0x06);
        wb_write(0x01, 10);
        wb_write(0x00, 0x0C);
        wb_write(0x01, 0x12);
        wb_write(0x00, 0x0D);
        wb_write(0x01, 0x34);
        wb_write(0x00, 0x19);
        wb_write(0x01, 0x80);

        // Test Linear 32KB mode
        wb_write(0x00, 0x1A);
        wb_write(0x01, 0x85);

        bool saw_ext_addr = false;
        int samples = 0;
        while (samples < 50000 && !saw_ext_addr)
        {
            if (pix_clk_rising_edge() && dut->crtc_de_o)
            {
                if (dut->crtc_ext_addr_o != 0)
                {
                    std::cout << "✅ Extended address working: 0x"
                              << std::hex << dut->crtc_ext_addr_o << std::dec << std::endl;
                    saw_ext_addr = true;

                    // Check address mode output
                    uint32_t actual_mode = (uint32_t)dut->crtc_addr_mode_o;
                    if (actual_mode == 5)
                    {
                        std::cout << "✅ Address mode output correct: 0x" << std::hex << actual_mode << std::dec << std::endl;
                    }
                    else
                    {
                        std::cout << "❌ Address mode output wrong: expected 0x5, got: 0x" 
                                << std::hex << actual_mode << std::dec << std::endl;
                        error_count++;
                    }
                }sdasd
            }
            samples++;
            tick();
        }

        if (!saw_ext_addr)
        {
            std::cout << "❌ No extended address detected" << std::endl;
            error_count++;
        }
    }

    void test_pixel_clock_modes()
    {
        std::cout << "⏱️ Testing pixel clock modes..." << std::endl;
        reset();

        // Test different pixel speeds
        uint8_t modes[] = {0x00, 0x01, 0x02, 0x03}; // 16px, 8px, 4px, 2px

        for (uint8_t mode : modes)
        {
            std::cout << "  Testing pixel mode " << (int)mode << "..." << std::endl;

            wb_write(0x00, 0x1B);
            wb_write(0x01, mode);

            // Check output signal
            if (dut->crtc_pixel_clock_sel_o == mode)
            {
                std::cout << "    ✅ Pixel clock mode " << (int)mode << " output correct" << std::endl;
            }
            else
            {
                std::cout << "❌ Pixel clock mode " << (int)mode << " output wrong: "
                          << (int)dut->crtc_pixel_clock_sel_o << std::endl;
                error_count++;
            }

            for (int i = 0; i < 500; i++)
                tick();
        }
    }

    void test_burst_mode()
    {
        std::cout << "⚡ Testing burst mode..." << std::endl;
        reset();

        // Enable burst mode
        wb_write(0x00, 0x12);
        uint8_t vid_ctrl = wb_read(0x01);
        vid_ctrl |= 0x04; // Set burst enable bit
        wb_write(0x01, vid_ctrl);

        // Set linear mode
        wb_write(0x00, 0x1A);
        wb_write(0x01, 0x85);

        int burst_count = 0;
        int samples = 0;

        while (samples < 10000 && burst_count < 5)
        {
            if (pix_clk_rising_edge() && dut->crtc_de_o)
            {
                if (dut->crtc_burst_req_o)
                {
                    burst_count++;
                    if (burst_count <= 3)
                    {
                        std::cout << "✅ Burst request #" << burst_count
                                  << " at MA: 0x" << std::hex << dut->crtc_ma_o
                                  << std::dec << std::endl;
                    }
                }
            }
            samples++;
            tick();
        }

        if (burst_count > 0)
        {
            std::cout << "✅ Burst mode working (" << burst_count << " requests)" << std::endl;
        }
        else
        {
            std::cout << "❌ No burst requests detected" << std::endl;
            error_count++;
        }
    }

    void test_bpp_modes()
    {
        std::cout << "🎨 Testing BPP modes..." << std::endl;
        reset();

        uint8_t modes[] = {0x00, 0x01, 0x02, 0x03}; // 1bpp, 2bpp, 4bpp, 8bpp

        for (uint8_t mode : modes)
        {
            wb_write(0x00, 0x12);
            uint8_t ctrl = wb_read(0x01);
            ctrl = (ctrl & 0xFC) | mode;
            wb_write(0x01, ctrl);

            wb_write(0x00, 0x12);
            uint8_t verify = wb_read(0x01);

            if ((verify & 0x03) == mode)
            {
                std::cout << "    ✅ BPP mode " << (int)mode << " set correctly" << std::endl;

                if (dut->crtc_bpp_mode == mode)
                {
                    std::cout << "    ✅ BPP mode " << (int)mode << " output correct" << std::endl;
                }
                else
                {
                    std::cout << "❌ BPP mode " << (int)mode << " output mismatch: "
                              << (int)dut->crtc_bpp_mode << std::endl;
                    error_count++;
                }
            }
            else
            {
                std::cout << "❌ BPP mode " << (int)mode << " set failed" << std::endl;
                error_count++;
            }

            for (int i = 0; i < 500; i++)
                tick();
        }
    }

    void run_all_tests()
    {
        start_trace();
        std::cout << "🚀 Starting MC6845 Mod Test Suite with Extended Features" << std::endl;

        reset();
        std::cout << "🔄 Reset completed" << std::endl;

        // Basic functionality tests
        // test_registers();
        // test_extended_registers();
        // test_bpp_modes();
        test_cursor_movement();
        // test_detailed_address_sequence();
        // test_video_timing();

        // Extended features tests
        // test_pixel_clock_modes();
        // test_linear_addressing();
        // test_burst_mode();

        for (int i = 0; i < 100; i++)
            tick();

        std::cout << "\n🎯 EXTENDED TEST SUITE COMPLETE" << std::endl;
        std::cout << "Errors: " << error_count << std::endl;
        std::cout << "Frames simulated: " << frame_count << std::endl;

        if (error_count == 0)
        {
            std::cout << "💚 ALL TESTS PASSED - Extended CRTC working correctly!" << std::endl;
        }
        else
        {
            std::cout << "💔 SOME TESTS FAILED" << std::endl;
        }
    }
};

int main(int argc, char **argv)
{
    Verilated::commandArgs(argc, argv);

    MC6845_Test test = MC6845_Test(0x684500);
    test.run_all_tests();

    return 0;
}