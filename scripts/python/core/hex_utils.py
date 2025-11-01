#!/usr/bin/env python3
"""
Утилиты для работы с HEX форматами
"""
import binascii
from typing import List, Union

class HexUtils:
    @staticmethod
    def hex_to_bytes(hex_str: str) -> bytes:
        """Конвертировать hex строку в bytes"""
        hex_str = hex_str.replace(' ', '').replace('0x', '').replace(',', '')
        if len(hex_str) % 2 != 0:
            hex_str = '0' + hex_str
        return bytes.fromhex(hex_str)
    
    @staticmethod
    def bytes_to_hex(data: bytes, group: int = 1, prefix: bool = False) -> str:
        """Конвертировать bytes в форматированную hex строку"""
        hex_str = data.hex().upper()
        
        # Группировка
        if group > 0:
            hex_str = ' '.join([hex_str[i:i+group*2] 
                              for i in range(0, len(hex_str), group*2)])
        
        # Префикс
        if prefix:
            hex_str = ' '.join([f"0x{part}" for part in hex_str.split()])
        
        return hex_str
    
    @staticmethod
    def format_hex_dump(data: bytes, address: int = 0, width: int = 16) -> List[str]:
        """Форматировать данные в виде hex дампа"""
        lines = []
        for i in range(0, len(data), width):
            chunk = data[i:i+width]
            hex_part = ' '.join([f"{b:02X}" for b in chunk])
            ascii_part = ''.join([chr(b) if 32 <= b <= 126 else '.' for b in chunk])
            lines.append(f"{address + i:08X}: {hex_part:<48} {ascii_part}")
        return lines
    
    @staticmethod
    def parse_hex_address(addr_str: str) -> int:
        """Парсить hex адрес из строки"""
        if addr_str.startswith('0x'):
            return int(addr_str, 16)
        return int(addr_str, 16)