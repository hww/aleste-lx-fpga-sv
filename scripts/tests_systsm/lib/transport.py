# fw_protocol/transport.py
import serial
import json
import time
import os
from typing import Optional

class FPGATransport:
    def __init__(self, config_path: str = "config.json"):
        self.config = self._load_config(config_path)
        self.serial = None
        self._connect()
    
    def _load_config(self, config_path: str) -> dict:
        """Загрузить конфигурацию из JSON файла"""
        if not os.path.exists(config_path):
            # Конфигурация по умолчанию
            return {
                "serial": {
                    "port": "/dev/ttyUSB0",
                    "baudrate": 115200,
                    "timeout": 1.0
                },
                "protocol": {
                    "max_retries": 3,
                    "response_timeout": 0.5
                }
            }
        
        with open(config_path, 'r') as f:
            return json.load(f)
    
    def _connect(self):
        """Установить соединение с устройством"""
        ser_config = self.config['serial']
        try:
            self.serial = serial.Serial(
                port=ser_config['port'],
                baudrate=ser_config['baudrate'],
                timeout=ser_config['timeout']
            )
            # Дать устройству время на инициализацию
            time.sleep(0.1)
            print(f"Connected to {ser_config['port']} at {ser_config['baudrate']} baud")
        except serial.SerialException as e:
            print(f"Serial connection error: {e}")
            raise
    
    def send_command(self, command: int, data: bytes = b'') -> Optional[bytes]:
        """Отправить команду и получить ответ"""
        packet = self._build_packet(command, data)
        
        for attempt in range(self.config['protocol']['max_retries']):
            try:
                # Очистить буфер перед отправкой
                self.serial.reset_input_buffer()
                
                self.serial.write(packet)
                response = self._read_response()
                if response is not None:
                    return response
            except Exception as e:
                print(f"Attempt {attempt + 1} failed: {e}")
                time.sleep(0.1)
        
        print(f"Command 0x{command:02X} failed after {self.config['protocol']['max_retries']} attempts")
        return None
    
    def _build_packet(self, command: int, data: bytes) -> bytes:
        """Построить бинарный пакет команды"""
        packet = bytes([command])
        if data:
            packet += data
        return packet
    
    def _read_response(self) -> Optional[bytes]:
        """Прочитать ответ с таймаутом"""
        start_time = time.time()
        timeout = self.config['protocol']['response_timeout']
        response = b''
        
        while time.time() - start_time < timeout:
            if self.serial.in_waiting > 0:
                # Читаем все доступные данные
                chunk = self.serial.read(self.serial.in_waiting)
                response += chunk
                # Если получили хоть что-то, считаем успехом
                if response:
                    return response
            time.sleep(0.01)
        
        return None
    
    
    def send_command(self, command: int, data: bytes = b'') -> Optional[bytes]:
        """Отправить команду и получить ответ"""
        packet = self._build_packet(command, data)
        
        for attempt in range(self.config['protocol']['max_retries']):
            try:
                # Очистить буфер перед отправкой
                self.serial.reset_input_buffer()
                
                self.serial.write(packet)
                response = self._read_response()
                if response is not None:
                    return response
            except Exception as e:
                print(f"Attempt {attempt + 1} failed: {e}")
                time.sleep(0.1)
        
        print(f"Command 0x{command:02X} failed after {self.config['protocol']['max_retries']} attempts")
        return None
    
    def _build_packet(self, command: int, data: bytes) -> bytes:
        """Построить бинарный пакет команды"""
        packet = bytes([command])
        if data:
            packet += data
        return packet
    
    def _read_response(self) -> Optional[bytes]:
        """Прочитать ответ с таймаутом"""
        start_time = time.time()
        timeout = self.config['protocol']['response_timeout']
        response = b''
        
        while time.time() - start_time < timeout:
            if self.serial.in_waiting > 0:
                # Читаем все доступные данные
                chunk = self.serial.read(self.serial.in_waiting)
                response += chunk
                # Если получили хоть что-то, считаем успехом
                if response:
                    return response
            time.sleep(0.01)
        
        return None

    def close(self):
        """Закрыть соединение"""
        if self.serial and self.serial.is_open:
            self.serial.close()
            print("Connection closed")