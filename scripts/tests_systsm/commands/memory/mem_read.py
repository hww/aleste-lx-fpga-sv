#!/usr/bin/env python3
"""
Утилита чтения памяти FPGA
"""
import sys
import os
import hashlib
import string
sys.path.append(os.path.join(os.path.dirname(__file__), '../..'))

from core.memory import FPGAMemory
from core.hex_utils import HexUtils
import argparse

def calculate_checksum(data: bytes) -> str:
    """Быстрая контрольная сумма для бинарных данных"""
    return hashlib.md5(data).hexdigest()[:8]

def ensure_binary_data(data):
    """Гарантирует, что данные в бинарном формате"""
    if isinstance(data, str):
        return data.encode('latin-1')
    elif isinstance(data, bytearray):
        return bytes(data)
    elif isinstance(data, bytes):
        return data
    else:
        raise TypeError(f"Unsupported data type: {type(data)}")

def show_progress(current, total, prefix="Reading"):
    """Показать прогресс-бар"""
    percent = current / total if total > 0 else 0
    bar_length = 40
    filled_length = int(bar_length * percent)
    bar = '█' * filled_length + '░' * (bar_length - filled_length)
    print(f"\r{prefix} |{bar}| {current}/{total} bytes ({percent:.1%})", end='', flush=True)
    if current >= total:
        print()  # Новая строка после завершения

def text_dump_safe(data: bytes) -> str:
    """
    Безопасный вывод бинарных данных как текста.
    Заменяет непечатные символы на точку (как в hexdump -C)
    """
    PRINTABLE = set(string.printable.encode('latin-1'))
    result = []
    
    for byte in data:
        if byte in PRINTABLE and byte not in (b'\r'[0], b'\n'[0], b'\t'[0]):
            result.append(chr(byte))
        else:
            result.append('.')
    
    return ''.join(result)

def text_dump_visible(data: bytes) -> str:
    """
    Вывод с визуализацией управляющих символов (как cat -A)
    """
    result = []
    
    for byte in data:
        if byte == 0x09:  # Tab
            result.append('^I')
        elif byte == 0x0A:  # LF
            result.append('$\n')
        elif byte == 0x0D:  # CR  
            result.append('^M')
        elif byte < 0x20:  # Other control chars
            result.append(f'^{chr(byte + 64)}')
        elif byte == 0x7F:  # DEL
            result.append('^?')
        elif byte > 0x7F:  # High bytes
            result.append('~')
        else:  # Printable ASCII
            result.append(chr(byte))
    
    return ''.join(result)

def extract_printable_strings(data: bytes, min_length=4) -> list:
    """
    Извлекает печатные строки из бинарных данных (как утилита strings)
    """
    PRINTABLE = set(string.printable.encode('latin-1'))
    strings = []
    current_string = []
    
    for byte in data:
        if byte in PRINTABLE:
            current_string.append(chr(byte))
        else:
            if len(current_string) >= min_length:
                strings.append(''.join(current_string))
            current_string = []
    
    # Don't forget the last string
    if len(current_string) >= min_length:
        strings.append(''.join(current_string))
    
    return strings

def main():
    parser = argparse.ArgumentParser(description='Read FPGA Memory')
    parser.add_argument('address', help='Hex address (0x1000 or 1000)')
    parser.add_argument('size', type=int, help='Size in bytes')
    parser.add_argument('-o', '--output', help='Output binary file')
    parser.add_argument('--hex', action='store_true', help='Show hex output')
    parser.add_argument('--dump', action='store_true', help='Show hex dump')
    parser.add_argument('--text', action='store_true', help='Show text representation (safe)')
    parser.add_argument('--visible', action='store_true', help='Show text with visible control chars (like cat -A)')
    parser.add_argument('--strings', action='store_true', help='Extract printable strings only (like strings command)')
    parser.add_argument('--checksum', action='store_true', help='Calculate checksum')
    parser.add_argument('-v', '--verbose', action='store_true', help='Verbose output')
    parser.add_argument('-q', '--quiet', action='store_true', help='Minimal output')
    parser.add_argument('--no-progress', action='store_true', help='Disable progress bar')
    
    args = parser.parse_args()
    
    # Проверка конфликтующих флагов
    if args.quiet and args.verbose:
        print("❌ Error: Cannot use both --quiet and --verbose")
        return 1
    
    if sum([args.text, args.visible, args.strings]) > 1:
        print("❌ Error: Use only one of --text, --visible, --strings")
        return 1
    
    address = HexUtils.parse_hex_address(args.address)
    
    # Уровни verbosity
    if args.quiet:
        verbosity = 0
    elif args.verbose:
        verbosity = 2
    else:
        verbosity = 1
    
    if verbosity >= 1:
        print(f"Reading {args.size} bytes from 0x{address:06X}")
    
    fpga = FPGAMemory()
    try:
        # Чтение данных с прогресс-баром
        if not args.quiet and not args.no_progress and args.size > 1024:
            if verbosity >= 1:
                print("Reading from FPGA...")
            raw_data = fpga.read_memory(address, args.size, progress_callback=show_progress)
            if verbosity >= 1:
                print()  # Новая строка после прогресс-бара
        else:
            raw_data = fpga.read_memory(address, args.size)
        
        if not raw_data:
            print(f"❌ Read failed: no data received")
            return 1
        
        # Преобразование в гарантированно бинарный формат
        try:
            binary_data = ensure_binary_data(raw_data)
        except TypeError as e:
            print(f"❌ Data type error: {e}")
            return 1
        
        # Проверка размера
        if len(binary_data) != args.size:
            print(f"⚠️  Size mismatch: requested {args.size}, got {len(binary_data)} bytes")
        
        # Сохранение в файл если указан -o
        if args.output:
            try:
                if verbosity >= 1:
                    print(f"💾 Saving to: {args.output}")
                
                with open(args.output, 'wb') as f:
                    f.write(binary_data)
                
                if verbosity >= 1:
                    print(f"✅ Saved {len(binary_data)} bytes to {args.output}")
                    
            except Exception as e:
                print(f"❌ Error saving file: {e}")
                return 1
        
        # Расчет контрольной суммы если нужно
        checksum = calculate_checksum(binary_data) if args.checksum else None
        
        # ВЫВОД РЕЗУЛЬТАТОВ в зависимости от verbosity
        if verbosity == 0:  # --quiet
            if args.output:
                print(f"OK: {len(binary_data)} bytes -> {args.output}" + (f" [{checksum}]" if checksum else ""))
            else:
                print(f"OK: {len(binary_data)} bytes" + (f" [{checksum}]" if checksum else ""))
        
        elif verbosity == 1:  # Нормальный
            result_parts = [f"✅ Read {len(binary_data)} bytes"]
            
            if args.output:
                result_parts.append(f"-> {args.output}")
            
            if checksum:
                result_parts.append(f"[MD5: {checksum}]")
                
            print(" ".join(result_parts))
        
        else:  # --verbose
            print(f"✅ Read successful: {len(binary_data)} bytes")
            
            if args.output:
                print(f"📁 Saved to: {args.output}")
            
            if checksum:
                print(f"🔢 Checksum: {checksum}")
            
            print(f"📍 Address: 0x{address:06X}")
            print(f"📏 Size: {args.size} bytes")
            print(f"🔧 Data type: {type(raw_data)} -> bytes")
        
        # СПЕЦИАЛЬНЫЕ ВЫВОДЫ ДАННЫХ
        
        if args.hex:
            hex_str = HexUtils.bytes_to_hex(binary_data, group=2)
            print(f"🔤 Hex: {hex_str}")
        
        if args.dump:
            lines = HexUtils.format_hex_dump(binary_data, address)
            print(f"📊 Memory dump at 0x{address:06X}:")
            for line in lines:
                print(line)
        
        if args.text:
            text_repr = text_dump_safe(binary_data)
            print(f"📝 Text representation (safe):")
            print(text_repr)
        
        if args.visible:
            visible_repr = text_dump_visible(binary_data)
            print(f"👁️  Text with visible control chars:")
            print(visible_repr)
        
        if args.strings:
            strings = extract_printable_strings(binary_data)
            print(f"🔤 Printable strings (min 4 chars):")
            for s in strings:
                print(f"  \"{s}\"")
        
        # Если ничего не выбрано - минимальный вывод теста
        if not any([args.output, args.hex, args.dump, args.text, args.visible, args.strings, args.checksum]) and verbosity >= 1:
            print("🧪 Read test completed")
                
    except Exception as e:
        print(f"❌ Error: {e}")
        return 1
    finally:
        fpga.close()
    
    return 0

if __name__ == "__main__":
    sys.exit(main())