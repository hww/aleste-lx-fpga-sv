#!/usr/bin/env python3
"""
Тест производительности и проблем streaming для разных размеров пакетов
"""
import sys
import os
import time
import hashlib
import argparse
sys.path.append(os.path.join(os.path.dirname(__file__), '../..'))

from core.memory import FPGAMemory

def calculate_checksum(data: bytes) -> str:
    """Быстрая контрольная сумма"""
    return hashlib.md5(data).hexdigest()[:8]

def run_stream_test():
    parser = argparse.ArgumentParser(description='Streaming Performance Test')
    parser.add_argument('-n', '--count', type=int, default=1,
                       help='Number of iterations per size')
    parser.add_argument('--checksum', action='store_true',
                       help='Calculate checksum for each transaction')
    parser.add_argument('--size', type=int, 
                       help='Use specific packet size (default: test all sizes)')
    parser.add_argument('-t', '--delay', type=float, default=0,
                       help='Delay between iterations in seconds')
    
    args = parser.parse_args()
    
    if args.count < 1:
        print("❌ Error: Count must be >= 1")
        return 1
    
    if args.delay < 0:
        print("❌ Error: Delay must be >= 0")
        return 1
    
    fw = FPGAMemory()
    
    try:
        print("=== Streaming Performance Test ===")
        print(f"Iterations: {args.count}, Delay: {args.delay}s")
        
        if args.size:
            # Тестируем только указанный размер
            sizes = [args.size]
            print(f"Testing single size: {args.size} bytes")
        else:
            # Тестируем все стандартные размеры
            sizes = [1, 2, 4, 8, 16, 32, 64, 128]
            print("Testing all standard sizes: 1, 2, 4, 8, 16, 32, 64, 128 bytes")
        
        print("\n" + "="*60)
        
        for size in sizes:
            print(f"\n--- Testing {size} byte packets ---")
            
            total_bytes = 0
            total_duration = 0
            checksums = []
            
            for iteration in range(args.count):
                start_time = time.time()
                data = fw.read_memory(0, size)
                duration = time.time() - start_time
                
                if data:
                    total_bytes += len(data)
                    total_duration += duration
                    
                    # Расчет контрольной суммы если нужно
                    if args.checksum:
                        checksum = calculate_checksum(data)
                        checksums.append(checksum)
                    
                    # Вывод информации об итерации
                    status = "✅" if len(data) == size else "❌"
                    print(f"  {status} Iter {iteration+1}: {len(data):3d} bytes, {duration:.3f}s", end="")
                    
                    if args.checksum:
                        print(f" [{checksum}]", end="")
                    
                    # Предупреждение о streaming проблеме
                    if len(data) > size * 1.5:  # Если получили значительно больше
                        print(f" 🚨 STREAMING: +{len(data) - size} extra bytes", end="")
                    elif len(data) < size:
                        print(f" 🚨 UNDERFLOW: -{size - len(data)} missing bytes", end="")
                    
                    print()
                    
                else:
                    print(f"  ❌ Iter {iteration+1}: FAILED - no data")
                
                # Задержка между итерациями
                if args.delay > 0 and iteration < args.count - 1:
                    time.sleep(args.delay)
            
            # Статистика по размеру
            if total_bytes > 0:
                avg_bytes = total_bytes / args.count
                avg_duration = total_duration / args.count
                avg_speed = avg_bytes / avg_duration if avg_duration > 0 else 0
                
                print(f"\n  📊 Statistics for {size} bytes:")
                print(f"     Average size: {avg_bytes:.1f} bytes")
                print(f"     Average time: {avg_duration:.3f}s")
                print(f"     Average speed: {avg_speed:.0f} bytes/sec")
                
                if args.checksum:
                    unique_checksums = len(set(checksums))
                    print(f"     Unique checksums: {unique_checksums}/{args.count}")
                    
                    if unique_checksums == 1:
                        print(f"     ✅ Data consistency: PERFECT")
                    elif unique_checksums > 1:
                        print(f"     ⚠️  Data consistency: {unique_checksums} different values")
            
            print(f"  {'─'*40}")
        
        print("\n" + "="*60)
        print("🎯 Test completed")
        
    except KeyboardInterrupt:
        print("\n⏹️  Test interrupted by user")
    except Exception as e:
        print(f"❌ Error: {e}")
        return 1
    finally:
        fw.close()
    
    return 0

if __name__ == "__main__":
    sys.exit(run_stream_test())