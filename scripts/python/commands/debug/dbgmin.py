#!/usr/bin/env python3
"""
Минималистичный отладчик Z80 - только базовые операции
"""
import sys
import os
import time
import argparse
from typing import Optional

# Добавляем путь к модулям
sys.path.append(os.path.join(os.path.dirname(__file__), '../..'))

try:
    from core.memory import FPGAMemory
    from core.registers import FPGARegisters
except ImportError:
    print("❌ Не найдены модули ядра")
    sys.exit(1)


class SimpleDebugger:
    """Минималистичный отладчик - только загрузка и запуск"""
    
    def __init__(self):
        self.mem = FPGAMemory()
        self.reg = FPGARegisters()
    
    def reset(self):
        """Сброс процессора"""
        return self.reg.write(0x00, 0x01)  # RESET бит
    
    def step_enable(self, enable: bool = True):
        """Включить пошаговый режим (трассировку)"""
        ctrl_mode = self.reg.read(0x01)
        if ctrl_mode is None:
            return False
        
        if enable:
            ctrl_mode = ctrl_mode | 0x01  # STEP_EN
        else:
            ctrl_mode = ctrl_mode & ~0x01
        
        return self.reg.write(0x01, ctrl_mode)
    
    def status(self) -> dict:
        """Текущее состояние CPU"""
        state = {}
        
        # Адрес (логический Z80 - младшие 16 бит)
        addr_m = self.reg.read(0x13)  # Старший байт PC
        addr_l = self.reg.read(0x14)  # Младший байт PC
        if addr_m is not None and addr_l is not None:
            state['pc'] = (addr_m << 8) | addr_l
        
        # Полный 24-битный адрес
        addr_h = self.reg.read(0x12)  # Слот/старшие 8 бит
        if addr_h is not None and addr_m is not None and addr_l is not None:
            state['full_addr'] = (addr_h << 16) | (addr_m << 8) | addr_l
            state['slot'] = addr_h
        
        # Данные шины
        state['bus_data'] = self.reg.read(0x15)
        
        # Статус
        status = self.reg.read(0x10)
        if status is not None:
            state['halted'] = bool(status & 0x01)
            state['waiting'] = bool(status & 0x02)
            state['stopped'] = bool(status & 0x04)
            state['bp_hit'] = bool(status & 0x08)
            state['m1_cycle'] = bool(status & 0x10)
            state['mem_access'] = bool(status & 0x20)
            state['io_access'] = bool(status & 0x40)
            state['bus_access'] = bool(status & 0x80)
        
        return state
    
    def load_file(self, load_addr: int, filename: str, jump_vector: Optional[int] = None) -> bool:
        """Загрузить файл по указанному адресу"""
        try:
            with open(filename, 'rb') as f:
                data = f.read()
            
            print(f"Файл: {filename}")
            print(f"Размер: {len(data)} байт")
            print(f"Загрузка по: 0x{load_addr:06X}")
            
            if jump_vector is not None:
                # Добавляем JP вектор в НАЧАЛО
                vector = bytes([
                    0xC3,                    # JP
                    jump_vector & 0xFF,      # LL
                    (jump_vector >> 8) & 0xFF  # HH
                ])
                data = vector + data
                print(f"Добавлен JP 0x{jump_vector:04X}")
                print(f"Вектор по 0x{load_addr:06X}")
                print(f"Код начинается с 0x{load_addr + 3:06X}")
            
            # Записываем в память
            result = self.mem.write_memory(load_addr, data)
            if not result:
                print("❌ Ошибка записи в память")
                return False
            
            print("✅ Загружено успешно")
            return True
            
        except Exception as e:
            print(f"❌ Ошибка: {e}")
            return False
    
    def set_breakpoint(self, addr: int) -> bool:
        """Установить точку останова"""
        if not self.reg.write(0x03, (addr >> 8) & 0xFF):
            return False
        if not self.reg.write(0x04, addr & 0xFF):
            return False
        if not self.reg.write(0x02, 0x10):  # STOP_ON_BP на инструкциях
            return False
        print(f"Точка останова: 0x{addr:04X}")
        return True
    
    def run_trace(self, steps: int):
        """Запустить трассировку с текущего PC"""
        print(f"\nТрассировка {steps} шагов")
        print("Шаг | PC(Z80) | Полный    | Данные | Операция")
        print("----|---------|-----------|--------|----------")
        
        # Включаем пошаговый режим
        if not self.step_enable(True):
            print("❌ Не удалось включить трассировку")
            return
        # Remove Reset
        self.reg.write(0x00, 0x00)

        for step in range(steps):
            # Выполняем шаг
            if not self.reg.write(0x00, 0x08):  # STEP_NEXT
                print(f"❌ Шаг {step+1} не удался")
                break
            
            # Ждем завершения шага
            timeout = time.time() + 1.0
            stepped = False
            while time.time() < timeout:
                status = self.reg.read(0x10)
                if status is not None and (status & 0x04):  # STOPPED бит
                    stepped = True
                    break
                time.sleep(0.001)
            
            if not stepped:
                print(f"❌ Таймаут шага {step+1}")
                break
            
            # Читаем состояние
            state = self.status()
            pc = state.get('pc', 0)
            full_addr = state.get('full_addr', 0)
            bus_data = state.get('bus_data', 0)
            
            # Определяем тип операции
            if state.get('m1_cycle'):
                operation = f"FETCH [0x{bus_data:02X}]"
            elif state.get('mem_access'):
                if state.get('bus_access'):
                    operation = f"MEM_WR=0x{bus_data:02X}"
                else:
                    operation = f"MEM_RD=0x{bus_data:02X}"
            elif state.get('io_access'):
                if state.get('bus_access'):
                    operation = f"IO_WR=0x{bus_data:02X}"
                else:
                    operation = f"IO_RD=0x{bus_data:02X}"
            else:
                operation = "INTERNAL"
            
            print(f"{step+1:4d}| 0x{pc:04X}   | 0x{full_addr:06X} | 0x{bus_data:02X}  | {operation}")
            
            # Проверяем HALT
            if state.get('halted'):
                print(f"\n🛑 HALT на 0x{pc:04X} (0x{full_addr:06X})")
                break
            
            # Проверяем точку останова
            if state.get('bp_hit'):
                print(f"\n🎯 Точка останова на 0x{pc:04X}")
                break
            
            time.sleep(0.001)
        
        # Выключаем трассировку
        self.step_enable(False)
    
    def run_normal(self):
        """Запустить обычное выполнение"""
        print(f"\nЗапуск выполнения...")
        
        # Выключаем трассировку
        self.step_enable(False)
        
        # Ждем завершения (HALT)
        timeout = time.time() + 5.0
        
        while time.time() < timeout:
            state = self.status()
            pc = state.get('pc', 0)
            full_addr = state.get('full_addr', 0)
            
            if state.get('halted', False):
                print(f"\n🛑 HALT на 0x{pc:04X} (0x{full_addr:06X})")
                return
            
            time.sleep(0.01)
        
        print("⏰ Таймаут выполнения")
        
        # Показываем финальное состояние
        state = self.status()
        print(f"Текущий PC: 0x{state.get('pc', 0):04X}")
        print(f"Полный адрес: 0x{state.get('full_addr', 0):06X}")


def main():
    """Точка входа - очень простая логика"""
    parser = argparse.ArgumentParser(
        description='Минималистичный отладчик Z80',
        formatter_class=argparse.RawDescriptionHelpFormatter,
        epilog="""
Примеры:
  %(prog)s -a 0xC00000 file.bin           # Загрузить и запустить
  %(prog)s -a 0xC00000 -j 0x0100 file.bin # С вектором JP 0x0100
  %(prog)s -a 0xC00000 -t 20 file.bin     # Трассировка 20 шагов
  %(prog)s -a 0xC00000 -b 0x0100 file.bin # С точкой останова на 0x0100
        """
    )
    
    parser.add_argument('filename', help='Файл программы (.bin)')
    parser.add_argument('-a', '--address', type=lambda x: int(x, 0), required=True,
                       help='Физический адрес загрузки (hex: 0xC00000)')
    parser.add_argument('-j', '--jump', type=lambda x: int(x, 0),
                       help='Добавить JP вектор (логический адрес Z80, hex: 0x0100)')
    parser.add_argument('-t', '--trace', type=int, metavar='STEPS',
                       help='Включить трассировку на указанное число шагов')
    parser.add_argument('-b', '--breakpoint', type=lambda x: int(x, 0),
                       help='Установить точку останова (логический адрес Z80, hex)')
    
    args = parser.parse_args()
    
    # Проверка файла
    if not os.path.exists(args.filename):
        print(f"❌ Файл не найден: {args.filename}")
        sys.exit(1)
    
    # Создаем отладчик
    debugger = SimpleDebugger()
    
    print("=" * 60)
    
    # Загружаем
    if not debugger.load_file(args.address, args.filename, args.jump):
        sys.exit(1)
    
    # Точка останова
    if args.breakpoint:
        if not debugger.set_breakpoint(args.breakpoint):
            print("❌ Не удалось установить точку останова")
            sys.exit(1)
    
    print("=" * 60)
    
    # Сброс системы (CPU начнет с 0x0000)
    print("Сброс CPU...")
    if not debugger.reset():
        print("❌ Сбой сброса")
        sys.exit(1)
    
    time.sleep(0.01)
    
    # Показываем начальное состояние
    state = debugger.status()
    print(f"Начальный PC: 0x{state.get('pc', 0):04X}")
    print(f"Полный адрес: 0x{state.get('full_addr', 0):06X}")
    
    # Запуск выполнения
    if args.trace:
        debugger.run_trace(args.trace)
    else:
        debugger.run_normal()
    
    print("=" * 60)
    print("Готово")


if __name__ == '__main__':
    main()