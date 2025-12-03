#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Valeste_system.h"

#include <cstdio>
#include <cstring>
#include <string>
#include <vector>
#include <fstream>
#include <iostream>
#include <dirent.h>

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    
    Valeste_system* top = new Valeste_system;
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("waveform.vcd");
    
    // Перед инициализацией: подготовка файла инициализации SDRAM (sdram_init.hex)
    // Поддерживаем аргумент командной строки: --sdram=path/to/dump.bin
    std::string sdram_arg;
    for (int i = 1; i < argc; ++i) {
        const char* p = argv[i];
        if (strncmp(p, "--sdram=", 8) == 0) {
            sdram_arg = std::string(p + 8);
            break;
        }
    }

    // Если аргумент не задан, ищем первый .bin в ./sdram_dumps/
    if (sdram_arg.empty()) {
        DIR* dir = opendir("./sdram_dumps");
        if (dir) {
            struct dirent* entry;
            while ((entry = readdir(dir)) != NULL) {
                std::string name(entry->d_name);
                if (name.size() > 4 && name.substr(name.size()-4) == ".bin") {
                    sdram_arg = std::string("./sdram_dumps/") + name;
                    break;
                }
            }
            closedir(dir);
        }
    }

    if (!sdram_arg.empty()) {
        std::cout << "Preparing SDRAM init from: " << sdram_arg << std::endl;
        // Read binary file
        std::ifstream ifs(sdram_arg, std::ios::binary);
        if (ifs) {
            std::vector<unsigned char> data((std::istreambuf_iterator<char>(ifs)), std::istreambuf_iterator<char>());
            // Write hex file in 16-bit little-endian words for $readmemh
            std::ofstream ofs("sdram_init.hex");
            if (!ofs) {
                std::cerr << "Failed to open sdram_init.hex for writing\n";
            } else {
                size_t idx = 0;
                while (idx < data.size()) {
                    unsigned int lo = data[idx];
                    unsigned int hi = 0;
                    if (idx + 1 < data.size()) hi = data[idx+1];
                    unsigned int word = (hi << 8) | lo; // little-endian
                    char buf[8];
                    sprintf(buf, "%04x\n", word & 0xFFFF);
                    ofs << buf;
                    idx += 2;
                }
                ofs.close();
                std::cout << "Wrote sdram_init.hex (" << data.size() << " bytes -> " << ((data.size()+1)/2) << " words)" << std::endl;
            }
        } else {
            std::cerr << "Failed to open SDRAM dump file: " << sdram_arg << std::endl;
        }
    }

    // Инициализация
    top->clk_25mhz = 0;
    top->serial_rx = 1;  // Idle state
    
    // ДОБАВЬТЕ ЭТО: Даем время на внутренний сброс
    printf("=== PHASE 1: Initialization (1000 cycles) ===\n");
    for (int i = 0; i < 1000; i++) {
        top->clk_25mhz = !top->clk_25mhz;
        top->eval();
        tfp->dump(i * 20);
    }
    
    printf("=== PHASE 2: Main Simulation ===\n");
    
    // Основной цикл
    for (int cycle = 1000; cycle < 100000; cycle++) {
        top->clk_25mhz = !top->clk_25mhz;
        top->eval();
        tfp->dump(cycle * 20);
        
        if (cycle % 500 == 0) {
            printf("Cycle %5d: LEDs=%d Debug=0x%02x\n", 
                   cycle, top->debug_leds, top->debug);
        }
    }
    
    printf("Simulation finished\n");
    
    tfp->close();
    delete tfp;
    delete top;
    
    return 0;
}