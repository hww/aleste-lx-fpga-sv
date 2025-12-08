#!/usr/bin/env python3
"""
Диагностический тест, воспроизводящий реальные условия краша
"""
import sys
import os
import time
import random
from datetime import datetime

sys.path.append(os.path.join(os.path.dirname(__file__), '../..'))

from core.memory import FPGAMemory
from core.transport import FPGATransport

class CrashReproducer:
    def __init__(self):
        self.transport = FPGATransport()
        self.memory = FPGAMemory()
        
    def test_realistic_write_patterns(self):
        """
        Тестируем реальные паттерны записи, как в утилите
        """
        print("\n" + "="*60)
        print("🧪 ТЕСТ: Реальные паттерны записи (как в утилите)")
        print("="*60)
        
        test_cases = [
            # Различные размеры данных, как в реальном использовании
            ("Small chunk", b'\x01\x02\x03\x04', 0x1000),
            ("Medium chunk", bytes(range(64)), 0x2000), 
            ("Large chunk", bytes([i % 256 for i in range(128)]), 0x3000),
            ("Max single write", bytes([0xAA] * 128), 0x4000),
            ("Sequential writes", None, 0x5000),  # Последовательные записи
        ]
        
        for name, data, address in test_cases:
            print(f"\n📝 Тест: {name} по адресу 0x{address:04X}")
            
            try:
                if data:
                    # Одиночная запись
                    success = self.memory.write_memory(address, data)
                    print(f"  Запись: {'✅' if success else '❌'}")
                    
                    if success:
                        # Чтение для проверки
                        read_data = self.memory.read_memory(address, len(data))
                        print(f"  Чтение: {'✅' if read_data == data else '❌'}")
                else:
                    # Последовательные записи (имитация блочной записи)
                    for i in range(10):
                        chunk = bytes([i] * 32)
                        success = self.memory.write_memory(address + i * 32, chunk)
                        if not success:
                            print(f"  ❌ Ошибка на итерации {i}")
                            break
                    else:
                        print("  ✅ Все последовательные записи успешны")
                        
            except Exception as e:
                print(f"  💥 Исключение: {e}")
    
    def test_protocol_stress(self):
        """
        Стресс-тест протокола с разными командами
        """
        print("\n" + "="*60)
        print("⚡ ТЕСТ: Стресс протокола (смешанные команды)")
        print("="*60)
        
        commands = [
            ("Memory Write", lambda: self.memory.write_memory(0x6000, b'TEST')),
            ("Memory Read", lambda: self.memory.read_memory(0x6000, 4)),
            ("Status", lambda: self.memory.get_status()),
            ("Echo", lambda: self.memory.send_echo(1)),
        ]
        
        for i in range(20):  # 20 итераций смешанных команд
            print(f"\n🔄 Итерация {i+1}:")
            
            for cmd_name, cmd_func in commands:
                try:
                    result = cmd_func()
                    print(f"  {cmd_name}: ✅")
                    time.sleep(0.001)  # Минимальная задержка
                except Exception as e:
                    print(f"  {cmd_name}: ❌ {e}")
    
    def test_large_data_transfer(self):
        """
        Тест передачи больших объемов данных (как при загрузке файлов)
        """
        print("\n" + "="*60)
        print("📦 ТЕСТ: Большие объемы данных")
        print("="*60)
        
        # Разные размеры блоков
        sizes = [256, 512, 1024, 2048]
        
        for size in sizes:
            print(f"\n📊 Размер данных: {size} байт")
            
            # Генерация тестовых данных
            test_data = bytes([random.randint(0, 255) for _ in range(size)])
            
            try:
                # Запись большого блока
                start_time = time.time()
                success = self.memory.write_memory(0x8000, test_data)
                write_time = time.time() - start_time
                
                print(f"  Запись: {'✅' if success else '❌'} ({write_time:.3f} сек)")
                
                if success:
                    # Чтение для проверки
                    start_time = time.time()
                    read_data = self.memory.read_memory(0x8000, size)
                    read_time = time.time() - start_time
                    
                    if read_data == test_data:
                        print(f"  Проверка: ✅ ({read_time:.3f} сек)")
                    else:
                        print(f"  Проверка: ❌ (получено {len(read_data) if read_data else 0} байт)")
                        
            except Exception as e:
                print(f"  💥 Исключение: {e}")
    
    def test_buffer_conditions(self):
        """
        Тест граничных условий буфера
        """
        print("\n" + "="*60)
        print("🎯 ТЕСТ: Граничные условия")
        print("="*60)
        
        # Критические размеры
        critical_sizes = [127, 128, 129, 255, 256, 257]
        
        for size in critical_sizes:
            print(f"\n📏 Тест размера: {size} байт")
            
            try:
                test_data = bytes([0x55] * size)
                success = self.memory.write_memory(0xA000, test_data)
                
                if success:
                    read_data = self.memory.read_memory(0xA000, size)
                    status = '✅' if read_data == test_data else '❌'
                    print(f"  Результат: {status}")
                else:
                    print(f"  Результат: ❌ (запись не удалась)")
                    
            except Exception as e:
                print(f"  💥 Исключение: {e}")
    
    def run_comprehensive_diagnosis(self):
        """Полная диагностика"""
        print("🚀 ЗАПУСК ПОЛНОЙ ДИАГНОСТИКИ КРАША")
        print(f"📅 Время начала: {datetime.now().strftime('%Y-%m-%d %H:%M:%S')}")
        
        try:
            self.test_realistic_write_patterns()
            self.test_protocol_stress() 
            self.test_large_data_transfer()
            self.test_buffer_conditions()
            
        except Exception as e:
            print(f"💥 Критическая ошибка диагностики: {e}")
        finally:
            self.transport.close()
            print(f"\n🏁 Время окончания: {datetime.now().strftime('%Y-%m-%d %H:%M:%S')}")

def main():
    reproducer = CrashReproducer()
    reproducer.run_comprehensive_diagnosis()

if __name__ == "__main__":
    main()