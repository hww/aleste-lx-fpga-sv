#!/usr/bin/env python3
import sys
import os
sys.path.append(os.path.join(os.path.dirname(__file__), '..'))

from lib.commands import FPGACommands
from lib.hex_dump import hex_dump

def main():
    if len(sys.argv) < 2 or len(sys.argv) > 4:
        print("Usage: read_mem.py <hex_address> [size] [chunk_size]")
        print("Examples:")
        print("  read_mem.py 0x1000              # Read 4 bytes (default)")
        print("  read_mem.py 0x1000 16           # Read 16 bytes")
        print("  read_mem.py 0x1000 64 8         # Read 64 bytes using 8-byte chunks")
        sys.exit(1)
    
    address = int(sys.argv[1], 16)
    size = int(sys.argv[2]) if len(sys.argv) > 2 else 4
    chunk_size = int(sys.argv[3]) if len(sys.argv) > 3 else None
    
    # Ограничиваем максимальный размер для безопасности
    if size > 1024:
        print("Error: Maximum size is 1024 bytes")
        sys.exit(1)
    
    print("=== Memory Reader ===")
    fw = FPGACommands()
    try:
        # Если размер больше 16, используем chunks
        if size > 16 and not chunk_size:
            chunk_size = 16  # Автоматически используем безопасный размер
            print(f"Note: Using {chunk_size}-byte chunks for large read")
        
        if chunk_size:
            fw.set_max_transaction_size(read_size=chunk_size)
            print(f"Chunk size: {chunk_size} bytes")
        
        print(f"Reading {size} bytes from address 0x{address:06X}...")
        data = fw.read_memory(address, size)
        
        if data:
            print(f"\n✅ Read successful: {len(data)} bytes received")
            if len(data) != size:
                print(f"   Note: Expected {size} bytes, got {len(data)} bytes")
            
            # Выводим дамп
            hex_dump(address, data, f"Memory Dump at 0x{address:06X}")
            
        else:
            print("❌ Read failed - no data received")
            
    except Exception as e:
        print(f"❌ Error: {e}")
    finally:
        fw.close()

if __name__ == "__main__":
    main()