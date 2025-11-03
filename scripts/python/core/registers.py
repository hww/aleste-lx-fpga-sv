#!/usr/bin/env python3
"""
Клиент для работы с регистрами FPGA
"""
from .fpga_base import FPGABase
from .transport import FPGATransportError, FPGAProtocolError
from typing import Optional, Dict, List

class FPGARegisters(FPGABase):
    """Компактный класс для работы с регистрами FPGA"""
    
    # Регистры всегда работают с 1 байтом
    SUPPORTED_SIZES = [1]
    
    def __init__(self, config_path: str = None):
        super().__init__(config_path)
    
    def read(self, reg_addr: int) -> Optional[int]:
        """Чтение регистра"""
        try:
            cmd = self._encode_cmd(0b010, 0)  # read register, size=1
            response = self.transport.send_command(cmd, bytes([reg_addr & 0xFF]))
            
            if response and len(response) >= 1:
                return response[0]
            else:
                print(f"❌ No response for register 0x{reg_addr:02X}")
                return None
                
        except (FPGATransportError, FPGAProtocolError) as e:
            print(f"❌ Read register 0x{reg_addr:02X} failed: {e}")
            return None
    
    def write(self, reg_addr: int, value: int) -> bool:
        """Запись регистра"""
        try:
            cmd = self._encode_cmd(0b011, 0)  # write register, size=1
            packet = bytes([reg_addr & 0xFF, value & 0xFF])
            response = self.transport.send_command(cmd, packet)
            
            # Успешная запись возвращает пустой ответ или подтверждение
            return response in (b'', b'\x00', None)
                
        except (FPGATransportError, FPGAProtocolError) as e:
            print(f"❌ Write register 0x{reg_addr:02X} failed: {e}")
            return False
    
    def read_multiple(self, reg_addrs: List[int]) -> Dict[int, Optional[int]]:
        """Чтение нескольких регистров"""
        results = {}
        for addr in reg_addrs:
            results[addr] = self.read(addr)
        return results
    
    def write_multiple(self, reg_values: Dict[int, int]) -> bool:
        """Запись нескольких регистров"""
        success = True
        for addr, value in reg_values.items():
            if not self.write(addr, value):
                success = False
                print(f"❌ Failed to write register 0x{addr:02X}")
        return success
    
    def set_bits(self, reg_addr: int, mask: int) -> bool:
        """Установка битов по маске (OR операция)"""
        current = self.read(reg_addr)
        if current is None:
            return False
        return self.write(reg_addr, current | (mask & 0xFF))
    
    def clear_bits(self, reg_addr: int, mask: int) -> bool:
        """Сброс битов по маске (AND с инверсной маской)"""
        current = self.read(reg_addr)
        if current is None:
            return False
        return self.write(reg_addr, current & (~mask & 0xFF))
    
    def toggle_bits(self, reg_addr: int, mask: int) -> bool:
        """Переключение битов по маске (XOR операция)"""
        current = self.read(reg_addr)
        if current is None:
            return False
        return self.write(reg_addr, current ^ (mask & 0xFF))
    
    def check_bits(self, reg_addr: int, mask: int) -> Optional[bool]:
        """Проверка установлены ли все биты маски"""
        current = self.read(reg_addr)
        if current is None:
            return None
        return (current & mask) == mask
    
    def fill_registers(self, start_addr: int, count: int, value: int) -> bool:
        """Заполнение диапазона регистров одним значением"""
        success = True
        for i in range(count):
            if not self.write(start_addr + i, value):
                success = False
        return success
    
    def dump_registers(self, start_addr: int, count: int) -> Dict[int, Optional[int]]:
        """Чтение диапазона регистров"""
        results = {}
        for i in range(count):
            results[start_addr + i] = self.read(start_addr + i)
        return results
    
    def verify_register(self, reg_addr: int, expected_value: int) -> bool:
        """Верификация значения регистра"""
        actual = self.read(reg_addr)
        if actual is None:
            print(f"❌ Could not read register 0x{reg_addr:02X} for verification")
            return False
        
        if actual == expected_value:
            return True
        else:
            print(f"❌ Register 0x{reg_addr:02X} verification failed: expected 0x{expected_value:02X}, got 0x{actual:02X}")
            return False