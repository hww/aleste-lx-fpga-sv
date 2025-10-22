import serial
import json
import time
import os
from typing import Optional

class FPGATransport:
    def __init__(self, config_path: str = None):
        self.config = self._load_config(config_path)
        self.serial = None
        self._connect()
    
    def _load_config(self, config_path: str) -> dict:
        """Загрузить конфигурацию"""
        if not config_path:
            config_path = self._find_config_file()
        
        if not config_path or not os.path.exists(config_path):
            # Используем оптимизированные настройки по умолчанию
            return {
                "serial": {
                    "baudrate": 115200,
                    "timeout": 0.1,
                    "write_timeout": 1.0
                },
                "protocol": {
                    "max_retries": 3,
                    "response_timeout": 0.2,
                    "command_delay": 0.001
                }
            }
        
        try:
            with open(config_path, 'r') as f:
                return json.load(f)
        except Exception:
            # Возвращаем оптимизированные настройки при ошибке
            return {
                "serial": {
                    "baudrate": 115200,
                    "timeout": 0.1,
                    "write_timeout": 1.0
                },
                "protocol": {
                    "max_retries": 3,
                    "response_timeout": 0.2,
                    "command_delay": 0.001
                }
            }
    
    def _find_config_file(self) -> str:
        """Найти config.json"""
        script_dir = os.path.dirname(os.path.abspath(__file__))
        possible_locations = [
            os.path.join(script_dir, "config.json"),
            os.path.join(os.path.dirname(script_dir), "config.json"),
        ]
        
        for location in possible_locations:
            if os.path.exists(location):
                return location
        
        return ""
    
    def _connect(self):
        """Установить соединение с устройством"""
        if 'serial' not in self.config or 'port' not in self.config['serial']:
            raise Exception("Serial port not specified in config")
        
        port = self.config['serial']['port']
        ser_config = self.config['serial']
        
        if not os.path.exists(port):
            raise Exception(f"Serial port {port} does not exist")
        
        try:
            self.serial = serial.Serial(
                port=port,
                baudrate=ser_config['baudrate'],
                timeout=ser_config['timeout'],  # Короткий timeout
                write_timeout=ser_config.get('write_timeout', 1.0),
                bytesize=serial.EIGHTBITS,
                parity=serial.PARITY_NONE,
                stopbits=serial.STOPBITS_ONE,
                rtscts=False,
                dsrdtr=False
            )
            time.sleep(0.1)  # Короткая задержка
            self.serial.reset_input_buffer()
            print(f"Connected to {port} at {ser_config['baudrate']} baud")
        except Exception as e:
            raise Exception(f"Failed to connect to {port}: {e}")
    
    def send_command(self, command: int, data: bytes = b'') -> Optional[bytes]:
        """Быстрая отправка команды"""
        if not self.serial or not self.serial.is_open:
            raise Exception("Serial port not connected")
        
        packet = bytes([command]) + data
        
        for attempt in range(self.config['protocol']['max_retries']):
            try:
                # Только входной буфер!
                self.serial.reset_input_buffer()
                
                # Отправка
                self.serial.write(packet)
                self.serial.flush()
                
                # Короткая задержка
                time.sleep(self.config['protocol'].get('command_delay', 0.001))
                
                # Быстрое чтение с ожиданием размера
                expected_size = self._get_expected_response_size(command)
                response = self._read_response_fast(expected_size)
                
                if response is not None:
                    return response
                    
            except Exception as e:
                if attempt == self.config['protocol']['max_retries'] - 1:
                    print(f"Command failed: {e}")
        
        return None
    
    def _get_expected_response_size(self, command: int) -> int:
        """Определить ожидаемый размер ответа"""
        op_type = (command >> 4) & 0x07
        size_code = command & 0x0F
        
        if op_type == 0b000:  # Memory Read
            size_map = {0:1, 1:2, 2:4, 3:8, 4:16, 5:32, 6:64, 7:128}
            return size_map.get(size_code, 4)
        
        return 1
    
    def _read_response_fast(self, expected_size: int) -> Optional[bytes]:
        """Быстрое чтение ответа известного размера"""
        if expected_size <= 0:
            return None
        
        response = b''
        start_time = time.time()
        timeout = self.config['protocol']['response_timeout']
        
        while len(response) < expected_size and (time.time() - start_time) < timeout:
            bytes_needed = expected_size - len(response)
            available = self.serial.in_waiting
            
            if available > 0:
                # Читаем только нужное количество байт
                chunk = self.serial.read(min(bytes_needed, available))
                response += chunk
            else:
                time.sleep(0.0005)  # Очень короткая пауза
        
        return response if len(response) == expected_size else None

    def close(self):
        if self.serial and self.serial.is_open:
            self.serial.close()