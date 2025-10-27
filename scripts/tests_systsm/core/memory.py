#!/usr/bin/env python3
"""
Клиент для работы с памятью FPGA - ЧИСТАЯ ВЕРСИЯ
"""
from .transport import FPGATransport, FPGATransportError, FPGAProtocolError
from .hex_utils import HexUtils
from typing import Optional, Callable

class FPGAMemory:
    # Поддерживаемые размеры блоков для чтения/записи
    SUPPORTED_SIZES = [1, 2, 4, 8, 16, 32, 64, 128]
    
    def __init__(self, config_path: str = None):
        self.transport = FPGATransport(config_path)
        self.current_address = 0x000000

    def _encode_memory_cmd(self, op_type: int, size_code: int) -> int:
        """Кодирование команды: тип операции (3 бита) + размер (4 бита)"""
        return (op_type << 4) | (size_code & 0x0F)
    
    def _encode_address(self, address: int) -> bytes:
        """Кодирование 24-битного адреса в 3 байта"""
        return bytes([
            (address >> 16) & 0xFF,
            (address >> 8) & 0xFF, 
            address & 0xFF
        ])
    
    def _get_size_code(self, size: int) -> int:
        """Получение кода размера для команды"""
        size_codes = {1: 0, 2: 1, 4: 2, 8: 3, 16: 4, 32: 5, 64: 6, 128: 7}
        
        if size not in size_codes:
            # Для неподдерживаемых размеров используем ближайший меньший
            for supported in sorted(self.SUPPORTED_SIZES, reverse=True):
                if size >= supported:
                    return size_codes[supported]
            return 0  # fallback к 1 байту
        
        return size_codes[size]

    def _read_memory_single(self, address: int, size: int) -> Optional[bytes]:
        """Одиночная операция чтения памяти"""
        try:
            # Выбираем поддерживаемый размер блока
            block_size = 1
            for supported in sorted(self.SUPPORTED_SIZES):
                if supported >= size:
                    block_size = supported
                    break
            
            size_code = self._get_size_code(block_size)
            cmd = self._encode_memory_cmd(0b000, size_code)
            addr_data = self._encode_address(address)
            
            response = self.transport.send_command(cmd, addr_data)
            
            if response is None:
                raise FPGAProtocolError(f"No response from transport for read at 0x{address:06X}")
                
            if len(response) < size:
                raise FPGAProtocolError(f"Short response for read at 0x{address:06X}: expected {size}, got {len(response)} bytes")
            
            return response[:size]
            
        except (FPGATransportError, FPGAProtocolError) as e:
            raise type(e)(f"Read at 0x{address:06X} (size {size}): {e}") from e
    
    def read_memory(self, address: int, size: int = 4, progress_callback: Optional[Callable] = None) -> Optional[bytes]:
        """Чтение памяти с поддержкой прогресса"""
        if size <= 0:
            print("❌ Invalid read size: must be positive")
            return None
        
        try:
            data = b''
            remaining = size
            current_addr = address
            
            while remaining > 0:
                chunk_size = min(remaining, 128)
                chunk = self._read_memory_single(current_addr, chunk_size)
                
                if not chunk:
                    raise FPGAProtocolError(f"Read failed at 0x{current_addr:06X}, read {len(data)}/{size} bytes so far")
                
                if len(chunk) != chunk_size:
                    raise FPGAProtocolError(f"Incomplete chunk at 0x{current_addr:06X}: expected {chunk_size}, got {len(chunk)} bytes")
                
                data += chunk
                current_addr += chunk_size
                remaining -= chunk_size
                
                # Единственный способ прогресса - через колбэк
                if progress_callback:
                    progress_callback(size - remaining, size, "Reading")
            
            return data
            
        except (FPGATransportError, FPGAProtocolError) as e:
            print(f"❌ Read failed: {e}")
            return None
    
    def write_memory(self, address: int, data: bytes, progress_callback: Optional[Callable] = None) -> bool:
        """Запись памяти с поддержкой прогресса"""
        if not data:
            return False
        
        try:
            size = len(data)
            if size <= 128:
                return self._write_memory_single(address, data)
            else:
                return self._write_memory_block(address, data, progress_callback)
                
        except (FPGATransportError, FPGAProtocolError) as e:
            print(f"❌ Write failed: {e}")
            return False
        except Exception as e:
            print(f"❌ Unexpected write error: {e}")
            return False
    
    def _write_memory_block(self, address: int, data: bytes, progress_callback: Optional[Callable] = None) -> bool:
        """Блочная запись памяти"""
        total_size = len(data)
        written = 0
        
        while written < total_size:
            chunk_size = self._get_optimal_chunk_size(total_size - written)
            chunk_data = data[written:written + chunk_size]
            
            success = self._write_memory_single(address + written, chunk_data)
            if not success:
                print(f"❌ Write failed at address 0x{address + written:06X}, offset 0x{written:04X}")
                return False
            
            written += chunk_size
            
            # Единственный способ прогресса - через колбэк
            if progress_callback:
                progress_callback(written, total_size, "Writing")
        
        return True

    def _write_memory_single(self, address: int, data: bytes) -> bool:
        """Одиночная операция записи памяти"""
        try:
            size = len(data)
            
            if size not in self.SUPPORTED_SIZES:
                print(f"❌ Invalid data size {size} at 0x{address:06X}. Supported: {self.SUPPORTED_SIZES}")
                return False
            
            size_code = self._get_size_code(size)
            cmd = self._encode_memory_cmd(0b001, size_code)
            addr_data = self._encode_address(address)
            packet = addr_data + data
            
            # Отправка команды
            response = self.transport.send_command(cmd, packet)
            
            # Если транспорт возвращает ответ, проверяем его
            if response is not None and response != b'':
                print(f"⚠️  Unexpected response for write at 0x{address:06X}: {response.hex()}")
            
            return True
                
        except FPGATransportError as e:
            print(f"❌ Transport error at 0x{address:06X}: {e}")
            return False
        except FPGAProtocolError as e:
            print(f"❌ Protocol error at 0x{address:06X}: {e}")
            return False
    
    def _get_optimal_chunk_size(self, remaining: int) -> int:
        """Выбор оптимального размера блока из поддерживаемых"""
        for size in sorted(self.SUPPORTED_SIZES, reverse=True):
            if remaining >= size:
                return size
        return 1  # fallback

    def write_hex_string(self, address: int, hex_str: str, progress_callback: Optional[Callable] = None) -> bool:
        """Запись hex-строки в память"""
        try:
            data = HexUtils.hex_to_bytes(hex_str)
            return self.write_memory(address, data, progress_callback)
        except Exception as e:
            print(f"❌ Hex string error: {e}")
            return False
    
    def fill_memory(self, address: int, size: int, pattern: int, progress_callback: Optional[Callable] = None) -> bool:
        """Заполнение памяти указанным паттерном"""
        pattern_byte = pattern & 0xFF
        data = bytes([pattern_byte] * size)
        return self.write_memory(address, data, progress_callback)
    
    def verify_memory(self, address: int, expected_data: bytes, progress_callback: Optional[Callable] = None) -> bool:
        """Верификация данных в памяти"""
        try:
            read_data = self.read_memory(address, len(expected_data), progress_callback)
            
            if read_data == expected_data:
                return True
            else:
                print(f"❌ Verification failed at 0x{address:06X}")
                if read_data:
                    for i in range(min(5, len(expected_data))):
                        if expected_data[i] != read_data[i]:
                            print(f"   First difference at 0x{i:04X}: expected 0x{expected_data[i]:02X}, got 0x{read_data[i]:02X}")
                            break
                return False
                
        except Exception as e:
            print(f"❌ Verification error: {e}")
            return False
    
    def read_register(self, reg_addr: int) -> Optional[int]:
        """Чтение регистра"""
        try:
            cmd = 0b010 << 4
            response = self.transport.send_command(cmd, bytes([reg_addr]))
            return response[0] if response else None
        except (FPGATransportError, FPGAProtocolError) as e:
            print(f"❌ Read register failed: {e}")
            return None
    
    def write_register(self, reg_addr: int, value: int) -> bool:
        """Запись регистра"""
        try:
            cmd = 0b011 << 4
            packet = bytes([reg_addr, value])
            response = self.transport.send_command(cmd, packet)
            return response in (b'', b'\x00')
        except (FPGATransportError, FPGAProtocolError) as e:
            print(f"❌ Write register failed: {e}")
            return False
    
    def get_status(self) -> Optional[int]:
        """Получение статуса FPGA"""
        try:
            cmd = 0b100 << 4
            response = self.transport.send_command(cmd)
            return response[0] if response else None
        except (FPGATransportError, FPGAProtocolError) as e:
            print(f"❌ Get status failed: {e}")
            return None

    def read_state(self) -> Optional[bytes]:
        """Чтение состояния FPGA"""
        try:
            cmd = 0b101 << 4
            response = self.transport.send_command(cmd)
            return response if response and len(response) == 6 else None
        except (FPGATransportError, FPGAProtocolError) as e:
            print(f"❌ State read failed: {e}")
            return None

    def close(self):
        """Закрытие транспорта"""
        self.transport.close()