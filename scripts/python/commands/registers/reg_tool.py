#!/usr/bin/env python3
"""
Утилита работы с регистрами FPGA
"""
import sys
import os
import argparse
sys.path.append(os.path.join(os.path.dirname(__file__), '../..'))

from core.registers import FPGARegisters
from core.hex_utils import HexUtils

def main():
    parser = argparse.ArgumentParser(
        description='FPGA Register Tool',
        formatter_class=argparse.RawDescriptionHelpFormatter,
        epilog='''
Examples:
  %(prog)s read 1A        Read register 0x1A
  %(prog)s write 20 FF    Write 0xFF to register 0x20
  %(prog)s bulk --get 10 --get 11 --set 20 AA --set 21 BB
  %(prog)s setbits 30 03  Set bits 0 and 1 of register 0x30
  %(prog)s clearbits 30 02 Clear bit 1 of register 0x30
  %(prog)s fill 00 10 55  Fill registers 0x00-0x0F with 0x55
  %(prog)s dump 00 10     Dump registers 0x00-0x0F
        '''
    )
    
    subparsers = parser.add_subparsers(dest='command', help='Command')
    
    # Read command
    read_parser = subparsers.add_parser('read', help='Read register value')
    read_parser.add_argument('address', help='Register address (hex)')
    
    # Write command  
    write_parser = subparsers.add_parser('write', help='Write register value')
    write_parser.add_argument('address', help='Register address (hex)')
    write_parser.add_argument('value', help='Value to write (hex)')
    
    # Bulk command
    bulk_parser = subparsers.add_parser('bulk', help='Bulk read/write operations')
    bulk_parser.add_argument('--set', action='append', nargs=2, metavar=('ADDR', 'VALUE'),
                           help='Set register value')
    bulk_parser.add_argument('--get', action='append', metavar='ADDR',
                           help='Get register value')
    
    # Bit operations
    setbits_parser = subparsers.add_parser('setbits', help='Set bits in register')
    setbits_parser.add_argument('address', help='Register address (hex)')
    setbits_parser.add_argument('mask', help='Bit mask (hex)')
    
    clearbits_parser = subparsers.add_parser('clearbits', help='Clear bits in register')
    clearbits_parser.add_argument('address', help='Register address (hex)')
    clearbits_parser.add_argument('mask', help='Bit mask (hex)')
    
    # Fill command
    fill_parser = subparsers.add_parser('fill', help='Fill register range with value')
    fill_parser.add_argument('start_addr', help='Start address (hex)')
    fill_parser.add_argument('count', type=int, help='Number of registers')
    fill_parser.add_argument('value', help='Fill value (hex)')
    
    # Dump command
    dump_parser = subparsers.add_parser('dump', help='Dump register range')
    dump_parser.add_argument('start_addr', help='Start address (hex)')
    dump_parser.add_argument('count', type=int, help='Number of registers')
    
    args = parser.parse_args()
    
    if not args.command:
        parser.print_help()
        return 1
    
    fpga = FPGARegisters()
    
    try:
        if args.command == 'read':
            addr = HexUtils.parse_hex_address(args.address)
            value = fpga.read(addr)
            if value is not None:
                print(f"Register 0x{addr:02X} = 0x{value:02X} (decimal: {value}, binary: {value:08b})")
            else:
                print("❌ Read failed")
                return 1
                
        elif args.command == 'write':
            addr = HexUtils.parse_hex_address(args.address)
            value = HexUtils.parse_hex_address(args.value)
            if fpga.write(addr, value):
                print(f"✅ Register 0x{addr:02X} = 0x{value:02X}")
            else:
                print("❌ Write failed")
                return 1
                
        elif args.command == 'bulk':
            results = {}
            
            # Чтение регистров
            if args.get:
                for addr_str in args.get:
                    addr = HexUtils.parse_hex_address(addr_str)
                    results[addr] = fpga.read(addr)
            
            # Запись регистров
            if args.set:
                for addr_str, value_str in args.set:
                    addr = HexUtils.parse_hex_address(addr_str)
                    value = HexUtils.parse_hex_address(value_str)
                    success = fpga.write(addr, value)
                    results[addr] = value if success else 'FAILED'
            
            # Вывод результатов
            print("Register dump:")
            for addr, value in sorted(results.items()):
                if value == 'FAILED':
                    print(f"  0x{addr:02X} = FAILED")
                else:
                    print(f"  0x{addr:02X} = 0x{value:02X}")
        
        elif args.command == 'setbits':
            addr = HexUtils.parse_hex_address(args.address)
            mask = HexUtils.parse_hex_address(args.mask)
            if fpga.set_bits(addr, mask):
                print(f"✅ Bits 0x{mask:02X} set in register 0x{addr:02X}")
            else:
                print("❌ Set bits failed")
                return 1
                
        elif args.command == 'clearbits':
            addr = HexUtils.parse_hex_address(args.address)
            mask = HexUtils.parse_hex_address(args.mask)
            if fpga.clear_bits(addr, mask):
                print(f"✅ Bits 0x{mask:02X} cleared in register 0x{addr:02X}")
            else:
                print("❌ Clear bits failed")
                return 1
                
        elif args.command == 'fill':
            start_addr = HexUtils.parse_hex_address(args.start_addr)
            value = HexUtils.parse_hex_address(args.value)
            if fpga.fill_registers(start_addr, args.count, value):
                print(f"✅ Filled registers 0x{start_addr:02X}-0x{start_addr + args.count - 1:02X} with 0x{value:02X}")
            else:
                print("❌ Fill operation failed")
                return 1
                
        elif args.command == 'dump':
            start_addr = HexUtils.parse_hex_address(args.start_addr)
            registers = fpga.dump_registers(start_addr, args.count)
            
            print(f"Registers 0x{start_addr:02X}-0x{start_addr + args.count - 1:02X}:")
            for i in range(args.count):
                addr = start_addr + i
                value = registers[addr]
                if value is not None:
                    print(f"  0x{addr:02X}: 0x{value:02X} | {value:3d} | {value:08b}")
                else:
                    print(f"  0x{addr:02X}: FAILED")
    
    except Exception as e:
        print(f"❌ Error: {e}")
        return 1
    finally:
        fpga.close()
    
    return 0

if __name__ == "__main__":
    sys.exit(main())