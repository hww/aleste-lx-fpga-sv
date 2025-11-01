#!/usr/bin/env python3
"""
Классический hex dump памяти с ASCII представлением
"""
import sys
import os
import argparse
sys.path.append(os.path.join(os.path.dirname(__file__), '../..'))

from core.memory import FPGAMemory
from core.hex_utils import HexUtils

def format_hex_dump_classic(data: bytes, address: int = 0, width: int = 16) -> list:
    """Форматировать данные в классическом hex dump формате"""
    lines = []
    for i in range(0, len(data), width):
        chunk = data[i:i + width]
        
        # Адрес
        addr_str = f"{address + i:06X}: "
        
        # Hex данные
        hex_parts = []
        
        # Группируем по 4 байта
        for j in range(0, width, 4):
            if j < len(chunk):
                # Есть данные для этой группы
                group_end = min(j + 4, len(chunk))
                hex_group = ' '.join([f"{b:02X}" for b in chunk[j:group_end]])
            else:
                # Нет данных - заполняем пробелами
                hex_group = '  ' * 4  # 8 пробелов для 4 байтов
                
            hex_parts.append(hex_group)
        
        # Собираем hex строку
        hex_str = '  '.join(hex_parts)
        hex_str = hex_str.ljust(width*3+8)

        # ASCII представление (только для реальных данных)
        ascii_str = ''.join([chr(b) if 32 <= b <= 126 else '.' for b in chunk])
        # Дополняем пробелами до полной ширины
        ascii_str = ascii_str.ljust(width)
        
        lines.append(f"{addr_str}{hex_str}  |{ascii_str}|")
    
    return lines

def main():
    parser = argparse.ArgumentParser(description='Classic Hex Memory Dump')
    parser.add_argument('address', help='Start address (hex)')
    parser.add_argument('size', type=int, help='Size in bytes')
    parser.add_argument('-w', '--width', type=int, default=16, choices=[8, 16, 32],
                       help='Bytes per line (8, 16, 32)')
    parser.add_argument('-o', '--output', help='Save dump to file')
    
    args = parser.parse_args()
    
    address = HexUtils.parse_hex_address(args.address)
    
    print(f"Dumping {args.size} bytes from 0x{address:06X}")
    
    fpga = FPGAMemory()
    try:
        # Чтение памяти
        data = fpga.read_memory(address, args.size)
        
        if not data or len(data) != args.size:
            print(f"❌ Read failed: got {len(data) if data else 0}/{args.size} bytes")
            return 1
        
        # Форматирование дампа
        dump_lines = format_hex_dump_classic(data, address, args.width)
        
        # Вывод или сохранение
        if args.output:
            with open(args.output, 'w') as f:
                f.write(f"Memory dump: 0x{address:06X} - 0x{address + args.size - 1:06X}\n")
                f.write(f"Size: {args.size} bytes\n\n")
                for line in dump_lines:
                    f.write(line + '\n')
            print(f"💾 Dump saved to: {args.output}")
        else:
            print(f"Memory dump: 0x{address:06X} - 0x{address + args.size - 1:06X}")
            print(f"Size: {args.size} bytes\n")
            for line in dump_lines:
                print(line)
        
        print(f"\n✅ Dump completed: {len(data)} bytes")
                
    except Exception as e:
        print(f"❌ Error: {e}")
        return 1
    finally:
        fpga.close()
    
    return 0

if __name__ == "__main__":
    sys.exit(main())