#!/usr/bin/env python3
"""
Z80 Debugger - ФИНАЛЬНАЯ РАБОЧАЯ ВЕРСИЯ
"""
import sys
import os
import time
import argparse
from typing import Optional, Dict, Any
from dataclasses import dataclass

sys.path.append(os.path.join(os.path.dirname(__file__), '../..'))

from core.memory import FPGAMemory
from core.registers import FPGARegisters

# Импортируем дизассемблер
script_dir = os.path.dirname(__file__)
core_dir = os.path.join(script_dir, '../../core')
sys.path.insert(0, core_dir)

# Глобальные переменные модуля
HAS_DISASM = False
decode = None
disasm = None
DECODE_STATUS = None

try:
    from z80dis import decode as decode_func, disasm as disasm_func, DECODE_STATUS as DS
    decode = decode_func
    disasm = disasm_func
    DECODE_STATUS = DS
    HAS_DISASM = True
    print("INFO: z80dis loaded successfully")
except ImportError as e:
    print(f"WARN: Cannot import z80dis: {e}")
    HAS_DISASM = False


@dataclass
class TraceOptions:
    """Настройки трассировки"""
    log_step: bool = True
    log_full_addr: bool = True
    log_pc: bool = True
    log_bus: bool = True
    log_type: bool = True
    log_disasm: bool = True
    log_mmu: bool = False
    log_cpu_flags: bool = False
    
    stop_inst: bool = True
    stop_mrd: bool = False
    stop_mwr: bool = False
    stop_io: bool = False
    
    bp_addr: int = 0
    bp_inst: bool = False


class Z80Debugger:
    """Простой отладчик Z80"""
    
    def __init__(self, verbose: bool = False):
        self.mem = FPGAMemory()
        self.reg = FPGARegisters()
        self.verbose = verbose
        self.disasm_cache = {}
        
    def reset_on(self):
        return self.reg.write(0x00, 0x01)
    
    def reset_off(self):
        current = self.reg.read(0x00) or 0
        return self.reg.write(0x00, current & ~0x01)
    
    def step(self):
        return self.reg.write(0x00, 0x08)
    
    def set_step_mode(self, enable: bool):
        ctrl = self.reg.read(0x01) or 0
        if enable:
            ctrl |= 0x01
        else:
            ctrl &= ~0x01
        return self.reg.write(0x01, ctrl)
    
    def configure_stops(self, options: TraceOptions):
        ctrl_stop = 0
        
        if options.stop_inst:
            ctrl_stop |= 0x01
        if options.stop_mrd:
            ctrl_stop |= 0x02
        if options.stop_mwr:
            ctrl_stop |= 0x04
        if options.stop_io:
            ctrl_stop |= 0x08
        
        if options.bp_addr:
            if options.bp_inst:
                ctrl_stop |= 0x10
            addr = options.bp_addr
            self.reg.write(0x03, (addr >> 16) & 0xFF)
            self.reg.write(0x04, (addr >> 8) & 0xFF)
            self.reg.write(0x05, addr & 0xFF)
        
        return self.reg.write(0x02, ctrl_stop)
    
    def clear_stops(self):
        return self.reg.write(0x02, 0x00)
    
    def get_status(self) -> Optional[Dict]:
        try:
            addr_h = self.reg.read(0x12) or 0
            addr_m = self.reg.read(0x13) or 0
            addr_l = self.reg.read(0x14) or 0
            full_addr = (addr_h << 16) | (addr_m << 8) | addr_l
            
            smart_data = self.reg.read(0x15) or 0
            status_cpu = self.reg.read(0x10) or 0
            mmu_status = self.reg.read(0x11) or 0
            signals2 = self.reg.read(0x19) or 0
            
            return {
                'full_addr': full_addr,
                'pc': full_addr & 0xFFFF,
                'slot': addr_h,
                'smart': smart_data,
                'halted': bool(status_cpu & 0x01),
                'waiting': bool(status_cpu & 0x02),
                'stopped': bool(status_cpu & 0x04),
                'bp_hit': bool(status_cpu & 0x08),
                'm1_cycle': bool(status_cpu & 0x10),
                'mem_access': bool(status_cpu & 0x20),
                'io_access': bool(status_cpu & 0x40),
                'bus_access': bool(status_cpu & 0x80),
                'op_type': self._get_op_type(status_cpu, signals2),
                'mmu_native': bool(mmu_status & 0x01),
                'mmu_super': bool(mmu_status & 0x02),
                'mmu_slot': ((mmu_status >> 6) & 0x03),
            }
        except Exception:
            return None
    
    def _get_op_type(self, status: int, sig2: int) -> str:
        if status & 0x10:
            return "FETCH"
        elif status & 0x20:
            if sig2 & 0x80:
                return "MEM_RD"
            elif sig2 & 0x40:
                return "MEM_WR"
            return "MEM"
        elif status & 0x40:
            if sig2 & 0x20:
                return "IO_RD"
            elif sig2 & 0x10:
                return "IO_WR"
            return "IO"
        return "INTERNAL"
    
    def _disasm_instruction(self, addr: int) -> Optional[str]:
        """Дизассемблирование инструкции - ПРОСТАЯ ВЕРСИЯ"""
        if not HAS_DISASM or decode is None or disasm is None:
            bus_data = self.reg.read(0x15) or 0
            return f"db 0x{bus_data:02X}"
        
        try:
            # Используем кэш
            if addr in self.disasm_cache:
                return self.disasm_cache[addr]
            
            # Читаем память
            data = self.mem.read_memory(addr, 4)
            if not data:
                return None
            
            # Дизассемблируем
            decoded = decode(data, addr & 0xFFFF)
            
            # Получаем строку дизассемблирования
            result = disasm(decoded)
            
            # Если результат пустой (статус не OK), показываем байт
            if not result or result == "":
                bus_data = self.reg.read(0x15) or 0
                result = f"db 0x{bus_data:02X}"
            
            # Кэшируем результат
            self.disasm_cache[addr] = result
            return result
            
        except Exception as e:
            if self.verbose:
                print(f"Disasm error at 0x{addr:06X}: {e}")
            
            bus_data = self.reg.read(0x15) or 0
            return f"db 0x{bus_data:02X}"
    
    def load_program(self, load_addr: int, filename: str, start_vector: Optional[int] = None) -> bool:
        try:
            with open(filename, 'rb') as f:
                data = f.read()
            
            if start_vector is not None:
                vector = bytes([
                    0xC3,
                    start_vector & 0xFF,
                    (start_vector >> 8) & 0xFF
                ])
                data = vector + data
            
            if not self.mem.write_memory(load_addr, data):
                print("ERR: memory write failed")
                return False
            
            print(f"LOAD: {len(data)} bytes at 0x{load_addr:06X}")
            if start_vector:
                print(f"      jump to 0x{start_vector:04X}")
            
            # Очищаем кэш при загрузке новой программы
            self.disasm_cache.clear()
            return True
            
        except Exception as e:
            print(f"ERR: load failed - {e}")
            return False
    
    def trace(self, steps: int, options: TraceOptions):
        """Трассировка выполнения"""
        # Настраиваем остановки
        self.configure_stops(options)
        
        # Включаем пошаговый режим
        self.set_step_mode(True)
        time.sleep(0.01)
        
        # Очищаем кэш дизассемблирования
        self.disasm_cache.clear()
        
        print(f"TRACE: {steps} steps")
        
        for step in range(steps):
            # Выполняем шаг (первый шаг также выключит сброс)
            if not self.step():
                print(f"step {step+1}: FAIL")
                break
            
            # Ждем остановки CPU
            timeout = time.time() + 1.0
            stepped = False
            
            while time.time() < timeout:
                state = self.get_status()
                if state and state['stopped']:
                    stepped = True
                    self._print_trace_line(step + 1, state, options)
                    break
                time.sleep(0.001)
            
            if not stepped:
                print(f"step {step+1}: TIMEOUT")
                break
            
            # Проверяем условия завершения
            if state['halted']:
                print(f"STOP: CPU halted at 0x{state['pc']:04X}")
                break
            
            if state['bp_hit'] and options.bp_addr:
                print(f"STOP: breakpoint at 0x{state['full_addr']:06X}")
                break
            
            time.sleep(0.001)
        
        # Очищаем настройки остановок
        self.clear_stops()
    
    def _print_trace_line(self, step: int, state: Dict, options: TraceOptions):
        parts = []
        
        if options.log_step:
            parts.append(f"step:{step:4d}")
        if options.log_full_addr:
            parts.append(f"addr:0x{state['full_addr']:06X}")
        if options.log_pc:
            parts.append(f"pc:0x{state['pc']:04X}")
        if options.log_bus:
            parts.append(f"bus:0x{state['smart']:02X}")
        if options.log_type:
            parts.append(f"type:{state['op_type']:8s}")
        
        if options.log_disasm and state['m1_cycle']:
            dis = self._disasm_instruction(state['full_addr'])
            if dis:
                parts.append(f"dis:{dis}")
        
        if options.log_mmu:
            mmu_mode = 'N' if state['mmu_native'] else 'Z'
            mmu_priv = 'S' if state['mmu_super'] else 'U'
            parts.append(f"mmu:{mmu_mode}{mmu_priv}S{state['mmu_slot']}")
        
        if options.log_cpu_flags:
            flags = []
            if state['halted']: flags.append('H')
            if state['waiting']: flags.append('W')
            if flags:
                parts.append(f"cpu:{''.join(flags)}")
        
        print(' '.join(parts))


def parse_stop_string(stop_str: str) -> tuple:
    """Парсит строку с настройками остановов"""
    stop_inst = stop_mrd = stop_mwr = stop_io = False
    
    if not stop_str:
        return stop_inst, stop_mrd, stop_mwr, stop_io
    
    parts = stop_str.lower().split(',')
    for part in parts:
        part = part.strip()
        if part == 'inst':
            stop_inst = True
        elif part == 'mrd':
            stop_mrd = True
        elif part == 'mwr':
            stop_mwr = True
        elif part == 'io':
            stop_io = True
        elif part == 'all':
            stop_inst = stop_mrd = stop_mwr = stop_io = True
    
    return stop_inst, stop_mrd, stop_mwr, stop_io


def main():
    parser = argparse.ArgumentParser(
        description='Z80 Debugger - простая утилита трассировки',
        add_help=False
    )
    
    subparsers = parser.add_subparsers(dest='cmd', metavar='CMD')
    
    # Команда help
    subparsers.add_parser('help', help='Показать справку')
    
    # Команда trace
    trace_parser = subparsers.add_parser('trace', help='Загрузить и трассировать программу')
    trace_parser.add_argument('-a', '--addr', required=True, help='Адрес загрузки (hex)')
    trace_parser.add_argument('-j', '--jump', help='Адрес перехода (hex)')
    trace_parser.add_argument('-n', '--steps', type=int, default=20, help='Шагов трассировки')
    trace_parser.add_argument('-b', '--bp', help='Точка останова (hex)')
    trace_parser.add_argument('--bp-inst', action='store_true', help='BP только на инструкциях')
    
    trace_parser.add_argument('--stop', default='inst', 
                            help='Что останавливать: inst,mrd,mwr,io,all')
    
    trace_parser.add_argument('--log-no-step', action='store_true', help='Не показывать step')
    trace_parser.add_argument('--log-no-addr', action='store_true', help='Не показывать addr')
    trace_parser.add_argument('--log-no-pc', action='store_true', help='Не показывать pc')
    trace_parser.add_argument('--log-no-bus', action='store_true', help='Не показывать bus')
    trace_parser.add_argument('--log-no-type', action='store_true', help='Не показывать type')
    trace_parser.add_argument('--log-no-disasm', action='store_true', help='Не показывать disasm')
    
    trace_parser.add_argument('--log-mmu', action='store_true', help='Показывать mmu')
    trace_parser.add_argument('--log-cpu-flags', action='store_true', help='Показывать cpu флаги')
    trace_parser.add_argument('--verbose', action='store_true', help='Подробный вывод')
    
    trace_parser.add_argument('file', help='Файл программы')
    
    if len(sys.argv) == 1:
        parser.print_help()
        sys.exit(0)
    
    args = parser.parse_args()
    
    if args.cmd == 'help':
        parser.print_help()
        sys.exit(0)
    
    if args.cmd != 'trace':
        print("ERR: Only 'trace' command is implemented")
        sys.exit(1)
    
    # Создаем отладчик
    dbg = Z80Debugger(verbose=args.verbose)
    
    try:
        # Парсим аргументы
        load_addr = int(args.addr, 16) if args.addr.startswith('0x') else int(args.addr)
        jump_addr = None
        if args.jump:
            jump_addr = int(args.jump, 16) if args.jump.startswith('0x') else int(args.jump)
        
        bp_addr = None
        if args.bp:
            bp_addr = int(args.bp, 16) if args.bp.startswith('0x') else int(args.bp)
        
        print("=" * 60)
        print("НАЧАЛО ТРАССИРОВКИ")
        print("=" * 60)
        
        # 1. Включаем сброс CPU
        print("1. Включаем сброс CPU...")
        dbg.reset_on()
        time.sleep(0.01)
        
        # 2. Загружаем программу
        print("2. Загружаем программу...")
        if not dbg.load_program(load_addr, args.file, jump_addr):
            sys.exit(1)
        
        # 3. Настройки трассировки
        print("3. Настраиваем трассировку...")
        stop_inst, stop_mrd, stop_mwr, stop_io = parse_stop_string(args.stop)
        
        opts = TraceOptions()
        opts.stop_inst = stop_inst
        opts.stop_mrd = stop_mrd
        opts.stop_mwr = stop_mwr
        opts.stop_io = stop_io
        
        if bp_addr:
            opts.bp_addr = bp_addr
            opts.bp_inst = args.bp_inst
        
        opts.log_step = not args.log_no_step
        opts.log_full_addr = not args.log_no_addr
        opts.log_pc = not args.log_no_pc
        opts.log_bus = not args.log_no_bus
        opts.log_type = not args.log_no_type
        opts.log_disasm = not args.log_no_disasm
        opts.log_mmu = args.log_mmu
        opts.log_cpu_flags = args.log_cpu_flags
        
        print("4. Начинаем трассировку...")
        print(f"   Шагов: {args.steps}")
        print(f"   Останов на: {'inst ' if stop_inst else ''}{'mrd ' if stop_mrd else ''}{'mwr ' if stop_mwr else ''}{'io ' if stop_io else ''}")
        if bp_addr:
            print(f"   Точка останова: 0x{bp_addr:06X}")
        print("=" * 60)
        
        # 5. Запускаем трассировку
        dbg.trace(args.steps, opts)
        
        print("=" * 60)
        print("ТРАССИРОВКА ЗАВЕРШЕНА")
        print("=" * 60)
            
    except KeyboardInterrupt:
        print("\nINT: interrupted")
    except Exception as e:
        print(f"ERR: {e}")
        sys.exit(1)


if __name__ == '__main__':
    main()