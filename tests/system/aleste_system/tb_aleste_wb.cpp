#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Valeste_system.h"
#include <iostream>
#include <vector>
#include <cstdint>

vluint64_t sim_time = 0;
Valeste_system* top;
VerilatedVcdC* tfp;

// Константы
const int WDT = 1000;  // Watchdog timeout

// ==============================================
// Модель SDRAM
// ==============================================
class SDRAM_Model {
private:
    std::vector<uint16_t> mem;
    uint16_t data_to_drive;
    bool has_data_to_drive;
    uint32_t current_row;
    
public:
    SDRAM_Model(size_t size_mb = 16) {
        size_t words = (size_mb * 1024 * 1024) / 2;
        mem.resize(words, 0);
        has_data_to_drive = false;
        current_row = 0;
        std::cout << "SDRAM: " << words << " words (" << size_mb << " MB)" << std::endl;
    }
    
    // Заполнение тестовыми данными
    void fill_increment() {
        for (size_t i = 0; i < mem.size(); i++) {
            mem[i] = i & 0xFFFF;
        }
    }
    
    // Вычисление физического адреса для SDRAM
    uint32_t calculate_physical_address(uint32_t row, uint32_t col, uint32_t bank) {
        // Преобразование SDRAM адресации в линейный адрес
        // Согласно вашим комментариям:
        // row - 13 бит, но только 12 младших используются для адресации
        // col - 9 бит
        // bank - 2 бита
        
        uint32_t row_low = row & 0xFFF;           // A[13:2] = ROW[11:0] - 12 бит
        uint32_t col_low = col & 0x1;             // A[1] = COL[0] - 1 бит
        uint32_t col_high = (col >> 1) & 0xFF;    // A[21:14] = COL[8:1] - 8 бит
        
        // Формируем байтовый адрес
        uint32_t byte_address = (bank << 22) | (col_high << 14) | (row_low << 2) | (col_low << 1);
        
        // Преобразуем в адрес слова (16 бит)
        return byte_address >> 1;
    }
    
    // Обработка SDRAM команд
    void process_cycle() {
        // Сбрасываем данные для выдачи
        has_data_to_drive = false;
        
        // Детектируем команды только когда CS_N активен (низкий уровень)
        if (top->sdram_cs_n == 0) {
            // Команда ACTIVE (RAS=0, CAS=1, WE=1) - установка строки
            if (top->sdram_ras_n == 0 && top->sdram_cas_n == 1 && top->sdram_we_n == 1) {
                current_row = top->sdram_a & 0x1FFF; // 13 бит строки
                // std::cout << "SDRAM: ACTIVE command, row=0x" << std::hex << current_row << std::dec << std::endl;
            }
            
            // Команда READ (RAS=1, CAS=0, WE=1) - чтение
            else if (top->sdram_ras_n == 1 && top->sdram_cas_n == 0 && top->sdram_we_n == 1) {
                uint32_t col = top->sdram_a & 0x1FF; // 9 бит столбца
                uint32_t bank = top->sdram_ba & 0x3; // 2 бита банка
                
                uint32_t word_addr = calculate_physical_address(current_row, col, bank);
                
                // Маскируем адрес до размера памяти (16MB = 8M слов = 2^23 слов)
                word_addr &= 0x7FFFFF;
                
                if (word_addr < mem.size()) {
                    data_to_drive = mem[word_addr];
                    has_data_to_drive = true;
                    std::cout << "SDRAM: READ addr=0x" << std::hex << word_addr 
                              << " data=0x" << data_to_drive << std::dec << std::endl;
                }
            }
            
            // Команда WRITE (RAS=1, CAS=0, WE=0) - запись
            else if (top->sdram_ras_n == 1 && top->sdram_cas_n == 0 && top->sdram_we_n == 0) {
                uint32_t col = top->sdram_a & 0x1FF; // 9 бит столбца
                uint32_t bank = top->sdram_ba & 0x3; // 2 бита банка
                
                uint32_t word_addr = calculate_physical_address(current_row, col, bank);
                word_addr &= 0x7FFFFF;
                
                if (word_addr < mem.size()) {
                    uint16_t write_data = top->sdram_dq_o;
                    uint8_t dm = top->sdram_dm;
                    
                    // Обработка маски данных (DM)
                    if ((dm & 0x1) == 0) { // Младший байт разрешен
                        mem[word_addr] = (mem[word_addr] & 0xFF00) | (write_data & 0x00FF);
                    }
                    if ((dm & 0x2) == 0) { // Старший байт разрешен
                        mem[word_addr] = (mem[word_addr] & 0x00FF) | (write_data & 0xFF00);
                    }
                    
                    std::cout << "SDRAM: WRITE addr=0x" << std::hex << word_addr 
                              << " data=0x" << write_data << " dm=0x" << (int)dm << std::dec << std::endl;
                }
            }
        }
        
        // Выдаем данные на шину, если есть что выдавать
        if (has_data_to_drive) {
            top->sdram_dq_i = data_to_drive;
        } else {
            top->sdram_dq_i = 0x0000;
        }
    }
    
    // Загрузка бинарного файла
    bool load_binary_file(const std::string& filename, uint32_t start_address = 0) {
        FILE* file = fopen(filename.c_str(), "rb");
        if (!file) {
            std::cerr << "Error: Cannot open file " << filename << std::endl;
            return false;
        }
        
        fseek(file, 0, SEEK_END);
        long size = ftell(file);
        fseek(file, 0, SEEK_SET);
        
        if (size % 2 != 0) {
            std::cerr << "Warning: File size " << size << " is not even, padding with zero" << std::endl;
            size++;
        }
        
        size_t word_count = size / 2;
        size_t max_words = mem.size() - start_address;
        
        if (word_count > max_words) {
            std::cerr << "Warning: File too large (" << word_count << " words), only loading " 
                     << max_words << " words" << std::endl;
            word_count = max_words;
        }
        
        std::vector<uint8_t> buffer(size);
        if (fread(buffer.data(), 1, size, file) != (size_t)size) {
            std::cerr << "Error: Failed to read file" << std::endl;
            fclose(file);
            return false;
        }
        
        fclose(file);
        
        // Преобразование байтов в 16-битные слова (little-endian)
        for (size_t i = 0; i < word_count; i++) {
            uint8_t low_byte = buffer[i * 2];
            uint8_t high_byte = (i * 2 + 1 < buffer.size()) ? buffer[i * 2 + 1] : 0;
            uint16_t word = (high_byte << 8) | low_byte;
            mem[start_address + i] = word;
        }
        
        std::cout << "SDRAM: Loaded " << word_count << " words (" << size << " bytes) from " 
                 << filename << " to address 0x" << std::hex << start_address << std::dec << std::endl;
        return true;
    }
    
    // Прямое чтение для отладки
    uint16_t read_direct(uint32_t word_addr) {
        if (word_addr < mem.size()) {
            return mem[word_addr];
        }
        return 0xDEAD;
    }
};

// Глобальный экземпляр модели SDRAM
SDRAM_Model* sdram_model = nullptr;

// ==============================================
// Существующий код управления тактированием
// ==============================================

// Вспомогательные переменные для методов
bool clk_25mhz_state = 0;
bool wb_clk_state = 0;

// Приватный метод для переключения 25MHz такта (используется только внутри set_wb_clk)
static void private_toggle25mhz(int n = 1) {
    while (n > 0) {
        clk_25mhz_state = !clk_25mhz_state;
        top->clk_25mhz = clk_25mhz_state;
   
        uint32_t old_sdram_clk = top->sdram_clock;

        top->eval();
        tfp->dump(sim_time);        
        sim_time += 5;

        // Обработка SDRAM на каждом фронте 25MHz такта
        if (sdram_model) {
            if (top->sdram_clock && !old_sdram_clk) {
                sdram_model->process_cycle();
            }
        }
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
              << " data=0x" << (int)data << std::dec << std::endl;
    
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
    
    // Инициализация модели SDRAM
    sdram_model = new SDRAM_Model(16);
    sdram_model->fill_increment();  // Заполняем тестовыми данными
    
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
    
    std::cout << "Starting test with SDRAM model and tracing..." << std::endl;
    
    // 1. Сброс и инициализация (используем только методы WB тактов)
    init_and_reset(20000);  // 20000 полных периодов такта шины
    
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

    // 6. Тест доступа к SDRAM через Z80
    std::cout << "\n=== Testing Z80 memory access ===" << std::endl;
    
    // Даем время Z80 выполнить несколько инструкций
    for (int i = 0; i < 1000; i++) {
        pulse_wb_clk();
        
        // Мониторим состояние CPU
        if (top->debug == 0x76) {
            std::cout << "CPU HALT detected at cycle " << i << std::endl;
            break;
        }
    }
    
    // 7. Завершаем симуляцию
    std::cout << "\nCompleting simulation..." << std::endl;
    
    // Несколько дополнительных тактов шины
    for (int i = 0; i < 50; i++) {
        pulse_wb_clk();
    }
    
    std::cout << "Test done. Waveform saved to waveform_tb.vcd" << std::endl;
    
    // Очистка
    delete sdram_model;
    tfp->close();
    delete tfp;
    delete top;
    
    return 0;
}