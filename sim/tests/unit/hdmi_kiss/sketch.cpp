#include <stdio.h>
#include <stdlib.h>
#include <verilated.h>
#include <verilated_fst_c.h>
#include "Vhdmi_scaler_core.h"
#include <vector>
#include <fstream>
#include <iostream>

vluint64_t main_time = 0;
double sc_time_stamp() { return main_time; }
Vhdmi_scaler_core* top;
VerilatedFstC* tfp;

// Константы
const int SRC_CLK_HALF = 5;  // 96MHz period = 10 time units
const int DST_CLK_HALF = 6;  // 74.25MHz period = 13 time units
const int H_SRC_TOTAL = 512+16+96+48;
const int V_SRC_TOTAL = 384+10+2+26;

// Глобальные переменные
int src_h_count = 0, src_v_count = 0;
int src_pixel_div = 0;
int dst_x = 0, dst_y = 0;
bool prev_dst_hsync = 0, prev_dst_vsync = 0;
std::vector<OutputPixel> output_pixels;

void eval_and_dump() {
    top->eval();
    tfp->dump(main_time);
    main_time++;
}

void generate_src_pixel_clock() {
    static int div_counter = 0;
    
    div_counter++;
    if (div_counter >= 6) {
        div_counter = 0;
        top->src_pixel_valid_i = 1;
        
        // Обновление счетчиков и синхросигналов
        src_h_count++;
        if (src_h_count >= H_SRC_TOTAL) {
            src_h_count = 0;
            src_v_count++;
            if (src_v_count >= V_SRC_TOTAL) src_v_count = 0;
        }
        
        top->src_hsync_i = (src_h_count >= 512+16) && (src_h_count < 512+16+96);
        top->src_vsync_i = (src_v_count >= 384+10) && (src_v_count < 384+10+2);
        
        // Генерация данных
        if (src_h_count < 512 && src_v_count < 384) {
            int y = src_v_count;
            if (y < 128) top->src_pixel_data_i = 0xFF0000;
            else if (y < 256) top->src_pixel_data_i = 0x00FF00;
            else top->src_pixel_data_i = 0x0000FF;
        } else {
            top->src_pixel_data_i = 0;
        }
    } else {
        top->src_pixel_valid_i = 0;
    }
}

void capture_output() {
    // Детектирование фронтов
    bool dst_hsync_fall = !top->dst_hsync_o && prev_dst_hsync;
    bool dst_vsync_rise = top->dst_vsync_o && !prev_dst_vsync;
    
    if (dst_vsync_rise) {
        dst_x = 0; dst_y = 0;
        printf("Frame start\n");
    } else if (dst_hsync_fall) {
        dst_x = 0; dst_y++;
    }
    
    // Захват пикселей
    if (top->dst_pixel_valid_o) {
        OutputPixel pixel = {dst_x, dst_y, top->dst_pixel_data_o};
        output_pixels.push_back(pixel);
        dst_x++;
    }
    
    prev_dst_hsync = top->dst_hsync_o;
    prev_dst_vsync = top->dst_vsync_o;
}
// Функция сохранения PPM
void save_frame_to_ppm(const std::vector<OutputPixel>& pixels, int width, int height, const char* filename) {
    std::ofstream ppm_file(filename, std::ios::binary);
    if (!ppm_file) {
        printf("Error opening file %s\n", filename);
        return;
    }
    
    ppm_file << "P6\n" << width << " " << height << "\n255\n";
    std::vector<unsigned char> image_data(width * height * 3, 0);
    
    for (const auto& pixel : pixels) {
        if (pixel.x < width && pixel.y < height) {
            int index = (pixel.y * width + pixel.x) * 3;
            image_data[index + 0] = (pixel.rgb >> 16) & 0xFF;
            image_data[index + 1] = (pixel.rgb >> 8) & 0xFF;
            image_data[index + 2] = pixel.rgb & 0xFF;
        }
    }
    
    ppm_file.write(reinterpret_cast<char*>(image_data.data()), image_data.size());
    ppm_file.close();
    printf("Saved: %s\n", filename);
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    
    top = new Vhdmi_scaler_core;
    tfp = new VerilatedFstC;
    top->trace(tfp, 99);
    tfp->open("waveform.fst");
    
    // Инициализация
    top->src_clk_i = 0;
    top->dst_clk_i = 0;
    top->src_rst_i = 1;
    top->dst_rst_i = 1;
    top->src_pixel_valid_i = 0;
    top->src_pixel_data_i = 0;
    top->src_hsync_i = 0;
    top->src_vsync_i = 0;
    eval_and_dump();
    
    // Сброс (10 полных тактов)
    for (int i = 0; i < 20; i++) {
        if (i % 2 == 0) {
            top->src_clk_i = !top->src_clk_i;
            top->dst_clk_i = !top->dst_clk_i;
        }
        eval_and_dump();
    }
    top->src_rst_i = 0;
    top->dst_rst_i = 0;
    
    // Основной цикл симуляции
    for (int i = 0; i < 2000000; i++) { // 2M cycles should be enough
        // Переключение тактовых сигналов
        if (i % SRC_CLK_HALF == 0) top->src_clk_i = !top->src_clk_i;
        if (i % DST_CLK_HALF == 0) top->dst_clk_i = !top->dst_clk_i;
        
        // Генерация входных сигналов на rising edge src_clk
        if (top->src_clk_i && (i % SRC_CLK_HALF == 0)) {
            generate_src_pixel_clock();
        }
        
        // Захват выходных сигналов на rising edge dst_clk  
        if (top->dst_clk_i && (i % DST_CLK_HALF == 0)) {
            capture_output();
        }
        
        eval_and_dump();
        
        // Сохранение кадров
        if (dst_y >= 720 && !output_pixels.empty()) {
            save_frame_to_ppm(output_pixels, 1280, 720, "output.ppm");
            output_pixels.clear();
            break; // или continue для множества кадров
        }
    }
    
    tfp->close();
    delete top;
    delete tfp;
    return 0;
}
