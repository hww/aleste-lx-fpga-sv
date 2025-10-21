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
        if config_path and os.path.exists(config_path):
            return config_path
        
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
        if not config_path or not os.path.exists(config_path):
            return {
                "serial": {
                    "baudrate": 115200,
                    "timeout": 0.5,
                    "write_timeout": 1.0
                },
                "protocol": {
                    "max_retries": 3,
                    "response_timeout": 0.3,
                    "command_delay": 0.005
                }
            }
        
        try:
            with open(config_path, 'r') as f:
                return json.load(f)
        except Exception:
            return {
                "serial": {
                    "baudrate": 115200,
                    "timeout": 0.5,
                    "write_timeout": 1.0
                },
                "protocol": {
                    "max_retries": 3,
                    "response_timeout": 0.3,
                    "command_delay": 0.005
                }
            }
    
    def _find_serial_port(self) -> Optional[str]:
        if 'serial' in self.config and 'port' in self.config['serial']:
            config_port = self.config['serial']['port']
            if os.path.exists(config_port):
                return config_port
        
        if self.port and os.path.exists(self.port):
            return self.port
        
        return self._auto_detect_port()
    
    def _auto_detect_port(self) -> Optional[str]:
        possible_patterns = ['/dev/ttyUSB*', '/dev/ttyACM*']
        
        for pattern in possible_patterns:
            ports = glob.glob(pattern)
            for port in ports:
                try:
                    test_ser = serial.Serial(port)
                    test_ser.close()
                    return port
                except:
                    continue
        return None
    
    def _connect(self):
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
                rtscts=False,
                dsrdtr=False
            )
            time.sleep(0.2)
            self.serial.reset_input_buffer()
            self.serial.reset_output_buffer()
        except serial.SerialException as e:
            raise serial.SerialException(f"Serial connection error: {e}")
    
    def send_command(self, command: int, data: bytes = b'') -> Optional[bytes]:
        if not self.serial or not self.serial.is_open:
            raise serial.SerialException("Serial port not connected")
        
        packet = bytes([command]) + data
        
        for attempt in range(self.config['protocol']['max_retries']):
            try:
                # Только входной буфер, выходной не трогаем
                self.serial.reset_input_buffer()
                
                self.serial.write(packet)
                self.serial.flush()
                
                time.sleep(self.config['protocol'].get('command_delay', 0.005))
                
                # Определяем ожидаемый размер ответа
                expected_size = self._get_expected_response_size(command)
                response = self._read_response_fast(expected_size)
                
                if response is not None:
                    return response
                    
            except Exception as e:
                if attempt == self.config['protocol']['max_retries'] - 1:
                    self._reconnect()
        
        return None
    
    def _get_expected_response_size(self, command: int) -> int:
        """Определить ожидаемый размер ответа по команде"""
        op_type = (command >> 4) & 0x07
        size_code = command & 0x0F
        
        if op_type == 0b000:  # Memory Read
            size_map = {0:1, 1:2, 2:4, 3:8, 4:16, 5:32, 6:64, 7:128}
            return size_map.get(size_code, 4)
        
        return 1  # Для остальных команд - 1 байт статуса
    
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
                time.sleep(0.001)  # Короткая пауза
        
        return response if len(response) == expected_size else None
    
    def _reconnect(self):
        self.close()
        time.sleep(0.3)
        self._connect()

    def close(self):
        if self.serial and self.serial.is_open:
            self.serial.close()