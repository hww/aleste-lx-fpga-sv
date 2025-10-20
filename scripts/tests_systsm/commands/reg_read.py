#!/usr/bin/env python3
import sys
import os
sys.path.append(os.path.join(os.path.dirname(__file__), '..'))

from lib.commands import FPGACommands

def read_single_register(fw, reg_addr):
    """Чтение одного регистра"""
    value = fw.read_register(reg_addr)
    if value is not None:
        print(f"Register 0x{reg_addr:02X}: 0x{value:02X} ({value:3d}) - {value:08b}b")
        return value
    else:
        print(f"Register 0x{reg_addr:02X}: FAILED")
        return None

def read_register_range(fw, start_addr, count):
    """Чтение диапазона регистров"""
    print(f"Reading registers 0x{start_addr:02X} to 0x{start_addr + count - 1:02X}:")
    print("-" * 50)
    
    for reg_addr in range(start_addr, start_addr + count):
        value = fw.read_register(reg_addr)
        if value is not None:
            print(f"  0x{reg_addr:02X}: 0x{value:02X} ({value:3d}) - {value:08b}b")
        else:
            print(f"  0x{reg_addr:02X}: FAILED")

def read_specific_registers(fw, registers):
    """Чтение конкретных регистров"""
    print("Reading specific registers:")
    print("-" * 50)
    
    for reg_addr in registers:
        value = fw.read_register(reg_addr)
        if value is not None:
            print(f"  0x{reg_addr:02X}: 0x{value:02X} ({value:3d}) - {value:08b}b")
        else:
            print(f"  0x{reg_addr:02X}: FAILED")

def main():
    if len(sys.argv) == 1:
        # Чтение регистров по умолчанию
        registers = [0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07]
    elif len(sys.argv) == 2:
        # Чтение одного регистра
        if sys.argv[1] == "range":
            print("Usage: reg_read.py <hex_register>")
            print("       reg_read.py range <start> <count>")
            print("       reg_read.py list <reg1> <reg2> ...")
            sys.exit(1)
        registers = [int(sys.argv[1], 16)]
    elif len(sys.argv) >= 3 and sys.argv[1] == "range":
        # Чтение диапазона регистров
        start_addr = int(sys.argv[2], 16)
        count = int(sys.argv[3]) if len(sys.argv) > 3 else 8
        registers = None
        range_mode = True
    elif len(sys.argv) >= 3 and sys.argv[1] == "list":
        # Чтение списка регистров
        registers = [int(addr, 16) for addr in sys.argv[2:]]
    else:
        print("Usage: reg_read.py [hex_register]")
        print("       reg_read.py range <start_hex> [count]")
        print("       reg_read.py list <hex1> <hex2> ...")
        print("       reg_read.py (reads default registers)")
        print("\nExamples:")
        print("  reg_read.py                    # Read default registers")
        print("  reg_read.py 0x10              # Read single register 0x10")
        print("  reg_read.py range 0x00 16     # Read 16 registers from 0x00")
        print("  reg_read.py list 0x10 0x20 0x30  # Read specific registers")
        sys.exit(1)

    print("=== Register Reader ===")
    fw = FPGACommands()
    try:
        # Получаем статус для контекста
        status = fw.get_global_status()
        if status is not None:
            print(f"Global Status: 0x{status:02X}")
            decoded = fw.decode_status(status)
            for key, value in decoded.items():
                print(f"  {key}: {value}")
            print()
        
        if 'range_mode' in locals() and range_mode:
            read_register_range(fw, start_addr, count)
        else:
            if len(registers) == 1:
                read_single_register(fw, registers[0])
            else:
                read_specific_registers(fw, registers)
            
    except Exception as e:
        print(f"❌ Error: {e}")
    finally:
        fw.close()

if __name__ == "__main__":
    main()