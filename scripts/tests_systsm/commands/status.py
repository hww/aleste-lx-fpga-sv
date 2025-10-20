#!/usr/bin/env python3
import sys
import os
sys.path.append(os.path.join(os.path.dirname(__file__), '..'))

from lib.commands import FPGACommands

def main():
    try:
        # Можно указать порт явно: fw = FPGACommands(port="/dev/ttyUSB1")
        fw = FPGACommands()
        
        status = fw.get_global_status()
        if status is not None:
            decoded = fw.decode_status(status)
            print(f"Status byte: 0x{status:02X}")
            for key, value in decoded.items():
                print(f"  {key}: {value}")
        else:
            print("Failed to read status")
            
    except Exception as e:
        print(f"Error: {e}")
        print("\nTroubleshooting tips:")
        print("1. Check if FPGA board is connected")
        print("2. Check cable connections")
        print("3. Try specifying port manually: FPGACommands(port='/dev/ttyUSB1')")
        print("4. Check user permissions (add to dialout group)")
        
    finally:
        if 'fw' in locals():
            fw.close()

if __name__ == "__main__":
    main()