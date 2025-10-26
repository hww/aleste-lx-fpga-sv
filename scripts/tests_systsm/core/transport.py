#!/usr/bin/env python3
"""
Кроссплатформенный транспорт для FPGA - БАЛАНС ВЕРСИЯ
"""
import sys
import os
import json
import time
import serial
import serial.tools.list_ports
from typing import Optional

class FPGATransportError(Exception):
    """Серьезные ошибки хоста/интерфейса"""
    pass

class FPGAProtocolError(Exception):
    """Ошибки протокола - плата ответила не то"""
    pass

class FPGATransport:
    def __init__(self, config_path: str = None):
        self.config = self._load_config(config_path)
        self.serial = None
        self._connect()
    
    def _detect_platform(self):
        if sys.platform.startswith('win'):
            return 'windows'
        elif sys.platform.startswith('linux'):
            return 'linux'
        elif sys.platform.startswith('darwin'):
            return 'macos'
        else:
            return 'unknown'
    
    def _get_default_port(self, platform):
        defaults = {
            'windows': 'COM4',
            'linux': '/dev/ttyACM0', 
            'macos': '/dev/tty.usbmodem'
        }
        return defaults.get(platform, 'COM1')
    
    def _load_config(self, config_path: str) -> dict:
        platform = self._detect_platform()
        default_port = self._get_default_port(platform)
        
        default_config = {
            "serial": {
                "port": default_port,
                "baudrate": 115200,
                "timeout": 1.0,
                "write_timeout": 1.0
            },
            "protocol": {
                "max_retries": 3,
                "command_delay": 0.01
            }
        }
        
        if not config_path:
            config_path = self._find_config_file()
        
        if config_path and os.path.exists(config_path):
            try:
                with open(config_path, 'r') as f:
                    user_config = json.load(f)
                
                if 'serial' in user_config:
                    default_config['serial'].update(user_config['serial'])
                if 'protocol' in user_config:
                    default_config['protocol'].update(user_config['protocol'])
            except Exception:
                pass
        
        return default_config
    
    def _find_config_file(self) -> str:
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
        if sys.platform.startswith('win'):
            try:
                test_ser = serial.Serial(port)
                test_ser.close()
                return True
            except:
                return False
        else:
            return os.path.exists(port)
    
    def _connect(self):
        platform = self._detect_platform()
        port = self.config['serial']['port']
        ser_config = self.config['serial']
        
        if not self._check_port_exists(port):
            available_ports = self._list_available_ports()
            if available_ports:
                error_msg = f"Port '{port}' not found. Available: {', '.join(available_ports)}"
            else:
                error_msg = f"Port '{port}' not found and no other ports available"
            raise FPGATransportError(error_msg)
        
        try:
            self.serial = serial.Serial(
                port=port,
                baudrate=ser_config['baudrate'],
                timeout=ser_config['timeout'],
                write_timeout=ser_config['write_timeout'],
                bytesize=serial.EIGHTBITS,
                parity=serial.PARITY_NONE,
                stopbits=serial.STOPBITS_ONE,
                rtscts=False,
                dsrdtr=False
            )
            
            time.sleep(0.5)
            self.serial.reset_input_buffer()
            
        except Exception as e:
            raise FPGATransportError(f"Connection failed: {e}")
    
    def _list_available_ports(self):
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
    
    def _get_expected_response_size(self, command: int) -> int:
        op_type = (command >> 4) & 0x07
        size_code = command & 0x0F
        
        if op_type == 0b000:  # Memory Read
            size_map = {0:1, 1:2, 2:4, 3:8, 4:16, 5:32, 6:64, 7:128}
            return size_map.get(size_code, 4)
        if op_type == 0b101:
            return 6;

        return 1
    
    def _is_write_command(self, command: int) -> bool:
        op_type = (command >> 4) & 0x07
        return op_type == 0b001

    def send_command(self, command: int, data: bytes = b'') -> bytes:
        """
        Отправить команду и получить ответ
        """
        if not self.serial or not self.serial.is_open:
            raise FPGATransportError("Serial port not connected")
        
        for attempt in range(self.config['protocol']['max_retries']):
            try:
                # Очистка буфера перед отправкой
                self.serial.reset_input_buffer()
                
                # Отправка пакета
                packet = bytes([command]) + data
                written = self.serial.write(packet)
                
                if written != len(packet):
                    raise FPGATransportError(f"Write incomplete: {written}/{len(packet)} bytes")
                
                self.serial.flush()
                
                # 🔴 ДЛЯ ЗАПИСИ: НЕ ЖДЕМ ОТВЕТА ВООБЩЕ
                if self._is_write_command(command):
                    time.sleep(0.001)  # Минимальная задержка для стабильности UART
                    return b''  # Всегда успех
                    
                # ✅ ДЛЯ ЧТЕНИЯ: ждем ожидаемый ответ  
                else:
                    expected_size = self._get_expected_response_size(command)
                    if expected_size > 0:
                        time.sleep(0.01)
                        #self.serial.timeout = 10.0
                        response = self.serial.read(expected_size)
                        if len(response) == expected_size:
                            return response
                        else:
                            raise FPGAProtocolError(f"Incomplete response: {len(response)}/{expected_size} bytes")
                    else:
                        return b''
                        
            except serial.SerialTimeoutException:
                if attempt == self.config['protocol']['max_retries'] - 1:
                    raise FPGATransportError("Write timeout")
                
            except serial.SerialException as e:
                raise FPGATransportError(f"Serial error: {e}")
            
            except FPGAProtocolError as e:
                if attempt == self.config['protocol']['max_retries'] - 1:
                    raise
                
            if attempt < self.config['protocol']['max_retries'] - 1:
                time.sleep(0.1)
        
        raise FPGATransportError("All attempts failed")
        

    def close(self):
        if self.serial and self.serial.is_open:
            self.serial.close()