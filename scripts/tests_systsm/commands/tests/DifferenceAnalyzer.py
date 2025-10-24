#!/usr/bin/env python3
"""
Анализ различий между тестами - почему CrashReproducer крашит, а другие нет
"""
import sys
import os
import time
import inspect
from datetime import datetime

sys.path.append(os.path.join(os.path.dirname(__file__), '../..'))

from core.memory import FPGAMemory
from core.transport import FPGATransport

class DifferenceAnalyzer:
    def __init__(self):
        self.transport = FPGATransport()
        self.memory = FPGAMemory()
        
    def analyze_crash_reproducer_behavior(self):
        """Анализируем что именно делает CrashReproducer"""
        print("🔍 АНАЛИЗ ПОВЕДЕНИЯ CRASHREPRODUCER")
        print("="*60)
        
        # 1. Анализируем последовательность операций в CrashReproducer
        print("\n1. ПОСЛЕДОВАТЕЛЬНОСТЬ ОПЕРАЦИЙ:")
        
        # CrashReproducer тестирует:
        operations = [
            "Small chunk (4 байта)",
            "Medium chunk (64 байта)", 
            "Large chunk (128 байт)",
            "Max single write (128 байт)",
            "Sequential writes (10 × 32 байт)"
        ]
        
        for op in operations:
            print(f"   ✅ {op}")
        
        # 2. Анализируем используемые адреса
        print("\n2. ИСПОЛЬЗУЕМЫЕ АДРЕСА:")
        addresses = [0x1000, 0x2000, 0x3000, 0x4000, 0x5000]
        for addr in addresses:
            print(f"   0x{addr:04X}")
            
        # 3. Анализируем паттерны данных
        print("\n3. ПАТТЕРНЫ ДАННЫХ:")
        patterns = [
            "b'\\x01\\x02\\x03\\x04'",
            "bytes(range(64))", 
            "bytes([i % 256 for i in range(128)])",
            "bytes([0xAA] * 128)",
            "bytes([i] * 32) для sequential writes"
        ]
        for pattern in patterns:
            print(f"   {pattern}")
    
    def test_crash_reproducer_exact_sequence(self):
        """Точное воспроизведение последовательности CrashReproducer"""
        print("\n🎯 ТОЧНАЯ ПОСЛЕДОВАТЕЛЬНОСТЬ CRASHREPRODUCER")
        print("="*60)
        
        crash_sequence = [
            # (address, data, description)
            (0x1000, b'\x01\x02\x03\x04', "Small chunk"),
            (0x2000, bytes(range(64)), "Medium chunk"), 
            (0x3000, bytes([i % 256 for i in range(128)]), "Large chunk"),
            (0x4000, bytes([0xAA] * 128), "Max single write"),
        ]
        
        for address, data, description in crash_sequence:
            print(f"\n📝 {description} -> 0x{address:04X}")
            print(f"   Данные: {data[:8].hex()}...")
            print(f"   Размер: {len(data)} байт")
            
            try:
                success = self.memory.write_memory(address, data)
                print(f"   Результат: {'✅' if success else '❌'}")
                time.sleep(0.01)
                
            except Exception as e:
                print(f"   💥 КРАШ! {e}")
                return True
                
        # Sequential writes - это отдельный паттерн
        print(f"\n📝 Sequential writes -> 0x5000")
        try:
            for i in range(10):
                chunk = bytes([i] * 32)
                success = self.memory.write_memory(0x5000 + i * 32, chunk)
                if not success:
                    print(f"   ❌ Ошибка на итерации {i}")
                    break
            else:
                print("   ✅ Все записи успешны")
                
        except Exception as e:
            print(f"   💥 КРАШ! {e}")
            return True
            
        return False
    
    def test_isolated_operations(self):
        """Тестируем операции по отдельности"""
        print("\n🔬 ИЗОЛИРОВАННОЕ ТЕСТИРОВАНИЕ ОПЕРАЦИЙ")
        print("="*60)
        
        # Тестируем каждую операцию CrashReproducer отдельно
        test_cases = [
            ("Small chunk", 0x1000, b'\x01\x02\x03\x04'),
            ("Medium chunk", 0x2000, bytes(range(64))),
            ("Large chunk", 0x3000, bytes([i % 256 for i in range(128)])),
            ("Max single write", 0x4000, bytes([0xAA] * 128)),
        ]
        
        for name, address, data in test_cases:
            print(f"\n🔍 {name}: ", end="")
            
            try:
                success = self.memory.write_memory(address, data)
                print(f"{'✅' if success else '❌'}")
                time.sleep(0.1)  # Даем системе "остыть"
                
            except Exception as e:
                print(f"💥 {e}")
    
    def test_sequential_stress(self):
        """Стресс последовательными операциями"""
        print("\n⚡ СТРЕСС-ТЕСТ ПОСЛЕДОВАТЕЛЬНЫМИ ОПЕРАЦИЯМИ")
        print("="*60)
        
        # Возможно, проблема в быстрых последовательных операциях
        for attempt in range(5):
            print(f"\n🔄 Попытка {attempt + 1}:")
            
            try:
                # Быстрая последовательность разных операций
                operations = [
                    ("Write 4b", lambda: self.memory.write_memory(0x6000, b'\x01\x02\x03\x04')),
                    ("Write 64b", lambda: self.memory.write_memory(0x6100, bytes(range(64)))),
                    ("Write 128b", lambda: self.memory.write_memory(0x6200, bytes([0xAA] * 128))),
                    ("Status", lambda: self.memory.get_status()),
                    ("Echo", lambda: self.memory.send_echo(1)),
                ]
                
                for op_name, op_func in operations:
                    result = op_func()
                    print(f"   {op_name}: {'✅' if result else '❌'}")
                    time.sleep(0.001)  # Минимальная пауза
                    
            except Exception as e:
                print(f"   💥 КРАШ на попытке {attempt + 1}! {e}")
                return True
                
        return False
    
    def analyze_timing_differences(self):
        """Анализ временных характеристик"""
        print("\n⏱️ АНАЛИЗ ВРЕМЕННЫХ ХАРАКТЕРИСТИК")
        print("="*60)
        
        # CrashReproducer может работать с другими таймингами
        timing_scenarios = [
            ("Без задержек", 0),
            ("Короткие задержки", 0.001), 
            ("Средние задержки", 0.01),
            ("Длинные задержки", 0.1),
        ]
        
        for scenario, delay in timing_scenarios:
            print(f"\n⏰ {scenario}: ")
            
            try:
                start_time = time.time()
                
                # Выполняем ту же последовательность что и CrashReproducer
                operations = [
                    self.memory.write_memory(0x7000, b'\x01\x02\x03\x04'),
                    self.memory.write_memory(0x7100, bytes(range(64))),
                    self.memory.write_memory(0x7200, bytes([0xAA] * 128)),
                ]
                
                for op in operations:
                    if delay > 0:
                        time.sleep(delay)
                
                total_time = time.time() - start_time
                print(f"   ✅ Успешно за {total_time:.3f} сек")
                
            except Exception as e:
                print(f"   💥 КРАШ! {e}")
                return True
                
        return False

    def run_comprehensive_analysis(self):
        """Комплексный анализ различий"""
        print("🚀 АНАЛИЗ РАЗЛИЧИЙ МЕЖДУ ТЕСТАМИ")
        print("💡 Почему CrashReproducer крашит, а другие тесты - нет?")
        print(f"📅 Время начала: {datetime.now().strftime('%Y-%m-%d %H:%M:%S')}")
        
        self.analyze_crash_reproducer_behavior()
        
        crash_occurred = False
        
        try:
            if self.test_crash_reproducer_exact_sequence():
                crash_occurred = True
                print("\n🎯 КРАШ воспроизведен точной последовательностью!")
            
            if not crash_occurred:
                self.test_isolated_operations()
            
            if not crash_occurred and self.test_sequential_stress():
                crash_occurred = True
                print("\n🎯 КРАШ воспроизведен стресс-тестом!")
                
            if not crash_occurred and self.analyze_timing_differences():
                crash_occurred = True
                print("\n🎯 КРАШ воспроизведен анализом таймингов!")
            
            if not crash_occurred:
                print("\n🤔 Не удалось воспроизвести краш в изолированных условиях")
                print("💡 Возможные причины:")
                print("   - Комбинация определенных операций")
                print("   - Специфическое состояние системы")
                print("   - Временные условия (гонки)")
                print("   - Накопление ошибок в буфере")
                
        except Exception as e:
            print(f"\n💥 Неожиданная ошибка: {e}")
        finally:
            self.transport.close()
            print(f"\n🏁 Время окончания: {datetime.now().strftime('%Y-%m-%d %H:%M:%S')}")

def main():
    analyzer = DifferenceAnalyzer()
    analyzer.run_comprehensive_analysis()

if __name__ == "__main__":
    main()