
#include "Vtb_z80.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <stdio.h>
#include <stdlib.h>

vluint64_t main_time = 0;
uint8_t memory[65536] = {0};

double sc_time_stamp() { return main_time; }


size_t load_binary(const char* filename, uint16_t start_addr) {
    FILE* fp = fopen(filename, "rb");
    if (!fp) {
        perror("Error opening file");
        exit(1);
    }
    
    fseek(fp, 0, SEEK_END);
    long size = ftell(fp);
    fseek(fp, 0, SEEK_SET);
    
    if (size == 0) {
        fprintf(stderr, "File is empty\n");
        exit(1);
    }
    
    size_t read = fread(&memory[start_addr], 1, size, fp);
    printf("Loaded %lu bytes from %s to 0x%04X\n", (long unsigned)read, filename, start_addr);
    
    printf("First 8 bytes at 0x0100: %02X %02X %02X %02X  %02X %02X %02X %02X\n",
           memory[start_addr], memory[start_addr+1],
           memory[start_addr+2], memory[start_addr+3],
           memory[start_addr+4], memory[start_addr+5],
           memory[start_addr+6], memory[start_addr+7]);
    
    fclose(fp);
    return read;
}
bool wasAccessToAddress0x100;

void clock_tick(Vtb_z80* top, VerilatedVcdC* tfp) {
    // Переключаем тактовый сигнал
    top->CLK = !top->CLK;
    top->eval();
    tfp->dump(main_time++);
    
    // Анализируем сигналы на ПАДАЮЩЕМ фронте CLK (когда CLK=0)
    if (top->CLK == 1 && top->nRESET) {
        // Логирование состояния
        if (!top->nM1) {
            if (!top->nMREQ && !top->nRD) {
                top->D = memory[top->A];
                printf("M1 CYCLE: PC=0x%04X OP=0x%02X D=0x%02X\n", top->A, memory[top->A], top->D);
                if (top->A == 0x100) wasAccessToAddress0x100 = true;
            }
        }

        // Операция чтения из памяти
        else if (!top->nMREQ && !top->nRD) {
            top->D = memory[top->A];
            printf("  Read:  [0x%04X] => 0x%02X\n", top->A, top->D);
        }
        
        // Операция записи в память
        else if (!top->nMREQ && !top->nWR) {
           
            memory[top->A] = top->D;
            printf("  Write: [0x%04X] <= 0x%02X\n", top->A, top->D);
        }
        
        // Операция ввода (IN)
        else if (!top->nIORQ && !top->nRD) {
  
            top->D = 0xFF; // Пример значения для ввода
            printf("  In:    (0x%04X) => 0x%02X\n", top->A, top->D);
        }
        
        // Операция вывода (OUT)
        else if (!top->nIORQ && !top->nWR) {
            printf("  Out:   (0x%04X) <= 0x%02X\n", top->A, top->D);
        }

    }
}

void reset_cpu(Vtb_z80* top, VerilatedVcdC* tfp) {
    top->nINT = 1;
    top->nNMI = 1;
    top->nBUSRQ = 1;
    top->nWAIT = 1;
    top->nRESET = 0;
    for (int i = 0; i < 12; i++) { // 12 тактов сброса (3 машинных цикла)
        clock_tick(top, tfp);
    }
    top->nRESET = 1;
    printf("Reset complete\n");
}
void init_bdos()
{
    // Загрузка программы zexall
    load_binary("zexall.com", 0x0100);

    // 1. Сигнатура CP/M в области перехода (обязательно)
    memory[0] = 0xC3;   // JP
    memory[1] = 0x00;
    memory[2] = 0x01;   // JP 0x0100 - переход на начало zexall

    // 3. ПЕРЕНАПРАВЛЕНИЕ вызова BDOS (CALL 5) на наш обработчик по адресу 0xFF00
    // По адресу 5 должен находиться код, который прыгает на обработчик
    memory[5] = 0xC3;   // JP
    memory[6] = 0x00;   // Младший байт адреса прыжка (0xFF00) -> 0x00
    memory[7] = 0xFF;   // Старший байт адреса прыжка (0xFF00) -> 0xFF
    // ВАЖНО: Это перезапишет байты стека! Поэтому нужно сделать ДО инициализации стека.

    // 4. Инициализация обработчика BDOS по адресу 0xFF00
    const uint16_t bdos_handler_addr = 0xFF00;

    // Код обработчика BDOS
    // Сохраняем все регистры
    memory[bdos_handler_addr + 0] = 0xF5; // PUSH AF
    memory[bdos_handler_addr + 1] = 0xC5; // PUSH BC
    memory[bdos_handler_addr + 2] = 0xD5; // PUSH DE
    memory[bdos_handler_addr + 3] = 0xE5; // PUSH HL

    // Проверяем номер функции в C
    memory[bdos_handler_addr + 4] = 0x79; // LD A, C
    memory[bdos_handler_addr + 5] = 0xFE; // CP
    memory[bdos_handler_addr + 6] = 0x02; // CP 2 (C_WRITE)
    memory[bdos_handler_addr + 7] = 0xCA; // JP Z, ...
    memory[bdos_handler_addr + 8] = 0x10; // ... младший байт адреса обработчика C_WRITE
    memory[bdos_handler_addr + 9] = 0xFF; // ... старший байт адреса (0xFF10)
    memory[bdos_handler_addr + 10] = 0xFE; // CP
    memory[bdos_handler_addr + 11] = 0x09; // CP 9 (C_WRITESTR)
    memory[bdos_handler_addr + 12] = 0xCA; // JP Z, ...
    memory[bdos_handler_addr + 13] = 0x20; // ... младший байт адреса обработчика C_WRITESTR
    memory[bdos_handler_addr + 14] = 0xFF; // ... старший байт адреса (0xFF20)

    // Обработчик по умолчанию (для других функций) - просто восстанавливаем регистры и возвращаемся
    memory[bdos_handler_addr + 15] = 0xE1; // POP HL
    memory[bdos_handler_addr + 16] = 0xD1; // POP DE
    memory[bdos_handler_addr + 17] = 0xC1; // POP BC
    memory[bdos_handler_addr + 18] = 0xF1; // POP AF
    memory[bdos_handler_addr + 19] = 0xC9; // RET

    // 5. Обработчик функции 2 (C_WRITE - вывод символа) по адресу 0xFF10
    const uint16_t func_write_addr = 0xFF10;
    memory[func_write_addr + 0] = 0x7B; // LD A, E (символ для вывода находится в E)
    // !!! ВСТАВЬТЕ ЗДЕСЬ ВЫВОД СИМВОЛА ДЛЯ ВЕРИФИКАТОРА
    
    // Например, можно сохранить символ в специальную ячейку памяти для последующего анализа
    memory[func_write_addr + 1] = 0x32; // LD (nn), A
    memory[func_write_addr + 2] = 0x00; // ... младший байт адреса (0xFFF0)
    memory[func_write_addr + 3] = 0xFF; // ... старший байт адреса (0xFFF0)
    // Восстанавливаем регистры и возвращаемся
    memory[func_write_addr + 4] = 0xE1; // POP HL
    memory[func_write_addr + 5] = 0xD1; // POP DE
    memory[func_write_addr + 6] = 0xC1; // POP BC
    memory[func_write_addr + 7] = 0xF1; // POP AF
    memory[func_write_addr + 8] = 0xC9; // RET

    // 6. Обработчик функции 9 (C_WRITESTR - вывод строки) по адресу 0xFF20
    const uint16_t func_writestr_addr = 0xFF20;
    memory[func_writestr_addr + 0] = 0xD5; // PUSH DE (сохраняем начало строки)
    // Цикл вывода строки
    memory[func_writestr_addr + 1] = 0x1A; // LOOP: LD A, (DE)
    memory[func_writestr_addr + 2] = 0xFE; // CP
    memory[func_writestr_addr + 3] = 0x24; // CP '$' (символ конца строки в CP/M)
    memory[func_writestr_addr + 4] = 0xCA; // JP Z, ...
    memory[func_writestr_addr + 5] = 0x30; // ... младший байт адреса выхода (0xFF30)
    memory[func_writestr_addr + 6] = 0xFF; // ... старший байт адреса (0xFF30)
    // !!! ВСТАВЬТЕ ЗДЕСЬ ВЫВОД СИМВОЛА ИЗ A
   
    // Например, так же сохраняем в ячейку 0xFFF0
    memory[func_writestr_addr + 7] = 0x32; // LD (0xFFF0), A
    memory[func_writestr_addr + 8] = 0xF0;
    memory[func_writestr_addr + 9] = 0xFF;
    memory[func_writestr_addr + 10] = 0x13; // INC DE (next char)
    memory[func_writestr_addr + 11] = 0xC3; // JP ...
    memory[func_writestr_addr + 12] = 0x21; // ... младший байт на начало цикла (0xFF21)
    memory[func_writestr_addr + 13] = 0xFF; // ... старший байт (0xFF21)
    // Выход из цикла (встретили '$')
    memory[func_writestr_addr + 14] = 0xD1; // POP DE (восстанавливаем DE)
    memory[func_writestr_addr + 15] = 0xE1; // POP HL
    memory[func_writestr_addr + 16] = 0xD1; // POP DE
    memory[func_writestr_addr + 17] = 0xC1; // POP BC
    memory[func_writestr_addr + 18] = 0xF1; // POP AF
    memory[func_writestr_addr + 19] = 0xC9; // RET

    // 7. Зарезервируем ячейку для вывода символа (по желанию)
    memory[0xFFF0] = 0x00; // Сюда будет сохраняться последний выведенный символ

    printf("BDOS handler installed at 0x%04X\n", bdos_handler_addr);
}
int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    
    Vtb_z80* top = new Vtb_z80();
    VerilatedVcdC* tfp = new VerilatedVcdC();
    top->trace(tfp, 99);
    tfp->open("waveforms.vcd");
    
    // Загрузка программы
    load_binary("zexall.com", 0x0100);
    init_bdos();
    printf("Memory at 0x0000: %02X %02X %02X %02X %02X %02X\n", memory[0], memory[1], memory[2], memory[3], memory[4], memory[5]);


    
    // Сброс
    reset_cpu(top, tfp);
    
    // Главный цикл симуляции
    bool test_complete = false;
    while (!test_complete && main_time < 1000000) {
        clock_tick(top, tfp);
        
        if (wasAccessToAddress0x100 && !top->nM1 && !top->nRD && top->A==0x0000) {
            test_complete = true;
            printf("Test completed successfully!\n");
        }

    }
    
    tfp->close();
    delete top;
    return test_complete ? 0 : 1;
}