#!/usr/bin/env python3
"""
Базовый класс для FPGA операций
"""
from .transport import FPGATransport, FPGATransportError, FPGAProtocolError
from typing import Optional, Callable

class FPGABase:
    """Базовый класс для операций с FPGA"""
    
    def __init__(self, config_path: str = None):
        self.transport = FPGATransport(config_path)
    
    def _encode_cmd(self, op_type: int, size_code: int) -> int:
        """Кодирование команды: тип операции (3 бита) + размер (4 бита)"""
        return (op_type << 4) | (size_code & 0x0F)
    
    def _get_size_code(self, size: int, supported_sizes: list) -> int:
        """Получение кода размера для команды"""
        size_codes = {1: 0, 2: 1, 4: 2, 8: 3, 16: 4, 32: 5, 64: 6, 128: 7}
        
        for supported in sorted(supported_sizes, reverse=True):
            if size >= supported:
                return size_codes[supported]
        return 0  # fallback к 1 байту

    def close(self):
        """Закрытие транспорта"""
        self.transport.close()