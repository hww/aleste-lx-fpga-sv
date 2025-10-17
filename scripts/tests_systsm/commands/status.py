#!/usr/bin/env python3
import sys
import os
sys.path.append(os.path.join(os.path.dirname(__file__), '..'))

from lib.commands import FPGACommands

def main():
    fw = FPGACommands()
    try:
        status = fw.get_global_status()
        if status is not None:
            decoded = fw.decode_status(status)
            print(f"Status byte: 0x{status:02X}")
            for key, value in decoded.items():
                print(f"  {key}: {value}")
        else:
            print("Failed to read status")
    finally:
        fw.close()

if __name__ == "__main__":
    main()