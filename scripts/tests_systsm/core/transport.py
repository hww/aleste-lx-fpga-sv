#!/usr/bin/env python3
"""
Кроссплатформенный транспорт для FPGA
"""
import sys
import os
import json
import time
from typing import Optional

try:
    import serial
    import serial.tools.list_ports
    HAS_SERIAL = True
except ImportError:
    HAS_SERIAL = False
    print("⚠️  pyserial not installed. Install with: pip install pyserial")

class FPGATransport:
    def __init__(self, config_path: str = None):
        if not HAS_SERIAL:
            raise Exception("pyserial not available. Install with: pip install pyserial")
        
        self.config = self._load_config(config_path)
        self.serial = None
        self._connect()
    
    def _detect_platform(self):
        """Определить платформу и настроить параметры"""
        if sys.platform.startswith('win'):
            return 'windows'
        elif sys.platform.startswith('linux'):
            return 'linux'
        elif sys.platform.startswith('darwin'):
            return 'macos'
        else:
            return 'unknown'
    
    def _get_default_port(self, platform):
        """Получить порт по умолчанию для платформы"""
        defaults = {
            'windows': 'COM4',
            'linux': '/dev/ttyACM0',
            'macos': '/dev/tty.usbmodem'
        }
        return defaults.get(platform, 'COM1')
    
    def _load_config(self, config_path: str) -> dict:
        """Загрузить конфигурацию с учетом платформы"""
        platform = self._detect_platform()
        default_port = self._get_default_port(platform)
        
        # Конфиг по умолчанию с учетом платформы
        default_config = {
            "serial": {
                "port": default_port,
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
        
        if not config_path:
            config_path = self._find_config_file()
        
        if not config_path or not os.path.exists(config_path):
            print(f"⚠️  Using default config for {platform} (port: {default_port})")
            return default_config
        
        try:
            with open(config_path, 'r') as f:
                user_config = json.load(f)
            
            # Объединяем с конфигом по умолчанию
            if 'serial' in user_config:
                default_config['serial'].update(user_config['serial'])
            if 'protocol' in user_config:
                default_config['protocol'].update(user_config['protocol'])
                
            print(f"✅ Loaded config from {config_path}")
            return default_config
            
        except Exception as e:
            print(f"⚠️  Error loading config: {e}, using defaults")
            return default_config
    
    def _find_config_file(self) -> str:
        """Найти config.json"""
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
    
    def _check_port_exists(self, port: str) -> bool:
        """Проверить существование порта на текущей платформе"""
        if sys.platform.startswith('win'):
            # В Windows проверяем существование COM-порта
            try:
                # Простой способ проверки - попытка открытия
                test_ser = serial.Serial(port)
                test_ser.close()
                return True
            except:
                return False
        else:
            # В Linux/Mac проверяем существование файла устройства
            return os.path.exists(port)
    
    def _list_available_ports(self):
        """Показать доступные порты"""
        ports = serial.tools.list_ports.comports()
        available = []
        for port in ports:
            try:
                test_ser = serial.Serial(port.device)
                test_ser.close()
                available.append(port.device)
            except:
                continue
        return available
    
    def _connect(self):
        """Установить соединение с устройством (кроссплатформенно)"""
        platform = self._detect_platform()
        port = self.config['serial']['port']
        ser_config = self.config['serial']
        
        # Проверяем существование порта
        if not self._check_port_exists(port):
            available_ports = self._list_available_ports()
            error_msg = [
                f"❌ Serial port '{port}' not found on {platform}",
                "",
                "Available ports:",
            ]
            
            if available_ports:
                for p in available_ports:
                    error_msg.append(f"  - {p}")
                error_msg.extend([
                    "",
                    "To fix this:",
                    f"1. Update config.json with correct port",
                    f"2. Or set environment variable: export FPGA_PORT={available_ports[0]}",
                ])
            else:
                error_msg.extend([
                    "  No serial ports found",
                    "",
                    "Check:",
                    "  - Device connection",
                    "  - USB cable",
                    "  - Drivers installation",
                ])
            
            raise Exception('\n'.join(error_msg))
        
        try:
            print(f"🔌 Connecting to {port} on {platform}...")
            
            self.serial = serial.Serial(
                port=port,
                baudrate=ser_config['baudrate'],
                timeout=ser_config['timeout'],
                write_timeout=ser_config.get('write_timeout', 1.0),
                bytesize=serial.EIGHTBITS,
                parity=serial.PARITY_NONE,
                stopbits=serial.STOPBITS_ONE,
                rtscts=False,
                dsrdtr=False
            )
            
            # Даем устройству время на инициализацию
            time.sleep(0.3)
            self.serial.reset_input_buffer()
            
            print(f"✅ Connected to {port} at {ser_config['baudrate']} baud")
            
        except Exception as e:
            error_msg = [
                f"❌ Failed to connect to {port}: {e}",
                "",
                "Troubleshooting:",
            ]
            
            if platform == 'windows':
                error_msg.extend([
                    f"- Check if {port} is available in Device Manager",
                    "- Try different COM port",
                    "- Check if another program is using the port",
                ])
            else:
                error_msg.extend([
                    f"- Check permissions: ls -l {port}",
                    "- Try: sudo chmod 666 /dev/tty*",
                    "- Or add user to dialout group",
                ])
            
            raise Exception('\n'.join(error_msg))
    
    def send_command(self, command: int, data: bytes = b'') -> Optional[bytes]:
        """Отправить команду и получить ответ"""
        if not self.serial or not self.serial.is_open:
            raise Exception("Serial port not connected")
        
        packet = bytes([command]) + data
        
        for attempt in range(self.config['protocol']['max_retries']):
            try:
                self.serial.reset_input_buffer()
                
                self.serial.write(packet)
                self.serial.flush()
                
                time.sleep(self.config['protocol'].get('command_delay', 0.001))
                
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
                chunk = self.serial.read(min(bytes_needed, available))
                response += chunk
            else:
                time.sleep(0.0005)
        
        return response if len(response) == expected_size else None

    def close(self):
        """Закрыть соединение"""
        if self.serial and self.serial.is_open:
            self.serial.close()
            print("Connection closed")