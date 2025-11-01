#!/usr/bin/env python3
"""
Утилита тестирования памяти FPGA с целевыми быстрыми тестами
"""
import sys
import os
import hashlib
import time
sys.path.append(os.path.join(os.path.dirname(__file__), '../..'))

from core.memory import FPGAMemory
from core.hex_utils import HexUtils
import argparse

def calculate_checksum(data: bytes) -> str:
    """Быстрая контрольная сумма"""
    return hashlib.md5(data).hexdigest()[:8]

def test_bank_switching(fpga, test_size=1024, verbosity=1):
    """Тест переключения банков - самая вероятная проблема"""
    print("🏦 Testing bank switching...")
    
    # Тестовые адреса на границах банков
    bank_addresses = [
        0x000000,  # Bank 0
        0x080000,  # Bank 1  
        0x100000,  # Bank 2
        0x180000,  # Bank 3
        0x000200,  # Bank 0, следующая строка
    ]
    
    for i, addr in enumerate(bank_addresses[:4]):  # Только первые 4 банка
        # Пишем уникальный паттерн для каждого банка
        test_data = bytes([(i * 0x11) & 0xFF]) * 4
        if verbosity >= 2:
            print(f"  Writing bank {i}: 0x{addr:06X} -> {test_data.hex()}")
        
        # Читаем-пишем быстро
        fpga.write_memory(addr, test_data)
        read_back = fpga.read_memory(addr, 4)
        
        if read_back != test_data:
            print(f"❌ BANK ERROR: Bank {i} 0x{addr:06X}")
            print(f"   Expected: {test_data.hex()}")
            print(f"   Got: {read_back.hex()}")
            return False
    
    print("✅ Bank switching test passed")
    return True

def test_row_boundaries(fpga, test_size=512, verbosity=1):
    """Тест границ строк - вторая по вероятности проблема"""
    print("📏 Testing row boundaries...")
    
    # Тестируем переходы между строками в одном банке
    row_boundaries = [
        (0x000000, 0x000200),  # Row 0 -> Row 1 в Bank 0
        (0x000400, 0x000600),  # Row 2 -> Row 3 в Bank 0
    ]
    
    for addr1, addr2 in row_boundaries:
        pattern1 = b'\x11\x22\x33\x44'
        pattern2 = b'\xAA\xBB\xCC\xDD'
        
        # Пишем в две соседние строки
        fpga.write_memory(addr1, pattern1)
        fpga.write_memory(addr2, pattern2)
        
        # Читаем обратно
        read1 = fpga.read_memory(addr1, 4)
        read2 = fpga.read_memory(addr2, 4)
        
        if read1 != pattern1 or read2 != pattern2:
            print(f"❌ ROW BOUNDARY ERROR:")
            print(f"   0x{addr1:06X}: expected {pattern1.hex()}, got {read1.hex()}")
            print(f"   0x{addr2:06X}: expected {pattern2.hex()}, got {read2.hex()}")
            return False
            
        if verbosity >= 2:
            print(f"  Row boundary 0x{addr1:06X}-0x{addr2:06X} OK")
    
    print("✅ Row boundaries test passed")
    return True

def test_pattern(fpga, pattern_type, test_size=1024, verbosity=1):
    """Быстрые паттерн-тесты"""
    print(f"🎨 Testing {pattern_type} pattern...")
    
    base_addr = 0x001000  # Начинаем с безопасного адреса
    test_size = min(test_size, 4096)  # Ограничиваем размер для скорости
    
    if pattern_type == 'checkerboard':
        # Шахматная доска - ловит coupling errors
        test_data = bytes([0xAA, 0x55] * (test_size // 2))
    elif pattern_type == 'walking1':
        # Walking 1 - ловит битовые ошибки
        test_data = b''
        for i in range(test_size // 4):
            test_data += bytes([(1 << (i % 8)) & 0xFF, 0, 0, 0])
    elif pattern_type == 'addr':
        # Адрес как данные - для быстрой проверки
        test_data = b''
        for i in range(test_size // 4):
            addr = base_addr + i * 4
            test_data += bytes([(addr >> 16) & 0xFF, (addr >> 8) & 0xFF, addr & 0xFF, 0x5A])
    else:
        print(f"❌ Unknown pattern type: {pattern_type}")
        return False
    
    # Обрезаем до нужного размера
    test_data = test_data[:test_size]
    
    if verbosity >= 2:
        print(f"  Writing {len(test_data)} bytes to 0x{base_addr:06X}")
    
    # Пишем и читаем
    fpga.write_memory(base_addr, test_data)
    read_back = fpga.read_memory(base_addr, test_size)
    
    if read_back != test_data:
        # Находим первую ошибку
        for i, (expected, actual) in enumerate(zip(test_data, read_back)):
            if expected != actual:
                error_addr = base_addr + i
                print(f"❌ PATTERN ERROR at 0x{error_addr:06X}")
                print(f"   Expected: 0x{expected:02X}, Got: 0x{actual:02X}")
                print(f"   Pattern: {pattern_type}")
                return False
    
    print(f"✅ {pattern_type} pattern test passed")
    return True

def test_burst_boundaries(fpga, verbosity=1):
    """Тест границ burst операций"""
    print("⚡ Testing burst boundaries...")
    
    # Тестируем адреса на границах burst
    burst_boundaries = [
        0x0001F8,  # За 8 байт до границы строки (если burst=8)
        0x0001FC,  # За 4 байта до границы
        0x0001FE,  # За 2 байта до границы  
        0x000200,  # На границе
    ]
    
    for addr in burst_boundaries:
        test_data = bytes([addr & 0xFF, (addr >> 8) & 0xFF, 0xAA, 0x55])
        expected_data = test_data
        
        fpga.write_memory(addr, test_data)
        read_back = fpga.read_memory(addr, 4)
        
        if read_back != expected_data:
            print(f"❌ BURST BOUNDARY ERROR at 0x{addr:06X}")
            print(f"   Expected: {expected_data.hex()}, Got: {read_back.hex()}")
            return False
            
        if verbosity >= 2:
            print(f"  Burst boundary 0x{addr:06X} OK")
    
    print("✅ Burst boundaries test passed")
    return True

def test_rapid_switching(fpga, verbosity=1):
    """Тест быстрого переключения между разными банками/строками"""
    print("🔄 Testing rapid bank/row switching...")
    
    # Быстро переключаемся между разными областями
    hotspots = [
        (0x000000, b'\x01\x01\x01\x01'),  # Bank 0, Row 0
        (0x080000, b'\x02\x02\x02\x02'),  # Bank 1, Row 0  
        (0x000200, b'\x03\x03\x03\x03'),  # Bank 0, Row 1
        (0x100000, b'\x04\x04\x04\x04'),  # Bank 2, Row 0
    ]
    
    # Пишем все данные сначала
    for addr, data in hotspots:
        fpga.write_memory(addr, data)
    
    # Быстро читаем в случайном порядке несколько раз
    import random
    test_orders = [
        [0, 1, 2, 3],  # Sequential
        [3, 2, 1, 0],  # Reverse
        [0, 2, 1, 3],  # Interleave
    ]
    
    for i, order in enumerate(test_orders):
        for idx in order:
            addr, expected = hotspots[idx]
            actual = fpga.read_memory(addr, 4)
            
            if actual != expected:
                print(f"❌ RAPID SWITCHING ERROR in sequence {i}")
                print(f"   Addr 0x{addr:06X}: expected {expected.hex()}, got {actual.hex()}")
                return False
                
        if verbosity >= 2:
            print(f"  Switching sequence {i} OK")
    
    print("✅ Rapid switching test passed")
    return True

def run_comprehensive_test(fpga, test_size=1024, verbosity=1):
    """Запуск всех быстрых тестов"""
    print("🚀 Starting comprehensive memory test suite...")
    print(f"📊 Test size: {test_size} bytes")
    print()
    
    start_time = time.time()
    tests_passed = 0
    total_tests = 5
    
    # Запускаем тесты по порядку важности
    tests = [
        ("Bank Switching", lambda: test_bank_switching(fpga, test_size, verbosity)),
        ("Row Boundaries", lambda: test_row_boundaries(fpga, test_size, verbosity)),
        ("Burst Boundaries", lambda: test_burst_boundaries(fpga, verbosity)),
        ("Rapid Switching", lambda: test_rapid_switching(fpga, verbosity)),
        ("Checkerboard Pattern", lambda: test_pattern(fpga, 'checkerboard', test_size, verbosity)),
    ]
    
    for test_name, test_func in tests:
        if verbosity >= 1:
            print(f"🧪 {test_name}...")
        
        try:
            if test_func():
                tests_passed += 1
                if verbosity >= 1:
                    print(f"✅ {test_name} passed")
            else:
                print(f"❌ {test_name} FAILED!")
                break
        except Exception as e:
            print(f"❌ {test_name} ERROR: {e}")
            break
            
        print()
    
    elapsed_time = time.time() - start_time
    
    print("=" * 50)
    print(f"📋 Test Results: {tests_passed}/{total_tests} passed")
    print(f"⏱️  Time: {elapsed_time:.2f} seconds")
    
    if tests_passed == total_tests:
        print("🎉 ALL TESTS PASSED! Memory appears stable.")
        return True
    else:
        print("💥 SOME TESTS FAILED! Memory has issues.")
        return False

def main():
    parser = argparse.ArgumentParser(description='FPGA Memory Test Suite')
    parser.add_argument('--test-banks', action='store_true', help='Quick bank switching test')
    parser.add_argument('--test-rows', action='store_true', help='Quick row boundary test') 
    parser.add_argument('--test-pattern', choices=['checkerboard', 'walking1', 'addr'], help='Pattern test')
    parser.add_argument('--test-burst', action='store_true', help='Test burst boundaries')
    parser.add_argument('--test-rapid', action='store_true', help='Test rapid switching')
    parser.add_argument('--test-all', action='store_true', help='Run all quick tests')
    
    parser.add_argument('--test-size', type=int, default=1024, help='Test size in bytes (default: 1KB)')
    parser.add_argument('-v', '--verbose', action='store_true', help='Verbose output')
    parser.add_argument('-q', '--quiet', action='store_true', help='Minimal output')
    
    args = parser.parse_args()
    
    # Уровни verbosity
    if args.quiet:
        verbosity = 0
    elif args.verbose:
        verbosity = 2
    else:
        verbosity = 1
    
    fpga = FPGAMemory()
    
    try:
        if args.test_all:
            success = run_comprehensive_test(fpga, args.test_size, verbosity)
            return 0 if success else 1
        
        # Отдельные тесты
        test_functions = {
            'test_banks': (test_bank_switching, "Bank switching"),
            'test_rows': (test_row_boundaries, "Row boundaries"), 
            'test_burst': (test_burst_boundaries, "Burst boundaries"),
            'test_rapid': (test_rapid_switching, "Rapid switching"),
        }
        
        # Запускаем выбранные тесты
        for arg_name, (test_func, test_desc) in test_functions.items():
            if getattr(args, arg_name):
                if verbosity >= 1:
                    print(f"🧪 {test_desc} test...")
                success = test_func(fpga, args.test_size, verbosity)
                if not success:
                    return 1
        
        # Паттерн-тест
        if args.test_pattern:
            success = test_pattern(fpga, args.test_pattern, args.test_size, verbosity)
            if not success:
                return 1
        
        # Если ничего не выбрано - запускаем comprehensive
        if not any([args.test_banks, args.test_rows, args.test_pattern, 
                   args.test_burst, args.test_rapid, args.test_all]):
            print("🔍 No specific test selected. Running comprehensive test...")
            success = run_comprehensive_test(fpga, args.test_size, verbosity)
            return 0 if success else 1
            
    except Exception as e:
        print(f"❌ Test error: {e}")
        return 1
    finally:
        fpga.close()
    
    return 0

if __name__ == "__main__":
    sys.exit(main())