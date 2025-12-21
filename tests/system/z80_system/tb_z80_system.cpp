#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vz80_system.h"

#include <cstdio>
#include <cstring>
#include <string>
#include <vector>
#include <map>
#include <fstream>
#include <iostream>
#include <iomanip>

// ==============================================
// Модель Wishbone Slave (память 64KB + IO порты)
// ==============================================
class WB_Slave_Model {
private:
    std::vector<uint8_t> mem;
    std::map<uint32_t, uint8_t> io_registers;  // Регистры портов ввода-вывода
    std::set<uint32_t> accessed_io_ports;      // Порты, к которым был доступ
    bool verbose;
    uint32_t io_base_addr;
    uint32_t mem_base_addr;
    
public:
    WB_Slave_Model(uint32_t mem_base = 0xC00000, uint32_t io_base = 0xFF0000, 
                   size_t size_kb = 64, bool verbose = false) 
        : verbose(verbose), io_base_addr(io_base), mem_base_addr(mem_base) {
        size_t bytes = size_kb * 1024;
        mem.resize(bytes, 0xFF);  // Заполняем 0xFF вместо 0
        io_registers.clear();     // Очищаем порты
        accessed_io_ports.clear(); // Очищаем историю доступа
        
        if (verbose) {
            std::cout << "WB Slave Memory: " << bytes << " bytes (" << size_kb << " KB) at 0x" 
                      << std::hex << mem_base << std::dec << std::endl;
            std::cout << "IO Ports range: 0x" << std::hex << io_base 
                      << "-0x" << (io_base + 0xFFFF) << std::dec << std::endl;
        }
    }
    
    // Загрузка бинарного файла по смещению в память
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
                 << " to memory offset 0x" << std::hex << offset << std::dec << std::endl;
        return true;
    }
    
    // Чтение из памяти или портов
    uint8_t read(uint32_t addr) {
        // Проверяем, это порт ввода-вывода (диапазон 0xFF0000-0xFFFFFF)?
        if (addr >= io_base_addr && addr < (io_base_addr + 0x10000)) {
            // Это порт ввода-вывода
            uint32_t port_addr = addr;
            accessed_io_ports.insert(port_addr);  // Отмечаем доступ
            
            // Возвращаем значение порта, если оно есть
            if (io_registers.find(port_addr) != io_registers.end()) {
                uint8_t data = io_registers[port_addr];
                if (verbose) {
                    std::cout << "  IO READ: port=0x" << std::hex << (port_addr & 0xFFFF)
                             << " (addr=0x" << port_addr << ") = 0x" 
                             << (int)data << std::dec << std::endl;
                }
                return data;
            } else {
                // Порт не инициализирован, возвращаем 0xFF
                if (verbose) {
                    std::cout << "  IO READ: port=0x" << std::hex << (port_addr & 0xFFFF)
                             << " (addr=0x" << port_addr << ", uninitialized) = 0xFF" << std::dec << std::endl;
                }
                return 0xFF;
            }
        }
        
        // Проверяем, это память (диапазон 0xC00000-0xC0FFFF)?
        if (addr >= mem_base_addr && addr < (mem_base_addr + mem.size())) {
            // Это память
            uint32_t offset = addr - mem_base_addr;
            
            if (offset < mem.size()) {
                uint8_t data = mem[offset];
                if (verbose) {
                    std::cout << "  MEM READ: addr=0x" << std::hex << addr 
                             << " (offset=0x" << offset << ") = 0x" 
                             << (int)data << std::dec << std::endl;
                }
                return data;
            }
        }
        
        // Неизвестный адрес
        std::cerr << "WB READ ERROR: invalid address 0x" 
                 << std::hex << addr << std::dec << std::endl;
        return 0xFF;
    }
    
    // Запись в память или порты
    void write(uint32_t addr, uint8_t data) {
        // Проверяем, это порт ввода-вывода (диапазон 0xFF0000-0xFFFFFF)?
        if (addr >= io_base_addr && addr < (io_base_addr + 0x10000)) {
            // Это порт ввода-вывода
            uint32_t port_addr = addr;
            accessed_io_ports.insert(port_addr);  // Отмечаем доступ
            
            io_registers[port_addr] = data;
            if (verbose) {
                std::cout << "  IO WRITE: port=0x" << std::hex << (port_addr & 0xFFFF)
                         << " (addr=0x" << port_addr << ") = 0x" 
                         << (int)data << std::dec << std::endl;
            }
            return;
        }
        
        // Проверяем, это память (диапазон 0xC00000-0xC0FFFF)?
        if (addr >= mem_base_addr && addr < (mem_base_addr + mem.size())) {
            // Это память
            uint32_t offset = addr - mem_base_addr;
            
            if (offset < mem.size()) {
                mem[offset] = data;
                if (verbose) {
                    std::cout << "  MEM WRITE: addr=0x" << std::hex << addr 
                             << " (offset=0x" << offset << ") = 0x" 
                             << (int)data << std::dec << std::endl;
                }
            } else {
                std::cerr << "MEM WRITE ERROR: invalid offset 0x" 
                         << std::hex << offset << std::dec << std::endl;
            }
            return;
        }
        
        // Неизвестный адрес
        std::cerr << "WB WRITE ERROR: invalid address 0x" 
                 << std::hex << addr << std::dec << std::endl;
    }
    
    // Дамп памяти в заданном диапазоне
    void dump_memory(uint32_t start_addr, uint32_t end_addr) {
        if (start_addr < mem_base_addr || end_addr > mem_base_addr + mem.size()) {
            std::cerr << "Invalid memory range for dump: 0x" << std::hex 
                     << start_addr << "-0x" << end_addr << std::dec << std::endl;
            return;
        }
        
        uint32_t start_offset = start_addr - mem_base_addr;
        uint32_t end_offset = end_addr - mem_base_addr;
        uint32_t size = end_offset - start_offset + 1;
        
        std::cout << "\nMemory dump from 0x" << std::hex << start_addr 
                 << " to 0x" << end_addr 
                 << " (offset 0x" << start_offset << "-0x" << end_offset << "):" 
                 << std::dec << std::endl;
        
        for (uint32_t i = 0; i < size; i++) {
            if (i % 16 == 0) {
                if (i > 0) std::cout << std::endl;
                std::cout << "0x" << std::hex << std::setw(6) << std::setfill('0') 
                         << (start_addr + i) << ": ";
            }
            std::cout << std::hex << std::setw(2) << std::setfill('0') 
                     << (int)mem[start_offset + i] << " ";
        }
        std::cout << std::dec << std::endl;
    }
    
    // Дамп всех задействованных IO портов
    void dump_accessed_io_ports() {
        std::cout << "\nAccessed IO Ports (0x" << std::hex << io_base_addr 
                 << "-0x" << (io_base_addr + 0xFFFF) << "):" << std::dec << std::endl;
        
        if (accessed_io_ports.empty()) {
            std::cout << "  No IO ports were accessed" << std::endl;
            return;
        }
        
        for (uint32_t port_addr : accessed_io_ports) {
            uint8_t value = 0xFF;
            if (io_registers.find(port_addr) != io_registers.end()) {
                value = io_registers[port_addr];
            }
            std::cout << "  Port 0x" << std::hex << (port_addr & 0xFFFF)
                     << " (addr 0x" << port_addr << ") = 0x" 
                     << (int)value << std::dec << std::endl;
        }
    }
    
    // Дамп IO портов в заданном диапазоне
    void dump_io_range(uint32_t start_port, uint32_t end_port) {
        std::cout << "\nIO Ports dump from 0x" << std::hex << start_port 
                 << " to 0x" << end_port << ":" << std::dec << std::endl;
        
        for (uint32_t port = start_port; port <= end_port; port++) {
            uint32_t full_addr = io_base_addr | (port & 0xFFFF);
            uint8_t value = 0xFF;
            if (io_registers.find(full_addr) != io_registers.end()) {
                value = io_registers[full_addr];
            }
            
            if ((port - start_port) % 8 == 0) {
                if (port > start_port) std::cout << std::endl;
                std::cout << "0x" << std::hex << std::setw(4) << std::setfill('0')
                         << port << ": ";
            }
            std::cout << std::hex << std::setw(2) << std::setfill('0')
                     << (int)value << " ";
        }
        std::cout << std::dec << std::endl;
    }
    
    // Получить значение порта
    uint8_t get_io_port(uint32_t port_addr) {
        uint32_t full_addr = io_base_addr | (port_addr & 0xFFFF);
        if (io_registers.find(full_addr) != io_registers.end()) {
            return io_registers[full_addr];
        }
        return 0xFF;
    }
    
    // Очистить историю доступа к портам
    void clear_io_access_history() {
        accessed_io_ports.clear();
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
    bool verbose = false;
    int sim_cycles = 200000;  // Увеличим лимит циклов
    uint32_t dump_start_addr = 0xC01000;
    uint32_t dump_end_addr = 0xC010FF;
    bool dump_io_all = true;
    uint32_t dump_io_start = 0x0000;
    uint32_t dump_io_end = 0x00FF;
    
    // Парсинг аргументов командной строки
    for (int i = 1; i < argc; i++) {
        if (std::string(argv[i]) == "--load" && i + 1 < argc) {
            binary_file = argv[i + 1];
            i++;
        } else if (std::string(argv[i]) == "--verbose" || std::string(argv[i]) == "-v") {
            verbose = true;
        } else if (std::string(argv[i]) == "--cycles" && i + 1 < argc) {
            sim_cycles = atoi(argv[i + 1]);
            i++;
        } else if (std::string(argv[i]) == "--dump-start" && i + 1 < argc) {
            dump_start_addr = strtoul(argv[i + 1], nullptr, 16);
            i++;
        } else if (std::string(argv[i]) == "--dump-end" && i + 1 < argc) {
            dump_end_addr = strtoul(argv[i + 1], nullptr, 16);
            i++;
        } else if (std::string(argv[i]) == "--io-start" && i + 1 < argc) {
            dump_io_start = strtoul(argv[i + 1], nullptr, 16);
            i++;
        } else if (std::string(argv[i]) == "--io-end" && i + 1 < argc) {
            dump_io_end = strtoul(argv[i + 1], nullptr, 16);
            i++;
        } else if (std::string(argv[i]) == "--help" || std::string(argv[i]) == "-h") {
            std::cout << "Usage: " << argv[0] << " [options]\n"
                      << "Options:\n"
                      << "  --load <filename>      Load binary file into memory (required)\n"
                      << "  --cycles <n>           Simulation cycles (default: 200000)\n"
                      << "  --dump-start <addr>    Memory dump start address (hex, default: C01000)\n"
                      << "  --dump-end <addr>      Memory dump end address (hex, default: C010FF)\n"
                      << "  --io-start <port>      IO dump start port (hex, default: 0000)\n"
                      << "  --io-end <port>        IO dump end port (hex, default: 00FF)\n"
                      << "  --verbose, -v          Verbose output\n"
                      << "  --help                 Show this help message\n";
            return 0;
        }
    }
    
    // Проверка обязательного параметра
    if (binary_file.empty()) {
        std::cerr << "Error: Binary file must be specified with --load option" << std::endl;
        std::cerr << "Use --help for usage information" << std::endl;
        return 1;
    }
    
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    
    Vz80_system* top = new Vz80_system;
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("tb_z80_system.vcd");
    
    // ==============================================
    // Инициализация модели памяти и портов Wishbone
    // ==============================================
    WB_Slave_Model wb_slave(0xC00000, 0xFF0000, 64, verbose);
    
    // Загрузка программы из файла
    std::cout << "=== Loading program ===" << std::endl;
    if (!wb_slave.load_binary_file(binary_file, 0)) {
        std::cerr << "Fatal error: Failed to load binary file" << std::endl;
        delete tfp;
        delete top;
        return 1;
    }
    
    // Дамп загруженной программы
    std::cout << "\n=== Program dump (first 256 bytes) ===" << std::endl;
    wb_slave.dump_memory(0xC00000, 0xC000FF);
    
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
    
    // Режимы графики (по умолчанию)
    top->graphic_mode = 0;
    top->irq_control = 0;
    
    std::cout << "\n=== Starting Z80 System Simulation ===" << std::endl;
    std::cout << "Binary file: " << binary_file << std::endl;
    std::cout << "Clock cycles to simulate: " << sim_cycles << std::endl;
    std::cout << "Memory range: 0xC00000-0xC0FFFF" << std::endl;
    std::cout << "IO range: 0xFF0000-0xFFFFFF" << std::endl;
    std::cout << "Will dump memory: 0x" << std::hex << dump_start_addr 
              << "-0x" << dump_end_addr << std::dec << std::endl;
    std::cout << "Will dump IO ports: 0x" << std::hex << dump_io_start 
              << "-0x" << dump_io_end << std::dec << std::endl;
    
    // ==============================================
    // Переменные для симуляции
    // ==============================================
    int last_z80_halt = 0;
    int wb_transactions = 0;
    int cpu_cycles = 0;
    bool last_reset = 1;
    bool halt_detected = false;
    int halt_cycle = 0;
    
    int io_reads = 0;
    int io_writes = 0;
    int mem_reads = 0;
    int mem_writes = 0;
    
    // ==============================================
    // Основной цикл симуляции
    // ==============================================
    std::cout << "\n=== Running simulation ===" << std::endl;
    for (int cycle = 0; cycle < sim_cycles; cycle++) {
        // Тактовый сигнал - полноценные такты
        top->clk_i = !top->clk_i;
        
        // Сброс в начале симуляции
        if (cycle < 20) {
            top->res_i = 1;
            top->res_short_i = 1;
        } else if (cycle == 20) {
            top->res_i = 0;
            top->res_short_i = 0;
            if (verbose) {
                std::cout << "Cycle " << cycle << ": Reset released" << std::endl;
            }
        }
        
        // ==============================================
        // Обработка Wishbone интерфейса (на положительном фронте)
        // ==============================================
        if (top->clk_i) { // положительный фронт
            // Сброс ACK по умолчанию
            top->wbm_ack_i = 0;
            top->wbm_err_i = 0;
            
            // Если есть активный цикл Wishbone
            if (top->wbm_cyc_o && top->wbm_stb_o) {
                wb_transactions++;
                
                // Задержка для реалистичности
                if (cycle > 50) {
                    // Определяем тип доступа
                    bool is_io_access = (top->wbm_adr_o >= 0xFF0000);
                    bool is_mem_access = (top->wbm_adr_o >= 0xC00000 && top->wbm_adr_o < 0xC10000);
                    
                    if (is_io_access || is_mem_access) {
                        // Чтение
                        if (!top->wbm_we_o) {
                            if (is_io_access) {
                                io_reads++;
                            } else {
                                mem_reads++;
                            }
                            
                            // Чтение из модели
                            top->wbm_dat_i = wb_slave.read(top->wbm_adr_o);
                            top->wbm_ack_i = 1;
                            
                        } 
                        // Запись
                        else {
                            if (is_io_access) {
                                io_writes++;
                            } else {
                                mem_writes++;
                            }
                            
                            // Запись в модель
                            wb_slave.write(top->wbm_adr_o, top->wbm_dat_o);
                            top->wbm_ack_i = 1;
                        }
                    } else {
                        // Неизвестный адрес
                        if (verbose) {
                            std::cerr << "Cycle " << cycle << ": Invalid WB address 0x" 
                                     << std::hex << top->wbm_adr_o << std::dec << std::endl;
                        }
                        top->wbm_err_i = 1;
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
            
            // Проверка HALT состояния
            if (top->debug_z80_halt_o != last_z80_halt) {
                last_z80_halt = top->debug_z80_halt_o;
                
                if (top->debug_z80_halt_o && !halt_detected && cycle > 100) {
                    halt_detected = true;
                    halt_cycle = cycle;
                    std::cout << "\nCycle " << std::dec << cycle 
                             << ": CPU HALT detected" << std::endl;
                    
                    // Выходим из цикла после небольшой задержки
                    if (cycle + 100 < sim_cycles) {
                        sim_cycles = cycle + 100;  // Завершим через 100 циклов
                    }
                }
            }
            
            // Простой мониторинг каждые 5000 циклов
            if (cycle % 5000 == 0 && cycle > 100 && verbose) {
                std::cout << "Cycle " << std::dec << cycle 
                         << ": WB trans=" << wb_transactions
                         << " (IO R:" << io_reads << " W:" << io_writes
                         << ", MEM R:" << mem_reads << " W:" << mem_writes << ")"
                         << ", CPU HALT=" << (int)top->debug_z80_halt_o
                         << std::endl;
            }
            
            // Прервем если достигли лимита и CPU не работает
            if (cycle > 1000 && !halt_detected && 
                wb_transactions == 0 && cycle % 10000 == 0 && verbose) {
                std::cout << "Cycle " << cycle << ": No activity detected" << std::endl;
            }
        }
    }
    
    // ==============================================
    // Завершение
    // ==============================================
    std::cout << "\n=== Simulation finished ===" << std::endl;
    
    // Основная статистика
    std::cout << "\nSimulation statistics:" << std::endl;
    std::cout << "  Total clock cycles: " << cpu_cycles << std::endl;
    if (halt_detected) {
        std::cout << "  CPU HALT detected at cycle: " << halt_cycle << std::endl;
    } else {
        std::cout << "  CPU HALT NOT detected (timeout)" << std::endl;
    }
    std::cout << "  Total WB transactions: " << wb_transactions << std::endl;
    std::cout << "  Memory operations: reads=" << mem_reads << ", writes=" << mem_writes << std::endl;
    std::cout << "  IO operations: reads=" << io_reads << ", writes=" << io_writes << std::endl;
    
    // Дамп состояния процессора
    std::cout << "\nFinal Z80 state:" << std::endl;
    std::cout << "  HALT=" << (int)top->debug_z80_halt_o 
             << ", RESET=" << (int)top->debug_z80_reset_o << std::endl;
    std::cout << "  System Mode: native=" << (int)top->native_mode_o
             << ", supervisor=" << (int)top->supervisor_mode_o << std::endl;
    std::cout << "  Control register: 0x" << std::hex << (int)top->debug_reg_control_o << std::dec << std::endl;
    
    // Дамп памяти как запрошено
    std::cout << "\n=== Requested memory dump ===" << std::endl;
    wb_slave.dump_memory(dump_start_addr, dump_end_addr);
    
    // Дамп всех задействованных IO портов
    std::cout << "\n=== Accessed IO ports dump ===" << std::endl;
    wb_slave.dump_accessed_io_ports();
    
    // Дополнительно: дамп IO портов в указанном диапазоне
    std::cout << "\n=== Full IO ports range dump ===" << std::endl;
    wb_slave.dump_io_range(dump_io_start, dump_io_end);
    
    // Закрытие файлов и очистка
    tfp->close();
    delete tfp;
    delete top;
    
    std::cout << "\nVCD trace file saved: tb_z80_system.vcd" << std::endl;
    
    return 0;
}