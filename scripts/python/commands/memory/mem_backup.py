#!/usr/bin/env python3
"""
Дамп памяти в файл с дополнительной информацией
"""
import sys
import os
import hashlib
import argparse
from datetime import datetime
sys.path.append(os.path.join(os.path.dirname(__file__), '../..'))

from core.memory import FPGAMemory
from core.hex_utils import HexUtils

def calculate_checksum(data: bytes) -> str:
    return hashlib.md5(data).hexdigest()

def main():
    parser = argparse.ArgumentParser(description='Memory Dump with Metadata')
    parser.add_argument('address', help='Start address (hex)')
    parser.add_argument('size', type=int, help='Size in bytes')
    parser.add_argument('-o', '--output', required=True, help='Output binary file')
    parser.add_argument('--hex', action='store_true', help='Also create hex dump file')
    parser.add_argument('--info', action='store_true', help='Create info file with metadata')
    
    args = parser.parse_args()
    
    address = HexUtils.parse_hex_address(args.address)
    
    print(f"Dumping 0x{address:06X} - 0x{address + args.size - 1:06X} ({args.size} bytes)")
    
    fpga = FPGAMemory()
    try:
        # Чтение памяти
        data = fpga.read_memory(address, args.size)
        
        if not data or len(data) != args.size:
            print(f"❌ Read failed: got {len(data) if data else 0}/{args.size} bytes")
            return 1
        
        # Сохранение бинарного файла
        with open(args.output, 'wb') as f:
            f.write(data)
        print(f"✅ Binary dump saved: {args.output}")
        
        checksum = calculate_checksum(data)
        print(f"🔢 Checksum: {checksum}")
        
        # Hex dump файл
        if args.hex:
            hex_filename = args.output + '.hex'
            with open(hex_filename, 'w') as f:
                # Заголовок Intel HEX
                f.write(f":020000040000FA\n")  # Extended linear address
                
                offset = 0
                while offset < len(data):
                    chunk = data[offset:offset + 16]
                    if chunk:
                        record_len = len(chunk)
                        addr_low = (address + offset) & 0xFFFF
                        record_type = 0x00  # Data record
                        
                        # Calculate checksum
                        checksum_byte = record_len + (addr_low >> 8) + (addr_low & 0xFF) + record_type
                        for byte in chunk:
                            checksum_byte += byte
                        checksum_byte = (-checksum_byte) & 0xFF
                        
                        hex_line = f":{record_len:02X}{addr_low:04X}{record_type:02X}"
                        hex_line += ''.join(f"{byte:02X}" for byte in chunk)
                        hex_line += f"{checksum_byte:02X}"
                        f.write(hex_line + '\n')
                    
                    offset += 16
                
                # End of file record
                f.write(":00000001FF\n")
            
            print(f"📄 Hex dump saved: {hex_filename}")
        
        # Файл с метаданными
        if args.info:
            info_filename = args.output + '.info'
            with open(info_filename, 'w') as f:
                f.write("Memory Dump Information\n")
                f.write("=" * 40 + "\n")
                f.write(f"Timestamp:    {datetime.now().strftime('%Y-%m-%d %H:%M:%S')}\n")
                f.write(f"Start Address: 0x{address:06X}\n")
                f.write(f"End Address:   0x{address + args.size - 1:06X}\n")
                f.write(f"Size:          {args.size} bytes\n")
                f.write(f"Checksum:      {checksum}\n")
                f.write(f"Binary File:   {args.output}\n")
                if args.hex:
                    f.write(f"Hex File:      {hex_filename}\n")
            
            print(f"📋 Info file saved: {info_filename}")
        
        print(f"💾 Total files created: {1 + bool(args.hex) + bool(args.info)}")
                
    except Exception as e:
        print(f"❌ Error: {e}")
        return 1
    finally:
        fpga.close()
    
    return 0

if __name__ == "__main__":
    sys.exit(main())