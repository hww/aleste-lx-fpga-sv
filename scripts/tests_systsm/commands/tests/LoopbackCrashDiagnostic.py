#!/usr/bin/env python3
"""
Тест для диагностики краша на loopback (без FPGA!)
"""
import sys
import os
import time
import serial
from datetime import datetime

sys.path.append(os.path.join(os.path.dirname(__file__), '../..'))

from core.transport import FPGATransport

class LoopbackCrashDiagnostic:
    def __init__(self):
        self.transport = FPGATransport()
        self.crash_count = 0
        
    def test_raw_loopback(self, data_size=100, num_packets=10):
        """Сырой loopback тест - минуя все протоколы"""
        print(f"\n🔌 СЫРОЙ LOOPBACK ТЕСТ: {data_size} байт × {num_packets} пакетов")
        
        test_data = bytes([i % 256 for i in range(data_size)])
        
        for i in range(num_packets):
            print(f"📦 Пакет {i+1}/{num_packets}: ", end="", flush=True)
            
            try:
                # Очищаем буферы
                self.transport.serial.reset_input_buffer()
                self.transport.serial.reset_output_buffer()
                
                # Отправляем данные напрямую
                bytes_written = self.transport.serial.write(test_data)
                self.transport.serial.flush()
                
                # Читаем обратно
                received = self.transport.serial.read(data_size)
                
                if len(received) == data_size and received == test_data:
                    print("✅ Успех")
                else:
                    print(f"❌ Ошибка: отправлено {bytes_written}, получено {len(received)}")
                    
            except Exception as e:
                self.crash_count += 1
                print(f"💥 КРАШ! {e}")
                return False
                
            time.sleep(0.01)  # Минимальная пауза
            
        return True
    
    def test_crash_conditions(self):
        """Тестируем условия, вызывающие краш"""
        print("\n" + "="*60)
        print("💥 ТЕСТ УСЛОВИЙ КРАША")
        print("="*60)
        
        # Тестируем разные размеры пакетов
        sizes = [1, 16, 64, 128, 256, 512, 1024]
        
        for size in sizes:
            print(f"\n📏 Размер пакета: {size} байт")
            
            if not self.test_raw_loopback(size, 5):
                print(f"🎯 КРАШ ПРОИЗОШЕЛ при размере {size} байт!")
                break
            else:
                print("✅ Стабильно")
    
    def test_protocol_commands_crash(self):
        """Тестируем, крашат ли команды протокола"""
        print("\n" + "="*60)
        print("🛠️ ТЕСТ КОМАНД ПРОТОКОЛА")
        print("="*60)
        
        # Пробуем разные команды
        test_commands = [
            (0x00, "NOP"),
            (0x10, "Memory Read 1b"),
            (0x11, "Memory Read 2b"), 
            (0x12, "Memory Read 4b"),
            (0x21, "Memory Write 1b"),
            (0x22, "Memory Write 2b"),
            (0x40, "Status"),
            (0x50, "Echo"),
        ]
        
        for cmd, description in test_commands:
            print(f"\n⚡ {description} (0x{cmd:02X}): ", end="", flush=True)
            
            try:
                # Отправляем команду напрямую
                self.transport.serial.write(bytes([cmd]))
                self.transport.serial.flush()
                
                # Пытаемся прочитать ответ
                time.sleep(0.01)
                response = self.transport.serial.read(16)
                
                print(f"✅ Ответ: {response.hex() if response else 'нет ответа'}")
                
            except Exception as e:
                self.crash_count += 1
                print(f"💥 КРАШ! {e}")
    
    def test_baudrate_stress(self):
        """Тест на разных скоростях и с разными таймингами"""
        print("\n" + "="*60)
        print("⏱️ ТЕСТ ТАЙМИНГОВ И СКОРОСТЕЙ")
        print("="*60)
        
        # Тест с разными задержками
        delays = [0, 0.001, 0.01, 0.1]
        
        for delay in delays:
            print(f"\n⏰ Задержка {delay:.3f}с: ", end="", flush=True)
            
            try:
                test_data = b'TEST' * 10  # 40 байт
                
                self.transport.serial.reset_input_buffer()
                self.transport.serial.write(test_data)
                self.transport.serial.flush()
                
                if delay > 0:
                    time.sleep(delay)
                
                received = self.transport.serial.read(len(test_data))
                
                if received == test_data:
                    print("✅ Успех")
                else:
                    print(f"❌ Ошибка")
                    
            except Exception as e:
                self.crash_count += 1
                print(f"💥 КРАШ! {e}")
    
    def run_diagnosis(self):
        """Запуск полной диагностики"""
        print("🚀 ДИАГНОСТИКА КРАША НА LOOPBACK")
        print("💡 Система: просто loopback, без FPGA!")
        print(f"📅 Время начала: {datetime.now().strftime('%Y-%m-%d %H:%M:%S')}")
        
        try:
            self.test_crash_conditions()
            self.test_protocol_commands_crash() 
            self.test_baudrate_stress()
            
            print(f"\n" + "="*60)
            print("📊 РЕЗУЛЬТАТЫ ДИАГНОСТИКИ")
            print("="*60)
            print(f"💥 Всего крашей: {self.crash_count}")
            
            if self.crash_count > 0:
                print("❌ СИСТЕМА НЕСТАБИЛЬНА - крашится на loopback!")
                print("\n🔧 ВОЗМОЖНЫЕ ПРИЧИНЫ:")
                print("   - Проблемы с драйверами USB-UART")
                print("   - Аппаратные проблемы с преобразователем")
                print("   - Конфликты прерываний")
                print("   - Проблемы с питанием")
            else:
                print("✅ Система стабильна на loopback")
                
        except Exception as e:
            print(f"💥 Критическая ошибка диагностики: {e}")
        finally:
            self.transport.close()
            print(f"\n🏁 Время окончания: {datetime.now().strftime('%Y-%m-%d %H:%M:%S')}")

def main():
    diagnostic = LoopbackCrashDiagnostic()
    diagnostic.run_diagnosis()

if __name__ == "__main__":
    main()