#!/usr/bin/env python3
"""
Утилита чтения памяти FPGA
"""
import sys
import os
import hashlib
sys.path.append(os.path.join(os.path.dirname(__file__), '../..'))

from core.memory import FPGAMemory
from core.hex_utils import HexUtils
import argparse

def calculate_checksum(data: bytes) -> str:
    """Быстрая контрольная сумма"""
    return hashlib.md5(data).hexdigest()[:8]  # Только первые 8 символов для скорости

def main():
    parser = argparse.ArgumentParser(description='Read FPGA Memory')
    parser.add_argument('address', help='Hex address (0x1000 or 1000)')
    parser.add_argument('size', type=int, help='Size in bytes')
    parser.add_argument('-o', '--output', help='Output binary file')
    parser.add_argument('--hex', action='store_true', help='Show hex output')
    parser.add_argument('--dump', action='store_true', help='Show hex dump')
    parser.add_argument('--checksum', action='store_true', help='Calculate checksum')
    parser.add_argument('-v', '--verbose', action='store_true', help='Verbose output')
    parser.add_argument('-q', '--quiet', action='store_true', help='Minimal output')
    
    args = parser.parse_args()
    
    # Проверка конфликтующих флагов
    if args.quiet and args.verbose:
        print("❌ Error: Cannot use both --quiet and --verbose")
        return 1
    
    address = HexUtils.parse_hex_address(args.address)
    
    # Уровни verbosity
    if args.quiet:
        verbosity = 0  # Только ошибки и результат
    elif args.verbose:
        verbosity = 2  # Максимальная информация
    else:
        verbosity = 1  # Нормальный режим
    
    if verbosity >= 1:
        print(f"Reading {args.size} bytes from 0x{address:06X}")
    
    fpga = FPGAMemory()
    try:
        data = fpga.read_memory(address, args.size)
        
        if not data or len(data) != args.size:
            print(f"❌ Read failed: got {len(data) if data else 0}/{args.size} bytes")
            return 1
        
        # Расчет контрольной суммы если нужно
        checksum = calculate_checksum(data) if args.checksum else None
        
        # ВЫВОД РЕЗУЛЬТАТОВ в зависимости от verbosity
        
        if verbosity == 0:  # --quiet
            if args.output:
                print(f"OK: {args.size} bytes -> {args.output}" + (f" [{checksum}]" if checksum else ""))
            else:
                print(f"OK: {args.size} bytes" + (f" [{checksum}]" if checksum else ""))
        
        elif verbosity == 1:  # Нормальный
            result_parts = [f"✅ Read {len(data)} bytes"]
            
            if args.output:
                result_parts.append(f"-> {args.output}")
            
            if checksum:
                result_parts.append(f"[MD5: {checksum}]")
                
            print(" ".join(result_parts))
        
        else:  # --verbose
            print(f"✅ Read successful: {len(data)} bytes")
            
            if args.output:
                with open(args.output, 'wb') as f:
                    f.write(data)
                print(f"📁 Saved to: {args.output}")
            
            if checksum:
                print(f"🔢 Checksum: {checksum}")
            
            # Дополнительная информация только в verbose
            print(f"📍 Address: 0x{address:06X}")
            print(f"📏 Size: {args.size} bytes")
        
        # Специальные выводы (не зависят от verbosity)
        if args.hex:
            hex_str = HexUtils.bytes_to_hex(data, group=2)
            print(f"🔤 {hex_str}")
        
        if args.dump:
            lines = HexUtils.format_hex_dump(data, address)
            print(f"📊 Memory dump at 0x{address:06X}:")
            for line in lines:
                print(line)
        
        # Если ничего не выбрано - минимальный вывод теста
        if not any([args.output, args.hex, args.dump]) and verbosity >= 1:
            print("🧪 Read test completed")
                
    except Exception as e:
        print(f"❌ Error: {e}")
        return 1
    finally:
        fpga.close()
    
    return 0

if __name__ == "__main__":
    sys.exit(main())