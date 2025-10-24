#!/usr/bin/env python3
"""
Точный репродуктор краша - имитация реальной утилиты записи
"""
import sys
import os
import time
import serial
from datetime import datetime

sys.path.append(os.path.join(os.path.dirname(__file__), '../..'))

from core.transport import FPGATransport
from core.memory import FPGAMemory

class ExactCrashReproducer:
    def __init__(self):
        self.transport = FPGATransport()
        self.memory = FPGAMemory()
        
    def reproduce_exact_usage_pattern(self):
        """Точное воспроизведение использования утилитой записи"""
        print("🎯 ТОЧНОЕ ВОСПРОИЗВЕДЕНИЕ РАБОТЫ УТИЛИТЫ")
        
        # Параметры как в реальном использовании
        test_cases = [
            # (address, data, description)
            (0x1000, b'\x01\x02\x03\x04', "Small data"),
            (0x2000, bytes(range(64)), "64 bytes"), 
            (0x3000, bytes([0xAA] * 128), "128 bytes full"),
            (0x4000, bytes([i % 256 for i in range(256)]), "256 bytes"),
            (0x5000, bytes([0x55] * 512), "512 bytes"),
        ]
        
        for address, data, description in test_cases:
            print(f"\n📝 {description} -> 0x{address:04X}")
            print(f"   Размер: {len(data)} байт")
            
            try:
                # ТОЧНО как в утилите - используем write_memory
                success = self.memory.write_memory(address, data)
                print(f"   Результат записи: {success}")
                
                if not success:
                    print("   ❌ Запись не удалась (но нет краша)")
                
                # Пауза как между командами в утилите
                time.sleep(0.1)
                
            except Exception as e:
                print(f"   💥 КРАШ! {e}")
                return True  # Краш произошел
                
        return False  # Краша не было
    
    def test_rapid_sequence(self):
        """Быстрая последовательность команд как при реальной работе"""
        print("\n⚡ БЫСТРАЯ ПОСЛЕДОВАТЕЛЬНОСТЬ КОМАНД")
        
        # Имитируем интенсивную работу
        commands = []
        for i in range(50):
            address = 0x1000 + (i * 16)
            data = bytes([i] * 32)
            commands.append(('write', address, data))
            
            if i % 5 == 0:  # Каждую 5-ю команду - чтение
                commands.append(('read', address - 16, 32))
        
        for i, (cmd_type, address, data) in enumerate(commands):
            print(f"  Команда {i+1}/{len(commands)}: {cmd_type} 0x{address:04X}", end="")
            
            try:
                if cmd_type == 'write':
                    success = self.memory.write_memory(address, data)
                    print(f" -> {success}")
                else:
                    result = self.memory.read_memory(address, data)
                    print(f" -> {len(result) if result else 0} байт")
                    
                # Минимальная пауза
                time.sleep(0.001)
                
            except Exception as e:
                print(f" -> 💥 КРАШ! {e}")
                return True
                
        return False
    
    def test_mixed_operations(self):
        """Смешанные операции как в реальном приложении"""
        print("\n🔄 СМЕШАННЫЕ ОПЕРАЦИИ")
        
        operations = [
            lambda: print("   1. Status...") or self.memory.get_status(),
            lambda: print("   2. Write 16b...") or self.memory.write_memory(0x6000, bytes(range(16))),
            lambda: print("   3. Echo...") or self.memory.send_echo(1),
            lambda: print("   4. Write 64b...") or self.memory.write_memory(0x6100, bytes([0xAA] * 64)),
            lambda: print("   5. Read back...") or self.memory.read_memory(0x6000, 16),
            lambda: print("   6. Write 128b...") or self.memory.write_memory(0x6200, bytes([0x55] * 128)),
            lambda: print("   7. Status...") or self.memory.get_status(),
            lambda: print("   8. Large write 256b...") or self.memory.write_memory(0x6300, bytes([i % 256 for i in range(256)])),
        ]
        
        for i, op in enumerate(operations):
            try:
                result = op()
                print(f"      Результат: {result}")
                time.sleep(0.05)
            except Exception as e:
                print(f"      💥 КРАШ на операции {i+1}! {e}")
                return True
                
        return False
    
    def test_specific_crash_pattern(self):
        """Пытаемся найти специфический паттерн, вызывающий краш"""
        print("\n🔍 ПОИСК СПЕЦИФИЧЕСКОГО ПАТТЕРНА КРАША")
        
        # Подозрительные паттерны данных
        suspicious_patterns = [
            bytes([0x00] * 128),  # Все нули
            bytes([0xFF] * 128),  # Все единицы  
            bytes([0xAA] * 128),  # Чередование 1010
            bytes([0x55] * 128),  # Чередование 0101
            bytes([0x80] * 128),  # Старший бит
            bytes([0x7F] * 128),  # Максимальное положительное
            b'\x00' * 64 + b'\xFF' * 64,  # Резкая смена
        ]
        
        for i, pattern in enumerate(suspicious_patterns):
            print(f"  Паттерн {i+1}: {pattern[:8].hex()}...", end="")
            
            try:
                success = self.memory.write_memory(0x7000, pattern)
                print(f" -> {success}")
                time.sleep(0.1)
            except Exception as e:
                print(f" -> 💥 КРАШ! {e}")
                return True
                
        return False

    def run_exact_reproduction(self):
        """Запуск точного воспроизведения"""
        print("🚀 ЗАПУСК ТОЧНОГО ВОСПРОИЗВЕДЕНИЯ КРАША")
        print("💡 Цель: воспроизвести ТОЧНО те же условия, что и в утилите")
        print(f"📅 Время начала: {datetime.now().strftime('%Y-%m-%d %H:%M:%S')}")
        
        crash_occurred = False
        
        try:
            if self.reproduce_exact_usage_pattern():
                crash_occurred = True
                print("\n🎯 Краш воспроизведен в точном использовании!")
            
            if not crash_occurred and self.test_rapid_sequence():
                crash_occurred = True
                print("\n🎯 Краш воспроизведен в быстрой последовательности!")
                
            if not crash_occurred and self.test_mixed_operations():
                crash_occurred = True  
                print("\n🎯 Краш воспроизведен в смешанных операциях!")
                
            if not crash_occurred and self.test_specific_crash_pattern():
                crash_occurred = True
                print("\n🎯 Краш воспроизведен специфическим паттерном!")
            
            if not crash_occurred:
                print("\n✅ Не удалось воспроизвести краш в тестовых условиях")
                print("💡 Возможно, нужны особые условия:")
                print("   - Конкретный файл данных")
                print("   - Определенная последовательность команд") 
                print("   - Состояние системы до начала работы")
                
        except Exception as e:
            print(f"\n💥 Неожиданный краш: {e}")
        finally:
            self.transport.close()
            print(f"\n🏁 Время окончания: {datetime.now().strftime('%Y-%m-%d %H:%M:%S')}")

def main():
    # Запускаем несколько раз - иногда краш случается не с первого раза
    for attempt in range(3):
        print(f"\n{'='*60}")
        print(f"ПОПЫТКА {attempt + 1}/3")
        print(f"{'='*60}")
        
        reproducer = ExactCrashReproducer()
        reproducer.run_exact_reproduction()
        
        time.sleep(1)  # Пауза между попытками

if __name__ == "__main__":
    main()