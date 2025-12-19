#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vz80_system.h"

#include <cstdio>
#include <cstring>
#include <string>
#include <vector>
#include <fstream>
#include <iostream>
#include <iomanip>

// ==============================================
// Модель Wishbone Slave (память 64KB)
// ==============================================
class WB_Slave_Model {
private:
    std::vector<uint8_t> mem;
    bool verbose;
    
public:
    WB_Slave_Model(size_t size_kb = 64, bool verbose = false) : verbose(verbose) {
        size_t bytes = size_kb * 1024;
        mem.resize(bytes, 0);
        std::cout << "WB Slave Memory: " << bytes << " bytes (" << size_kb << " KB)" << std::endl;
    }
    
    // Загрузка бинарного файла по смещению
    bool load_binary_file(const std::string& filename, uint32_t offset = 0) {
        std::ifstream file(filename, std::ios::binary | std::ios::ate);
        if (!file.is_open()) {
            std::cerr << "Error: Cannot open file " << filename << std::endl;
            return false;
        }
        
        std::streamsize size = file.tellg();
        file.seekg(0, std::ios::beg);
        
        if (size + offset > mem.size()) {
            std::cerr << "Error: File too large. Size=" << size 
                     << ", offset=0x" << std::hex << offset 
                     << ", mem_size=" << mem.size() << std::dec << std::endl;
            return false;
        }
        
        std::vector<char> buffer(size);
        if (!file.read(buffer.data(), size)) {
            std::cerr << "Error: Failed to read file" << std::endl;
            return false;
        }
        
        // Копирование в память
        for (size_t i = 0; i < size; i++) {
            mem[offset + i] = buffer[i];
        }
        
        std::cout << "Loaded " << size << " bytes from " << filename 
                 << " to offset 0x" << std::hex << offset << std::dec << std::endl;
        return true;
    }
    
    // Заполнение тестовой программой - БОЛЕЕ ПРОСТАЯ
    void fill_test_program() {
        // ОЧЕНЬ ПРОСТАЯ тестовая программа Z80
        // Просто бесконечный цикл с операциями
        
        // 1. Загрузка разных значений в A
        // 2. Запись в разные адреса
        // 3. Чтение обратно
        // 4. Бесконечный цикл
        
        mem[0] = 0x3E;     // LD A, 0xAA     (3E AA)
        mem[1] = 0xAA;
        mem[2] = 0x32;     // LD (0x1000), A (32 00 10)
        mem[3] = 0x00;
        mem[4] = 0x10;
        mem[5] = 0x3E;     // LD A, 0x55     (3E 55)
        mem[6] = 0x55;
        mem[7] = 0x32;     // LD (0x1001), A (32 01 10)
        mem[8] = 0x01;
        mem[9] = 0x10;
        mem[10] = 0x3A;    // LD A, (0x1000) (3A 00 10)
        mem[11] = 0x00;
        mem[12] = 0x10;
        mem[13] = 0x3A;    // LD A, (0x1001) (3A 01 10)
        mem[14] = 0x01;
        mem[15] = 0x10;
        mem[16] = 0xC3;    // JP 0x0000      (C3 00 00) - бесконечный цикл
        mem[17] = 0x00;
        mem[18] = 0x00;
        
        // Заполняем область данных
        for (size_t i = 0x1000; i < 0x1010; i++) {
            if (i < mem.size()) {
                mem[i] = (i & 0xFF);
            }
        }
        
        std::cout << "Test program loaded (19 bytes) - infinite loop" << std::endl;
        if (verbose) {
            dump_memory(0, 32);
        }
    }
    
    // Чтение из памяти (по физическому адресу Wishbone)
    uint8_t read(uint32_t addr) {
        // Преобразование адреса: 0xC00000 -> 0x0000
        uint32_t offset = 0;
        if (addr >= 0xC00000) {
            offset = addr - 0xC00000;
        } else {
            offset = addr;
        }
        
        if (offset < mem.size()) {
            uint8_t data = mem[offset];
            if (verbose && addr >= 0xC00000 && addr < 0xC00100) {
                std::cout << "  WB READ: addr=0x" << std::hex << addr 
                         << " (offset=0x" << offset << ") = 0x" 
                         << (int)data << std::dec << std::endl;
            }
            return data;
        }
        
        std::cerr << "WB READ ERROR: invalid address 0x" 
                 << std::hex << addr << std::dec << std::endl;
        return 0xFF;
    }
    
    // Запись в память
    void write(uint32_t addr, uint8_t data) {
        // Преобразование адреса: 0xC00000 -> 0x0000
        uint32_t offset = 0;
        if (addr >= 0xC00000) {
            offset = addr - 0xC00000;
        } else {
            offset = addr;
        }
        
        if (offset < mem.size()) {
            mem[offset] = data;
            if (verbose && addr >= 0xC01000 && addr < 0xC01010) {
                std::cout << "  WB WRITE: addr=0x" << std::hex << addr 
                         << " (offset=0x" << offset << ") = 0x" 
                         << (int)data << std::dec << std::endl;
            }
        } else {
            std::cerr << "WB WRITE ERROR: invalid address 0x" 
                     << std::hex << addr << std::dec << std::endl;
        }
    }
    
    // Дамп памяти
    void dump_memory(uint32_t start, uint32_t size) {
        if (start + size > mem.size()) {
            size = mem.size() - start;
        }
        
        std::cout << "Memory dump from 0x" << std::hex << start 
                 << " to 0x" << (start + size - 1) << ":" << std::dec << std::endl;
        
        for (uint32_t i = 0; i < size; i++) {
            if (i % 16 == 0) {
                if (i > 0) std::cout << std::endl;
                std::cout << "0x" << std::hex << std::setw(4) << std::setfill('0') 
                         << (start + i) << ": ";
            }
            std::cout << std::hex << std::setw(2) << std::setfill('0') 
                     << (int)mem[start + i] << " ";
        }
        std::cout << std::dec << std::endl;
    }
};

// Вспомогательная функция для извлечения битов
uint8_t get_bit(uint8_t value, int bit_pos) {
    return (value >> bit_pos) & 1;
}

// ==============================================
// Главная функция
// ==============================================
int main(int argc, char** argv) {
    std::string binary_file;
    bool test_mode = true;
    bool verbose = false;
    int sim_cycles = 50000;
    
    // Парсинг аргументов командной строки
    for (int i = 1; i < argc; i++) {
        if (std::string(argv[i]) == "--load" && i + 1 < argc) {
            binary_file = argv[i + 1];
            test_mode = false;
            i++;
        } else if (std::string(argv[i]) == "--verbose" || std::string(argv[i]) == "-v") {
            verbose = true;
        } else if (std::string(argv[i]) == "--cycles" && i + 1 < argc) {
            sim_cycles = atoi(argv[i + 1]);
            i++;
        } else if (std::string(argv[i]) == "--help" || std::string(argv[i]) == "-h") {
            std::cout << "Usage: " << argv[0] << " [options]\n"
                      << "Options:\n"
                      << "  --load <filename>   Load binary file into memory\n"
                      << "  --cycles <n>        Simulation cycles (default: 50000)\n"
                      << "  --verbose, -v       Verbose output\n"
                      << "  --help              Show this help message\n";
            return 0;
        }
    }
    
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    
    Vz80_system* top = new Vz80_system;
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("tb_z80_system.vcd");
    
    // ==============================================
    // Инициализация модели памяти Wishbone
    // ==============================================
    WB_Slave_Model wb_slave(64, verbose);
    
    if (!binary_file.empty()) {
        if (!wb_slave.load_binary_file(binary_file)) {
            std::cerr << "Failed to load binary file, using test program instead" << std::endl;
            test_mode = true;
        } else {
            std::cout << "Using binary file: " << binary_file << std::endl;
        }
    }
    
    if (test_mode) {
        std::cout << "Using built-in test program" << std::endl;
        wb_slave.fill_test_program();
    }
    
    // ==============================================
    // Инициализация системы
    // ==============================================
    top->clk_i = 0;
    top->res_i = 1;           // Активный высокий сброс
    top->res_short_i = 1;     // Активный высокий
    
    // Wishbone интерфейс
    top->wbm_dat_i = 0;
    top->wbm_ack_i = 0;
    top->wbm_err_i = 0;
    
    // Debug интерфейс
    top->dbg_adr_i = 0;
    top->dbg_dat_i = 0;
    top->dbg_cyc_i = 0;
    top->dbg_stb_i = 0;
    top->dbg_we_i = 0;
    top->dbg_cs_i = 0;
    
    // Прерывания
    top->nmi_req_i = 0;
    top->int_req_i = 0;
    
    // Статус системы
    top->system_status_i = 0x01;  // Нормальный статус
    
    std::cout << "\n=== Starting Z80 System Simulation ===" << std::endl;
    std::cout << "Clock cycles to simulate: " << sim_cycles << std::endl;
    
    // ==============================================
    // Переменные для симуляции
    // ==============================================
    int last_z80_halt = 0;
    uint8_t last_debug_bus = 0;
    int wb_transactions = 0;
    int cpu_cycles = 0;
    bool last_reset = 1;
    
    // Для отладки
    int last_mreq = 1;
    int last_iorq = 1;
    int last_wr = 1;
    int last_rd = 1;
    
    int print_count = 0;
    
    // ==============================================
    // Основной цикл симуляции
    // ==============================================
    for (int cycle = 0; cycle < sim_cycles; cycle++) {
        // Тактовый сигнал - полноценные такты
        top->clk_i = !top->clk_i;
        
        // Сброс в начале симуляции
        if (cycle < 20) {
            top->res_i = 1;
            top->res_short_i = 1;
            if (cycle == 10 && verbose) {
                std::cout << "Reset active..." << std::endl;
            }
        } else if (cycle == 20) {
            top->res_i = 0;
            top->res_short_i = 0;
            std::cout << "Cycle " << cycle << ": Reset released" << std::endl;
        }
        
        // ==============================================
        // Обработка Wishbone интерфейса (на положительном фронте)
        // ==============================================
        if (top->clk_i) { // положительный фронт
            // Сброс ACK по умолчанию
            top->wbm_ack_i = 0;
            
            // Если есть активный цикл Wishbone
            if (top->wbm_cyc_o && top->wbm_stb_o) {
                wb_transactions++;
                
                // Небольшая задержка для реалистичности
                if (cycle > 50) {
                    // Чтение
                    if (!top->wbm_we_o) {
                        if (print_count < 50) {
                            std::cout << "Cycle " << std::dec << cycle 
                                     << ": WB READ addr=0x" << std::hex << top->wbm_adr_o 
                                     << std::dec << std::endl;
                            print_count++;
                        }
                        
                        // Чтение из модели памяти
                        top->wbm_dat_i = wb_slave.read(top->wbm_adr_o);
                        top->wbm_ack_i = 1;
                        
                    } 
                    // Запись
                    else {
                        if (print_count < 50) {
                            std::cout << "Cycle " << std::dec << cycle 
                                     << ": WB WRITE addr=0x" << std::hex << top->wbm_adr_o 
                                     << " data=0x" << (int)top->wbm_dat_o << std::dec << std::endl;
                            print_count++;
                        }
                        
                        // Запись в модель памяти
                        wb_slave.write(top->wbm_adr_o, top->wbm_dat_o);
                        top->wbm_ack_i = 1;
                    }
                }
            }
        }
        
        // ==============================================
        // Выполнение Verilog (на оба фронта)
        // ==============================================
        top->eval();
        tfp->dump(cycle * 10);  // Dump на каждый полуцикл
        
        // ==============================================
        // Мониторинг состояния (на отрицательном фронте)
        // ==============================================
        if (!top->clk_i) { // отрицательный фронт
            cpu_cycles++;
            
            // Мониторинг сброса
            if (top->debug_z80_reset_o != last_reset) {
                std::cout << "Cycle " << std::dec << cycle 
                         << ": Z80 RESET changed to " << (int)top->debug_z80_reset_o << std::endl;
                last_reset = top->debug_z80_reset_o;
            }
            
            // Мониторинг сигналов Z80
            uint8_t debug_bus = top->debug_z80_bus_o;
            int current_mreq = get_bit(debug_bus, 0);
            int current_iorq = get_bit(debug_bus, 1);
            int current_rd = get_bit(debug_bus, 2);
            int current_wr = get_bit(debug_bus, 3);
            
            if (verbose && cycle > 100) {
                if (current_mreq != last_mreq || 
                    current_iorq != last_iorq ||
                    current_rd != last_rd ||
                    current_wr != last_wr) {
                    
                    std::cout << "Cycle " << std::dec << cycle 
                             << ": Z80 Bus MREQ=" << current_mreq
                             << " IORQ=" << current_iorq
                             << " RD=" << current_rd
                             << " WR=" << current_wr << std::endl;
                    
                    last_mreq = current_mreq;
                    last_iorq = current_iorq;
                    last_rd = current_rd;
                    last_wr = current_wr;
                }
            }
            
            // Проверка HALT состояния
            if (top->debug_z80_halt_o != last_z80_halt) {
                std::cout << "Cycle " << std::dec << cycle 
                         << ": Z80 HALT changed to " << (int)top->debug_z80_halt_o << std::endl;
                last_z80_halt = top->debug_z80_halt_o;
            }
            
            // Debug bus мониторинг
            if (debug_bus != last_debug_bus && verbose) {
                last_debug_bus = debug_bus;
                std::cout << "Cycle " << std::dec << cycle 
                         << ": Debug bus = 0x" << std::hex 
                         << (int)debug_bus << std::dec << std::endl;
            }
            
            // Статус каждые 2000 циклов
            if (cycle % 2000 == 0 && cycle > 100) {
                std::cout << "Cycle " << std::dec << cycle 
                         << ": WB transactions=" << wb_transactions
                         << ", CPU HALT=" << (int)top->debug_z80_halt_o
                         << ", RESET=" << (int)top->debug_z80_reset_o
                         << ", Mode: native=" << (int)top->native_mode_o
                         << " legacy=" << (int)top->legacy_mode_o
                         << " supervisor=" << (int)top->supervisor_mode_o 
                         << std::endl;
            }
            
            // Тестирование прерываний
            if (cycle == 1000) {
                top->int_req_i = 1;
                if (verbose) std::cout << "Cycle " << cycle << ": INT request set" << std::endl;
            } else if (cycle == 1050) {
                top->int_req_i = 0;
            }
            
            if (cycle == 2000) {
                top->nmi_req_i = 1;
                if (verbose) std::cout << "Cycle " << cycle << ": NMI request set" << std::endl;
            } else if (cycle == 2050) {
                top->nmi_req_i = 0;
            }
            
            // Тестирование debug интерфейса
            if (cycle == 3000) {
                top->dbg_cs_i = 1;
                top->dbg_stb_i = 1;
                top->dbg_cyc_i = 1;
                top->dbg_adr_i = 0x01;
                top->dbg_dat_i = 0xAA;
                if (verbose) std::cout << "Cycle " << cycle << ": Debug write 0xAA to address 0x01" << std::endl;
            } else if (cycle == 3010) {
                top->dbg_stb_i = 0;
                top->dbg_cyc_i = 0;
                top->dbg_cs_i = 0;
            }
            
            // Завершение симуляции по таймауту
            if (cycle == sim_cycles - 100) {
                std::cout << "Simulation nearing end at cycle " << cycle << std::endl;
                // Дамп памяти для проверки
                std::cout << "\nMemory dump of key areas:" << std::endl;
                wb_slave.dump_memory(0, 32);
                wb_slave.dump_memory(0x1000, 16);
            }
        }
    }
    
    // ==============================================
    // Завершение
    // ==============================================
    std::cout << "\n=== Simulation finished ===" << std::endl;
    std::cout << "Statistics:" << std::endl;
    std::cout << "  Total clock cycles: " << cpu_cycles << std::endl;
    std::cout << "  Wishbone transactions: " << wb_transactions << std::endl;
    std::cout << "  Final Z80 state: HALT=" << (int)top->debug_z80_halt_o 
             << ", RESET=" << (int)top->debug_z80_reset_o << std::endl;
    std::cout << "  System Mode: native=" << (int)top->native_mode_o
             << ", legacy=" << (int)top->legacy_mode_o
             << ", supervisor=" << (int)top->supervisor_mode_o << std::endl;
    std::cout << "  Control register: 0x" << std::hex << (int)top->debug_control_o << std::dec << std::endl;
    
    // Дамп памяти для проверки
    std::cout << "\nFinal memory dump:" << std::endl;
    wb_slave.dump_memory(0, 64);
    wb_slave.dump_memory(0x1000, 32);
    
    tfp->close();
    delete tfp;
    delete top;
    
    std::cout << "\nVCD file saved: tb_z80_system.vcd" << std::endl;
    std::cout << "To view waveforms: gtkwave tb_z80_system.vcd" << std::endl;
    
    return 0;
}