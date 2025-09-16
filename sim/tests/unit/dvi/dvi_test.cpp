#include <stdlib.h>
#include <iostream>
#include <vector>
#include <bitset>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vdvi_generic.h"

vluint64_t main_time = 0;
double sc_time_stamp() { return main_time; }

// Используем uint16_t для хранения 10-битных значений
typedef uint16_t tmds_symbol_t;

// TMDS декодер для проверки
class TMDSDecoder {
private:
    int balance;
    uint8_t prev_encoded;
    bool prev_control;
    
public:
    TMDSDecoder() : balance(0), prev_encoded(0), prev_control(false) {}
    
    uint8_t decode(tmds_symbol_t encoded, bool is_control) {
        if (is_control) {
            return 0;
        }
        
        uint8_t decoded = 0;
        if (encoded & 0x100) {
            decoded = encoded & 0xFF;
            for (int i = 7; i >= 0; i--) {
                decoded ^= (prev_encoded >> i) & 1;
            }
        } else {
            decoded = encoded & 0xFF;
            for (int i = 7; i >= 0; i--) {
                decoded ^~ (prev_encoded >> i) & 1;
            }
        }
        
        prev_encoded = decoded;
        return decoded;
    }
    
    bool check_sync_symbol(tmds_symbol_t symbol) {
        return (symbol == 0b1101010100 || symbol == 0b0010101011 ||
                symbol == 0b0101010100 || symbol == 0b1010101011);
    }
};

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    
    Vdvi_generic* top = new Vdvi_generic;
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("waveform.vcd");

    // Инициализация сигналов
    top->clk_platform = 0;
    top->clk_pixel_in = 0;
    top->rst_n = 0;
    top->r_in = 0;
    top->g_in = 0;
    top->b_in = 0;
    top->hsync_in = 0;
    top->vsync_in = 0;
    top->blank_in = 1;

    // TMDS декодеры для каждого канала
    TMDSDecoder decoders[3];
    std::vector<tmds_symbol_t> tmds_history[3];
    std::vector<tmds_symbol_t> tmds_clock_history;
    
    // Статистика для проверки
    int h_position = 0;
    int v_position = 0;
    int frame_count = 0;
    int pixel_count = 0;
    int error_count = 0;
    
    // Буфер для захвата TMDS символов
    tmds_symbol_t captured_tmds[3] = {0};
    tmds_symbol_t captured_clock = 0;
    int capture_phase = 0;

    std::cout << "Starting comprehensive DVI simulation..." << std::endl;

    const int TOTAL_CYCLES = 20000;
    for (main_time = 0; main_time < TOTAL_CYCLES; main_time++) {
        // Тактовые сигналы
        top->clk_platform = !top->clk_platform;
        if (main_time % 6 == 0) {
            top->clk_pixel_in = !top->clk_pixel_in;
        }

        // Сброс
        if (main_time == 10) {
            top->rst_n = 1;
            std::cout << "Reset released" << std::endl;
        }

        // Генерация тестового видеосигнала
        if (top->clk_pixel_in && main_time > 20) {
            h_position++;
            if (h_position >= 800) {
                h_position = 0;
                v_position++;
                if (v_position >= 525) {
                    v_position = 0;
                    frame_count++;
                    std::cout << "Frame " << frame_count << " completed" << std::endl;
                    std::cout << "  Pixels processed: " << pixel_count << std::endl;
                    std::cout << "  TMDS errors: " << error_count << std::endl;
                }
            }

            top->hsync_in = (h_position >= 656 && h_position < 752);
            top->vsync_in = (v_position >= 490 && v_position < 492);
            top->blank_in = (h_position >= 640) || (v_position >= 480);

            if (!top->blank_in) {
                // Тестовая картинка с известными паттернами для проверки
                top->r_in = (h_position % 256);
                top->g_in = (v_position % 256);
                top->b_in = ((h_position + v_position) % 256);
                pixel_count++;
            } else {
                top->r_in = 0;
                top->g_in = 0;
                top->b_in = 0;
            }
        }

        // Захват TMDS символов на быстром такте
        if (top->clk_platform) {
            capture_phase = (capture_phase + 1) % 5;
            
            if (capture_phase == 0) {
                // Захватываем полный символ каждые 5 быстрых тактов
                for (int i = 0; i < 3; i++) {
                    tmds_history[i].push_back(captured_tmds[i]);
                    
                    // Проверка дифференциальных пар
                    bool d_p = (top->tmds_d_p >> i) & 1;
                    bool d_n = (top->tmds_d_n >> i) & 1;
                    if (d_p == d_n) {
                        std::cout << "ERROR: Channel " << i << " differential violation at time " << main_time << std::endl;
                        error_count++;
                    }
                }
                tmds_clock_history.push_back(captured_clock);
                
                // Проверка тактовой дифференциальной пары
                if (top->tmds_clk_p == top->tmds_clk_n) {
                    std::cout << "ERROR: Clock differential violation at time " << main_time << std::endl;
                    error_count++;
                }
                
                // Сброс буферов захвата
                for (int i = 0; i < 3; i++) captured_tmds[i] = 0;
                captured_clock = 0;
            }
            
            // Накопление битов в буферах
            for (int i = 0; i < 3; i++) {
                bool bit_value = (top->tmds_d_p >> i) & 1;
                captured_tmds[i] = (captured_tmds[i] << 1) | (bit_value ? 1 : 0);
            }
            captured_clock = (captured_clock << 1) | (top->tmds_clk_p ? 1 : 0);
        }

        // Проверка TMDS сигналов
        if (main_time > 1000 && main_time % 100 == 0) {
            // Проверка, что сигналы не застыли
            static int last_states[4] = {0};
            int current_states[4] = {
                top->tmds_clk_p,
                (top->tmds_d_p >> 0) & 1,
                (top->tmds_d_p >> 1) & 1,
                (top->tmds_d_p >> 2) & 1
            };
            
            for (int i = 0; i < 4; i++) {
                if (last_states[i] == current_states[i]) {
                    error_count++;
                }
                last_states[i] = current_states[i];
            }
        }

        // Периодическая проверка накопленных TMDS символов
        if (main_time > 5000 && main_time % 500 == 0 && !tmds_history[0].empty()) {
            std::cout << "TMDS analysis at time " << main_time << ":" << std::endl;
            std::cout << "  Symbols captured: " << tmds_history[0].size() << std::endl;
            
            // Проверка нескольких случайных символов
            for (int i = 0; i < 3; i++) {
                if (!tmds_history[i].empty()) {
                    size_t idx = tmds_history[i].size() > 10 ? tmds_history[i].size() - 10 : 0;
                    tmds_symbol_t symbol = tmds_history[i][idx];
                    
                    std::cout << "  Channel " << i << " symbol: " << std::bitset<10>(symbol) << std::endl;
                    
                    // Проверка, что символ имеет правильный формат
                    if ((symbol & 0x3FF) != symbol) {
                        std::cout << "  ERROR: Invalid TMDS symbol format" << std::endl;
                        error_count++;
                    }
                }
            }
        }

        top->eval();
        tfp->dump(main_time);

        if (frame_count >= 2 && error_count == 0) {
            std::cout << "Success: 2 frames completed with no TMDS errors" << std::endl;
            break;
        }
        
        if (error_count > 10) {
            std::cout << "ERROR: Too many TMDS errors, stopping simulation" << std::endl;
            break;
        }
    }

    // Финальный отчет
    std::cout << "\n=== SIMULATION REPORT ===" << std::endl;
    std::cout << "Total frames: " << frame_count << std::endl;
    std::cout << "Total pixels: " << pixel_count << std::endl;
    if (!tmds_history[0].empty()) {
        std::cout << "TMDS symbols captured: " << tmds_history[0].size() << std::endl;
    }
    std::cout << "Total errors: " << error_count << std::endl;
    std::cout << "Simulation cycles: " << main_time << std::endl;
    
    if (error_count == 0) {
        std::cout << "RESULT: SUCCESS - All TMDS checks passed!" << std::endl;
    } else {
        std::cout << "RESULT: FAILURE - TMDS errors detected!" << std::endl;
    }

    tfp->close();
    top->final();
    delete top;
    delete tfp;
    
    return error_count > 0 ? 1 : 0;
}