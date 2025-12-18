#!/usr/bin/env python3
"""
Парсер состояния FPGA - ОБНОВЛЕН ДЛЯ НОВОЙ СТРУКТУРЫ
"""
from typing import Dict, Any

class FPGAStateParser:
    
    @staticmethod
    def parse_state_response(data: bytes) -> Dict[str, Any]:
        """
        Разобрать ответ команды состояния (1 байт)
        
        НОВЫЙ формат (один байт):
        Бит 7: success   - успешное выполнение
        Бит 6: bad_cmd   - неверная команда
        Бит 5: bus_err   - ошибка шины
        Бит 4: wdt_err   - ошибка watchdog
        Бит 3:0 token    - токен (0-15)
        """
        if len(data) != 1:
            return None
        
        status_byte = data[0]
        
        success = (status_byte >> 7) & 0x1
        bad_cmd = (status_byte >> 6) & 0x1
        bus_err = (status_byte >> 5) & 0x1
        wdt_err = (status_byte >> 4) & 0x1
        token = status_byte & 0xF  # 4 бита токена (0-15)
        
        return {
            'status_byte': status_byte,  # сохраняем оригинальный байт
            'success': success,
            'bad_cmd': bad_cmd,
            'bus_err': bus_err,
            'wdt_err': wdt_err,
            'token': token,
        }

    @staticmethod
    def format_state_line(state: Dict[str, Any]) -> str:
        """Форматировать состояние в одну строку"""
        if not state:
            return "❌ Invalid state"
        
        # Hex представление байта
        hex_str = f"0x{state['status_byte']:02X}"
        
        # Статус выполнения
        status = "SUCCESS" if state['success'] else "Ready"
        
        # Ошибки
        errors = []
        if state['bad_cmd']: errors.append("BAD_CMD")
        if state['bus_err']: errors.append("BUS_ERR")
        if state['wdt_err']: errors.append("WDT_ERR")
        error_str = "|".join(errors) if errors else "OL"
        
        # Токен
        token_str = f"TOKEN:{state['token']}"
        
        return f"State: {hex_str} | Status: {status} | Errors: {error_str} | {token_str}"

    # Совместимость со старыми названиями методов
    @staticmethod
    def parse_hang_state(data: bytes) -> Dict[str, Any]:
        return FPGAStateParser.parse_state_response(data)

    @staticmethod
    def format_hang_state_line(state: Dict[str, Any]) -> str:
        return FPGAStateParser.format_state_line(state)


# Пример использования:
if __name__ == "__main__":
    # Пример байта: 0xF1 = 11110001
    # Бит 7: 1 = success (но будет FAIL так как есть ошибки?)
    # Бит 6: 1 = bad_cmd
    # Бит 5: 1 = bus_err  
    # Бит 4: 1 = wdt_err
    # Бит 3:0: 0001 = token 1
    
    # Для вашего примера: State: 0xF1 | Status: FAIL | Errors: BUS_ERR | TOKEN:2
    # 0xF1 = 11110001, token должен быть 1, а не 2
    # Для token=2 и BUS_ERR: 10100010 = 0xA2
    
    test_bytes = [
        0xA2,  # 10100010 = FAIL, BAD_CMD=0, BUS_ERR=1, WDT_ERR=0, TOKEN=2
        0x80,  # 10000000 = SUCCESS, no errors, TOKEN=0
        0xE3,  # 11100011 = FAIL, all errors, TOKEN=3
        0x45,  # 01000101 = FAIL, BUS_ERR=1, TOKEN=5
    ]
    
    for byte_val in test_bytes:
        data = bytes([byte_val])
        state = FPGAStateParser.parse_state_response(data)
        print(FPGAStateParser.format_state_line(state))