#!/usr/bin/env python3
"""
Улучшенный клиент для работы с памятью FPGA
"""
from .transport import FPGATransport
from .hex_utils import HexUtils
from typing import Optional
import time

class FPGAMemory:
    def __init__(self):
        # Убираем параметры - используем только config
        self.transport = FPGATransport()
        self.current_address = 0x000000

    # ===== БАЗОВЫЕ МЕТОДЫ =====
    def _encode_memory_cmd(self, op_type: int, size_code: int) -> int:
        return (op_type << 4) | (size_code & 0x0F)
    
    def _encode_address(self, address: int) -> bytes:
        return bytes([
            (address >> 16) & 0xFF,
            (address >> 8) & 0xFF,
            address & 0xFF
        ])
    
    def _get_size_code(self, size: int) -> int:
        size_codes = {1: 0, 2: 1, 4: 2, 8: 3, 16: 4, 32: 5, 64: 6, 128: 7}
        return size_codes.get(size, 2)

    # ===== ОСНОВНЫЕ ОПЕРАЦИИ =====
    def read_memory(self, address: int, size: int = 4) -> Optional[bytes]:
        """Чтение памяти с автоматической разбивкой"""
        if size <= 0:
            return None
        
        data = b''
        remaining = size
        current_addr = address
        
        while remaining > 0:
            chunk_size = min(remaining, 128)
            chunk = self._read_memory_single(current_addr, chunk_size)
            
            if not chunk or len(chunk) != chunk_size:
                return None
            
            data += chunk
            current_addr += chunk_size
            remaining -= chunk_size
        
        return data
    
    def _read_memory_single(self, address: int, size: int) -> Optional[bytes]:
        """Одиночное чтение блока"""
        supported_sizes = [1, 2, 4, 8, 16, 32, 64, 128]
        block_size = 1
        
        for supported in sorted(supported_sizes):
            if supported >= size:
                block_size = supported
                break
        
        size_code = {1:0, 2:1, 4:2, 8:3, 16:4, 32:5, 64:6, 128:7}[block_size]
        cmd = self._encode_memory_cmd(0b000, size_code)
        addr_data = self._encode_address(address)
        
        response = self.transport.send_command(cmd, addr_data)
        
        if response and len(response) >= size:
            return response[:size]
        
        return None
    
    def write_memory(self, address: int, data: bytes) -> bool:
        """Запись в память"""
        size = len(data)
        if size <= 128:
            return self._write_memory_single(address, data)
        else:
            return self._write_memory_block(address, data)
    
    def _write_memory_single(self, address: int, data: bytes) -> bool:
        """Одиночная запись"""
        size = len(data)
        size_code = self._get_size_code(size)
        cmd = self._encode_memory_cmd(0b001, size_code)  # Memory Write
        addr_data = self._encode_address(address)
        packet = addr_data + data
        
        response = self.transport.send_command(cmd, packet)
        return response == b'\x00' if response else False
    
    def _write_memory_block(self, address: int, data: bytes) -> bool:
        """Блочная запись"""
        total_size = len(data)
        remaining = total_size
        current_addr = address
        data_offset = 0
        
        while remaining > 0:
            chunk_size = min(remaining, 128)
            chunk_data = data[data_offset:data_offset + chunk_size]
            
            success = self._write_memory_single(current_addr, chunk_data)
            if not success:
                return False
            
            current_addr += chunk_size
            data_offset += chunk_size
            remaining -= chunk_size
        
        return True
    
    def write_hex_string(self, address: int, hex_str: str) -> bool:
        """Запись hex строки в память"""
        data = HexUtils.hex_to_bytes(hex_str)
        return self.write_memory(address, data)
    
    def fill_memory(self, address: int, size: int, pattern: int) -> bool:
        """Заполнение памяти паттерном"""
        pattern_byte = pattern & 0xFF
        data = bytes([pattern_byte] * size)
        return self.write_memory(address, data)
    
    def verify_memory(self, address: int, expected_data: bytes) -> bool:
        """Верификация данных в памяти"""
        read_data = self.read_memory(address, len(expected_data))
        return read_data == expected_data
    
    # ===== РЕГИСТРЫ =====
    def read_register(self, reg_addr: int) -> Optional[int]:
        cmd = 0b010 << 4  # Register Read
        response = self.transport.send_command(cmd, bytes([reg_addr]))
        return response[0] if response else None
    
    def write_register(self, reg_addr: int, value: int) -> bool:
        cmd = 0b011 << 4  # Register Write
        packet = bytes([reg_addr, value])
        response = self.transport.send_command(cmd, packet)
        return response == b'\x00' if response else False
    
    # ===== СИСТЕМНЫЕ КОМАНДЫ =====
    def get_status(self) -> Optional[int]:
        cmd = 0b100 << 4  # Global Status
        response = self.transport.send_command(cmd)
        return response[0] if response else None
    
    def send_echo(self, char: int) -> Optional[int]:
        """Отправить эхо-команду (возвращает сырые данные)"""
        if char < 0 or char > 7:
            raise ValueError("Echo character must be between 0 and 7 (3 bits)")
        
        cmd = (0b101 << 4) | (char & 0b111)  # Echo command: 101xxx
        response = self.transport.send_command(cmd)
        return response[0] if response else None  # Возвращаем сырой ответ
    
    def close(self):
        self.transport.close()