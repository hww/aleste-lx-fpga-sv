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

def decode_status(status_byte: int) -> dict:
    """Декодировать байт статуса в читаемые флаги"""
    return {
        'cpu_halted':    bool(status_byte & 0x01),
        'system_reset':  bool(status_byte & 0x02),
        'hdmi_vsync':    bool(status_byte & 0x04),
        'sd_card_ins':   bool(status_byte & 0x08),
        'reset_button':  bool(status_byte & 0x10),
        'pll_locked':    bool(status_byte & 0x20),
        'sdram_calib':   bool(status_byte & 0x40),
        'fpga_overload': bool(status_byte & 0x80),
    }

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
        return 'x' * 8  # Все биты неизвестны
    
    stable_bits = history[0]
    changing_bits = 0
    
    for status in history[1:]:
        changing_bits |= (stable_bits ^ status)
    
    # Формируем маску: '0' - стабильный 0, '1' - стабильный 1, 'x' - меняющийся
    mask = []
    for i in range(7, -1, -1):
        bit_mask = 1 << i
        if changing_bits & bit_mask:
            mask.append('x')
        else:
            stable_value = (history[0] >> i) & 1
            mask.append(str(stable_value))
    
    return ''.join(mask)

def print_status_header():
    """Вывести заголовок таблицы статуса"""
    print("Time    | Status | Bits     | CPU | RST | VSYNC | SD | BTN | PLL | SDRAM | OVLD")
    print("--------|--------|----------|-----|-----|-------|----|-----|-----|-------|-----")

def print_status_line(timestamp: float, status_byte: int, status_dict: dict):
    """Вывести одну строку статуса"""
    time_str = f"{timestamp:6.1f}"
    status_hex = f"0x{status_byte:02X}"
    bits_str = format_status_bits(status_byte)
    
    print(f"{time_str}s | {status_hex:^6} | {bits_str} | "
          f"{'✓' if status_dict['cpu_halted'] else '✗':^3} | "
          f"{'✓' if status_dict['system_reset'] else '✗':^3} | "
          f"{'✓' if status_dict['hdmi_vsync'] else '✗':^5} | "
          f"{'✓' if status_dict['sd_card_ins'] else '✗':^2} | "
          f"{'✓' if status_dict['reset_button'] else '✗':^3} | "
          f"{'✓' if status_dict['pll_locked'] else '✗':^3} | "
          f"{'✓' if status_dict['sdram_calib'] else '✗':^5} | "
          f"{'✓' if status_dict['fpga_overload'] else '✗':^4}")

def main():
    parser = argparse.ArgumentParser(description='FPGA Status Monitor')
    parser.add_argument('-n', '--count', type=int, default=1, 
                       help='Number of status reads (0 for continuous)')
    parser.add_argument('-t', '--delay', type=float, default=1.0,
                       help='Delay between reads in seconds')
    parser.add_argument('--checksum', action='store_true',
                       help='Calculate checksum of status history')
    parser.add_argument('--no-header', action='store_true',
                       help='Don\'t show table header')
    
    args = parser.parse_args()
    
    if args.count < 0:
        print("❌ Error: Count must be >= 0")
        return 1
    
    if args.delay < 0.01:
        print("❌ Error: Delay must be >= 0.01 seconds")
        return 1
    
    fpga = FPGAMemory()
    status_history = []
    
    try:
        print(f"🚀 Starting status monitoring (count: {args.count}, delay: {args.delay}s)")
        
        if not args.no_header:
            print_status_header()
        
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
            status_dict = decode_status(status_byte)
            
            # Вывод текущего статуса
            print_status_line(current_time, status_byte, status_dict)
            
            read_count += 1
            
            # Проверка условия завершения
            if args.count > 0 and read_count >= args.count:
                break
            
            # Задержка перед следующим чтением
            if args.count != 1:  # Не ждем после последнего чтения
                time.sleep(args.delay)
        
        # Вывод итоговой информации
        print("\n" + "="*50)
        print(f"📊 Summary: {read_count} status reads")
        
        if len(status_history) > 0:
            unique_statuses = len(set(status_history))
            print(f"🔢 Unique status values: {unique_statuses}")
            
            # Маска изменяющихся битов
            changed_mask = get_changed_bits_mask(status_history)
            print(f"🎭 Changing bits mask: {changed_mask}")
            
            # Контрольная сумма если нужно
            if args.checksum:
                checksum = calculate_checksum_history(status_history)
                print(f"🔐 Status history checksum: {checksum}")
            
            # Статистика по битам
            print(f"📈 Status range: 0x{min(status_history):02X} - 0x{max(status_history):02X}")
        
    except KeyboardInterrupt:
        print("\n⏹️  Monitoring interrupted by user")
    except Exception as e:
        print(f"❌ Error: {e}")
        return 1
    finally:
        fpga.close()
    
    return 0

if __name__ == "__main__":
    sys.exit(main())