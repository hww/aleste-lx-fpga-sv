#!/usr/bin/env python3
"""
Быстрый тест loopback для отладки
"""
import sys
import os
import time

sys.path.append(os.path.join(os.path.dirname(__file__), '../..'))

from core.transport import FPGATransport

def quick_loopback_test():
    """Быстрая проверка loopback"""
    transport = FPGATransport()
    
    print("🔍 Быстрый loopback тест")
    
    # Простой тест - отправляем 10 байт
    test_data = b'HELLO12345'
    
    print(f"📤 Отправляем: {test_data}")
    
    # Используем низкоуровневую отправку
    transport.serial.reset_input_buffer()
    transport.serial.reset_output_buffer()
    
    transport.serial.write(test_data)
    transport.serial.flush()
    
    time.sleep(0.1)  # Даем время на ответ
    
    received = transport.serial.read(10)
    
    print(f"📥 Получили: {received}")
    
    if received == test_data:
        print("✅ LOOPBACK РАБОТАЕТ")
    else:
        print(f"❌ LOOPBACK НЕ РАБОТАЕТ: ожидалось {test_data}, получено {received}")
    
    transport.close()

if __name__ == "__main__":
    quick_loopback_test()