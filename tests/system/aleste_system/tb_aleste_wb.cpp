#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Valeste_system.h"
#include <iostream>

vluint64_t sim_time = 0;
Valeste_system* top;
VerilatedVcdC* tfp;

// Константы
const int WDT = 1000;  // Watchdog timeout

// Вспомогательные переменные для методов
bool clk_25mhz_state = 0;
bool wb_clk_state = 0;

// Приватный метод для переключения 25MHz такта (используется только внутри set_wb_clk)
static void private_toggle25mhz(int n = 1) {
    while (n > 0) {
        clk_25mhz_state = !clk_25mhz_state;
        top->clk_25mhz = clk_25mhz_state;
        top->eval();
        tfp->dump(sim_time);
        sim_time += 5;
        n--;
    }
}

// Методы для работы с тактом шины WB (деление 25MHz на 4)
void set_wb_clk(bool v) {
    wb_clk_state = v;
    top->debug_wb_clk_i = wb_clk_state;
    // Для получения wb_clk из 25MHz с делением на 4:
    // wb_clk = 1 когда clk_25mhz был 1 в двух последних фазах из 4
    // Просто делаем 4 такта 25MHz для одного такта WB
    private_toggle25mhz(4);
}

void toggle_wb_clk(int n = 1) {
    while (n > 0) {
        set_wb_clk(!wb_clk_state);
        n--;
    }
}

void pulse_wb_clk(int n = 1) {
    while (n > 0) {
        toggle_wb_clk(2);  // Полный период: 0->1->0 или 1->0->1
        n--;
    }
}

// Метод для инициализации и сброса системы
void init_and_reset(int num_cycles) {
    std::cout << "Initializing and resetting system..." << std::endl;
    
    // Просто делаем несколько тактов шины для инициализации
    for (int i = 0; i < num_cycles; i++) {
        pulse_wb_clk();
    }
}

// Метод для записи в шину WB
void wb_write(uint32_t address, uint8_t data) {
    std::cout << "WB WRITE: addr=0x" << std::hex << address 
              << " data=0x" << data << std::dec << std::endl;
    
    // Инициализация всех сигналов в 0
    top->debug_wb_cyc_i = 0;
    top->debug_wb_stb_i = 0;
    top->debug_wb_we_i = 0;
    top->debug_wb_adr_i = 0;
    top->debug_wb_dat_i = 0;
    
    // Устанавливаем адрес и данные
    top->debug_wb_adr_i = address;
    top->debug_wb_dat_i = data;
    top->debug_wb_we_i = 1;  // Режим записи
    
    // stb=1; cyc=1;
    top->debug_wb_stb_i = 1;
    top->debug_wb_cyc_i = 1;
    
    // clk=1;
    set_wb_clk(1);
    
    int max_cycles = 0;
    
    // Ждем ACK
    while (!top->debug_wb_ack_o && max_cycles < WDT) {
        toggle_wb_clk();
        max_cycles++;
    }
    
    // Если такт шины в состоянии 1, делаем еще один такт
    if (wb_clk_state) {
        toggle_wb_clk();
    }
    
    if (max_cycles >= WDT) {
        std::cout << "ERROR: Watchdog timeout waiting for ACK!" << std::endl;
    } else {
        std::cout << "WB WRITE completed in " << max_cycles << " cycles" << std::endl;
    }
    
    // Снимаем сигналы
    top->debug_wb_cyc_i = 0;
    top->debug_wb_stb_i = 0;
    top->debug_wb_we_i = 0;
    
    // clk=1;
    set_wb_clk(1);
}

// Метод для чтения из шины WB
void wb_read(uint32_t address) {
    std::cout << "WB READ: addr=0x" << std::hex << address << std::dec << std::endl;
    
    // Инициализация всех сигналов в 0
    top->debug_wb_cyc_i = 0;
    top->debug_wb_stb_i = 0;
    top->debug_wb_we_i = 0;
    top->debug_wb_adr_i = 0;
    
    // Устанавливаем адрес
    top->debug_wb_adr_i = address;
    top->debug_wb_we_i = 0;  // Режим чтения
    
    // stb=1; cyc=1;
    top->debug_wb_stb_i = 1;
    top->debug_wb_cyc_i = 1;
    
    // clk=1;
    set_wb_clk(1);
    
    int max_cycles = 0;
    
    // Ждем ACK
    while (!top->debug_wb_ack_o && max_cycles < WDT) {
        toggle_wb_clk();
        max_cycles++;
    }
    
    // Если такт шины в состоянии 1, делаем еще один такт
    if (wb_clk_state) {
        toggle_wb_clk();
    }
    
    if (max_cycles >= WDT) {
        std::cout << "ERROR: Watchdog timeout waiting for ACK!" << std::endl;
    } else {
        uint32_t data = top->debug_wb_dat_o;
        std::cout << "WB READ completed in " << max_cycles << " cycles, data=0x" 
                  << std::hex << data << std::dec << std::endl;
    }
    
    // Снимаем сигналы
    top->debug_wb_cyc_i = 0;
    top->debug_wb_stb_i = 0;
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    
    top = new Valeste_system;
    tfp = new VerilatedVcdC;
    
    top->trace(tfp, 99);
    tfp->open("waveform_tb.vcd");
    
    // Инициализация
    clk_25mhz_state = 0;
    wb_clk_state = 0;
    top->clk_25mhz = 0;
    top->serial_rx = 1;
    top->sdram_dq_i = 0x0000;
    
    // Инициализация сигналов WB
    top->debug_wb_cyc_i = 0;
    top->debug_wb_stb_i = 0;
    top->debug_wb_we_i = 0;
    top->debug_wb_adr_i = 0;
    top->debug_wb_dat_i = 0;
    
    std::cout << "Starting test with tracing..." << std::endl;
    
    // 1. Сброс и инициализация (используем только методы WB тактов)
    init_and_reset(20000);  // 1000 полных периодов такта шины
    
    // 2. Тестируем запись в шину WB
    wb_write(0x00000001, 0xAA);
    
    // 3. Небольшая пауза между операциями
    pulse_wb_clk(); 
    
    // 4. Тестируем чтение из шины WB
    wb_read(0x00000001);
    
    pulse_wb_clk();  
    pulse_wb_clk();  
    pulse_wb_clk();  

    // 5. Еще одна запись
    wb_write(0xFF0100, 0x55);
    pulse_wb_clk();  
    wb_read(0xFF0100);

    pulse_wb_clk();  
    pulse_wb_clk();
    pulse_wb_clk();  

    wb_write(0xFF0120, 0xAA);
    pulse_wb_clk();  
    wb_read(0xFF0120);

    // 7. Завершаем симуляцию
    std::cout << "Completing simulation..." << std::endl;
    
    // Несколько дополнительных тактов шины
    for (int i = 0; i < 50; i++) {
        pulse_wb_clk();
    }
    
    std::cout << "Test done. Waveform saved to waveform_tb.vcd" << std::endl;
    
    tfp->close();
    delete tfp;
    delete top;
    
    return 0;
}