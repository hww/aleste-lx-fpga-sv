#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Valeste_clk.h"

#define MAX_SIM_TIME 2000
vluint64_t sim_time = 0;

const char* cycle_state_name(int state) {
    switch(state) {
        case 0: return "IDLE";
        case 1: return "T1";
        case 2: return "T2"; 
        case 3: return "T3";
        case 4: return "T4";
        case 5: return "TW";
        default: return "UNKN";
    }
}

bool testDone = false;
bool clockLast = false;
bool clockUp = false;
bool clockDown = false;
bool readWrite = true;
bool wait = false;
int cpu_cycle = -1;

void write(Valeste_clk *dut)
{    
    dut->cpu_cycle = cpu_cycle;
    clockUp = (dut->clk && !clockLast);
    clockDown = (!dut->clk && clockLast);
    clockLast = dut->clk;
    if (clockDown) {
        switch (cpu_cycle)
        {
        case 1:
            dut->cpu_data_out = 0x55;
            dut->mreq_n = 0;
            dut->rd_n = 1;
            dut->wr_n = 1;
            break;
        case 2:
            wait = !dut->wait_n;
            dut->wr_n = 0;
            break;
        case 3:
            dut->wr_n = 1;
            readWrite = true;
            break;
        default:
            break;
        }
    } 
    if (clockUp) {
        switch (cpu_cycle)
        {
        case 1: 
            dut->cpu_data_out = 0xFF;
            dut->cpu_addr+=1;
            break;
        case 2:
            break;
        case 3:
            dut->cpu_data_out = 0xAA;
            break;
        default:
            break;
        } 
        if (!wait) { 
            cpu_cycle++; 
            if (cpu_cycle>3)
            {
                cpu_cycle=1;
                if (dut->high)
                    testDone = true;
                dut->high = 1;
            }
        }
    }   
}
void read(Valeste_clk *dut)
{       
    clockUp = (dut->clk && !clockLast);
    clockDown = (!dut->clk && clockLast);
    clockLast = dut->clk;
    dut->cpu_cycle = cpu_cycle;
    if (clockDown) {
        switch (cpu_cycle)
        {
        case 1:
            dut->mreq_n = 0;
            dut->rd_n = 0;
            dut->wr_n = 1;
            break;
        case 2:
            wait = !dut->wait_n;
            break;
        case 3:
            dut->cpu_data_in = 0xFF;
            dut->mreq_n = 1;
            dut->rd_n = 1;
            readWrite = false;
            break;
        default:
            break;
        }
    } 
    if (clockUp) {
        switch (cpu_cycle)
        {
        case 1:
            dut->cpu_addr+=1;
            dut->cpu_data_in = 0xFF;
            break;
        case 2:
            break;
        case 3:
            dut->cpu_data_in = 0x55;
            break;
        default:
            break;
        }    
        if (!wait) { cpu_cycle++; if (cpu_cycle>3)cpu_cycle=1;}
    }
}

int main(int argc, char** argv, char** env) {
    Valeste_clk *dut = new Valeste_clk;
    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    
    dut->trace(m_trace, 5);
    m_trace->open("waveform.vcd");

    // Инициализация
    dut->high = 0;
    dut->clk_16m = 0;
    dut->clk_13m = 0;
    dut->mreq_n = 1;
    dut->rfsh_n = 1;
    dut->rd_n = 1;
    dut->wr_n = 1;
    
    // Инициализация шины данных DRAM
    dut->dram_data_out = 0;
    dut->cpu_data_out = 0xFF;



    while (!testDone) {
        dut->clk_16m ^= 1;
        dut->clk_13m = dut->clk_16m; // for test same as the 16 MHz


        if (readWrite) {
            read(dut);
        } else {
            write(dut);
        }

        // Переключение режимов
        
        // Регенерация - короткие импульсы
        if (sim_time % 80 == 0) dut->rfsh_n = 0;
        if (sim_time % 80 == 4) dut->rfsh_n = 1;
        
        // Чтение данных из DRAM (эмуляция)
        if (!dut->cas_n && !dut->ras_n && dut->rd_n == 0) {
            // Эмуляция чтения из памяти - возвращаем инвертированные данные
            dut->dram_data_out = 0xAA;
        } else {
            dut->dram_data_out = 0xFF;
        }

        dut->eval();
        m_trace->dump(sim_time);
        
        // Вывод состояния цикла для отладки
        if (sim_time % 50 == 0) {
            std::cout << "Time: " << sim_time 
                      << " Cycle: " << cycle_state_name(dut->cpu_cycle)
                      << " MREQ_n: " << (int)dut->mreq_n
                      << " WAIT_n: " << (int)dut->wait_n
                      << std::endl;
        }
        
        sim_time++;
    }

    m_trace->close();
    delete dut;
    delete m_trace;
    exit(EXIT_SUCCESS);
}