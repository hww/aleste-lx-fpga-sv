Спасибо за уточнение! Исправляю документацию с учетом правильных команд:

# UART/SPI Bridge Protocol Specification
**Version 3.1 - Alesta LX Debug System**  
**Status**: Simplified, practical debug protocol

## Overview

Протокол отладки Alesta LX предоставляет минималистичный контроль над системой через последовательный интерфейс. Отладочный интерфейс построен на архитектуре двухуровневого доступа:
- **Командный уровень** - через UART Bridge (базовые команды UART)
- **Регистровый уровень** - прямой доступ к регистрам отладки через команды `REG_READ` и `REG_WRITE`

## Командный протокол UART Bridge

### Базовые команды (0x00-0x7F)

| Команда | Код | Аргументы | Ответ | Описание |
|---------|-----|-----------|-------|----------|
| MEM_READ | 0x0X | 24-бит адрес | N байт данных | Чтение памяти через Wishbone |
| MEM_WRITE | 0x1X | 24-бит адрес + данные | Статус | Запись в память через Wishbone |
| **REG_READ** | **0x2X** | 8-бит адрес регистра | 8-бит значение | Чтение регистра отладки |
| **REG_WRITE** | **0x3X** | 8-бит адрес + значение | Статус | Запись регистра отладки |
| STATUS | 0x50 | Нет | Статус системы | Системный статус (alias REG_READ 0x10) |
| STATE_READ | 0x58 | Нет | 8 байт состояния | Диагностика FSM моста |

**Примечание:** Управление Z80 CPU осуществляется через команды **REG_WRITE** и **REG_READ** к регистрам отладчика.

## REG_READ и REG_WRITE

Используются для доступа к отладочным компонентам FPGA

| Регистры |  Описание |
|---------|----|
| 00-1F | Отладочный модуль Z80 (z80_debug) |
| 20-3F | СPC PPI |
| 40-7F | CPC FDC |

## Отладочный модуль Z80 (z80_debug)

### Архитектурный обзор

Модуль `z80_debug` предоставляет:
1. **Пассивный мониторинг** всех сигналов Z80 и 24-битного адреса
2. **Пошаговое выполнение** через WAIT сигнал
3. **Гибкие точки останова** на инструкциях, чтении/записи памяти и портов
4. **Минимальное управление** CPU (reset, nmi, int, single-step)

### Карта регистров отладки (через DBUS)

#### Управление и конфигурация (через REG_WRITE)

| Адрес | Название | R/W | Описание |
|-------|----------|-----|----------|
| 0x00 | **SYS_STAT** | R/W | Регистр системного статуса |
| 0x01 | **CTRL_ACTION** | R/W | Регистр одноразовых действий |
| 0x02 | **CTRL_STOP** | R/W | Управление остановками (маски) |
| 0x03 | **BP_ADDR_H** | R/W | Адрес точки останова (биты 23-16) |
| 0x04 | **BP_ADDR_M** | R/W | Адрес точки останова (биты 15-8) |
| 0x05 | **BP_ADDR_L** | R/W | Адрес точки останова (биты 7-0) |

#### Статус и мониторинг (через REG_READ)

| Адрес | Название | Описание |
|-------|----------|----------|
| 0x10 | **STATUS_CPU** | Статус процессора |
| 0x11 | **MMU_STATUS** | Статус MMU |
| 0x12 | **ADDR_H** | 24-битный адрес (биты 23-16) |
| 0x13 | **ADDR_M** | 24-битный адрес (биты 15-8) |
| 0x14 | **ADDR_L** | 24-битный адрес (биты 7-0) |
| 0x15 | **BUS_DATA** | Данные на шине (автовыбор din/dout) |
| 0x16 | **DOUT** | Данные ИЗ CPU (запись) |
| 0x17 | **DIN** | Данные В CPU (чтение) |
| 0x18 | **SIGNALS1** | Сигналы управления 1 |
| 0x19 | **SIGNALS2** | Сигналы управления 2 |

#### Регистр CTRL_MODE (0x00) - режимы работы

| Бит | Название | Описание |
|-----|----------|----------|
| 0 | **DEBUG_BREAK** | 1 = Отладчик прервал исполнение |
| 1-7 | **RESERVED** | Резерв |

#### Регистр CTRL_ACTION (0x01) - одноразовые действия

| Бит | Название | Описание |
|-----|----------|----------|
| 0 | **CPU_RESET** | 1 = Принудительный сброс CPU (автосброс) |
| 1 | **CPU_NMI** | 1 = Генерация NMI (автосброс) |
| 2 | **CPU_INT** | 1 = Генерация INT (автосброс) |
| 3 | **STEP_NEXT** | 1 = Выполнить один шаг (автосброс) |
| 4 | **STEP_EN** | 1 = Включить пошаговый режим |
| 5-6 | **RESERVED** | Резерв |
| 7 | **CPU_RESET** | 1 = Принудительный сброс CPU (автосброс) |

**Примечание:** Биты 0-3 имеют автосброс - сбрасываются в 0 через 1 такт после установки.

#### Регистр CTRL_STOP (0x02) - управление остановками

| Бит | Название | Описание |
|-----|----------|----------|
| **0** | **STOP_ON_ANY_INST** | 1 = Останов при ЛЮБОЙ инструкции (M1 цикл) |
| **1** | **STOP_ON_ANY_MEM_RD** | 1 = Останов при ЛЮБОМ чтении памяти |
| **2** | **STOP_ON_ANY_MEM_WR** | 1 = Останов при ЛЮБОЙ записи памяти |
| **3** | **STOP_ON_ANY_IO** | 1 = Останов при ЛЮБОМ доступе к IO |
| **4** | **STOP_ON_BP_INST** | 1 = Останов на инструкции по точке останова |
| **5** | **STOP_ON_BP_MEM_RD** | 1 = Останов на чтении памяти по точке останова |
| **6** | **STOP_ON_BP_MEM_WR** | 1 = Останов на записи памяти по точке останова |
| **7** | **STOP_ON_BP_IO** | 1 = Останов на доступе к IO по точке останова |

**Важно:**
- **Биты 0-3**: Останов при ЛЮБОМ доступе указанного типа
- **Биты 4-7**: Останов только при совпадении адреса с точкой останова И указанном типе доступа

#### Регистр STATUS_CPU (0x10) - статус процессора

| Бит | Название | Описание |
|-----|----------|----------|
| 0 | **CPU_HALTED** | 1 = CPU в состоянии HALT |
| 1 | **CPU_WAITING** | 1 = CPU в состоянии WAIT |
| 2 | **CPU_STOPPED** | 1 = CPU остановлен отладчиком |
| 3 | **BP_HIT** | 1 = Сработала точка останова |
| 4 | **M1_CYCLE** | 1 = Текущий цикл M1 (выборка инструкции) |
| 5 | **MEM_ACCESS** | 1 = Активный доступ к памяти |
| 6 | **IO_ACCESS** | 1 = Активный доступ к IO |
| 7 | **BUS_ACCESS** | 1 = Любой активный доступ (память или IO) |

#### Регистр SIGNALS1 (0x18)

| Бит | Сигнал | Активный уровень | Описание |
|-----|--------|------------------|----------|
| 0 | **/M1** | 0 | Machine cycle 1 (выборка опкода) |
| 1 | **/MREQ** | 0 | Memory request |
| 2 | **/IORQ** | 0 | I/O request |
| 3 | **/RD** | 0 | Read operation |
| 4 | **/WR** | 0 | Write operation |
| 5 | **/HALT** | 0 | CPU halted |
| 6 | **/WAIT** | 0 | CPU waiting |
| 7 | **/INT** | 0 | Interrupt request active |

#### Регистр SIGNALS2 (0x19)

| Бит | Название | Описание |
|-----|----------|----------|
| 0 | **MEM_RD** | 1 = Чтение памяти |
| 1 | **MEM_WR** | 1 = Запись памяти |
| 2 | **IO_RD** | 1 = Чтение порта |
| 3 | **IO_WR** | 1 = Запись порта |
| 4 | **/NMI** | 0 = NMI активен |
| 5 | **/BUSRQ** | 0 = BUSRQ активен |
| 6 | **/BUSAK** | 0 = BUSAK активен |
| 7 | **/RFSH** | 0 = Refresh активен |

## Протокол работы

### Инициализация отладки

1. **Установка связи** через UART (115200 бод, 8N1)
2. **Сброс системы**: `REG_WRITE(0x00, 0x01)` - сброс CPU
3. **Чтение статуса**: `REG_READ(0x10)` - проверка состояния системы

### Базовые операции отладки

#### Пошаговое выполнение
```python
# Включить пошаговый режим
send([0x30, 0x01, 0x04])  # REG_WRITE(CTRL_MODE, 0x01=STEP_EN)

# Выполнить один шаг
send([0x30, 0x00, 0x08])  # REG_WRITE(CTRL_ACTION, 0x08=STEP_NEXT)

# Ждать остановки
while True:
    status = read_reg(0x00)  # REG_READ(STATUS_CPU)
    if status & 0x01:  # Бит CPU_STOPPED
        break

# Прочитать состояние
addr_h = read_reg(0x12)  # REG_READ(ADDR_H)
addr_m = read_reg(0x13)  # REG_READ(ADDR_M)
addr_l = read_reg(0x14)  # REG_READ(ADDR_L)
bus_data = read_reg(0x15)  # REG_READ(BUS_DATA)
pc = (addr_h << 16) | (addr_m << 8) | addr_l
print(f"Шаг выполнен: PC=0x{pc:06X}, данные=0x{bus_data:02X}")
```

#### Установка точки останова (24-bit)
```python
# Установить точку останова на адрес 0x123456
# Останавливаться только на инструкциях
send([0x30, 0x03, 0x12])  # REG_WRITE(BP_ADDR_H, 0x12)
send([0x30, 0x04, 0x34])  # REG_WRITE(BP_ADDR_M, 0x34)
send([0x30, 0x05, 0x56])  # REG_WRITE(BP_ADDR_L, 0x56)
send([0x30, 0x02, 0x10])  # REG_WRITE(CTRL_STOP, 0x10=STOP_ON_BP_INST)

# Запустить выполнение (снять STEP_EN если был включен)
send([0x30, 0x01, 0x00])  # REG_WRITE(CTRL_MODE, 0x00)

# Ждать срабатывания точки останова
while True:
    status = read_reg(0x10)  # REG_READ(STATUS_CPU)
    if status & 0x08:  # Бит BP_HIT
        print("Точка останова сработала!")
        break
```

#### Принудительный сброс
```python
# Сбросить CPU
send([0x30, 0x00, 0x01])  # REG_WRITE(CTRL_ACTION, 0x01=CPU_RESET)
# Бит автосбросится через 1 такт
```

#### Генерация прерываний
```python
# Сгенерировать NMI
send([0x30, 0x00, 0x02])  # REG_WRITE(CTRL_ACTION, 0x02=CPU_NMI)

# Сгенерировать INT
send([0x30, 0x00, 0x04])  # REG_WRITE(CTRL_ACTION, 0x04=CPU_INT)
```

#### Мониторинг всех операций записи в память
```python
# Останавливаться при ЛЮБОЙ записи в память
send([0x30, 0x02, 0x04])  # REG_WRITE(CTRL_STOP, 0x04=STOP_ON_ANY_MEM_WR)

# Запустить выполнение
send([0x30, 0x01, 0x00])  # REG_WRITE(CTRL_MODE, 0x00)

while True:
    status = read_reg(0x10)
    if status & 0x04:  # CPU_STOPPED
        addr_h = read_reg(0x12)
        addr_m = read_reg(0x13)
        addr_l = read_reg(0x14)
        data = read_reg(0x15)  # Данные записи
        
        addr = (addr_h << 16) | (addr_m << 8) | addr_l
        print(f"Запись в память: 0x{addr:06X} <- 0x{data:02X}")
        
        # Продолжить выполнение
        send([0x30, 0x00, 0x00])  # Сбросить любые действия
```

### Трассировка выполнения

#### Простой трассировщик
```python
class Z80Tracer:
    def __init__(self, debug_iface):
        self.debug = debug_iface
        
    def trace(self, num_steps, show_data=True):
        """Выполнить трассировку N шагов"""
        # Включить пошаговый режим
        self.debug.write_reg(0x01, 0x01)  # CTRL_MODE = STEP_EN
        
        for step in range(num_steps):
            # Выполнить шаг
            self.debug.write_reg(0x00, 0x08)  # CTRL_ACTION = STEP_NEXT
            
            # Ждать остановки
            while not (self.debug.read_reg(0x10) & 0x04):
                pass
            
            # Собрать данные
            addr_h = self.debug.read_reg(0x12)  # ADDR_H
            addr_m = self.debug.read_reg(0x13)  # ADDR_M
            addr_l = self.debug.read_reg(0x14)  # ADDR_L
            bus_data = self.debug.read_reg(0x15)  # BUS_DATA
            signals1 = self.debug.read_reg(0x18)  # SIGNALS1
            signals2 = self.debug.read_reg(0x19)  # SIGNALS2
            
            addr = (addr_h << 16) | (addr_m << 8) | addr_l
            
            # Определить тип операции
            if signals1 & 0x01:  # M1 цикл (инструкция)
                print(f"{step:4d}: PC=0x{addr:06X} [0x{bus_data:02X}]")
            elif signals2 & 0x01:  # MEM_RD
                if show_data:
                    print(f"{step:4d}: READ MEM 0x{addr:06X} = 0x{bus_data:02X}")
            elif signals2 & 0x02:  # MEM_WR
                if show_data:
                    print(f"{step:4d}: WRITE MEM 0x{addr:06X} <- 0x{bus_data:02X}")
            
            # Проверить HALT
            if self.debug.read_reg(0x10) & 0x01:
                print("CPU перешел в состояние HALT")
                break
```

### Мониторинг в реальном времени

#### Быстрое чтение состояния
```python
def get_cpu_state():
    """Получить текущее состояние CPU"""
    # Читаем ключевые регистры
    status = read_reg(0x10)  # STATUS_CPU
    addr_h = read_reg(0x12)  # ADDR_H
    addr_m = read_reg(0x13)  # ADDR_M
    addr_l = read_reg(0x14)  # ADDR_L
    bus_data = read_reg(0x15)  # BUS_DATA
    signals1 = read_reg(0x18)  # SIGNALS1
    signals2 = read_reg(0x19)  # SIGNALS2
    
    return {
        'status': status,
        'address': (addr_h << 16) | (addr_m << 8) | addr_l,
        'bus_data': bus_data,
        'signals1': signals1,
        'signals2': signals2,
        'halted': bool(status & 0x01),
        'waiting': bool(status & 0x02),
        'stopped': bool(status & 0x04),
        'bp_hit': bool(status & 0x08),
        'm1_cycle': bool(signals1 & 0x01),
        'mem_access': bool(signals1 & 0x02),
        'io_access': bool(signals1 & 0x04)
    }
```

## Примеры комплексного использования

### Отладка зависания программы
```python
def debug_hang():
    # 1. Проверить текущее состояние
    state = get_cpu_state()
    
    if state['halted']:
        print(f"CPU завис в HALT на адресе 0x{state['address']:06X}")
        
        # 2. Проанализировать последние операции
        print("Последняя операция:")
        if state['m1_cycle']:
            print(f"  Выборка опкода: 0x{state['bus_data']:02X}")
        elif state['mem_access']:
            if state['signals2'] & 0x01:  # MEM_RD
                print(f"  Чтение памяти: 0x{state['bus_data']:02X}")
            elif state['signals2'] & 0x02:  # MEM_WR
                print(f"  Запись памяти: 0x{state['bus_data']:02X}")
        elif state['io_access']:
            if state['signals2'] & 0x04:  # IO_RD
                print(f"  Чтение порта: 0x{state['bus_data']:02X}")
            elif state['signals2'] & 0x08:  # IO_WR
                print(f"  Запись порта: 0x{state['bus_data']:02X}")
    
    # 3. Попробовать продолжить выполнение
    choice = input("(C)ontinue, (S)tep, or (R)eset? ").upper()
    
    if choice == 'R':
        write_reg(0x00, 0x01)  # CTRL_ACTION = CPU_RESET
        print("CPU сброшен")
    elif choice == 'S':
        # Выполнить один шаг
        write_reg(0x01, 0x01)  # Включить STEP_EN
        write_reg(0x00, 0x08)  # Выполнить STEP_NEXT
        print("Выполнен один шаг")
    else:
        # Продолжить выполнение
        write_reg(0x01, 0x00)  # Выключить STEP_EN
        print("Выполнение продолжено")
```

### Тестирование прерываний
```python
def test_interrupts():
    # 1. Включить пошаговый режим
    write_reg(0x01, 0x01)  # CTRL_MODE = STEP_EN
    
    # 2. Выполнить несколько шагов
    for i in range(10):
        write_reg(0x00, 0x08)  # CTRL_ACTION = STEP_NEXT
        while not (read_reg(0x10) & 0x04):
            pass
        
        addr = get_cpu_state()['address']
        print(f"Шаг {i}: PC=0x{addr:06X}")
    
    # 3. Сгенерировать NMI
    print("Генерация NMI...")
    write_reg(0x00, 0x02)  # CTRL_ACTION = CPU_NMI
    
    # 4. Продолжить выполнение
    write_reg(0x01, 0x00)  # CTRL_MODE = 0
    
    # 5. Проверить обработку
    time.sleep(0.001)
    new_addr = get_cpu_state()['address']
    print(f"PC после NMI: 0x{new_addr:06X}")
```

### Диагностика памяти
```python
def diagnose_memory_access():
    """Диагностика проблем с доступом к памяти"""
    
    # Установить точку останова на проблемный адрес
    write_reg(0x03, 0x80)  # BP_ADDR_H = 0x80
    write_reg(0x04, 0x00)  # BP_ADDR_M = 0x00
    write_reg(0x05, 0x00)  # BP_ADDR_L = 0x00
    
    # Останавливаться на любом доступе к адресу 0x800000
    write_reg(0x02, 0xF0)  # STOP_ON_BP_* все биты
    
    # Запустить выполнение
    write_reg(0x01, 0x00)  # CTRL_MODE = 0
    
    # Мониторить доступы к адресу 0x800000
    access_count = 0
    last_data = None
    
    while access_count < 100:
        status = read_reg(0x10)  # STATUS_CPU
        
        if status & 0x08:  # BP_HIT
            state = get_cpu_state()
            addr = state['address']
            data = state['bus_data']
            signals2 = state['signals2']
            
            if signals2 & 0x01:  # MEM_RD
                print(f"READ 0x{addr:06X} = 0x{data:02X}")
            elif signals2 & 0x02:  # MEM_WR
                print(f"WRITE 0x{addr:06X} <- 0x{data:02X}")
            
            access_count += 1
            
            # Продолжить выполнение (сбросить CTRL_ACTION)
            write_reg(0x00, 0x00)
        
        time.sleep(0.001)
    
    print(f"Всего обращений к 0x800000: {access_count}")
```

## Системные требования

### Аппаратные
- **Тактовая частота**: 108 МГц (основная система)
- **Тактовая частота Z80**: программируемая (1-16 делитель)
- **Ресурсы FPGA**: ~100 логических элементов
- **Память**: 0 байт (не использует блоки памяти)

### Программные
- **Скорость UART**: 115200 бод (рекомендуется)
- **Таймауты**: 1.2 мс на операцию
- **Формат данных**: 8 бит, без контроля четности, 1 стоп-бит

## Совместимость

### Поддерживаемые хосты
- **Компьютер** - через USB-UART адаптер
- **Raspberry Pi** - через UART
- **STM32 и другие MCU** - через UART

### Программные инструменты
```python
# Пример Python-класса для работы с отладчиком через UART
class Z80Debugger:
    def __init__(self, port='/dev/ttyUSB0', baudrate=115200):
        self.ser = serial.Serial(port, baudrate, timeout=1)
    
    def read_reg(self, addr):
        """Чтение регистра через REG_READ команду"""
        cmd = bytes([0x20, addr])  # REG_READ команда
        self.ser.write(cmd)
        return self.ser.read(1)[0]
    
    def write_reg(self, addr, value):
        """Запись регистра через REG_WRITE команду"""
        cmd = bytes([0x30, addr, value])  # REG_WRITE команда
        self.ser.write(cmd)
        status = self.ser.read(1)[0]
        return status == 0x00  # Успех если статус 0x00
    
    def cpu_step(self):
        """Выполнить один шаг"""
        # Включить пошаговый режим если не включен
        if not (self.read_reg(0x01) & 0x01):
            self.write_reg(0x01, 0x01)  # STEP_EN
        
        # Выполнить шаг
        self.write_reg(0x00, 0x08)  # STEP_NEXT
        
        # Ждать завершения
        while not (self.read_reg(0x10) & 0x04):
            pass
        
        # Вернуть состояние
        return self.get_state()
    
    def get_state(self):
        """Получить полное состояние CPU"""
        return {
            'address': (self.read_reg(0x12) << 16) | 
                       (self.read_reg(0x13) << 8) | 
                       self.read_reg(0x14),
            'bus_data': self.read_reg(0x15),
            'status': self.read_reg(0x10),
            'signals1': self.read_reg(0x18),
            'signals2': self.read_reg(0x19)
        }
```

## Примечания по использованию

### Преимущества
1. **Минимальные ресурсы**: ~100 ЛЭ
2. **24-битный адрес**: Полная поддержка адресации через MMU
3. **Гибкие точки останова**: 4 типа остановок на любой адрес + 4 типа с проверкой адреса
4. **Простота использования**: Прямые команды REG_READ/REG_WRITE
5. **Комплексный мониторинг**: Все сигналы Z80 + статус MMU

### Ограничения
1. **Пассивный мониторинг**: Не перехватывает данные на шине
2. **Только внешние сигналы**: Нет доступа к внутренним регистрам CPU
3. **Одна точка останова**: Только один 24-битный адрес для сравнения

### Рекомендации
1. Использовать для начальной отладки и диагностики
2. Комбинировать биты CTRL_STOP для сложных условий отладки
3. В production можно отключать модуль через условную компиляцию
4. Использовать пошаговый режим для трассировки сложных участков

## Заключение

Обновленная отладочная система Alesta LX предоставляет:
1. **Полный мониторинг** состояния Z80 с 24-битной адресацией
2. **Пошаговое выполнение** через WAIT сигнал
3. **Гибкие точки останова** с отдельными масками для "любого доступа" и "доступа по адресу"
4. **Минимальное управление** (reset, nmi, int, single-step)
5. **Интеграцию** через стандартные команды REG_READ/REG_WRITE

Это практичный инструмент для отладки, занимающий минимальные ресурсы и решающий большинство задач отладки Z80 системы с MMU.

---

**Приложение A: Быстрые команды**

| Назначение | Команда UART |
|------------|--------------|
| Чтение статуса CPU | `20 10` |
| Чтение 24-битного адреса | `20 12` → `20 13` → `20 14` |
| Пошаговый режим | `30 01 01` |
| Выполнить шаг | `30 00 08` |
| Мягкий сброс | `30 00 01` |
| NMI | `30 00 02` |
| INT | `30 00 04` |
| Останов на любой записи памяти | `30 02 04` |
| Установить BP 0x123456 | `30 03 12` → `30 04 34` → `30 05 56` |
| Останов на инструкции по BP | `30 02 10` |

**Приложение B: Коды ошибок**

| Код | Значение |
|-----|----------|
| 0x00 | Успех |
| 0xFF | Ошибка команды |
| 0xFE | Таймаут |
| 0xFD | Ошибка шины |

**Приложение C: Примеры состояний**

```python
# CPU выполняет инструкцию
STATUS_CPU = 0x10  # M1_CYCLE=1
SIGNALS1 = 0x01    # /M1=0

# CPU читает память
STATUS_CPU = 0xA0  # MEM_ACCESS=1, BUS_ACCESS=1  
SIGNALS1 = 0x0A    # /MREQ=0, /RD=0
SIGNALS2 = 0x01    # MEM_RD=1

# CPU записывает в порт
STATUS_CPU = 0xC0  # IO_ACCESS=1, BUS_ACCESS=1
SIGNALS1 = 0x14    # /IORQ=0, /WR=0
SIGNALS2 = 0x08    # IO_WR=1

# CPU остановлен отладчиком (WAIT)
STATUS_CPU = 0x06  # WAITING=1, STOPPED=1
SIGNALS1 = 0x40    # /WAIT=0

# Точка останова сработала
STATUS_CPU = 0x0C  # STOPPED=1, BP_HIT=1
```

Эта документация описывает систему отладки с обновленным модулем `z80_debug`, поддерживающим 24-битную адресацию и гибкую систему точек останова через регистр CTRL_STOP.
