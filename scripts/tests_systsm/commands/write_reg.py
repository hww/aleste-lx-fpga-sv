#!/usr/bin/env python3
import sys
import os
sys.path.append(os.path.join(os.path.dirname(__file__), '..'))

from fw_protocol.commands import FPGACommands

def main():
    if len(sys.argv) != 3:
        print("Usage: write_reg.py <reg_addr> <value>")
        print("Example: write_reg.py 0x00 0x55")
        sys.exit(1)
    
    reg_addr = int(sys.argv[1], 16)
    value = int(sys.argv[2], 16)
    
    fw = FPGACommands()
    try:
        success = fw.write_register(reg_addr, value)
        print("Success" if success else "Failed")
    finally:
        fw.close()

if __name__ == "__main__":
    main()