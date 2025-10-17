#!/usr/bin/env python3
import sys
import os
sys.path.append(os.path.join(os.path.dirname(__file__), '..'))

from fw_protocol.commands import FPGACommands

def main():
    if len(sys.argv) != 3:
        print("Usage: read_mem.py <hex_address> <size>")
        print("Example: read_mem.py 0x1000 4")
        sys.exit(1)
    
    address = int(sys.argv[1], 16)
    size = int(sys.argv[2])
    
    fw = FPGACommands()
    try:
        data = fw.read_memory(address, size)
        if data:
            print(f"Address 0x{address:06X}: {data.hex()}")
        else:
            print("Read failed")
    finally:
        fw.close()

if __name__ == "__main__":
    main()