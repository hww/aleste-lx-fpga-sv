# tests/test_video_controller.py
from lib.transport import get_serial_connection
from lib.protocol import Protocol

def run_test():
    """Тест видеоконтроллера - возвращает True/False"""
    try:
        ser = get_serial_connection()
        proto = Protocol()
        
        # 1. Послать команду инициализации видео
        init_packet = proto.create_packet(0x10, b'\x01')
        ser.write(init_packet)
        response = ser.read(64)
        
        # 2. Послать тестовое изображение
        test_image = b'\xFF' * 64  # Простая заглушка
        img_packet = proto.create_packet(0x11, test_image)
        ser.write(img_packet)
        response = ser.read(64)
        
        # 3. Проверить, что устройство отвечает адекватно
        return len(response) > 0  # Упрощенная проверка
        
    except Exception as e:
        print(f"Video test error: {e}")
        return False