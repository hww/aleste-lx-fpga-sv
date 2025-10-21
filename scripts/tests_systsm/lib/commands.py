from .transport import FPGATransport
from typing import Optional, Union

class FPGACommands:
    def __init__(self, transport: FPGATransport = None, port: str = None):
        # УБРАТЬ ДУБЛИРОВАНИЕ - только одна инициализация!
        self.transport = transport or FPGATransport(port=port)
        self.max_write_size = 128

    def _encode_memory_cmd(self, op_type: int, size_code: int) -> int:
        return (op_type << 4) | (size_code & 0x0F)
    
    def _encode_register_cmd(self, op_type: int) -> int:
        return (op_type << 4)
    
    def _encode_address(self, address: int) -> bytes:
        return bytes([
            (address >> 16) & 0xFF,
            (address >> 8) & 0xFF,
            address & 0xFF
        ])
    
    def _get_size_code(self, size: int) -> int:
        size_codes = {1: 0, 2: 1, 4: 2, 8: 3, 16: 4, 32: 5, 64: 6, 128: 7}
        return size_codes.get(size, 2)

    def read_memory(self, address: int, size: int = 4) -> Optional[bytes]:
        if size <= 0:
            return None
        
        data = b''
        remaining = size
        current_addr = address
        
        # Читаем блоками по 128 байт БЕЗ лишних принтов
        while remaining > 128:
            chunk = self._read_memory_single(current_addr, 128)
            if not chunk or len(chunk) != 128:
                return None
            data += chunk
            current_addr += 128
            remaining -= 128
        
        if remaining > 0:
            chunk = self._read_memory_single(current_addr, remaining)
            if not chunk or len(chunk) != remaining:
                return None
            data += chunk
        
        return data

    def _read_memory_single(self, address: int, size: int) -> Optional[bytes]:
        supported_sizes = [1, 2, 4, 8, 16, 32, 64, 128]
        block_size = 1
        
        for supported in sorted(supported_sizes):
            if supported >= size:
                block_size = supported
                break
        
        size_code = {1:0, 2:1, 4:2, 8:3, 16:4, 32:5, 64:6, 128:7}[block_size]
        cmd = self._encode_memory_cmd(0b000, size_code)
        addr_data = self._encode_address(address)
        
        # УБРАТЬ ДЕБАГ ПРИНТ - только важная информация
        response = self.transport.send_command(cmd, addr_data)
        
        if response and len(response) >= size:
            return response[:size]
        
        return None

    # Остальные методы без изменений...
    def write_memory(self, address: int, data: bytes) -> bool:
        size = len(data)
        if size <= self.max_write_size:
            return self._write_memory_single(address, data)
        else:
            return self._write_memory_block(address, data)
    
    def _write_memory_single(self, address: int, data: bytes) -> bool:
        size = len(data)
        size_code = self._get_size_code(size)
        cmd = self._encode_memory_cmd(0b001, size_code)
        addr_data = self._encode_address(address)
        packet = addr_data + data
        
        response = self.transport.send_command(cmd, packet)
        return response == b'\x00' if response else False
    
    def _write_memory_block(self, address: int, data: bytes) -> bool:
        total_size = len(data)
        remaining = total_size
        current_addr = address
        data_offset = 0
        
        while remaining > 0:
            chunk_size = min(remaining, self.max_write_size)
            chunk_data = data[data_offset:data_offset + chunk_size]
            
            success = self._write_memory_single(current_addr, chunk_data)
            if not success:
                return False
            
            current_addr += chunk_size
            data_offset += chunk_size
            remaining -= chunk_size
        
        return True
    
    def read_register(self, reg_addr: int) -> Optional[int]:
        cmd = self._encode_register_cmd(0b010)
        response = self.transport.send_command(cmd, bytes([reg_addr]))
        return response[0] if response else None
    
    def write_register(self, reg_addr: int, value: int) -> bool:
        cmd = self._encode_register_cmd(0b011)
        packet = bytes([reg_addr, value])
        response = self.transport.send_command(cmd, packet)
        return response == b'\x00' if response else False
    
    def close(self):
        self.transport.close()