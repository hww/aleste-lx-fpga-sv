#!/usr/bin/env python3
"""
Мониторинг статуса FPGA в реальном времени
"""
import sys
import os
import time
import argparse
sys.path.append(os.path.join(os.path.dirname(__file__), '../..'))

from core.memory import FPGAMemory

def format_status_bits(status_byte: int) -> str:
    """Форматировать статус в виде битовой строки"""
    bits = []
    for i in range(7, -1, -1):
        bit = (status_byte >> i) & 1
        bits.append(str(bit))
    return ''.join(bits)

def calculate_checksum_history(history: list) -> str:
    """Рассчитать контрольную сумму истории статусов"""
    import hashlib
    data = bytes(history)
    return hashlib.md5(data).hexdigest()[:8]

def get_changed_bits_mask(history: list) -> str:
    """Получить маску изменяющихся битов"""
    if len(history) < 2:
        return '0' * 8  # Нет изменений при одном чтении
    
    stable_bits = history[0]
    changing_bits = 0
    
    for status in history[1:]:
        changing_bits |= (stable_bits ^ status)
    
    # Формируем маску: '0' - не менялся, '1' - менялся
    mask = []
    for i in range(7, -1, -1):
        bit_mask = 1 << i
        if changing_bits & bit_mask:
            mask.append('1')
        else:
            mask.append('0')
    
    return ''.join(mask)

def get_current_change(current_status: int, prev_status: int) -> str:
    """Получить маску изменений между текущим и предыдущим статусом"""
    if prev_status is None:
        return '0' * 8  # Нет изменений для первого чтения
    
    changed_bits = current_status ^ prev_status
    
    # Формируем маску: '0' - не изменился, '1' - изменился
    mask = []
    for i in range(7, -1, -1):
        bit_mask = 1 << i
        if changed_bits & bit_mask:
            mask.append('1')
        else:
            mask.append('0')
    
    return ''.join(mask)

def main():
    parser = argparse.ArgumentParser(description='FPGA Status Monitor')
    parser.add_argument('-n', '--count', type=int, default=1, 
                       help='Number of status reads (0 for continuous)')
    parser.add_argument('-t', '--delay', type=float, default=1.0,
                       help='Delay between reads in seconds')
    parser.add_argument('--checksum', action='store_true',
                       help='Calculate checksum of status history')
    
    args = parser.parse_args()
    
    if args.count < 0:
        print("❌ Error: Count must be >= 0")
        return 1
    
    if args.delay < 0.01:
        print("❌ Error: Delay must be >= 0.01 seconds")
        return 1
    
    fpga = FPGAMemory()
    status_history = []
    prev_status = None
    
    try:
        print(f"Monitoring status (count: {args.count}, delay: {args.delay}s)")
        print("Time    | Hex  | Binary   | Changed ")
        print("--------|------|----------|---------")
        
        start_time = time.time()
        read_count = 0
        
        while True:
            # Чтение статуса
            status_byte = fpga.get_status()
            
            if status_byte is None:
                print("❌ Failed to read status")
                break
            
            status_history.append(status_byte)
            current_time = time.time() - start_time
            
            # Вывод текущего статуса
            time_str = f"{current_time:6.1f}"
            status_hex = f"0x{status_byte:02X}"
            bits_str = format_status_bits(status_byte)
            
            # Маска изменений с предыдущим чтением
            changed_str = get_current_change(status_byte, prev_status)
            prev_status = status_byte
            
            print(f"{time_str}s | {status_hex} | {bits_str} | {changed_str}")
            
            read_count += 1
            
            # Проверка условия завершения
            if args.count > 0 and read_count >= args.count:
                break
            
            # Задержка перед следующим чтением
            time.sleep(args.delay)
        
        # Вывод итоговой информации
        print("\n" + "="*40)
        print(f"Reads: {read_count}")
        
        if len(status_history) > 0:
            unique_statuses = len(set(status_history))
            print(f"Unique values: {unique_statuses}")
            
            # Финальная маска изменяющихся битов за всю историю
            final_mask = get_changed_bits_mask(status_history)
            print(f"Bits changed during session: {final_mask}")
            
            # Контрольная сумма если нужно
            if args.checksum:
                checksum = calculate_checksum_history(status_history)
                print(f"Checksum: {checksum}")
            
            # Статистика
            print(f"Range: 0x{min(status_history):02X} - 0x{max(status_history):02X}")
        
    except KeyboardInterrupt:
        print("\nMonitoring interrupted")
    except Exception as e:
        print(f"❌ Error: {e}")
        return 1
    finally:
        fpga.close()
    
    return 0

if __name__ == "__main__":
    sys.exit(main())