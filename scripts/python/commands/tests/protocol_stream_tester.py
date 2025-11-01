#!/usr/bin/env python3
"""
Специализированный тест для диагностики проблем протокола при loopback
"""
import sys
import os
import time
import random
from datetime import datetime

sys.path.append(os.path.join(os.path.dirname(__file__), '../..'))

from core.transport import FPGATransport

class ProtocolStressTester:
    def __init__(self, config_path=None):
        self.transport = FPGATransport(config_path)
        self.results = []
        
    def raw_send_receive(self, data, inter_byte_delay=0, inter_packet_delay=0):
        """
        Низкоуровневая отправка и прием через транспорт
        """
        try:
            # Очистка буферов
            self.transport.serial.reset_input_buffer()
            self.transport.serial.reset_output_buffer()
            
            # Отправка данных с задержками
            for i, byte in enumerate(data):
                self.transport.serial.write(bytes([byte]))
                self.transport.serial.flush()
                
                if inter_byte_delay > 0 and i < len(data) - 1:
                    time.sleep(inter_byte_delay)
            
            # Задержка между пакетами
            if inter_packet_delay > 0:
                time.sleep(inter_packet_delay)
            
            # Чтение ответа
            received = b''
            start_time = time.time()
            timeout = 1.0
            
            while len(received) < len(data) and (time.time() - start_time) < timeout:
                available = self.transport.serial.in_waiting
                if available > 0:
                    chunk = self.transport.serial.read(min(len(data) - len(received), available))
                    received += chunk
                else:
                    time.sleep(0.001)
            
            return received
            
        except Exception as e:
            print(f"💥 Ошибка передачи: {e}")
            return None
    
    def test_critical_packet_size(self, max_size=5000, step=100, num_tests=3):
        """
        ТЕСТ 1: Поиск критического размера пакета, вызывающего коллапс
        """
        print("\n" + "="*60)
        print("🔍 ТЕСТ 1: Поиск критического размера пакета")
        print("="*60)
        
        current_size = step
        collapse_size = None
        
        while current_size <= max_size and collapse_size is None:
            print(f"\n📦 Тестируем размер: {current_size} байт")
            
            success_count = 0
            for i in range(num_tests):
                # Генерация тестовых данных
                test_data = bytes([random.randint(0, 255) for _ in range(current_size)])
                
                # Отправка с минимальными задержками
                received = self.raw_send_receive(
                    test_data, 
                    inter_byte_delay=0.00001,  # Минимальная задержка
                    inter_packet_delay=0.1
                )
                
                if received == test_data:
                    success_count += 1
                    print(f"  ✅ Попытка {i+1}: Успех")
                else:
                    print(f"  ❌ Попытка {i+1}: Ошибка")
                    if received:
                        print(f"     Ожидалось: {len(test_data)} байт, получено: {len(received)} байт")
                    collapse_size = current_size
                    break
            
            if collapse_size is None:
                success_rate = success_count / num_tests * 100
                print(f"  📊 Успешность: {success_rate:.1f}%")
                current_size += step
            else:
                print(f"  🚨 КОЛЛАПС при размере: {collapse_size} байт")
                break
        
        return collapse_size
    
    def test_inter_packet_delay(self, packet_size, min_delay=0.001, max_delay=1.0, steps=20):
        """
        ТЕСТ 2: Поиск минимальной задержки между пакетами, предотвращающей коллапс
        """
        print("\n" + "="*60)
        print("⏱️  ТЕСТ 2: Поиск минимальной задержки между пакетами")
        print("="*60)
        print(f"📦 Размер пакета: {packet_size} байт")
        
        # Генерируем задержки в логарифмической шкале
        delays = []
        for i in range(steps):
            ratio = i / (steps - 1)
            delay = min_delay * ((max_delay / min_delay) ** ratio)
            delays.append(delay)
        
        critical_delay = None
        
        for delay in delays:
            print(f"\n⏰ Задержка: {delay:.6f} сек")
            
            success_count = 0
            test_data = bytes([random.randint(0, 255) for _ in range(packet_size)])
            
            for i in range(3):  # 3 попытки на каждую задержку
                received = self.raw_send_receive(
                    test_data,
                    inter_byte_delay=0.00001,
                    inter_packet_delay=delay
                )
                
                if received == test_data:
                    success_count += 1
                    print(f"  ✅ Попытка {i+1}: Успех")
                else:
                    print(f"  ❌ Попытка {i+1}: Ошибка")
                    break
            
            if success_count == 3:
                print(f"  ✅ Задержка {delay:.6f} сек - стабильна")
                critical_delay = delay
            else:
                print(f"  🚨 Задержка {delay:.6f} сек - приводит к ошибкам")
                break
        
        return critical_delay
    
    def test_inter_byte_delay(self, packet_size, min_delay=0.000001, max_delay=0.01, steps=15):
        """
        ТЕСТ 3: Поиск минимальной задержки между байтами, предотвращающей коллапс
        """
        print("\n" + "="*60)
        print("⌨️  ТЕСТ 3: Поиск минимальной задержки между байтами")
        print("="*60)
        print(f"📦 Размер пакета: {packet_size} байт")
        
        delays = []
        for i in range(steps):
            ratio = i / (steps - 1)
            delay = min_delay * ((max_delay / min_delay) ** ratio)
            delays.append(delay)
        
        critical_byte_delay = None
        
        for byte_delay in delays:
            print(f"\n⏰ Задержка между байтами: {byte_delay:.8f} сек")
            
            success_count = 0
            test_data = bytes([random.randint(0, 255) for _ in range(packet_size)])
            
            for i in range(3):
                received = self.raw_send_receive(
                    test_data,
                    inter_byte_delay=byte_delay,
                    inter_packet_delay=0.1  # Стандартная задержка
                )
                
                if received == test_data:
                    success_count += 1
                    print(f"  ✅ Попытка {i+1}: Успех")
                else:
                    print(f"  ❌ Попытка {i+1}: Ошибка")
                    break
            
            if success_count == 3:
                print(f"  ✅ Задержка {byte_delay:.8f} сек - стабильна")
                critical_byte_delay = byte_delay
            else:
                print(f"  🚨 Задержка {byte_delay:.8f} сек - приводит к ошибкам")
                break
        
        return critical_byte_delay
    
    def run_comprehensive_test(self):
        """Комплексный тест всех параметров"""
        print("🚀 ЗАПУСК КОМПЛЕКСНОЙ ДИАГНОСТИКИ ПРОТОКОЛА")
        print(f"📅 Время начала: {datetime.now().strftime('%Y-%m-%d %H:%M:%S')}")
        
        try:
            # ТЕСТ 1: Критический размер пакета
            collapse_size = self.test_critical_packet_size(max_size=3000, step=200, num_tests=3)
            
            if collapse_size:
                print(f"\n🎯 КРИТИЧЕСКИЙ РАЗМЕР ПАКЕТА: {collapse_size} байт")
                
                # ТЕСТ 2: Задержка между пакетами
                critical_packet_delay = self.test_inter_packet_delay(
                    packet_size=collapse_size,
                    min_delay=0.0001,
                    max_delay=0.5,
                    steps=15
                )
                
                # ТЕСТ 3: Задержка между байтами  
                critical_byte_delay = self.test_inter_byte_delay(
                    packet_size=collapse_size,
                    min_delay=0.0000001,
                    max_delay=0.001,
                    steps=12
                )
                
                # Вывод результатов
                print("\n" + "="*60)
                print("📊 РЕЗУЛЬТАТЫ ДИАГНОСТИКИ")
                print("="*60)
                print(f"📦 Критический размер пакета: {collapse_size} байт")
                print(f"⏰ Минимальная задержка между пакетами: {critical_packet_delay:.6f} сек")
                print(f"⌨️  Минимальная задержка между байтами: {critical_byte_delay:.8f} сек")
                
                # Рекомендации
                print("\n💡 РЕКОМЕНДАЦИИ:")
                if critical_packet_delay:
                    print(f"  - Установите задержку между пакетами: ≥ {critical_packet_delay:.6f} сек")
                if critical_byte_delay:
                    print(f"  - Установите задержку между байтами: ≥ {critical_byte_delay:.8f} сек")
                print(f"  - Максимальный размер пакета: < {collapse_size} байт")
                
            else:
                print("✅ Система стабильна при всех тестируемых размерах пакетов")
                
        except Exception as e:
            print(f"💥 Критическая ошибка тестирования: {e}")
        
        finally:
            self.transport.close()
            print(f"\n🏁 Время окончания: {datetime.now().strftime('%Y-%m-%d %H:%M:%S')}")

def main():
    # Можно указать путь к конфигу, иначе используется конфиг по умолчанию
    config_path = None  # или "path/to/your/config.json"
    
    tester = ProtocolStressTester(config_path)
    tester.run_comprehensive_test()

if __name__ == "__main__":
    main()