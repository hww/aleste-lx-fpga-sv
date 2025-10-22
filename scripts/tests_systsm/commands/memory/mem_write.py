#!/usr/bin/env python3
"""
Утилита записи памяти FPGA
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
    return hashlib.md5(data).hexdigest()[:8]

def read_input_data(input_source: str) -> bytes:
    """Чтение данных из файла или hex строки"""
    # Сначала проверяем, существует ли файл
    if os.path.exists(input_source):
        try:
            with open(input_source, 'rb') as f:
                return f.read()
        except Exception as e:
            raise Exception(f"Failed to read file {input_source}: {e}")
    else:
        # Пробуем интерпретировать как hex строку
        try:
            return HexUtils.hex_to_bytes(input_source)
        except Exception as e:
            raise Exception(f"Invalid hex string '{input_source}': {e}")

def is_likely_hex_string(s: str) -> bool:
    """Проверить, похожа ли строка на hex данные"""
    if not s:
        return False
    
    # Убираем возможные префиксы и пробелы
    clean_str = s.replace('0x', '').replace(' ', '').upper()
    
    # Должна содержать только hex символы и быть четной длины
    if len(clean_str) % 2 != 0:
        return False
    
    hex_chars = set('0123456789ABCDEF')
    return all(c in hex_chars for c in clean_str)

def main():
    parser = argparse.ArgumentParser(description='Write FPGA Memory')
    parser.add_argument('address', help='Hex address (0x1000 or 1000)')
    parser.add_argument('input', help='Input file or hex string (C38000)')
    parser.add_argument('--verify', action='store_true', help='Verify after write')
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
        verbosity = 0
    elif args.verbose:
        verbosity = 2
    else:
        verbosity = 1
    
    try:
        # Определяем тип ввода для информационных сообщений
        if os.path.exists(args.input):
            input_type = "file"
            if verbosity >= 1:
                print(f"Reading data from file: {args.input}")
        elif is_likely_hex_string(args.input):
            input_type = "hex"
            if verbosity >= 1:
                print(f"Using hex data: {args.input}")
        else:
            # Не файл и не hex - вероятно ошибка в имени файла
            if not args.input.endswith('.bin') and not args.input.endswith('.hex'):
                print(f"❌ Error: File '{args.input}' not found and input doesn't look like hex data")
                print(f"   If it's a hex string, make sure it contains only 0-9, A-F characters")
                print(f"   If it's a file, check the path and filename")
                return 1
            else:
                # Выглядит как имя файла, но файл не существует
                print(f"❌ Error: File '{args.input}' not found")
                return 1
        
        # Чтение входных данных
        data = read_input_data(args.input)
        
        if not data:
            print("❌ Error: No data to write")
            return 1
        
        if verbosity >= 1:
            print(f"Writing {len(data)} bytes to 0x{address:06X}")
        
        # Расчет контрольной суммы если нужно
        checksum = calculate_checksum(data) if args.checksum else None
        
        fpga = FPGAMemory()
        
        # Запись данных
        success = fpga.write_memory(address, data)
        
        if not success:
            print("❌ Write failed")
            return 1
        
        # Верификация если нужно
        if args.verify:
            if verbosity >= 1:
                print("Verifying...")
            
            verify_data = fpga.read_memory(address, len(data))
            verify_success = verify_data == data
            verify_checksum = calculate_checksum(verify_data) if verify_data else None
        else:
            verify_success = None
            verify_checksum = None
        
        # ВЫВОД РЕЗУЛЬТАТОВ
        
        if verbosity == 0:  # --quiet
            result = f"OK: {len(data)} bytes"
            if args.verify:
                result += f" [Verify: {'PASS' if verify_success else 'FAIL'}]"
            if checksum:
                result += f" [{checksum}]"
            print(result)
        
        elif verbosity == 1:  # Нормальный
            result_parts = [f"✅ Written {len(data)} bytes"]
            
            if args.verify:
                result_parts.append(f"[Verify: {'✅' if verify_success else '❌'}]")
            
            if checksum:
                result_parts.append(f"[MD5: {checksum}]")
                
            print(" ".join(result_parts))
            
            if args.verify and not verify_success:
                if verify_data:
                    print(f"❌ Verification failed! Written: {checksum}, Read: {verify_checksum}")
                else:
                    print("❌ Verification failed! Could not read back data")
        
        else:  # --verbose
            print(f"✅ Write successful: {len(data)} bytes")
            
            if checksum:
                print(f"🔢 Source checksum: {checksum}")
            
            if args.verify:
                if verify_success:
                    print(f"✅ Verification passed")
                    if verify_checksum:
                        print(f"🔢 Readback checksum: {verify_checksum}")
                else:
                    print(f"❌ Verification failed!")
                    if verify_data and verify_checksum:
                        print(f"🔢 Written: {checksum}, Read: {verify_checksum}")
            
            # Дополнительная информация только в verbose
            print(f"📍 Address: 0x{address:06X}")
            print(f"📏 Size: {len(data)} bytes")
            print(f"📁 Source: {args.input} ({input_type})")
                
    except Exception as e:
        print(f"❌ Error: {e}")
        return 1
    finally:
        if 'fpga' in locals():
            fpga.close()
    
    return 0

if __name__ == "__main__":
    sys.exit(main())