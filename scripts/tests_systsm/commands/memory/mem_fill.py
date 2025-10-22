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

def main():
    parser = argparse.ArgumentParser(description='Fill FPGA Memory with Pattern')
    parser.add_argument('address', help='Start address (hex)')
    parser.add_argument('size', type=int, help='Size in bytes')
    parser.add_argument('pattern', help='Fill pattern (hex byte: FF, or hex string: AABB)')
    parser.add_argument('--verify', action='store_true', help='Verify after fill')
    parser.add_argument('-v', '--verbose', action='store_true', help='Verbose output')
    
    args = parser.parse_args()
    
    address = HexUtils.parse_hex_address(args.address)
    
    # Парсинг паттерна
    if len(args.pattern) <= 2:
        # Одиночный байт
        pattern_byte = int(args.pattern, 16) & 0xFF
        pattern_data = bytes([pattern_byte] * args.size)
        pattern_desc = f"0x{pattern_byte:02X}"
    else:
        # Паттерн из нескольких байтов
        pattern_data = HexUtils.hex_to_bytes(args.pattern)
        repeat_count = (args.size + len(pattern_data) - 1) // len(pattern_data)
        pattern_data = pattern_data * repeat_count
        pattern_data = pattern_data[:args.size]  # Обрезаем до нужного размера
        pattern_desc = f"0x{args.pattern}"
    
    print(f"Filling 0x{address:06X} - 0x{address + args.size - 1:06X} ({args.size} bytes) with {pattern_desc}")
    
    fpga = FPGAMemory()
    try:
        # Заполнение памяти
        success = fpga.write_memory(address, pattern_data)
        
        if not success:
            print("❌ Fill failed")
            return 1
        
        print("✅ Fill completed")
        
        # Верификация если нужно
        if args.verify:
            if args.verbose:
                print("Verifying...")
            
            verify_data = fpga.read_memory(address, args.size)
            if verify_data == pattern_data:
                print("✅ Verification passed")
            else:
                print("❌ Verification failed")
                if verify_data:
                    mismatched = sum(1 for i in range(min(len(verify_data), len(pattern_data))) 
                                   if verify_data[i] != pattern_data[i])
                    print(f"   Mismatched bytes: {mismatched}/{args.size}")
                return 1
        
        if args.verbose:
            print(f"📍 Address range: 0x{address:06X} - 0x{address + args.size - 1:06X}")
            print(f"📏 Size: {args.size} bytes")
            print(f"🎯 Pattern: {pattern_desc}")
                
    except Exception as e:
        print(f"❌ Error: {e}")
        return 1
    finally:
        fpga.close()
    
    return 0

if __name__ == "__main__":
    sys.exit(main())