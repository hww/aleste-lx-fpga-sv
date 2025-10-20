import serial
import serial.tools.list_ports
import json
import time
import os
import glob
from typing import Optional

class FPGATransport:
    def __init__(self, config_path: str = None, port: str = None):
        self.config_path = self._find_config_file(config_path)
        self.config = self._load_config(self.config_path)
        self.serial = None
        self.port = port
        self._connect()
    
    def _find_config_file(self, config_path: str) -> str:
        """Найти config.json в различных расположениях"""
        if config_path and os.path.exists(config_path):
            return config_path
        
        # Ищем рядом со скриптом
        script_dir = os.path.dirname(os.path.abspath(__file__))
        possible_locations = [
            os.path.join(script_dir, "config.json"),
            os.path.join(os.path.dirname(script_dir), "config.json"),
            os.path.join(os.getcwd(), "config.json")
        ]
        
        for location in possible_locations:
            if os.path.exists(location):
                return location
        
        return ""
    
    def _load_config(self, config_path: str) -> dict:
        """Загрузить конфигурацию из JSON файла"""
        if not config_path or not os.path.exists(config_path):
            print("Using default configuration")
            return {
                "serial": {
                    "baudrate": 115200,
                    "timeout": 1.0,
                    "write_timeout": 1.0
                },
                "protocol": {
                    "max_retries": 5,
                    "response_timeout": 0.5,
                    "command_delay": 0.01
                }
            }
        
        try:
            with open(config_path, 'r') as f:
                config = json.load(f)
            print(f"Loaded config from {config_path}")
            return config
        except Exception as e:
            print(f"Error loading config {config_path}: {e}, using defaults")
            return {
                "serial": {
                    "baudrate": 115200,
                    "timeout": 1.0,
                    "write_timeout": 1.0
                },
                "protocol": {
                    "max_retries": 5,
                    "response_timeout": 0.5,
                    "command_delay": 0.01
                }
            }
    
    def _find_serial_port(self) -> Optional[str]:
        """Найти serial порт"""
        # 1. Порт из конфигурации
        if 'serial' in self.config and 'port' in self.config['serial']:
            config_port = self.config['serial']['port']
            if os.path.exists(config_port):
                print(f"Using port from config: {config_port}")
                return config_port
            else:
                print(f"Port from config not available: {config_port}")
        
        # 2. Auto-detection
        auto_port = self._auto_detect_port()
        if auto_port:
            print(f"Using auto-detected port: {auto_port}")
            return auto_port
        
        return None
    
    def _auto_detect_port(self) -> Optional[str]:
        """Автоматическое обнаружение портов"""
        possible_patterns = ['/dev/ttyUSB*', '/dev/ttyACM*']
        
        for pattern in possible_patterns:
            ports = glob.glob(pattern)
            for port in ports:
                try:
                    test_ser = serial.Serial(port)
                    test_ser.close()
                    return port
                except (serial.SerialException, OSError):
                    continue
        
        return None
    
    def _connect(self):
        """Установить соединение с устройством"""
        port = self._find_serial_port()
        if not port:
            available_ports = serial.tools.list_ports.comports()
            port_list = [p.device for p in available_ports] if available_ports else ["none"]
            raise serial.SerialException(f"No serial port found. Available: {', '.join(port_list)}")
        
        ser_config = self.config['serial']
        try:
            self.serial = serial.Serial(
                port=port,
                baudrate=ser_config['baudrate'],
                timeout=ser_config['timeout'],
                write_timeout=ser_config.get('write_timeout', 1.0),
                bytesize=serial.EIGHTBITS,
                parity=serial.PARITY_NONE,
                stopbits=serial.STOPBITS_ONE,
                rtscts=False,  # Отключаем аппаратное управление потоком
                dsrdtr=False
            )
            # Даем устройству время на инициализацию
            time.sleep(0.5)
            # Очищаем все буферы
            self.serial.reset_input_buffer()
            self.serial.reset_output_buffer()
            print(f"Connected to {port} at {ser_config['baudrate']} baud")
        except serial.SerialException as e:
            print(f"Serial connection error: {e}")
            raise
    
    def send_command(self, command: int, data: bytes = b'') -> Optional[bytes]:
        """Отправить команду и получить ответ"""
        if not self.serial or not self.serial.is_open:
            raise serial.SerialException("Serial port not connected")
        
        packet = self._build_packet(command, data)
        
        for attempt in range(self.config['protocol']['max_retries']):
            try:
                # Очищаем буферы перед каждой командой
                self.serial.reset_input_buffer()
                self.serial.reset_output_buffer()
                
                # Небольшая задержка между командами
                if attempt > 0:
                    time.sleep(0.1)
                
                # Отправляем пакет
                self.serial.write(packet)
                self.serial.flush()
                
                # Задержка перед чтением ответа
                time.sleep(self.config['protocol'].get('command_delay', 0.01))
                
                # Получаем ответ
                response = self._read_response()
                if response is not None:
                    return response
                    
            except Exception as e:
                print(f"Attempt {attempt + 1} failed: {e}")
                # При ошибке переподключаемся
                self._reconnect()
        
        print(f"Command 0x{command:02X} failed after {self.config['protocol']['max_retries']} attempts")
        return None
    
    def _reconnect(self):
        """Переподключиться к устройству"""
        print("Reconnecting...")
        self.close()
        time.sleep(0.5)
        self._connect()
    
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
        
        # Ждем первый байт с более коротким таймаутом
        first_byte_timeout = min(0.1, timeout)
        if self.serial.read(1):
            # Если получили первый байт, читаем остальные
            self.serial.timeout = timeout
            remaining = self.serial.read(self.serial.in_waiting or 1)
            response = self.serial.read(1) + remaining if remaining else self.serial.read(1)
        
        # Восстанавливаем таймаут
        self.serial.timeout = self.config['serial']['timeout']
        return response if response else None

    def close(self):
        """Закрыть соединение"""
        if self.serial and self.serial.is_open:
            self.serial.close()
            print("Connection closed")