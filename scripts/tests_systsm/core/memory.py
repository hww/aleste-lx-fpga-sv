#!/usr/bin/env python3
"""
Клиент для работы с памятью FPGA - БАЛАНС ВЕРСИЯ
"""
from .transport import FPGATransport, FPGATransportError, FPGAProtocolError
from .hex_utils import HexUtils
from typing import Optional

class FPGAMemory:
    def __init__(self, config_path: str = None):
        self.transport = FPGATransport(config_path)
        self.current_address = 0x000000

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

    def read_memory(self, address: int, size: int = 4) -> Optional[bytes]:
        if size <= 0:
            return None
        
        try:
            data = b''
            remaining = size
            current_addr = address
            
            while remaining > 0:
                chunk_size = min(remaining, 128)
                chunk = self._read_memory_single(current_addr, chunk_size)
                
                if not chunk:
                    return None
                
                data += chunk
                current_addr += chunk_size
                remaining -= chunk_size
            
            return data
            
        except (FPGATransportError, FPGAProtocolError) as e:
            print(f"❌ Read failed: {e}")
            return None
    
    def _read_memory_single(self, address: int, size: int) -> Optional[bytes]:
        try:
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
            
        except (FPGATransportError, FPGAProtocolError):
            return None
    
    def write_memory(self, address: int, data: bytes) -> bool:
        if not data:
            return False
        
        try:
            size = len(data)
            if size <= 128:
                return self._write_memory_single(address, data)
            else:
                return self._write_memory_block(address, data)
                
        except (FPGATransportError, FPGAProtocolError) as e:
            print(f"❌ Write failed: {e}")
            return False
        except Exception as e:
            print(f"❌ Unexpected write error: {e}")
            return False
    
    def _write_memory_single(self, address: int, data: bytes) -> bool:
        try:
            size = len(data)
            size_code = self._get_size_code(size)
            cmd = self._encode_memory_cmd(0b001, size_code)
            addr_data = self._encode_address(address)
            packet = addr_data + data
            
            response = self.transport.send_command(cmd, packet)
            
            # Интерпретация ответа
            if response == b'':
                return True  # Молчание - знак согласия
            elif response == b'\x00':
                return True  # Явное подтверждение
            elif response == b'\x01':
                print(f"❌ Device reported write error at 0x{address:06X}")
                return False
            else:
                print(f"⚠️ Unexpected response to write: {response.hex()}")
                return True  # Но все равно считаем успехом для совместимости
            
        except FPGATransportError as e:
            print(f"❌ Transport error during write: {e}")
            return False
        except FPGAProtocolError as e:
            print(f"❌ Protocol error during write: {e}")
            return False
    
    def _write_memory_block(self, address: int, data: bytes) -> bool:
        total_size = len(data)
        remaining = total_size
        current_addr = address
        data_offset = 0
        
        chunk_count = 0
        while remaining > 0:
            chunk_size = min(remaining, 128)
            chunk_data = data[data_offset:data_offset + chunk_size]
            
            success = self._write_memory_single(current_addr, chunk_data)
            if not success:
                print(f"❌ Block write failed at chunk {chunk_count}, offset 0x{data_offset:04X}")
                return False
            
            current_addr += chunk_size
            data_offset += chunk_size
            remaining -= chunk_size
            chunk_count += 1
        
        return True
    
    def write_hex_string(self, address: int, hex_str: str) -> bool:
        try:
            data = HexUtils.hex_to_bytes(hex_str)
            return self.write_memory(address, data)
        except Exception as e:
            print(f"❌ Hex string error: {e}")
            return False
    
    def fill_memory(self, address: int, size: int, pattern: int) -> bool:
        pattern_byte = pattern & 0xFF
        data = bytes([pattern_byte] * size)
        return self.write_memory(address, data)
    
    def verify_memory(self, address: int, expected_data: bytes) -> bool:
        try:
            read_data = self.read_memory(address, len(expected_data))
            
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
        try:
            cmd = 0b010 << 4
            response = self.transport.send_command(cmd, bytes([reg_addr]))
            return response[0] if response else None
        except (FPGATransportError, FPGAProtocolError) as e:
            print(f"❌ Read register failed: {e}")
            return None
    
    def write_register(self, reg_addr: int, value: int) -> bool:
        try:
            cmd = 0b011 << 4
            packet = bytes([reg_addr, value])
            response = self.transport.send_command(cmd, packet)
            return response in (b'', b'\x00')
        except (FPGATransportError, FPGAProtocolError) as e:
            print(f"❌ Write register failed: {e}")
            return False
    
    def get_status(self) -> Optional[int]:
        try:
            cmd = 0b100 << 4
            response = self.transport.send_command(cmd)
            return response[0] if response else None
        except (FPGATransportError, FPGAProtocolError) as e:
            print(f"❌ Get status failed: {e}")
            return None
    
    def send_echo(self, char: int) -> Optional[int]:
        try:
            if char < 0 or char > 7:
                raise ValueError("Echo character must be between 0 and 7")
            
            cmd = (0b101 << 4) | (char & 0b111)
            response = self.transport.send_command(cmd)
            return response[0] if response else None
        except (FPGATransportError, FPGAProtocolError) as e:
            print(f"❌ Echo failed: {e}")
            return None

    def close(self):
        self.transport.close()