#!/usr/bin/env python3
"""
Z80 Debugger - полная версия (KISS принцип)
Просто делает то, что просят. Без лишнего.
"""
import sys
import os
import time
import argparse
from typing import Optional, Dict, Any, List
from dataclasses import dataclass

sys.path.append(os.path.join(os.path.dirname(__file__), '../..'))

from core.memory import FPGAMemory
from core.registers import FPGARegisters

# Импортируем дизассемблер (опционально)
script_dir = os.path.dirname(__file__)
core_dir = os.path.join(script_dir, '../../core')
sys.path.insert(0, core_dir)

# Глобальные переменные модуля
HAS_DISASM = False
decode_func = None
disasm_func = None

try:
    from z80dis import decode, disasm
    decode_func = decode
    disasm_func = disasm
    HAS_DISASM = True
except ImportError:
    HAS_DISASM = False


@dataclass
class TraceOptions:
    """Настройки трассировки - максимально просто"""
    show_step: bool = True
    show_addr: bool = True
    show_pc: bool = True
    show_bus: bool = True
    show_type: bool = True
    show_disasm: bool = True
    show_mmu: bool = False
    show_flags: bool = False
    
    stop_inst: bool = True
    stop_mrd: bool = False
    stop_mwr: bool = False
    stop_io: bool = False
    
    bp_addr: int = 0
    bp_inst: bool = False


class Z80Debugger:
    """Простой отладчик - только базовые операции"""
    
    def __init__(self, verbose: bool = False):
        self.mem = FPGAMemory()
        self.reg = FPGARegisters()
        self.verbose = verbose
        self.disasm_cache = {}
    
    # --------------------------------------------------
    # 1. КОМАНДЫ УПРАВЛЕНИЯ CPU (одна строка)
    # --------------------------------------------------
    
    def cmd_reset(self, state: Optional[bool] = None):
        """Управление сбросом"""
        if state is None:
            # toggle
            current = self.reg.read(0x01) or 0
            new_val = 0x80 if not (current & 0x80) else 0x00
            ok = self.reg.write(0x01, new_val)
            print(f"reset: {'on' if new_val & 0x80 else 'off'} {'ok' if ok else 'fail'}")
        elif state:
            # on
            ok = self.reg.write(0x01, 0x80)
            print(f"reset: on {'ok' if ok else 'fail'}")
        else:
            # off
            current = self.reg.read(0x01) or 0
            ok = self.reg.write(0x01, current & ~0x80)
            print(f"reset: off {'ok' if ok else 'fail'}")
        return ok
    
    def cmd_nmi(self):
        """Послать NMI"""
        ok = self.reg.write(0x01, 0x02)
        print(f"nmi: {'ok' if ok else 'fail'}")
        return ok
    
    def cmd_int(self):
        """Послать INT"""
        ok = self.reg.write(0x01, 0x04)
        print(f"int: {'ok' if ok else 'fail'}")
        return ok
    
    def cmd_step_mode(self, enable: bool):
        """Включить/выключить пошаговый режим"""
        ctrl = self.reg.read(0x01) or 0
        if enable:
            ctrl |= 0x40
        else:
            ctrl &= ~0x40
        
        ok = self.reg.write(0x01, ctrl)
        mode = 'on' if enable else 'off'
        print(f"step-mode: {mode} {'ok' if ok else 'fail'}")
        return ok
    
    def cmd_step(self, count: int = 1):
        """Выполнить шаг(и)"""
        for i in range(count):
            # Сохраняем предыдущее состояние
            prev = self._get_simple_status()
            
            # Шагаем
            ok = self.reg.write(0x01, 0x08)
            if not ok:
                print(f"step {i+1}: fail")
                return False
            
            # Ждем
            timeout = time.time() + 1.0
            while time.time() < timeout:
                status = self.reg.read(0x10)
                if status is not None and (status & 0x01):
                    break
                time.sleep(0.001)
            else:
                print(f"step {i+1}: timeout")
                return False
            
            # Показываем
            curr = self._get_simple_status()
            if curr:
                dis = self._simple_disasm(curr['addr'])
                print(f"step {i+1}: pc 0x{curr['pc']:04X} addr 0x{curr['addr']:06X} bus 0x{curr['bus']:02X} {dis}")
            
            if i < count - 1:
                time.sleep(0.001)
        
        return True
    
    def cmd_run(self):
        """Запустить выполнение"""
        ok = self.reg.write(0x02, 0x00)  # clear stops
        ok = ok and self.reg.write(0x01, 0x00)  # step mode off
        
        if ok:
            print("run: started")
        else:
            print("run: fail")
        return ok
    
    # --------------------------------------------------
    # 2. ТОЧКИ ОСТАНОВА (просто)
    # --------------------------------------------------
    
    def cmd_bp_set(self, addr: int, modes: str = "i"):
        """Установить точку останова"""
        # Адрес
        ok = True
        ok = ok and self.reg.write(0x03, (addr >> 16) & 0xFF)
        ok = ok and self.reg.write(0x04, (addr >> 8) & 0xFF)
        ok = ok and self.reg.write(0x05, addr & 0xFF)
        
        # Режимы
        ctrl_stop = 0
        if 'i' in modes: ctrl_stop |= 0x10  # на инструкциях
        
        ok = ok and self.reg.write(0x02, ctrl_stop)
        
        if ok:
            print(f"bp-set: addr 0x{addr:06X} modes {modes} ok")
        else:
            print("bp-set: fail")
        return ok
    
    def cmd_bp_clear(self):
        """Очистить точку останова"""
        ok = self.reg.write(0x02, 0x00)
        print(f"bp-clear: {'ok' if ok else 'fail'}")
        return ok
    
    # --------------------------------------------------
    # 3. ТРАССИРОВКА (основная функция)
    # --------------------------------------------------
    
    def cmd_trace(self, steps: int, options: TraceOptions):
        """Трассировка - просто делает шаги"""
        # Настраиваем остановки
        ctrl_stop = 0
        if options.stop_inst: ctrl_stop |= 0x01
        if options.stop_mrd: ctrl_stop |= 0x02
        if options.stop_mwr: ctrl_stop |= 0x04
        if options.stop_io: ctrl_stop |= 0x08
        
        if options.bp_addr:
            if options.bp_inst: ctrl_stop |= 0x10
            addr = options.bp_addr
            self.reg.write(0x03, (addr >> 16) & 0xFF)
            self.reg.write(0x04, (addr >> 8) & 0xFF)
            self.reg.write(0x05, addr & 0xFF)
        
        self.reg.write(0x02, ctrl_stop)
        
        # Пошаговый режим
        self.cmd_step_mode(True)
        time.sleep(0.01)
        
        # Кэш
        self.disasm_cache.clear()
        
        # Шагаем
        for step in range(steps):
            # Шаг
            if not self.reg.write(0x01, 0x08):
                print(f"trace step {step+1}: fail")
                break
            
            # Ждем
            timeout = time.time() + 1.0
            while time.time() < timeout:
                status = self.reg.read(0x0)
                if status is not None and (status & 0x01):
                    break
                time.sleep(0.001)
            else:
                print(f"trace step {step+1}: timeout")
                break
            
            # Состояние
            state = self._get_detailed_status()
            if not state:
                continue
            
            # Вывод
            self._print_trace_line(step + 1, state, options)
            
            # Проверка завершения
            if state['halted']:
                print(f"trace: halted at 0x{state['pc']:04X}")
                break
            
            if state['bp_hit'] and options.bp_addr:
                print(f"trace: breakpoint at 0x{state['addr']:06X}")
                break
            
            time.sleep(0.001)
        
        # Очистка
        self.reg.write(0x02, 0x00)
    
    def _print_trace_line(self, step: int, state: Dict, options: TraceOptions):
        """Вывод одной строки трассировки - просто и понятно"""
        parts = []
        
        if options.show_step:
            parts.append(f"step:{step:4d}")
        if options.show_addr:
            parts.append(f"addr:0x{state['addr']:06X}")
        if options.show_pc:
            parts.append(f"pc:0x{state['pc']:04X}")
        if options.show_bus:
            parts.append(f"bus:0x{state['bus']:02X}")
        if options.show_type:
            parts.append(f"type:{state['type']:8s}")
        
        if options.show_disasm and state['m1']:
            dis = self._simple_disasm(state['addr'])
            if dis:
                parts.append(f"dis:{dis}")
        
        if options.show_mmu:
            mmu = 'N' if state['mmu_native'] else 'Z'
        
        if options.show_flags:
            flags = []
            if state['halted']: flags.append('H')
            if state['waiting']: flags.append('W')
            if flags:
                parts.append(f"flags:{''.join(flags)}")
        
        print(' '.join(parts))
    
    # --------------------------------------------------
    # 4. ЗАГРУЗКА ПРОГРАММ
    # --------------------------------------------------
    
    def cmd_load(self, addr: int, filename: str, jump: Optional[int] = None):
        """Загрузить программу"""
        try:
            with open(filename, 'rb') as f:
                data = f.read()
            
            ok = self.mem.write_memory(addr, data)
            
            if ok:
                print(f"load: {len(data)} bytes at 0x{addr:06X} ok")
                if jump:
                    print(f"load: jump to 0x{jump:04X}")
            else:
                print("load: write fail")

            
            if jump is not None:
                # Добавляем JP вектор
                vector = bytes([0xC3, jump & 0xFF, (jump >> 8) & 0xFF])
                ok = self.mem.write_memory(0x0000, vector)

                if ok:
                    print(f"load: jump to 0x{jump:04X}")
                else:
                    print("load: jump fail")

            return ok
            
        except Exception as e:
            print(f"load: error {e}")
            return False

    
    def cmd_debug(self, addr: int, filename: str, steps: int = 20, jump: Optional[int] = None):
        """Загрузить и начать отладку"""
        # Загружаем
        if not self.cmd_load(addr, filename, jump):
            return False
        
        # Сбрасываем CPU
        self.cmd_reset(True)
        time.sleep(0.01)
        
        # Запускаем трассировку с настройками по умолчанию
        opts = TraceOptions()
        self.cmd_trace(steps, opts)
        
        return True
    
    def cmd_enter(self, addr: int, filename: str, jump: Optional[int] = None):
        """Загрузить и остановиться на первой инструкции"""
        # Загружаем
        if not self.cmd_load(addr, filename, jump):
            return False
        
        # Сбрасываем CPU
        self.cmd_reset(True)
        time.sleep(0.01)
        
        # Настраиваем останов на инструкциях
        self.reg.write(0x02, 0x01)
        
        # Включаем пошаговый режим
        self.cmd_step_mode(True)
        
        print("enter: ready at first instruction")
        return True
    
    # --------------------------------------------------
    # 5. СТАТУС И ДИАГНОСТИКА
    # --------------------------------------------------
    
    def cmd_status(self):
        """Показать статус CPU"""
        state = self._get_detailed_status()
        if not state:
            print("status: read fail")
            return
        
        print(f"status: pc 0x{state['pc']:04X} addr 0x{state['addr']:06X}")
        print(f"        bus 0x{state['bus']:02X} type {state['type']}")
        
        flags = []
        if state['halted']: flags.append('halt')
        if state['waiting']: flags.append('wait')
        if state['stopped']: flags.append('stop')
        if state['bp_hit']: flags.append('bp')
        
        if flags:
            print(f"        flags {' '.join(flags)}")
        
        if state['m1']:
            dis = self._simple_disasm(state['addr'])
            if dis:
                print(f"        {dis}")
    
    def cmd_mem(self, addr: int, size: int = 16):
        """Чоказать память"""
        try:
            data = self.mem.read_memory(addr, size)
            if not data:
                print(f"mem: read fail 0x{addr:06X}")
                return
            
            # Простой hex дамп
            hex_str = ' '.join(f"{b:02X}" for b in data)
            print(f"mem: addr 0x{addr:06X} size {size} data {hex_str}")
            
        except Exception as e:
            print(f"mem: error {e}")
    
    # --------------------------------------------------
    # 6. ВСПОМОГАТЕЛЬНЫЕ ФУНКЦИИ (внутренние)
    # --------------------------------------------------
    
    def _get_simple_status(self) -> Optional[Dict]:
        """Простой статус"""
        try:
            addr_h = self.reg.read(0x12) or 0
            addr_m = self.reg.read(0x13) or 0
            addr_l = self.reg.read(0x14) or 0
            addr = (addr_h << 16) | (addr_m << 8) | addr_l
            
            bus = self.reg.read(0x15) or 0
            
            return {
                'addr': addr,
                'pc': addr & 0xFFFF,
                'bus': bus,
            }
        except:
            return None
    
    def _get_detailed_status(self) -> Optional[Dict]:
        """Подробный статус"""
        try:
            addr_h = self.reg.read(0x12) or 0
            addr_m = self.reg.read(0x13) or 0
            addr_l = self.reg.read(0x14) or 0
            addr = (addr_h << 16) | (addr_m << 8) | addr_l
            
            bus = self.reg.read(0x15) or 0
            status = self.reg.read(0x10) or 0
            mmu = self.reg.read(0x11) or 0
            sig2 = self.reg.read(0x19) or 0
            
            # Тип операции
            op_type = "?"
            if status & 0x10:
                op_type = "FETCH"
            elif status & 0x20:
                if sig2 & 0x80:
                    op_type = "MEM_RD"
                elif sig2 & 0x40:
                    op_type = "MEM_WR"
                else:
                    op_type = "MEM"
            elif status & 0x40:
                op_type = "IO"
            
            return {
                'addr': addr,
                # take the mmu_page[1:0] and a[13:0]
                'pc': (((mmu >> 6) & 0x03) << 14) + (addr & 0x3FFF),
                'bus': bus,
                'type': op_type,
                'stopped': bool(status & 0x01),
                'bp_hit': bool(status & 0x02),
                'halted': bool(status & 0x04),
                'waiting': bool(status & 0x08),
                'm1': bool(status & 0x10),
                'mmu_native': bool(mmu & 0x01)
            }
        except:
            return None
    
    def _simple_disasm(self, addr: int) -> str:
        """Простое дизассемблирование"""
        if not HAS_DISASM:
            bus = self.reg.read(0x15) or 0
            return f"db 0x{bus:02X}"
        
        try:
            if addr in self.disasm_cache:
                return self.disasm_cache[addr]
            
            data = self.mem.read_memory(addr, 4)
            if not data:
                bus = self.reg.read(0x15) or 0
                return f"db 0x{bus:02X}"
            
            decoded = decode_func(data, addr & 0xFFFF)
            result = disasm_func(decoded)
            
            if not result:
                bus = self.reg.read(0x15) or 0
                result = f"db 0x{bus:02X}"
            
            self.disasm_cache[addr] = result
            return result
            
        except:
            bus = self.reg.read(0x15) or 0
            return f"db 0x{bus:02X}"

    def cmd_exec(self, steps: int = 0, bp_addr: Optional[int] = None):
        """Запустить выполнение до точки останова или определенного количества шагов"""
        
        # Настраиваем остановы
        ctrl_stop = 0x0F  # Все остановы включены по умолчанию
        
        if bp_addr:
            # Устанавливаем точку останова
            self.reg.write(0x03, (bp_addr >> 16) & 0xFF)
            self.reg.write(0x04, (bp_addr >> 8) & 0xFF)
            self.reg.write(0x05, bp_addr & 0xFF)
            ctrl_stop |= 0x10  # BP на инструкциях
        
        # Устанавливаем остановы
        self.reg.write(0x02, ctrl_stop)
        
        # Выключаем пошаговый режим и запускаем
        self.reg.write(0x01, 0x00)  # step mode off
        
        print(f"exec: running...")
        
        # Если задано ограничение по шагам
        if steps > 0:
            start_time = time.time()
            for i in range(steps):
                # Проверяем статус
                status = self.reg.read(0x10)
                if status is None:
                    print("exec: communication error")
                    return False
                
                # Проверяем условия остановки
                if status & 0x01:  # Остановлен
                    if status & 0x02:  # Точка останова
                        print(f"exec: breakpoint hit at step {i}")
                        break
                    elif status & 0x04:  # HALT
                        print(f"exec: halted at step {i}")
                        break
                    else:
                        print(f"exec: stopped at step {i}")
                        break
                
                # Небольшая задержка для CPU
                time.sleep(0.0001)
                
                # Проверка таймаута
                if time.time() - start_time > 10.0:  # 10 секунд
                    print("exec: timeout")
                    return False
        else:
            # Запускаем до остановки
            print("exec: running until stop/breakpoint/halt...")
            
            # Ожидаем остановки
            timeout = time.time() + 10.0  # 10 секунд
            while time.time() < timeout:
                status = self.reg.read(0x10)
                if status is None:
                    print("exec: communication error")
                    return False
                
                if status & 0x01:  # Остановлен
                    if status & 0x02:  # Точка останова
                        print("exec: breakpoint hit")
                        break
                    elif status & 0x04:  # HALT
                        print("exec: halted")
                        break
                    else:
                        print("exec: stopped")
                        break
                
                time.sleep(0.001)
            else:
                print("exec: timeout")
                return False
        
        # Показываем текущее состояние
        state = self._get_detailed_status()
        if state:
            print(f"exec: pc=0x{state['pc']:04X} addr=0x{state['addr']:06X}")
        
        # Сбрасываем остановы
        self.reg.write(0x02, 0x00)
        return True
# --------------------------------------------------
# 7. ПАРСИНГ АРГУМЕНТОВ И ГЛАВНАЯ ФУНКЦИЯ
# --------------------------------------------------

def parse_stop(stop_str: str) -> tuple:
    """Парсинг строки остановов"""
    inst = mrd = mwr = io = False
    
    if not stop_str:
        return inst, mrd, mwr, io
    
    parts = stop_str.lower().split(',')
    for part in parts:
        part = part.strip()
        if part == 'inst': inst = True
        elif part == 'mrd': mrd = True
        elif part == 'mwr': mwr = True
        elif part == 'io': io = True
        elif part == 'all': inst = mrd = mwr = io = True
    
    return inst, mrd, mwr, io


def parse_addr(addr_str: str) -> int:
    """Парсинг адреса (hex или dec)"""
    if addr_str.startswith('0x'):
        return int(addr_str[2:], 16)
    return int(addr_str)

def main():
    """Главная функция - максимально просто"""
    parser = argparse.ArgumentParser(
        description='Z80 Debugger - просто и понятно',
        add_help=False
    )
    
    subparsers = parser.add_subparsers(dest='cmd', metavar='CMD')
    
    # Помощь
    subparsers.add_parser('help', help='Показать справку')
    
    # 1. Команды управления CPU
    subparsers.add_parser('reset', help='Toggle сброса')
    subparsers.add_parser('reseton', help='Включить сброс')
    subparsers.add_parser('resetoff', help='Выключить сброс')
    subparsers.add_parser('nmi', help='Послать NMI')
    subparsers.add_parser('int', help='Послать INT')
    subparsers.add_parser('stepon', help='Включить пошаговый режим')
    subparsers.add_parser('stepoff', help='Выключить пошаговый режим')
    subparsers.add_parser('run', help='Запустить выполнение')
    subparsers.add_parser('status', help='Показать статус')
    
    # Шаги
    step_parser = subparsers.add_parser('step', help='Выполнить шаг(и)')
    step_parser.add_argument('-n', type=int, default=1, help='Количество шагов')
    
    # Точки останова
    bp_parser = subparsers.add_parser('bp-set', help='Установить точку останова')
    bp_parser.add_argument('addr', help='Адрес (hex)')
    bp_parser.add_argument('-m', default='i', help='Режимы: i=инструкции')
    
    subparsers.add_parser('bp-clear', help='Очистить точку останова')
    
    # Память
    mem_parser = subparsers.add_parser('mem', help='Показать память')
    mem_parser.add_argument('addr', help='Адрес (hex)')
    mem_parser.add_argument('size', nargs='?', type=int, default=16, help='Количество байт')
    
    # Загрузка
    load_parser = subparsers.add_parser('load', help='Загрузить программу')
    load_parser.add_argument('-a', '--addr', required=True, help='Адрес загрузки (hex)')
    load_parser.add_argument('-j', '--jump', help='Адрес перехода (hex)')
    load_parser.add_argument('file', help='Файл программы')
    
    # Отладка
    debug_parser = subparsers.add_parser('debug', help='Загрузить и трассировать')
    debug_parser.add_argument('-a', '--addr', required=True, help='Адрес загрузки (hex)')
    debug_parser.add_argument('-j', '--jump', help='Адрес перехода (hex)')
    debug_parser.add_argument('-n', type=int, default=20, help='Шагов трассировки')
    debug_parser.add_argument('file', help='Файл программы')
    
    # Enter
    enter_parser = subparsers.add_parser('enter', help='Загрузить и остановиться')
    enter_parser.add_argument('-a', '--addr', required=True, help='Адрес загрузки (hex)')
    enter_parser.add_argument('-j', '--jump', help='Адрес перехода (hex)')
    enter_parser.add_argument('file', help='Файл программы')
    
    # Трассировка (основная команда)
    trace_parser = subparsers.add_parser('trace', help='Трассировка программы')
    trace_parser.add_argument('-a', '--addr', required=True, help='Адрес загрузки (hex)')
    trace_parser.add_argument('-j', '--jump', help='Адрес перехода (hex)')
    trace_parser.add_argument('-n', '--steps', type=int, default=20, help='Количество шагов')
    trace_parser.add_argument('-b', '--bp', help='Точка останова (hex)')
    trace_parser.add_argument('--bp-inst', action='store_true', help='BP на инструкциях')
    
    # ИНВЕРТИРОВАННАЯ ЛОГИКА: по умолчанию всё включено, можно отключать
    trace_parser.add_argument('--stop', default='all', 
                             help='Остановы: all, или список через запятую: no-inst,no-mrd,no-mwr,no-io')
    
    trace_parser.add_argument('--no-step', action='store_true', help='Не показывать step')
    trace_parser.add_argument('--no-addr', action='store_true', help='Не показывать addr')
    trace_parser.add_argument('--no-pc', action='store_true', help='Не показывать pc')
    trace_parser.add_argument('--no-bus', action='store_true', help='Не показывать bus')
    trace_parser.add_argument('--no-type', action='store_true', help='Не показывать type')
    trace_parser.add_argument('--no-disasm', action='store_true', help='Не показывать disasm')
    
    trace_parser.add_argument('--mmu', action='store_true', help='Показывать mmu')
    trace_parser.add_argument('--flags', action='store_true', help='Показывать флаги')
    
    trace_parser.add_argument('file', help='Файл программы')
    
    # Добавляем команду exec (ДО проверки аргументов!)
    exec_parser = subparsers.add_parser('exec', help='Запустить выполнение')
    exec_parser.add_argument('-n', '--steps', type=int, default=0, 
                            help='Максимальное количество шагов (0 = до остановки)')
    exec_parser.add_argument('-b', '--bp', help='Адрес точки останова (hex)')
    exec_parser.add_argument('file', nargs='?', help='Файл для загрузки (опционально)')
    exec_parser.add_argument('-a', '--addr', help='Адрес загрузки (hex)')
    exec_parser.add_argument('-j', '--jump', help='Адрес перехода (hex)')
    
    # Если нет аргументов
    if len(sys.argv) == 1:
        parser.print_help()
        sys.exit(0)
    
    args = parser.parse_args()
    
    if args.cmd == 'help':
        parser.print_help()
        sys.exit(0)
    
    # Создаем отладчик
    dbg = Z80Debugger()
    
    try:
        # 1. УПРАВЛЕНИЕ CPU
        if args.cmd == 'reset':
            dbg.cmd_reset()  # toggle
            
        elif args.cmd == 'reseton':
            dbg.cmd_reset(True)
            
        elif args.cmd == 'resetoff':
            dbg.cmd_reset(False)
            
        elif args.cmd == 'nmi':
            dbg.cmd_nmi()
            
        elif args.cmd == 'int':
            dbg.cmd_int()
            
        elif args.cmd == 'stepon':
            dbg.cmd_step_mode(True)
            
        elif args.cmd == 'stepoff':
            dbg.cmd_step_mode(False)
            
        elif args.cmd == 'run':
            dbg.cmd_run()
            
        elif args.cmd == 'step':
            dbg.cmd_step(args.n)
            
        elif args.cmd == 'status':
            dbg.cmd_status()
        
        # 2. ТОЧКИ ОСТАНОВА
        elif args.cmd == 'bp-set':
            addr = parse_addr(args.addr)
            dbg.cmd_bp_set(addr, args.m)
            
        elif args.cmd == 'bp-clear':
            dbg.cmd_bp_clear()
        
        # 3. ПАМЯТЬ
        elif args.cmd == 'mem':
            addr = parse_addr(args.addr)
            dbg.cmd_mem(addr, args.size)
        
        # 4. ЗАГРУЗКА
        elif args.cmd == 'load':
            addr = parse_addr(args.addr)
            jump = parse_addr(args.jump) if args.jump else None
            dbg.cmd_load(addr, args.file, jump)
        
        # 5. ОТЛАДКА
        elif args.cmd == 'debug':
            addr = parse_addr(args.addr)
            jump = parse_addr(args.jump) if args.jump else None
            dbg.cmd_debug(addr, args.file, args.n, jump)
        
        elif args.cmd == 'enter':
            addr = parse_addr(args.addr)
            jump = parse_addr(args.jump) if args.jump else None
            dbg.cmd_enter(addr, args.file, jump)
        
        # 6. ТРАССИРОВКА (главная команда)
        elif args.cmd == 'trace':
            addr = parse_addr(args.addr)
            jump = parse_addr(args.jump) if args.jump else None
            bp = parse_addr(args.bp) if args.bp else 0
            
            # Настройки трассировки (ИНВЕРТИРОВАННАЯ ЛОГИКА)
            inst, mrd, mwr, io = parse_stop(args.stop)
            
            opts = TraceOptions()
            opts.stop_inst = inst
            opts.stop_mrd = mrd
            opts.stop_mwr = mwr
            opts.stop_io = io
            
            opts.bp_addr = bp
            opts.bp_inst = args.bp_inst
            
            opts.show_step = not args.no_step
            opts.show_addr = not args.no_addr
            opts.show_pc = not args.no_pc
            opts.show_bus = not args.no_bus
            opts.show_type = not args.no_type
            opts.show_disasm = not args.no_disasm
            opts.show_mmu = args.mmu
            opts.show_flags = args.flags
            
            # Загружаем и трассируем
            if not dbg.cmd_load(addr, args.file, jump):
                sys.exit(1)
            
            dbg.cmd_reset(True)
            time.sleep(0.01)
            
            dbg.cmd_trace(args.steps, opts)
        
        # 7. ВЫПОЛНЕНИЕ (новая команда)
        elif args.cmd == 'exec':
            # Загружаем файл если указан
            if args.file:
                addr = parse_addr(args.addr) if args.addr else 0
                jump = parse_addr(args.jump) if args.jump else None
                if not dbg.cmd_load(addr, args.file, jump):
                    sys.exit(1)
                
                dbg.cmd_reset(True)
                time.sleep(0.01)
            
            # Запускаем выполнение
            bp = parse_addr(args.bp) if args.bp else None
            dbg.cmd_exec(args.steps, bp)            
        else:
            print(f"Неизвестная команда: {args.cmd}")
            sys.exit(1)
            
    except KeyboardInterrupt:
        print("\nПрервано")
    except Exception as e:
        print(f"Ошибка: {e}")
        sys.exit(1)

if __name__ == '__main__':
    main()
