#include "Vtb_z80.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <stdio.h>
#include <stdlib.h>

vluint64_t main_time = 0;
double sc_time_stamp() { return main_time; }

uint8_t memory[65536] = {0};

void load_binary(const char* filename, uint16_t start_addr) {
    FILE* fp = fopen(filename, "rb");
    if (!fp) {
        fprintf(stderr, "Error: Could not open %s\n", filename);
        exit(1);
    }
    
    fseek(fp, 0, SEEK_END);
    long size = ftell(fp);
    fseek(fp, 0, SEEK_SET);
    
    if (start_addr + size > 65536) {
        fprintf(stderr, "Error: File too large\n");
        exit(1);
    }
    
    size_t read = fread(&memory[start_addr], 1, size, fp);
    fclose(fp);
    
    printf("Loaded %s (%ld bytes) to 0x%04X\n", filename, read, start_addr);
    
    // Проверка первых 16 байт
    printf("First 16 bytes:\n");
    for (int i = 0; i < 16; i++) {
        printf("%02X ", memory[start_addr + i]);
    }
    printf("\n");
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    
    Vtb_z80* top = new Vtb_z80;
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("tb_z80.vcd");
    
    // Загрузка программы
    load_binary("zexall.com", 0x0100);
    
    // Установка JP 0100h в адресе 0x0000
    memory[0] = 0xC3; // JP
    memory[1] = 0x00;
    memory[2] = 0x01;
    
    // Инициализация сигналов
    top->CLK = 0;
    top->nRESET = 0;
    top->nWAIT = 1;
    top->nINT = 1;
    top->nNMI = 1;
    top->nBUSRQ = 1;
    
    // Сброс процессора (минимум 3 такта)
    for (int i = 0; i < 10; i++) {
        top->CLK = !top->CLK;
        top->eval();
        tfp->dump(main_time++);
    }
    top->nRESET = 1;
    
    // Главный цикл симуляции
    bool test_complete = false;
    for (int i = 0; i < 5000000 && !test_complete; i++) {
        top->CLK = !top->CLK;
        
        // Интерфейс памяти
        if (!top->nMREQ) {
            if (!top->nRD) {
                top->D = memory[top->A];
            } else if (!top->nWR) {
                memory[top->A] = top->D;
            }
        }
        
        // Интерфейс ввода-вывода
        if (!top->nIORQ) {
            if (!top->nRD) {
                top->D = 0xFF; // Чтение порта
            } else if (!top->nWR) {
                // Вывод в порт 0x01
                if ((top->A & 0xFF) == 0x01) {
                    printf("Cycle %6d: Port 0x01 = 0x%02X\n", i, top->D);
                    if (top->D == 0xFF) {
                        test_complete = true;
                        printf("\nZEXALL TEST COMPLETE\n");
                    }
                }
            }
        }
        
        top->eval();
        tfp->dump(main_time++);
        
        // Прогресс-индикатор
        if (i % 100000 == 0) {
            printf("Cycle %6d: PC = 0x%04X\n", i, top->A);
        }
    }
    
    if (!test_complete) {
        printf("\nTEST FAILED - Timeout reached\n");
    }
    
    tfp->close();
    delete top;
    return test_complete ? 0 : 1;
}