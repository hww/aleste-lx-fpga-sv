#!/usr/bin/env python3
"""
Заполнение памяти паттерном
"""
import sys
import os
import argparse
sys.path.append(os.path.join(os.path.dirname(__file__), '../..'))

from core.memory import FPGAMemory
from core.hex_utils import HexUtils

def show_progress(current, total, prefix="Filling"):
    """Показать прогресс-бар"""
    percent = current / total if total > 0 else 0
    bar_length = 40
    filled_length = int(bar_length * percent)
    bar = '█' * filled_length + '░' * (bar_length - filled_length)
    print(f"\r{prefix} |{bar}| {current}/{total} bytes ({percent:.1%})", end='', flush=True)
    if current >= total:
        print()

def main():
    parser = argparse.ArgumentParser(description='Fill FPGA Memory with Pattern')
    parser.add_argument('address', help='Start address (hex)')
    parser.add_argument('size', type=int, help='Size in bytes')
    parser.add_argument('pattern', help='Fill pattern (hex byte: FF, or hex string: AABBCC)')
    parser.add_argument('--verify', action='store_true', help='Verify after fill')
    parser.add_argument('--no-progress', action='store_true', help='Disable progress bar')
    parser.add_argument('-v', '--verbose', action='store_true', help='Verbose output')
    
    args = parser.parse_args()
    
    address = HexUtils.parse_hex_address(args.address)
    
    # Парсинг паттерна
    pattern_hex = args.pattern.replace(' ', '').replace('0x', '').upper()
    
    if len(pattern_hex) % 2 != 0:
        print(f"❌ Error: Pattern '{args.pattern}' has odd number of hex digits")
        return 1
    
    try:
        if len(pattern_hex) == 2:
            # Одиночный байт
            pattern_byte = int(pattern_hex, 16) & 0xFF
            pattern_data = bytes([pattern_byte])
            pattern_desc = f"0x{pattern_byte:02X} (single byte)"
        else:
            # Многобайтовый паттерн
            pattern_data = HexUtils.hex_to_bytes(pattern_hex)
            pattern_desc = f"0x{pattern_hex} ({len(pattern_data)} bytes)"
        
        # Создаем полные данные для заполнения
        repeat_count = (args.size + len(pattern_data) - 1) // len(pattern_data)
        full_pattern_data = pattern_data * repeat_count
        full_pattern_data = full_pattern_data[:args.size]  # Обрезаем до нужного размера
        
    except Exception as e:
        print(f"❌ Error parsing pattern '{args.pattern}': {e}")
        return 1
    
    if args.verbose:
        print(f"📍 Address range: 0x{address:06X} - 0x{address + args.size - 1:06X}")
        print(f"📏 Size: {args.size} bytes")
        print(f"🎯 Pattern: {pattern_desc}")
        print(f"🔁 Pattern repeats: {repeat_count} times")
        if len(pattern_data) > 1:
            print(f"📊 Pattern bytes: {' '.join(f'0x{b:02X}' for b in pattern_data)}")
    
    print(f"Filling 0x{address:06X} - 0x{address + args.size - 1:06X} ({args.size} bytes) with {pattern_desc}")
    
    fpga = FPGAMemory()
    try:
        # Заполнение памяти с прогресс-баром
        if not args.no_progress and args.size > 1024:
            print("Starting fill operation...")
            success = fpga.write_memory(address, full_pattern_data, progress_callback=show_progress)
            if not args.no_progress:
                print()  # Новая строка после прогресс-бара
        else:
            success = fpga.write_memory(address, full_pattern_data)
        
        if not success:
            print("❌ Fill failed")
            return 1
        
        print("✅ Fill completed")
        
        # Верификация если нужно
        if args.verify:
            if args.verbose:
                print("Starting verification...")
            
            if not args.no_progress and args.size > 1024:
                verify_data = fpga.read_memory(address, args.size, progress_callback=lambda c, t, p: show_progress(c, t, "Verifying"))
                if not args.no_progress:
                    print()  # Новая строка после прогресс-бара
            else:
                verify_data = fpga.read_memory(address, args.size)
                
            if not verify_data:
                print("❌ Verification failed: could not read data")
                return 1
                
            if len(verify_data) != args.size:
                print(f"❌ Verification failed: size mismatch (expected {args.size}, got {len(verify_data)})")
                return 1
                
            if verify_data == full_pattern_data:
                print("✅ Verification passed")
            else:
                print("❌ Verification failed")
                # Анализ несоответствий
                mismatched = 0
                first_mismatch = -1
                for i in range(min(len(verify_data), len(full_pattern_data))):
                    if verify_data[i] != full_pattern_data[i]:
                        mismatched += 1
                        if first_mismatch == -1:
                            first_mismatch = i
                
                print(f"   Mismatched bytes: {mismatched}/{args.size}")
                if first_mismatch != -1:
                    print(f"   First mismatch at offset 0x{first_mismatch:04X} (address 0x{address + first_mismatch:06X})")
                    print(f"   Expected: 0x{full_pattern_data[first_mismatch]:02X}, Got: 0x{verify_data[first_mismatch]:02X}")
                return 1
        
        if args.verbose:
            print("🎉 Operation completed successfully")
                
    except Exception as e:
        print(f"❌ Error: {e}")
        return 1
    finally:
        fpga.close()
    
    return 0

if __name__ == "__main__":
    sys.exit(main())