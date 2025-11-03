#!/usr/bin/env python3
"""
Memory Pattern Filler - Интерактивная диагностика видеопамяти
"""

import sys
import os
import time
import argparse
import re
sys.path.append(os.path.join(os.path.dirname(__file__), '../..'))
from core.memory import FPGAMemory
from core.hex_utils import HexUtils

def parse_memory_size(size_str):
    """Парсит размер памяти с суффиксами K, M, G"""
    if not size_str:
        return 0
        
    size_str = str(size_str).upper().strip()
    
    # Регулярное выражение для поиска числа и суффикса
    match = re.match(r'^(\d+)([KMG]?)$', size_str)
    if not match:
        # Попробуем распарсить как hex число
        try:
            return int(size_str, 16)
        except ValueError:
            raise ValueError(f"Invalid memory size format: {size_str}")
    
    number = int(match.group(1))
    suffix = match.group(2)
    
    multipliers = {
        '': 1,
        'K': 1024,
        'M': 1024 * 1024,
        'G': 1024 * 1024 * 1024
    }
    
    return number * multipliers[suffix]

class MemoryFiller:
    def __init__(self):
        self.fpga = FPGAMemory()
        
    def fill_pattern(self, address, size, pattern, step_delay=1.0, interactive=False):
        """Заполняет память паттерном с визуализацией"""
        print(f"🎯 Filling 0x{address:06X}-0x{(address+size-1):06X} ({size} bytes)")
        
        if len(pattern) == 1:
            print(f"📊 Pattern: 0x{pattern[0]:02X} ({pattern[0]:08b})")
        else:
            print(f"📊 Pattern: {pattern.hex()}")
        
        if interactive:
            print("🚦 Interactive mode - press Enter for each step")
        
        # Заполняем память паттерном
        filled_bytes = 0
        for offset in range(0, size, len(pattern)):
            current_addr = address + offset
            chunk_size = min(len(pattern), size - offset)
            chunk = pattern[:chunk_size]
            
            # Записываем chunk
            success = self.fpga.write_memory(current_addr, chunk)
            if not success:
                print(f"❌ Write failed at 0x{current_addr:06X}")
                return False
            
            filled_bytes += chunk_size
            
            # Визуализация для однобайтовых паттернов
            if len(pattern) == 1:
                value = pattern[0]
                filled_percent = (filled_bytes / size) * 100
                print(f"📍 0x{current_addr:06X} = 0x{value:02X} █ {filled_percent:5.1f}%")
            else:
                # Для многобайтовых показываем прогресс каждые 256 байт
                if offset % 256 == 0:
                    filled_percent = (filled_bytes / size) * 100
                    print(f"📦 0x{current_addr:06X} - {filled_percent:5.1f}%")
            
            # Задержка или ожидание ввода
            if interactive:
                input("⏎ Press Enter for next step...")
            elif step_delay > 0:
                time.sleep(step_delay)
        
        print("✅ Fill completed")
        return True
    
    def generate_bit_patterns(self):
        """Генерирует паттерны с постепенным включением битов"""
        return [
            b'\x00',  # 00000000
            b'\x80',  # 10000000  
            b'\xC0',  # 11000000
            b'\xE0',  # 11100000
            b'\xF0',  # 11110000
            b'\xF8',  # 11111000
            b'\xFC',  # 11111100
            b'\xFE',  # 11111110
            b'\xFF',  # 11111111
        ]
    
    def generate_value_patterns(self, start=0, end=255, steps=8):
        """Генерирует прогрессивные паттерны от start до end"""
        patterns = []
        step_size = (end - start) / steps
        for i in range(steps + 1):
            value = int(start + step_size * i)
            patterns.append(bytes([value & 0xFF]))
        return patterns
    
    def close(self):
        self.fpga.close()

def main():
    parser = argparse.ArgumentParser(description='Interactive Memory Pattern Filler')
    parser.add_argument('address', help='Start address (0x1000 or 1000)')
    parser.add_argument('size', help='Size in bytes or K/M (16384, 16K, 1M)')
    
    # Режимы работы
    group = parser.add_mutually_exclusive_group()
    group.add_argument('--bits', action='store_true', help='Fill with bit progression (00->80->C0->FF)')
    group.add_argument('--zero', action='store_true', help='Fill with zeros')
    group.add_argument('--ff', action='store_true', help='Fill with 0xFF')
    group.add_argument('--pattern', help='Custom pattern (hex: "A5" or "A5C3")')
    group.add_argument('--values', type=int, nargs=2, metavar=('START', 'END'), 
                      help='Value progression (0 255)')
    
    # Управление
    parser.add_argument('--delay', type=float, default=1.0, help='Delay between steps (seconds)')
    parser.add_argument('--interactive', action='store_true', help='Wait for Enter after each step')
    parser.add_argument('--steps', type=int, default=8, help='Number of steps for progression')
    
    args = parser.parse_args()
    
    try:
        # Парсим адрес и размер
        address = HexUtils.parse_hex_address(args.address)
        size = parse_memory_size(args.size)
        
        if size <= 0:
            print("❌ Invalid size")
            return 1
            
        print(f"🎯 Target: 0x{address:06X} - 0x{address + size - 1:06X} ({size} bytes)")
        
    except Exception as e:
        print(f"❌ Error parsing arguments: {e}")
        return 1
    
    filler = MemoryFiller()
    
    try:
        # Выбираем паттерн
        if args.bits:
            print("🔢 Bit progression mode: 00 → 80 → C0 → E0 → F0 → F8 → FC → FE → FF")
            patterns = filler.generate_bit_patterns()
            
            for i, pattern in enumerate(patterns):
                print(f"\n🎯 STEP {i+1}/{len(patterns)}: 0x{pattern[0]:02X} ({pattern[0]:08b})")
                if not filler.fill_pattern(address, size, pattern, args.delay, args.interactive):
                    break
                    
        elif args.values:
            start, end = args.values
            print(f"🔢 Value progression: 0x{start:02X} → 0x{end:02X}")
            patterns = filler.generate_value_patterns(start, end, args.steps)
            
            for i, pattern in enumerate(patterns):
                print(f"\n🎯 STEP {i+1}/{len(patterns)}: 0x{pattern[0]:02X}")
                if not filler.fill_pattern(address, size, pattern, args.delay, args.interactive):
                    break
                    
        elif args.zero:
            print("🔄 Filling with zeros (0x00)")
            filler.fill_pattern(address, size, b'\x00', args.delay, args.interactive)
            
        elif args.ff:
            print("🔲 Filling with 0xFF")  
            filler.fill_pattern(address, size, b'\xFF', args.delay, args.interactive)
            
        elif args.pattern:
            # Кастомный паттерн
            try:
                pattern = bytes.fromhex(args.pattern.replace(' ', ''))
                print(f"🎨 Custom pattern: {args.pattern}")
                filler.fill_pattern(address, size, pattern, args.delay, args.interactive)
            except ValueError as e:
                print(f"❌ Invalid hex pattern: {e}")
                return 1
                
        else:
            # По умолчанию - битовая прогрессия
            print("🔢 Default: Bit progression mode")
            patterns = filler.generate_bit_patterns()
            for pattern in patterns:
                filler.fill_pattern(address, size, pattern, args.delay, args.interactive)
        
    except KeyboardInterrupt:
        print("\n⏹️  Stopped by user")
    except Exception as e:
        print(f"❌ Error: {e}")
        return 1
    finally:
        filler.close()
    
    return 0

if __name__ == "__main__":
    sys.exit(main())