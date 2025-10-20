#!/usr/bin/env python3
import sys
import os
sys.path.append(os.path.join(os.path.dirname(__file__), '..'))

from lib.commands import FPGACommands
from lib.hex_dump import hex_dump

def main():
    if len(sys.argv) < 2 or len(sys.argv) > 3:
        print("Usage: read_mem.py <hex_address> [size]")
        print("Examples:")
        print("  read_mem.py 0x1000          # Read 4 bytes")
        print("  read_mem.py 0x1000 132      # Read 132 bytes") 
        print("  read_mem.py 0x1000 5000     # Read 5000 bytes")
        sys.exit(1)
    
    address = int(sys.argv[1], 16)
    size = int(sys.argv[2]) if len(sys.argv) > 2 else 4
    
    print("=== Memory Reader ===")
    fw = FPGACommands()
    try:
        print(f"Reading {size} bytes from address 0x{address:06X}...")
        data = fw.read_memory(address, size)
        
        if data and len(data) == size:
            print(f"✅ Read successful: {len(data)} bytes")
            hex_dump(address, data, 16, f"Memory Dump at 0x{address:06X}")
        else:
            print(f"❌ Read failed: got {len(data) if data else 0}/{size} bytes")
            
    except Exception as e:
        print(f"❌ Error: {e}")
    finally:
        fw.close()

if __name__ == "__main__":
    main()