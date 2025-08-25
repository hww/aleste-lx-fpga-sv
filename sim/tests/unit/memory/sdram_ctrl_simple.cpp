#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vsdram_ctrl_simple_tb.h"
#include <iostream>
#include <iomanip>
#include <cstdint>

// Текущее время симуляции
vluint64_t main_time = 0;
double sc_time_stamp() { return main_time; }

class SDRAMTest {
private:
    Vsdram_ctrl_simple_tb* dut;
    VerilatedVcdC* tfp;
    vluint64_t sim_time;

public:
    SDRAMTest() : dut(new Vsdram_ctrl_simple_tb), tfp(nullptr), sim_time(0) {
        Verilated::traceEverOn(true);
        tfp = new VerilatedVcdC;
        dut->trace(tfp, 99);
        tfp->open("sdram_ctrl_simple.vcd");
        
        // Инициализация
        dut->wb_clk_i = 0;
        dut->wb_rst_i = 0;
        dut->wb_cyc_i = 0;
        dut->wb_stb_i = 0;
        dut->wb_we_i = 0;
        dut->wb_adr_i = 0;
        dut->wb_dat_i = 0;
        dut->wb_sel_i = 3;
        dut->sdram_dq_drive = 0;
        dut->sdram_dq_drive_en = 0;
    }

    ~SDRAMTest() {
        if (tfp) tfp->close();
        delete dut;
        delete tfp;
    }

    void posedge_clk() {
        dut->wb_clk_i = 1;
        dut->eval();
        tfp->dump(main_time++);
        sim_time += 5;
    }

    void negedge_clk() {
        dut->wb_clk_i = 0;
        dut->eval();
        tfp->dump(main_time++);
        sim_time += 5;
    }

    void full_clock_cycle() {
        negedge_clk();
        posedge_clk();
    }

    void reset() {
        std::cout << "[CPP] Resetting system..." << std::endl;
        
        // Сброс на негативном фронте
        negedge_clk();
        dut->wb_rst_i = 1;
        
        // Сброс в течение нескольких тактов
        for (int i = 0; i < 10; i++) {
            full_clock_cycle();
        }
        
        // Снятие сброса на негативном фронте
        negedge_clk();
        dut->wb_rst_i = 0;
        posedge_clk();
        
        std::cout << "[CPP] Reset complete" << std::endl;
    }

    void wait_cycles(int cycles) {
        for (int i = 0; i < cycles; i++) {
            full_clock_cycle();
        }
    }

    bool wait_for_idle(int max_cycles = 1000) {
        for (int i = 0; i < max_cycles; i++) {
            if (dut->debug_state == 0) {
                std::cout << "[CPP] Controller reached IDLE state after " << i << " cycles" << std::endl;
                return true;
            }
            full_clock_cycle();
        }
        std::cout << "[CPP] [ERROR] Timeout waiting for IDLE state" << std::endl;
        return false;
    }

    void wb_write(uint32_t address, uint16_t data) {
        std::cout << "[CPP] WB Write: 0x" << std::hex << std::setw(6) << std::setfill('0') 
                  << address << " = 0x" << std::setw(4) << data << std::endl;
        
        // Устанавливаем сигналы на негативном фронте
        negedge_clk();
        dut->wb_adr_i = address;
        dut->wb_dat_i = data;
        dut->wb_we_i = 1;
        dut->wb_cyc_i = 1;
        dut->wb_stb_i = 1;
        
        // Нарастающий фронт - сигналы установлены
        posedge_clk();
        
        // Ждем подтверждения (максимум 100 циклов)
        int timeout = 100;
        while (!dut->wb_ack_o && timeout > 0) {
            full_clock_cycle();
            timeout--;
        }
        
        if (timeout == 0) {
            std::cout << "[CPP] Timeout waiting for WB ACK on write" << std::endl;
        }
        
        // Снимаем сигналы на негативном фронте
        negedge_clk();
        dut->wb_cyc_i = 0;
        dut->wb_stb_i = 0;
        dut->wb_we_i = 0;
        dut->wb_adr_i = 0;
        dut->wb_dat_i = 0;
        
        // Завершаем цикл
        posedge_clk();
        
        wait_cycles(2);
    }

    uint16_t wb_read(uint32_t address) {
        std::cout << "[CPP] WB Read: 0x" << std::hex << std::setw(6) << std::setfill('0') 
                  << address << std::endl;
        
        // Устанавливаем сигналы на негативном фронте
        negedge_clk();
        dut->wb_adr_i = address;
        dut->wb_we_i = 0;
        dut->wb_cyc_i = 1;
        dut->wb_stb_i = 1;
        
        // Нарастающий фронт - сигналы установлены
        posedge_clk();
        
        // Ждем подтверждения (максимум 100 циклов)
        int timeout = 100;
        while (!dut->wb_ack_o && timeout > 0) {
            full_clock_cycle();
            timeout--;
        }
        
        uint16_t data = 0xFFFF;
        
        if (timeout == 0) {
            std::cout << "[CPP] Timeout waiting for WB ACK on read" << std::endl;
        } else {
            data = dut->wb_dat_o;
        }
        
        // Снимаем сигналы на негативном фронте
        negedge_clk();
        dut->wb_cyc_i = 0;
        dut->wb_stb_i = 0;
        dut->wb_we_i = 0;
        dut->wb_adr_i = 0;
        
        // Завершаем цикл
        posedge_clk();
        
        wait_cycles(2);
        
        std::cout << "[CPP] WB Read result: 0x" << std::hex << std::setw(4) << data << std::endl;
        return data;
    }

    // Альтернативный метод: устанавливаем сигналы ДО нарастающего фронта
    void wb_write_alt(uint32_t address, uint16_t data) {
        std::cout << "[CPP] WB Write (alt): 0x" << std::hex << std::setw(6) << std::setfill('0') 
                  << address << " = 0x" << std::setw(4) << data << std::endl;
        
        // Устанавливаем сигналы
        dut->wb_adr_i = address;
        dut->wb_dat_i = data;
        dut->wb_we_i = 1;
        
        // Негативный фронт
        negedge_clk();
        
        // Устанавливаем CYC/STB
        dut->wb_cyc_i = 1;
        dut->wb_stb_i = 1;
        
        // Нарастающий фронт
        posedge_clk();
        
        // Ждем ACK
        int timeout = 100;
        while (!dut->wb_ack_o && timeout > 0) {
            full_clock_cycle();
            timeout--;
        }
        
        // Снимаем CYC/STB на негативном фронте
        negedge_clk();
        dut->wb_cyc_i = 0;
        dut->wb_stb_i = 0;
        dut->wb_we_i = 0;
        
        // Завершаем
        posedge_clk();
        
        wait_cycles(2);
    }

    void run_test() {
        std::cout << "[CPP] === SDRAM CONTROLLER VERILATOR TEST START ===" << std::endl;
        
        reset();
        wait_cycles(100);
        
        // Ждем инициализации контроллера
        if (!wait_for_idle()) {
            std::cout << "[CPP] TEST FAILED: Controller didn't reach IDLE state" << std::endl;
            return;
        }
        
        // Тест записи
        std::cout << "\n[CPP] Writing data to address 0x000100" << std::endl;
        wb_write(0x000100, 0xABCD);
        
        // Тест чтения
        std::cout << "\n[CPP] Reading data from address 0x000100" << std::endl;
        uint16_t read_data = wb_read(0x000100);
        
        // Проверка данных
        if (read_data == 0xABCD) {
            std::cout << "[CPP] [RESULT] SUCCESS: Read correct data 0x" 
                      << std::hex << read_data << std::endl;
        } else {
            std::cout << "[CPP] [RESULT] ERROR: Expected 0xABCD, got 0x" 
                      << std::hex << read_data << std::endl;
        }
        
        // Дополнительный тест
        std::cout << "\n[CPP] Writing data to address 0x000200" << std::endl;
        wb_write_alt(0x000200, 0x1234);
        
        std::cout << "[CPP] Reading data from address 0x000200" << std::endl;
        read_data = wb_read(0x000200);
        
        if (read_data == 0x1234) {
            std::cout << "[CPP] [RESULT] SUCCESS: Read correct data 0x" 
                      << std::hex << read_data << std::endl;
        } else {
            std::cout << "[CPP] [RESULT] ERROR: Expected 0x1234, got 0x" 
                      << std::hex << read_data << std::endl;
        }
        
        wait_cycles(50);
        std::cout << "[CPP] === TEST COMPLETE ===" << std::endl;
    }

    void monitor_signals(int cycles = 10) {
        for (int i = 0; i < cycles; i++) {
            std::cout << "[CPP] T=" << sim_time << "ns: ";
            std::cout << "CLK=" << (int)dut->wb_clk_i;
            std::cout << " CYC=" << (int)dut->wb_cyc_i;
            std::cout << " STB=" << (int)dut->wb_stb_i;
            std::cout << " WE=" << (int)dut->wb_we_i;
            std::cout << " ADDR=0x" << std::hex << dut->wb_adr_i;
            std::cout << " DATA_IN=0x" << dut->wb_dat_i;
            std::cout << " DATA_OUT=0x" << dut->wb_dat_o;
            std::cout << " ACK=" << (int)dut->wb_ack_o;
            std::cout << " State=" << (int)dut->debug_state;
            std::cout << std::endl;
            
            full_clock_cycle();
        }
    }
};

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::debug(0);
    
    SDRAMTest test;
    test.run_test();
    
    std::cout << "Test completed" << std::endl;
    return 0;
}