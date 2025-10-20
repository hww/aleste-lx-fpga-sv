#!/usr/bin/env python3
from typing import Optional, Iterable

class HexDump:
    """Класс для красивого вывода hex дампа памяти"""
    
    def __init__(self, address_width: int = 6, bytes_per_line: int = 16, show_ascii: bool = True):
        """
        Args:
            address_width: Ширина адреса в символах (6 для 24-бит = 6 hex цифр)
            bytes_per_line: Количество байт в одной строке
            show_ascii: Показывать ASCII представление
        """
        self.address_width = address_width
        self.bytes_per_line = bytes_per_line
        self.show_ascii = show_ascii
    
    def dump(self, address: int, data: bytes, title: str = None) -> str:
        """Сгенерировать hex dump"""
        if not data:
            return "No data to dump"
        
        # Убедимся, что address - целое число
        if not isinstance(address, int):
            address = int(address)
        
        if title:
            result = f"{title}\n"
        else:
            result = ""
        
        result += f"Address: 0x{address:0{self.address_width}X} - 0x{address + len(data) - 1:0{self.address_width}X} "
        result += f"({len(data)} bytes)\n"
        result += self._generate_dump(address, data)
        return result
    
    def _generate_dump(self, base_address: int, data: bytes) -> str:
        """Сгенерировать основной дамп"""
        lines = []
        
        for i in range(0, len(data), self.bytes_per_line):
            chunk = data[i:i + self.bytes_per_line]
            line = self._format_line(base_address + i, chunk)
            lines.append(line)
        
        return '\n'.join(lines)
    
    def _format_line(self, address: int, data: bytes) -> str:
        """Форматировать одну строку дампа"""
        # Убедимся, что address - целое число
        if not isinstance(address, int):
            address = int(address)
            
        # Адрес
        line = f"0x{address:0{self.address_width}X}: "
        
        # Hex байты
        hex_part = []
        for i in range(self.bytes_per_line):
            if i < len(data):
                hex_part.append(f"{data[i]:02X}")
            else:
                hex_part.append("  ")
        
        # Разбиваем на группы по 8 байт для лучшей читаемости
        if self.bytes_per_line >= 8:
            hex_groups = []
            for i in range(0, len(hex_part), 8):
                group = hex_part[i:i + 8]
                hex_groups.append(" ".join(group))
            hex_str = "  ".join(hex_groups)
        else:
            hex_str = " ".join(hex_part)
        
        line += hex_str.ljust(self.bytes_per_line * 3 - 1)
        
        # ASCII представление
        if self.show_ascii:
            line += "  |"
            ascii_part = ""
            for byte in data:
                if 32 <= byte <= 126:  # Printable ASCII
                    ascii_part += chr(byte)
                else:
                    ascii_part += "."
            line += ascii_part.ljust(self.bytes_per_line)
            line += "|"
        
        return line
    
    def print_dump(self, address: int, data: bytes, title: str = None):
        """Напечатать hex dump"""
        print(self.dump(address, data, title))


# Функции для удобного использования
def hex_dump(address: int, data: bytes, bytes_per_line: int = 16, title: str = None):
    """Быстрый hex dump"""
    dumper = HexDump(bytes_per_line=bytes_per_line)
    dumper.print_dump(address, data, title)