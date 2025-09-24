#include <iostream>
#include <iomanip>
#include <verilated.h>
#include <verilated_fst_c.h>
#include "Vtb_i8251.h"

// ==================== UTILITY FUNCTIONS ====================
void main_clock_tick(Vtb_i8251* dut) {
    dut->clk = 0;
    dut->eval();
    dut->clk = 1;
    dut->eval();
}

void uart_clock_tick(Vtb_i8251* dut) {
    // Для передатчика (negedge)
    dut->tx_clk_n = 1;
    dut->eval();
    dut->tx_clk_n = 0;  // negedge - передатчик сработает здесь
    dut->eval();
    
    // Для приемника (posedge)
    dut->rx_clk_n = 0;
    dut->eval();
    dut->rx_clk_n = 1;  // posedge - приемник сработает здесь
    dut->eval();
}

void tick(Vtb_i8251* dut, int cycles = 1) {
    for (int i = 0; i < cycles; i++) {
        main_clock_tick(dut);
        for (int j = 0; j < 16; j++) {
            uart_clock_tick(dut); // 16 тактов UART на 1 основной
        }
    }
}

void reset(Vtb_i8251* dut) {
    std::cout << "[RESET] Hardware reset..." << std::endl;
    dut->reset_n = 0;
    tick(dut, 10);
    dut->reset_n = 1;
    tick(dut, 5);
}

void write_reg(Vtb_i8251* dut, bool is_control, uint8_t data) {
    dut->c_d = is_control;
    dut->data_in = data;
    dut->cs_n = 0;
    dut->wr_n = 0;
    main_clock_tick(dut);
    
    dut->wr_n = 1;
    dut->cs_n = 1;
    main_clock_tick(dut);
    
    std::cout << "[WRITE] " << (is_control ? "CTRL" : "DATA") 
              << " = 0x" << std::hex << std::setw(2) << std::setfill('0') 
              << (int)data << std::endl;
}

uint8_t read_reg(Vtb_i8251* dut, bool is_control) {
    dut->c_d = is_control;
    dut->cs_n = 0;
    dut->rd_n = 0;
    main_clock_tick(dut);
    
    uint8_t data = dut->data_out;
    
    dut->rd_n = 1;
    dut->cs_n = 1;
    main_clock_tick(dut);
    
    std::cout << "[READ]  " << (is_control ? "CTRL" : "DATA") 
              << " = 0x" << std::hex << std::setw(2) << std::setfill('0') 
              << (int)data << std::endl;
    
    return data;
}

void debug_internal(Vtb_i8251* dut, const char* context) {
    std::cout << "[INTERNAL] " << context 
              << " TxEN=" << (int)dut->debug_TxEN
              << " TxRDYStatus=" << (int)dut->debug_TxRDYStatus
              << " mode=" << (int)dut->debug_mode
              << " RESET_Internal=" << (int)dut->debug_RESET_Internal
              << " TxDataBuffer=0x" << std::hex << (int)dut->debug_TxDataBuffer
              << std::dec << std::endl;
}

void debug_status(uint8_t status) {
    std::cout << "STATUS: ";
    std::cout << "DSR=" << ((status >> 7) & 1);
    std::cout << " SYNDET=" << ((status >> 6) & 1);
    std::cout << " FE=" << ((status >> 5) & 1);
    std::cout << " OE=" << ((status >> 4) & 1);
    std::cout << " PE=" << ((status >> 3) & 1);
    std::cout << " TXEMPTY=" << ((status >> 2) & 1);
    std::cout << " RXRDY=" << ((status >> 1) & 1);
    std::cout << " TXRDY=" << (status & 1);
    std::cout << std::endl;
}

// ==================== MAIN ====================
int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    
    Vtb_i8251* dut = new Vtb_i8251;
    VerilatedFstC* tfp = new VerilatedFstC;
    dut->trace(tfp, 99);
    tfp->open("waveform.fst");
    
    std::cout << "=== i8251 UART TEST WITH TRACING ===" << std::endl;
    
    // Инициализация
    dut->clk = 0;
    dut->reset_n = 1;
    dut->cs_n = 1;
    dut->wr_n = 1;
    dut->rd_n = 1;
    dut->c_d = 0;
    dut->data_in = 0;
    dut->rx = 1;
    dut->cts_n = 0;
    dut->dsr_n = 0;
    dut->tx_clk_n = 1;
    dut->rx_clk_n = 0;
    
    vluint64_t main_time = 0;
    
    // 1. Сброс с правильным тактированием
    std::cout << "Step 1: Reset with UART clocking" << std::endl;
    dut->reset_n = 0;
    for (int i = 0; i < 10; i++) {
        main_clock_tick(dut);
        for (int j = 0; j < 16; j++) {
            uart_clock_tick(dut);
            tfp->dump(main_time++);
        }
    }
    dut->reset_n = 1;
    for (int i = 0; i < 5; i++) {
        main_clock_tick(dut);
        for (int j = 0; j < 16; j++) {
            uart_clock_tick(dut);
            tfp->dump(main_time++);
        }
    }
    
    // 2. Проверка статуса после сброса
    std::cout << "Step 2: Check status after reset" << std::endl;
    dut->c_d = 1; // Read status
    dut->cs_n = 0;
    dut->rd_n = 0;
    main_clock_tick(dut);
    tfp->dump(main_time++);
    
    uint8_t status = dut->data_out;
    debug_status(status);
    debug_internal(dut, "After reset");
    
    dut->rd_n = 1;
    dut->cs_n = 1;
    main_clock_tick(dut);
    tfp->dump(main_time++);
    
    // 3. Запись режима
    std::cout << "Step 3: Write mode register 0x4E" << std::endl;
    write_reg(dut, true, 0x4E); // 8N1, 16x
    debug_internal(dut, "After mode write");
    
    // 4. Запись команды
    std::cout << "Step 4: Write command register 0x37" << std::endl;
    //write_reg(dut, true, 0x37); // Enable TX/RX
    write_reg(dut, true, 0x05);
    debug_internal(dut, "After command write");
    
    // 5. Проверка статуса
    std::cout << "Step 5: Check status after configuration" << std::endl;
    status = read_reg(dut, true);
    debug_status(status);
    
    // 6. Отправка тестовых данных
    if (status & 0x01) {
        std::cout << "Step 6: Sending test data 0x55" << std::endl;
        write_reg(dut, false, 0x55);
        debug_internal(dut, "After data write");
        
        // 7. Мониторинг передачи с правильным тактированием
        std::cout << "Step 7: Monitoring transmission" << std::endl;
        for (int i = 0; i < 500; i++) {
            // Loopback
            dut->rx = dut->tx;
            
            // Тактирование
            main_clock_tick(dut);
            for (int j = 0; j < 16; j++) {
                uart_clock_tick(dut);
                tfp->dump(main_time++);
            }
            
            // Проверка статуса каждые 50 циклов
            if (i % 50 == 0) {
                status = read_reg(dut, true);
                debug_status(status);
                debug_internal(dut, "During transmission");
                
                if (status & 0x02) { // RXRDY
                    uint8_t received = read_reg(dut, false);
                    std::cout << "SUCCESS: Received: 0x" << std::hex << (int)received << std::endl;
                    break;
                }
            }
            
            if (i == 499) {
                std::cout << "TIMEOUT: No data received" << std::endl;
            }
        }
    } else {
        std::cout << "ERROR: Transmitter not ready (TXRDY=0)" << std::endl;
    }
    
    // Финальный статус
    status = read_reg(dut, true);
    std::cout << "Final status: 0x" << std::hex << (int)status << std::endl;
    debug_status(status);
    
    tfp->close();
    delete dut;
    delete tfp;
    
    return 0;
}