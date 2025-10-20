from .transport import FPGATransport
from typing import Optional, Union

class FPGACommands:
    def __init__(self, transport: FPGATransport = None, port: str = None):
        self.transport = transport or FPGATransport(port=port)
        self.max_read_size = 16  # Максимальный размер за одно чтение
        self.max_write_size = 16  # Максимальный размер за одну запись
    
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
    
    def _get_size_code(self, size: int) -> int:
        """Получить код размера для команды"""
        size_codes = {1: 0, 2: 1, 4: 2, 8: 3, 16: 4, 32: 5, 64: 6, 128: 7}
        return size_codes.get(size, 2)  # По умолчанию 4 байта
    
    # Основные команды
    def read_memory(self, address: int, size: int = 4) -> Optional[bytes]:
        """Чтение из памяти с автоматической разбивкой на транзакции"""
        if size <= self.max_read_size:
            # Одиночное чтение
            return self._read_memory_single(address, size)
        else:
            # Чтение блоками
            return self._read_memory_block(address, size)
    
    def _read_memory_single(self, address: int, size: int) -> Optional[bytes]:
        """Одиночное чтение памяти"""
        if size > self.max_read_size:
            raise ValueError(f"Size {size} exceeds maximum single read size {self.max_read_size}")
        
        size_code = self._get_size_code(size)
        cmd = self._encode_memory_cmd(0b000, size_code)  # Чтение памяти
        addr_data = self._encode_address(address)
        
        response = self.transport.send_command(cmd, addr_data)
        return response
    
    def _read_memory_block(self, address: int, size: int) -> Optional[bytes]:
        """Чтение блока памяти с разбивкой на транзакции"""
        data = b''
        remaining = size
        current_addr = address
        
        while remaining > 0:
            # Определяем размер текущего чтения
            chunk_size = min(remaining, self.max_read_size)
            
            print(f"Reading {chunk_size} bytes from 0x{current_addr:06X}...")
            
            # Читаем chunk
            chunk = self._read_memory_single(current_addr, chunk_size)
            if not chunk or len(chunk) != chunk_size:
                print(f"Failed to read {chunk_size} bytes from 0x{current_addr:06X}")
                return None
            
            data += chunk
            current_addr += chunk_size
            remaining -= chunk_size
        
        return data
    
    def write_memory(self, address: int, data: bytes) -> bool:
        """Запись в память с автоматической разбивкой на транзакции"""
        size = len(data)
        if size <= self.max_write_size:
            # Одиночная запись
            return self._write_memory_single(address, data)
        else:
            # Запись блоками
            return self._write_memory_block(address, data)
    
    def _write_memory_single(self, address: int, data: bytes) -> bool:
        """Одиночная запись в память"""
        size = len(data)
        if size > self.max_write_size:
            raise ValueError(f"Size {size} exceeds maximum single write size {self.max_write_size}")
        
        size_code = self._get_size_code(size)
        cmd = self._encode_memory_cmd(0b001, size_code)  # Запись памяти
        addr_data = self._encode_address(address)
        packet = addr_data + data
        
        response = self.transport.send_command(cmd, packet)
        return response == b'\x00' if response else False
    
    def _write_memory_block(self, address: int, data: bytes) -> bool:
        """Запись блока памяти с разбивкой на транзакции"""
        total_size = len(data)
        remaining = total_size
        current_addr = address
        data_offset = 0
        
        while remaining > 0:
            # Определяем размер текущей записи
            chunk_size = min(remaining, self.max_write_size)
            chunk_data = data[data_offset:data_offset + chunk_size]
            
            print(f"Writing {chunk_size} bytes to 0x{current_addr:06X}...")
            
            # Пишем chunk
            success = self._write_memory_single(current_addr, chunk_data)
            if not success:
                print(f"Failed to write {chunk_size} bytes to 0x{current_addr:06X}")
                return False
            
            current_addr += chunk_size
            data_offset += chunk_size
            remaining -= chunk_size
        
        return True
    
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
    
    def set_max_transaction_size(self, read_size: int = None, write_size: int = None):
        """Установить максимальные размеры транзакций"""
        if read_size is not None:
            if read_size not in [1, 2, 4, 8, 16, 32, 64, 128]:
                raise ValueError("Read size must be power of 2 between 1 and 128")
            self.max_read_size = read_size
        
        if write_size is not None:
            if write_size not in [1, 2, 4, 8, 16, 32, 64, 128]:
                raise ValueError("Write size must be power of 2 between 1 and 128")
            self.max_write_size = write_size
    
    def close(self):
        """Закрыть соединение"""
        self.transport.close()