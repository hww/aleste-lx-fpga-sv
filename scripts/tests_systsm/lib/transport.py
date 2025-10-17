# fw_protocol/transport.py
import serial
import yaml
import time
from typing import Optional

class FPGATransport:
    def __init__(self, config_path: str = "config.yaml"):
        self.config = self._load_config(config_path)
        self.serial = None
        self._connect()
    
    def _load_config(self, config_path: str) -> dict:
        with open(config_path, 'r') as f:
            return yaml.safe_load(f)
    
    def _connect(self):
        """Установить соединение с устройством"""
        ser_config = self.config['serial']
        self.serial = serial.Serial(
            port=ser_config['port'],
            baudrate=ser_config['baudrate'],
            timeout=ser_config['timeout']
        )
        # Дать устройству время на инициализацию
        time.sleep(0.1)
    
    def send_command(self, command: int, data: bytes = b'') -> Optional[bytes]:
        """Отправить команду и получить ответ"""
        packet = self._build_packet(command, data)
        
        for attempt in range(self.config['protocol']['max_retries']):
            try:
                self.serial.write(packet)
                response = self._read_response()
                if response is not None:
                    return response
            except Exception as e:
                print(f"Attempt {attempt + 1} failed: {e}")
                time.sleep(0.1)
        
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
        
        while time.time() - start_time < timeout:
            if self.serial.in_waiting > 0:
                # Читаем все доступные данные
                response = self.serial.read(self.serial.in_waiting)
                return response
            time.sleep(0.01)
        
        return None
    
    def close(self):
        """Закрыть соединение"""
        if self.serial and self.serial.is_open:
            self.serial.close()