#!/usr/bin/env python3
"""
Глубокий тест памяти FPGA - диагностика проблем с бинарными данными
"""
import sys
import os
import time
import hashlib
sys.path.append(os.path.join(os.path.dirname(__file__), '../..'))

from core.memory import FPGAMemory
from core.hex_utils import HexUtils
import argparse

def show_progress(current, total, prefix="Testing"):
    """Показать прогресс-бар"""
    percent = current / total if total > 0 else 0
    bar_length = 40
    filled_length = int(bar_length * percent)
    bar = '█' * filled_length + '░' * (bar_length - filled_length)
    print(f"\r{prefix} |{bar}| {current}/{total} bytes ({percent:.1%})", end='', flush=True)
    if current >= total:
        print()

def generate_test_pattern(size: int, pattern_type: str) -> bytes:
    """Генерация тестовых паттернов"""
    if pattern_type == "zeros":
        return b'\x00' * size
    elif pattern_type == "ones":
        return b'\xFF' * size
    elif pattern_type == "alternating":
        return b'\xAA\x55' * (size // 2) + b'\xAA' * (size % 2)
    elif pattern_type == "incremental":
        return bytes([i % 256 for i in range(size)])
    elif pattern_type == "decremental":
        return bytes([(255 - i) % 256 for i in range(size)])
    elif pattern_type == "random_like":
        # Псевдо-случайный, но детерминистический паттерн
        return bytes([(i * 17 + 123) % 256 for i in range(size)])
    else:
        raise ValueError(f"Unknown pattern type: {pattern_type}")

def analyze_mismatch(expected: bytes, actual: bytes, address: int, max_errors=10):
    """Детальный анализ несоответствий"""
    errors = 0
    for i in range(min(len(expected), len(actual))):
        if expected[i] != actual[i]:
            errors += 1
            if errors <= max_errors:
                print(f"❌ Mismatch at 0x{address + i:06X}: "
                      f"expected 0x{expected[i]:02X}, got 0x{actual[i]:02X} "
                      f"(bit diff: 0x{expected[i] ^ actual[i]:02X})")
            
            if errors > max_errors:
                print(f"... and {len(expected) - max_errors} more errors")
                break

def test_basic_functionality(fpga, address: int, size: int):
    """Базовый тест: запись и чтение простых паттернов"""
    print(f"\n🔍 Basic functionality test: {size} bytes at 0x{address:06X}")
    
    patterns = [
        ("zeros", "All zeros (0x00)"),
        ("ones", "All ones (0xFF)"), 
        ("alternating", "Alternating (0xAA, 0x55)"),
        ("incremental", "Incremental (0x00-0xFF)"),
    ]
    
    for pattern_type, description in patterns:
        print(f"  Testing {description}...")
        
        # Генерация данных
        test_data = generate_test_pattern(size, pattern_type)
        
        # Запись
        if not fpga.write_memory(address, test_data):
            print(f"❌ Write failed for {pattern_type}")
            return False
        
        # Чтение
        read_data = fpga.read_memory(address, size)
        if not read_data:
            print(f"❌ Read failed for {pattern_type}")
            return False
        
        # Проверка
        if read_data != test_data:
            print(f"❌ Verification failed for {pattern_type}")
            analyze_mismatch(test_data, read_data, address)
            return False
        
        print(f"  ✅ {pattern_type} passed")
    
    return True

def test_binary_data(fpga, address: int, size: int):
    """Тест с псевдо-случайными бинарными данными"""
    print(f"\n🔍 Binary data test: {size} bytes at 0x{address:06X}")
    
    # Генерация "случайных" данных
    test_data = generate_test_pattern(size, "random_like")
    checksum = hashlib.md5(test_data).hexdigest()[:8]
    print(f"  Test data MD5: {checksum}")
    
    # Запись с прогрессом
    print("  Writing...")
    if not fpga.write_memory(address, test_data, progress_callback=show_progress):
        print("❌ Write failed")
        return False
    print()
    
    # Чтение с прогрессом  
    print("  Reading...")
    read_data = fpga.read_memory(address, size, progress_callback=show_progress)
    print()
    
    if not read_data:
        print("❌ Read failed")
        return False
    
    # Проверка размера
    if len(read_data) != size:
        print(f"❌ Size mismatch: expected {size}, got {len(read_data)}")
        return False
    
    # Проверка содержимого
    if read_data != test_data:
        print("❌ Data mismatch!")
        read_checksum = hashlib.md5(read_data).hexdigest()[:8]
        print(f"  Expected MD5: {checksum}")
        print(f"  Got MD5:      {read_checksum}")
        analyze_mismatch(test_data, read_data, address)
        return False
    
    print("✅ Binary data test passed")
    return True

def test_large_memory(fpga, base_address: int, total_size: int, chunk_size: int):
    """Тест большой области памяти"""
    print(f"\n🔍 Large memory test: {total_size} bytes in {chunk_size} byte chunks")
    
    chunks = total_size // chunk_size
    errors = 0
    max_errors = 10
    
    for chunk_num in range(chunks):
        address = base_address + chunk_num * chunk_size
        
        # Генерация уникальных данных для каждого чанка
        test_data = generate_test_pattern(chunk_size, "random_like")
        test_data = bytes([(b + chunk_num) % 256 for b in test_data])  # Делаем уникальным
        
        # Запись
        if not fpga.write_memory(address, test_data):
            print(f"❌ Write failed at chunk {chunk_num} (0x{address:06X})")
            errors += 1
            if errors >= max_errors:
                break
            continue
        
        # Чтение
        read_data = fpga.read_memory(address, chunk_size)
        if not read_data:
            print(f"❌ Read failed at chunk {chunk_num} (0x{address:06X})")
            errors += 1
            if errors >= max_errors:
                break
            continue
        
        # Проверка
        if read_data != test_data:
            print(f"❌ Mismatch at chunk {chunk_num} (0x{address:06X})")
            analyze_mismatch(test_data, read_data, address, max_errors=3)
            errors += 1
            if errors >= max_errors:
                break
            continue
        
        # Прогресс
        if chunk_num % 10 == 0:
            show_progress(chunk_num * chunk_size, total_size, "Large test")
    
    show_progress(total_size, total_size, "Large test")
    print()
    
    if errors == 0:
        print("✅ Large memory test passed")
        return True
    else:
        print(f"❌ Large memory test failed: {errors} errors")
        return False

def test_boundary_conditions(fpga, base_address: int):
    """Тест граничных условий и разных размеров блоков"""
    print(f"\n🔍 Boundary conditions test")
    
    # Тестируем разные размеры блоков
    sizes = [1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024]
    
    for size in sizes:
        address = base_address
        print(f"  Testing block size {size}...")
        
        test_data = generate_test_pattern(size, "random_like")
        
        # Запись
        if not fpga.write_memory(address, test_data):
            print(f"❌ Write failed for size {size}")
            return False
        
        # Чтение
        read_data = fpga.read_memory(address, size)
        if not read_data:
            print(f"❌ Read failed for size {size}")
            return False
        
        # Проверка
        if read_data != test_data:
            print(f"❌ Mismatch for size {size}")
            analyze_mismatch(test_data, read_data, address)
            return False
    
    print("✅ Boundary conditions test passed")
    return True

def main():
    parser = argparse.ArgumentParser(description='Deep FPGA Memory Test')
    parser.add_argument('address', help='Base hex address (0x100000 or 100000)')
    parser.add_argument('--size', type=int, default=1024*1024, help='Test size in bytes (default: 1MB)')
    parser.add_argument('--chunk-size', type=int, default=4096, help='Chunk size for large tests (default: 4KB)')
    parser.add_argument('--quick', action='store_true', help='Run quick test only')
    parser.add_argument('--no-large', action='store_true', help='Skip large memory test')
    
    args = parser.parse_args()
    
    address = HexUtils.parse_hex_address(args.address)
    
    print(f"🧪 Deep FPGA Memory Test")
    print(f"📍 Address: 0x{address:06X}")
    print(f"📏 Test size: {args.size} bytes")
    print(f"🔧 Chunk size: {args.chunk_size} bytes")
    
    fpga = FPGAMemory()
    all_passed = True
    
    try:
        # 1. Базовый тест функциональности
        if not test_basic_functionality(fpga, address, min(1024, args.size)):
            all_passed = False
            print("❌ Basic functionality test FAILED")
            return 1
        
        # 2. Тест бинарных данных
        test_size = min(32 * 1024, args.size)  # 32KB для бинарного теста
        if not test_binary_data(fpga, address, test_size):
            all_passed = False
            print("❌ Binary data test FAILED")
            return 1
        
        # 3. Тест граничных условий
        if not test_boundary_conditions(fpga, address + test_size):
            all_passed = False
            print("❌ Boundary conditions test FAILED")
            return 1
        
        # 4. Тест большой памяти (если не отключен)
        if not args.no_large and not args.quick:
            large_address = address + test_size + 1024
            if not test_large_memory(fpga, large_address, args.size, args.chunk_size):
                all_passed = False
                print("❌ Large memory test FAILED")
                return 1
        
        if all_passed:
            print(f"\n🎉 ALL TESTS PASSED!")
            return 0
        else:
            print(f"\n💥 SOME TESTS FAILED!")
            return 1
            
    except Exception as e:
        print(f"❌ Test error: {e}")
        return 1
    finally:
        fpga.close()

if __name__ == "__main__":
    sys.exit(main())