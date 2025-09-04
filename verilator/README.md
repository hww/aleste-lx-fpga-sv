# Общие Verilator фалы

## Структура папки
```
project/
├── verilator/                    # Корень Verilator симуляции
│   ├── common/                   # ОБЩИЕ ДЛЯ ВСЕХ ТЕСТОВ ФАЙЛЫ
│   │   ├── utils/                # Утилиты (ваш wb_dma_utils и подобные)
│   │   │   ├── wb_test_base.h
│   │   │   ├── wb_master.h
│   │   │   ├── wb_slave.h
│   │   │   └── wb_dma_utils.h
│   │   ├── models/               # Модели периферии (RAM, ROM, etc.)
│   │   ├── drivers/              # Драйверы интерфейсов
│   │   └── Makefile.inc          # Общие правила компиляции
│   ├── sim/                      # Собранные симуляторы
│   ├── obj/                      # Объектные файлы
│   └── Makefile                  # Главный Makefile
├── sim/
│   └── test/
│       └── units/
│           └── cpu/
│               └── test_cpu.cpp  # Ваш unit-тест
└── rtl/                          # Исходный RTL код
```


## WB MasterSlave

Пример использования:

```cpp

#include "wb_dma_utils.h"

void test_dma() {
    Vwb_dma_tb* top = new Vwb_dma_tb;
    vluint64_t main_time = 0;
    VerilatedVcdC* tfp = nullptr;
    
    WbDmaTestUtils utils(top, main_time, tfp);
    
    // Сброс
    utils.master().reset_pulse(2);
    
    // Конфигурация DMA через мастер
    utils.master().write(utils.calc_channel_offset(0) + 0x0, 0x1234); // source
    utils.master().write(utils.calc_channel_offset(0) + 0x2, 0x5678); // destination
    utils.master().write(utils.calc_channel_offset(0) + 0x4, 0x0010); // length
    
    // Запуск DMA
    utils.master().write(utils.calc_channel_offset(0) + 0x8, 0x0001); // control
    
    // Ожидание запросов от DMA и ответ через slave
    while (/* condition */) {
        if (top->wbm_cyc_o && top->wbm_stb_o) {
            utils.slave().respond_read(0xABCD); // отвечаем на чтение
        }
        utils.clock_tick();
    }
}
```