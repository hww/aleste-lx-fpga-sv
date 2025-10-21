#!/usr/bin/env python3
import sys
import os
import time
sys.path.append(os.path.join(os.path.dirname(__file__), '..'))

from lib.commands import FPGACommands

def test_streaming():
    """Тест который покажет проблему streaming для разных размеров"""
    fw = FPGACommands()
    
    print("=== Streaming Problem Test ===")
    sizes = [1, 2, 4, 16, 32, 64, 128]
    
    for size in sizes:
        print(f"\n--- Testing {size} byte read ---")
        
        start_time = time.time()
        data = fw.read_memory(0, size)
        duration = time.time() - start_time
        
        if data:
            print(f"Expected: {size} bytes")
            print(f"Received: {len(data)} bytes") 
            print(f"Duration: {duration:.3f}s")
            print(f"Streaming rate: {len(data)/duration:.0f} bytes/sec")
            
            if len(data) > size * 2:  # Если получили в 2 раза больше
                print(f"🚨 STREAMING: Got {len(data)} instead of {size}")
        
        time.sleep(1)  # Пауза для осциллографа
    
    fw.close()

if __name__ == "__main__":
    test_streaming()