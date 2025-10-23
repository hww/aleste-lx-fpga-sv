#!/usr/bin/env python3
"""
Тест стабильности записи/чтения
"""
import sys
import os
import time
sys.path.append(os.path.join(os.path.dirname(__file__), '../..'))

from core.memory import FPGAMemory
from core.hex_utils import HexUtils

def stability_test():
    fpga = FPGAMemory()
    
    print("=== Тест стабильности ===")
    print("Будем повторять операцию много раз...")
    
    success_count = 0
    total_tests = 10
    test_data = b'TEST_DATA_' * 10  # 100 байт
    
    for i in range(total_tests):
        print(f"\nПопытка {i+1}/{total_tests}:")
        
        try:
            # Запись
            write_ok = fpga.write_memory(0x1000, test_data)
            if not write_ok:
                print("  ❌ Write failed")
                continue
            
            # Чтение
            read_data = fpga.read_memory(0x1000, len(test_data))
            if not read_data:
                print("  ❌ Read failed")
                continue
            
            # Проверка
            if read_data == test_data:
                success_count += 1
                print("  ✅ Success")
            else:
                print(f"  ❌ Data mismatch: {len(read_data)} bytes")
                
        except Exception as e:
            print(f"  💥 Exception: {e}")
    
    print(f"\n📊 Результат: {success_count}/{total_tests} успешно")
    print(f"📈 Успешность: {success_count/total_tests*100:.1f}%")
    
    fpga.close()

if __name__ == "__main__":
    stability_test()