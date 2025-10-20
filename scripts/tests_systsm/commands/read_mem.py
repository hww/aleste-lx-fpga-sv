#!/usr/bin/env python3
import sys
import os
import time
sys.path.append(os.path.join(os.path.dirname(__file__), '..'))

from lib.commands import FPGACommands
from lib.hex_dump import HexDump, hex_dump

def main():
    if len(sys.argv) < 2 or len(sys.argv) > 4:
        print("Usage: read_mem.py <hex_address> [size] [chunk_size]")
        print("Examples:")
        print("  read_mem.py 0x1000              # Read 4 bytes (default)")
        print("  read_mem.py 0x1000 64           # Read 64 bytes")
        print("  read_mem.py 0x1000 256 16       # Read 256 bytes, chunk size 16")
        sys.exit(1)
    
    address = int(sys.argv[1], 16)
    size = int(sys.argv[2]) if len(sys.argv) > 2 else 4
    chunk_size = int(sys.argv[3]) if len(sys.argv) > 3 else None
    
    if size <= 0 or size > 4096:
        print("Error: Size must be between 1 and 4096 bytes")
        sys.exit(1)
    
    print("=== Memory Reader ===")
    fw = None
    try:
        # Настраиваем размер чанка если указан
        fw = FPGACommands()
        if chunk_size:
            fw.set_max_transaction_size(read_size=chunk_size)
            print(f"Using chunk size: {chunk_size} bytes")
        
        print(f"Reading {size} bytes from address 0x{address:06X}...")
        data = fw.read_memory(address, size)
        
        if data:
            print(f"\n✅ Read successful: {len(data)} bytes total")
            print(f"   Transaction size: {fw.max_read_size} bytes")
            print()
            
            # Используем наш красивый hex dump
            try:
                hex_dump(address, data, f"Memory Dump at 0x{address:06X}")
            except Exception as e:
                print(f"Hex dump error: {e}")
                print(f"Raw data: {data.hex()}")
            
        else:
            print("❌ Read failed - no data received")
            
    except Exception as e:
        print(f"❌ Error: {e}")
    finally:
        if fw:
            fw.close()

if __name__ == "__main__":
    main()