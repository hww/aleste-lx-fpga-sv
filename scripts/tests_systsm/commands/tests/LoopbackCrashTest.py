#!/usr/bin/env python3
"""
Правильный тест для loopback - без команд записи в память!
"""
import sys
import os
import time
import serial
from datetime import datetime

sys.path.append(os.path.join(os.path.dirname(__file__), '../..'))

from core.transport import FPGATransport

class LoopbackCrashTest:
    def __init__(self):
        self.transport = FPGATransport()
        
    def test_simple_loopback(self):
        """Простой loopback тест - отправляем и получаем те же данные"""
        print("🔌 ПРОСТОЙ LOOPBACK ТЕСТ")
        
        test_cases = [
            ("Короткие данные", b'HELLO'),
            ("Средние данные", b'TEST_DATA_' * 10),  # 100 байт
            ("Длинные данные", bytes([i % 256 for i in range(256)])),  # 256 байт
            ("Специальные байты", b'\x00\xFF\xAA\x55\x80\x7F'),
        ]
        
        for name, test_data in test_cases:
            print(f"\n📤 {name}: {len(test_data)} байт")
            
            try:
                # Очищаем буферы
                self.transport.serial.reset_input_buffer()
                self.transport.serial.reset_output_buffer()
                
                # Отправляем
                bytes_written = self.transport.serial.write(test_data)
                self.transport.serial.flush()
                
                # Читаем обратно
                received = self.transport.serial.read(len(test_data))
                
                if received == test_data:
                    print(f"   ✅ Успех: отправлено {bytes_written}, получено {len(received)}")
                else:
                    print(f"   ❌ Ошибка: ожидалось {test_data.hex()}, получено {received.hex() if received else 'nothing'}")
                    
            except Exception as e:
                print(f"   💥 КРАШ! {e}")
                return True
                
        return False
    
    def test_rapid_loopback(self):
        """Быстрый loopback - много пакетов подряд"""
        print("\n⚡ БЫСТРЫЙ LOOPBACK ТЕСТ")
        
        packet_size = 100
        packet_count = 0
        
        try:
            for i in range(200):  # 200 пакетов
                packet_count = i + 1
                test_data = bytes([(i + j) % 256 for j in range(packet_size)])
                
                self.transport.serial.reset_input_buffer()
                self.transport.serial.write(test_data)
                self.transport.serial.flush()
                
                received = self.transport.serial.read(packet_size)
                
                if received != test_data:
                    print(f"   ❌ Ошибка на пакете {packet_count}")
                    break
                    
                if packet_count % 50 == 0:
                    print(f"   📦 Отправлено {packet_count} пакетов")
                    
            else:
                print(f"   ✅ Все {packet_count} пакетов успешно")
                
        except Exception as e:
            print(f"   💥 КРАШ на пакете {packet_count}! {e}")
            return True
            
        return False
    
    def test_protocol_commands_loopback(self):
        """Тестируем команды протокола как простые байты"""
        print("\n🛠️ ТЕСТ КОМАНД ПРОТОКОЛА КАК БАЙТОВ")
        
        # Команды протокола - отправляем их как обычные байты
        commands = [
            (0x00, "NOP"),
            (0x10, "Memory Read 1b"),
            (0x11, "Memory Read 2b"), 
            (0x12, "Memory Read 4b"),
            (0x21, "Memory Write 1b"),
            (0x22, "Memory Write 2b"),
            (0x40, "Status"),
            (0x50, "Echo"),
        ]
        
        for cmd, description in commands:
            print(f"\n⚡ {description} (0x{cmd:02X}): ", end="")
            
            try:
                # Отправляем команду как обычный байт
                self.transport.serial.write(bytes([cmd]))
                self.transport.serial.flush()
                
                # В loopback должны получить тот же байт обратно
                time.sleep(0.01)
                response = self.transport.serial.read(1)
                
                if response == bytes([cmd]):
                    print("✅ Успех")
                else:
                    print(f"❌ Ошибка: получено {response.hex() if response else 'nothing'}")
                    
            except Exception as e:
                print(f"💥 КРАШ! {e}")
                return True
                
        return False
    
    def test_crash_conditions(self):
        """Ищем условия, вызывающие краш"""
        print("\n💥 ПОИСК УСЛОВИЙ КРАША")
        
        # Подозрительные паттерны, которые могут вызвать краш
        suspicious_patterns = [
            (b'\x00' * 128, "Все нули"),
            (b'\xFF' * 128, "Все единицы"),
            (b'\xAA' * 128, "Чередование 1010"), 
            (b'\x55' * 128, "Чередование 0101"),
            (bytes([0x80] * 128), "Старший бит"),
            (bytes([0x7F] * 128), "Максимальное положительное"),
            (b'\x00\xFF' * 64, "Резкая смена 00/FF"),
        ]
        
        for pattern, description in suspicious_patterns:
            print(f"\n🔍 {description}: {len(pattern)} байт")
            
            try:
                self.transport.serial.reset_input_buffer()
                self.transport.serial.write(pattern)
                self.transport.serial.flush()
                
                received = self.transport.serial.read(len(pattern))
                
                if received == pattern:
                    print("   ✅ Успех")
                else:
                    print(f"   ❌ Ошибка данных")
                    
            except Exception as e:
                print(f"   💥 КРАШ! {e}")
                return True
                
        return False

    def run_loopback_tests(self):
        """Запуск всех loopback тестов"""
        print("🚀 ТЕСТИРОВАНИЕ LOOPBACK")
        print("💡 Система: простой loopback, команды записи в память НЕ ДОЛЖНЫ работать!")
        print(f"📅 Время начала: {datetime.now().strftime('%Y-%m-%d %H:%M:%S')}")
        
        crash_occurred = False
        
        try:
            if self.test_simple_loopback():
                crash_occurred = True
                print("\n🎯 Краш в простом loopback!")
            
            if not crash_occurred and self.test_rapid_loopback():
                crash_occurred = True  
                print("\n🎯 Краш в быстром loopback!")
                
            if not crash_occurred and self.test_protocol_commands_loopback():
                crash_occurred = True
                print("\n🎯 Краш при отправке команд протокола!")
                
            if not crash_occurred and self.test_crash_conditions():
                crash_occurred = True
                print("\n🎯 Краш при специфических паттернах!")
            
            if not crash_occurred:
                print("\n✅ Loopback стабилен - краш не воспроизведен")
                print("💡 Краш может зависеть от:")
                print("   - Конкретной последовательности операций")
                print("   - Состояния системы до теста")
                print("   - Временных условий")
                
        except Exception as e:
            print(f"\n💥 Критическая ошибка: {e}")
        finally:
            self.transport.close()
            print(f"\n🏁 Время окончания: {datetime.now().strftime('%Y-%m-%d %H:%M:%S')}")

def main():
    # Запускаем несколько раз - краш может быть не детерминированным
    for attempt in range(5):
        print(f"\n{'='*60}")
        print(f"ПОПЫТКА {attempt + 1}/5")
        print(f"{'='*60}")
        
        tester = LoopbackCrashTest()
        if tester.run_loopback_tests():
            print(f"🎯 Краш произошел на попытке {attempt + 1}!")
            break
        time.sleep(1)
    else:
        print("\n✅ За 5 попыток краш не произошел")

if __name__ == "__main__":
    main()