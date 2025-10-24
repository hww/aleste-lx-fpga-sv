#!/usr/bin/env python3
"""
Поиск точных условий краша в loopback (1.5 запуска на краш)
"""
import sys
import os
import time
import random
from datetime import datetime

sys.path.append(os.path.join(os.path.dirname(__file__), '../..'))

from core.transport import FPGATransport

class PreciseCrashFinder:
    def __init__(self):
        self.crash_count = 0
        self.total_tests = 0
        
    def test_with_parameters(self, packet_size, num_packets, inter_packet_delay, inter_byte_delay):
        """Тест с конкретными параметрами"""
        self.total_tests += 1
        transport = FPGATransport()
        
        print(f"🔧 Параметры: size={packet_size}, packets={num_packets}, "
              f"pkt_delay={inter_packet_delay:.4f}, byte_delay={inter_byte_delay:.6f}")
        
        try:
            for i in range(num_packets):
                # Генерируем тестовые данные
                test_data = bytes([random.randint(0, 255) for _ in range(packet_size)])
                
                # Очищаем буферы
                transport.serial.reset_input_buffer()
                transport.serial.reset_output_buffer()
                
                # Отправка с задержкой между байтами
                for byte in test_data:
                    transport.serial.write(bytes([byte]))
                    transport.serial.flush()
                    if inter_byte_delay > 0:
                        time.sleep(inter_byte_delay)
                
                # Задержка между пакетами
                if inter_packet_delay > 0:
                    time.sleep(inter_packet_delay)
                
                # Чтение ответа
                received = transport.serial.read(packet_size)
                
                if len(received) != packet_size:
                    print(f"   ❌ Пакет {i+1}: получено {len(received)} вместо {packet_size}")
                    transport.close()
                    return False
                    
                if received != test_data:
                    print(f"   ❌ Пакет {i+1}: данные не совпали")
                    transport.close()
                    return False
            
            transport.close()
            print(f"   ✅ Успешно отправлено {num_packets} пакетов")
            return True
            
        except Exception as e:
            self.crash_count += 1
            print(f"   💥 КРАШ! {e}")
            transport.close()
            return False
    
    def find_crash_conditions(self):
        """Поиск условий, вызывающих краш"""
        print("🎯 ПОИСК УСЛОВИЙ КРАША (1.5 запуска на краш)")
        print("="*60)
        
        # Систематически тестируем разные комбинации параметров
        test_matrix = [
            # (packet_size, num_packets, inter_packet_delay, inter_byte_delay)
            
            # Тест 1: Разные размеры пакетов
            (64, 100, 0.001, 0),
            (128, 100, 0.001, 0), 
            (256, 100, 0.001, 0),
            (512, 50, 0.001, 0),
            (1024, 25, 0.001, 0),
            
            # Тест 2: Разное количество пакетов
            (100, 10, 0.001, 0),
            (100, 50, 0.001, 0),
            (100, 100, 0.001, 0),
            (100, 200, 0.001, 0),
            (100, 500, 0.001, 0),
            
            # Тест 3: Разные задержки между пакетами
            (100, 100, 0, 0),
            (100, 100, 0.0001, 0),
            (100, 100, 0.001, 0),
            (100, 100, 0.01, 0),
            (100, 100, 0.1, 0),
            
            # Тест 4: Задержки между байтами
            (100, 100, 0.001, 0.000001),
            (100, 100, 0.001, 0.00001),
            (100, 100, 0.001, 0.0001),
            (100, 100, 0.001, 0.001),
            
            # Тест 5: Критические комбинации
            (128, 200, 0, 0),  # Быстрая отправка максимальных пакетов
            (256, 100, 0.0001, 0),  # Минимальная задержка между большими пакетами
            (512, 50, 0, 0.000001),  # Большие пакеты с минимальной задержкой между байтами
        ]
        
        crash_conditions = []
        
        for i, params in enumerate(test_matrix):
            print(f"\n🧪 Тест {i+1}/{len(test_matrix)}:")
            
            success = self.test_with_parameters(*params)
            
            if not success:
                crash_conditions.append(params)
                print(f"   🎯 НАЙДЕНО УСЛОВИЕ КРАША: {params}")
            
            # Пауза между тестами
            time.sleep(0.5)
        
        return crash_conditions
    
    def stress_test_condition(self, condition, multiplier=1):
        """Стресс-тест конкретного условия краша"""
        print(f"\n⚡ СТРЕСС-ТЕСТ УСЛОВИЯ КРАША (×{multiplier}): {condition}")
        
        packet_size, num_packets, pkt_delay, byte_delay = condition
        
        # Увеличиваем интенсивность
        stress_params = (
            packet_size,
            num_packets * multiplier, 
            pkt_delay / multiplier if pkt_delay > 0 else 0,
            byte_delay / multiplier if byte_delay > 0 else 0
        )
        
        return self.test_with_parameters(*stress_params)
    
    def run_crash_analysis(self):
        """Запуск полного анализа условий краша"""
        print("🚀 АНАЛИЗ УСЛОВИЙ КРАША В LOOPBACK")
        print("💡 Статистика: ~1.5 запуска на краш")
        print(f"📅 Время начала: {datetime.now().strftime('%Y-%m-%d %H:%M:%S')}")
        
        # Этап 1: Поиск условий краша
        crash_conditions = self.find_crash_conditions()
        
        print(f"\n{'='*60}")
        print("📊 РЕЗУЛЬТАТЫ ПОИСКА:")
        print(f"   Всего тестов: {self.total_tests}")
        print(f"   Крашей: {self.crash_count}")
        print(f"   Условий краша найдено: {len(crash_conditions)}")
        
        if crash_conditions:
            print("\n🎯 НАЙДЕННЫЕ УСЛОВИЯ КРАША:")
            for i, condition in enumerate(crash_conditions):
                print(f"   {i+1}. {condition}")
            
            # Этап 2: Проверка надежности условий краша
            print(f"\n{'='*60}")
            print("🔍 ПРОВЕРКА НАДЕЖНОСТИ УСЛОВИЙ КРАША:")
            
            reliable_conditions = []
            for condition in crash_conditions:
                print(f"\n🔬 Проверка условия: {condition}")
                
                # Запускаем 3 раза для проверки воспроизводимости
                crashes_in_row = 0
                for attempt in range(3):
                    if not self.test_with_parameters(*condition):
                        crashes_in_row += 1
                    time.sleep(0.5)
                
                if crashes_in_row >= 2:  # Краш в 2+ из 3 попыток
                    reliable_conditions.append(condition)
                    print(f"   ✅ Надежное условие краша ({crashes_in_row}/3)")
                else:
                    print(f"   ❌ Ненадежное условие краша ({crashes_in_row}/3)")
            
            # Этап 3: Анализ надежных условий
            if reliable_conditions:
                print(f"\n{'='*60}")
                print("📈 АНАЛИЗ НАДЕЖНЫХ УСЛОВИЙ КРАША:")
                
                for condition in reliable_conditions:
                    packet_size, num_packets, pkt_delay, byte_delay = condition
                    
                    print(f"\n📋 Условие: {condition}")
                    print(f"   - Размер пакета: {packet_size} байт")
                    print(f"   - Количество пакетов: {num_packets}")
                    print(f"   - Задержка между пакетами: {pkt_delay:.6f} сек")
                    print(f"   - Задержка между байтами: {byte_delay:.6f} сек")
                    
                    # Анализ паттерна
                    if pkt_delay == 0 and byte_delay == 0:
                        print("   💡 Паттерн: максимальная скорость передачи")
                    elif packet_size >= 256:
                        print("   💡 Паттерн: большие пакеты")
                    elif num_packets >= 200:
                        print("   💡 Паттерн: много пакетов")
                    elif byte_delay > 0:
                        print("   💡 Паттерн: медленная отправка байтов")
            
            else:
                print("\n❌ Надежных условий краша не найдено")
                print("💡 Краш может быть случайным или зависеть от:")
                print("   - Состояния системы")
                print("   - Внешних факторов")
                print("   - Накопления ошибок")
        
        else:
            print("\n❌ Условия краша не найдены в тестовой матрице")
            print("💡 Краш может зависеть от других факторов")
        
        print(f"\n🏁 Время окончания: {datetime.now().strftime('%Y-%m-%d %H:%M:%S')}")
        print(f"📈 Итоговая статистика: {self.crash_count} крашей / {self.total_tests} тестов")

def main():
    finder = PreciseCrashFinder()
    finder.run_crash_analysis()

if __name__ == "__main__":
    main()