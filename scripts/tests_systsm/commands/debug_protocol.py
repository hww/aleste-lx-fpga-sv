#!/usr/bin/env python3
import sys
import os
sys.path.append(os.path.join(os.path.dirname(__file__), '..'))

from lib.commands import FPGACommands

def test_byte_by_byte(fw, address, count=10):
    """Тестируем побайтовое чтение"""
    print(f"\n=== Byte-by-byte reading from 0x{address:06X} ===")
    
    for i in range(count):
        data = fw.read_memory(address + i, 1)
        if data:
            print(f"Address 0x{address + i:06X}: 0x{data[0]:02X} ({len(data)} bytes)")
        else:
            print(f"Address 0x{address + i:06X}: FAILED")
        # Небольшая пауза между запросами
        import time
        time.sleep(0.05)

def test_different_sizes(fw, address):
    """Тестируем разные размеры чтения"""
    print(f"\n=== Testing different sizes at 0x{address:06X} ===")
    
    sizes = [1, 2, 4, 8, 16]
    
    for size in sizes:
        print(f"Size {size:2d} bytes: ", end="")
        data = fw.read_memory(address, size)
        if data:
            print(f"SUCCESS - got {len(data)} bytes: {data.hex()}")
        else:
            print("FAILED")

def analyze_response_pattern(fw):
    """Анализируем паттерн ответов"""
    print("\n=== Analyzing response patterns ===")
    
    # Тестируем команду статуса (должна возвращать 1 байт)
    print("Global status command: ", end="")
    status = fw.get_global_status()
    if status is not None:
        print(f"SUCCESS - 0x{status:02X} ({fw.decode_status(status)})")
    else:
        print("FAILED")
    
    # Тестируем чтение регистра
    print("Register read (0x00): ", end="")
    reg = fw.read_register(0x00)
    if reg is not None:
        print(f"SUCCESS - 0x{reg:02X}")
    else:
        print("FAILED")

def main():
    print("=== FPGA Protocol Debug ===")
    
    fw = FPGACommands()
    try:
        # Анализируем базовые команды
        analyze_response_pattern(fw)
        
        # Тестируем разные размеры
        test_different_sizes(fw, 0x0000)
        
        # Побайтовое чтение
        test_byte_by_byte(fw, 0x0000, 8)
        
    except Exception as e:
        print(f"❌ Error: {e}")
    finally:
        fw.close()

if __name__ == "__main__":
    main()