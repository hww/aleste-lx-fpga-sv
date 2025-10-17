# fw_protocol/commands.py
from .transport import FPGATransport
from typing import Optional, Union

class FPGACommands:
    def __init__(self, transport: FPGATransport = None):
        self.transport = transport or FPGATransport()
    
    # Вспомогательные функции для кодирования
    def _encode_memory_cmd(self, op_type: int, size_code: int) -> int:
        """Закодировать команду работы с памятью"""
        return (op_type << 4) | (size_code & 0x0F)
    
    def _encode_register_cmd(self, op_type: int) -> int:
        """Закодировать команду работы с регистрами"""
        return (op_type << 4)
    
    def _encode_address(self, address: int) -> bytes:
        """Закодировать 24-битный адрес"""
        return bytes([
            (address >> 16) & 0xFF,
            (address >> 8) & 0xFF,
            address & 0xFF
        ])
    
    # Основные команды
    def read_memory(self, address: int, size: int = 4) -> Optional[bytes]:
        """Чтение из памяти"""
        size_codes = {1: 0, 2: 1, 4: 2, 8: 3, 16: 4, 32: 5, 64: 6, 128: 7}
        size_code = size_codes.get(size, 2)  # По умолчанию 4 байта
        
        cmd = self._encode_memory_cmd(0b000, size_code)  # Чтение памяти
        addr_data = self._encode_address(address)
        
        response = self.transport.send_command(cmd, addr_data)
        return response
    
    def write_memory(self, address: int, data: bytes) -> bool:
        """Запись в память"""
        size = len(data)
        size_codes = {1: 0, 2: 1, 4: 2, 8: 3, 16: 4, 32: 5, 64: 6, 128: 7}
        size_code = size_codes.get(size, 0)
        
        cmd = self._encode_memory_cmd(0b001, size_code)  # Запись памяти
        addr_data = self._encode_address(address)
        packet = addr_data + data
        
        response = self.transport.send_command(cmd, packet)
        return response == b'\x00' if response else False
    
    def read_register(self, reg_addr: int) -> Optional[int]:
        """Чтение регистра"""
        cmd = self._encode_register_cmd(0b010)  # Чтение регистров
        response = self.transport.send_command(cmd, bytes([reg_addr]))
        return response[0] if response else None
    
    def write_register(self, reg_addr: int, value: int) -> bool:
        """Запись регистра"""
        cmd = self._encode_register_cmd(0b011)  # Запись регистров
        packet = bytes([reg_addr, value])
        
        response = self.transport.send_command(cmd, packet)
        return response == b'\x00' if response else False
    
    def send_event(self, event_id: int, param: int = 0) -> bool:
        """Отправить ивент"""
        cmd = 0b100 << 4  # Ивенты
        packet = bytes([event_id, param])
        
        response = self.transport.send_command(cmd, packet)
        return response == b'\x00' if response else False
    
    def get_global_status(self) -> Optional[int]:
        """Получить глобальный статус"""
        cmd = 0b101 << 4  # Глобальный статус
        response = self.transport.send_command(cmd)
        return response[0] if response else None
    
    def decode_status(self, status_byte: int) -> dict:
        """Декодировать байт статуса"""
        return {
            'cpu_halted': bool(status_byte & 0x01),
            'system_reset': bool(status_byte & 0x02),
            'hdmi_vsync': bool(status_byte & 0x04),
            'sd_card_inserted': bool(status_byte & 0x08),
            'reset_button': bool(status_byte & 0x10),
            'pll_locked': bool(status_byte & 0x20),
            'sdram_calibrated': bool(status_byte & 0x40),
            'fpga_overload': bool(status_byte & 0x80),
        }
    
    def close(self):
        """Закрыть соединение"""
        self.transport.close()