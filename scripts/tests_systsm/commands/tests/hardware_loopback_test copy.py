import serial
import time

def clean_serial_test():
    # Открываем порт БЕЗ автоматического сброса
    ser = serial.Serial(
        port='COM4',
        baudrate=115200,
        bytesize=8,
        parity='N',
        stopbits=1,
        timeout=1,
        # ↓↓↓ КРИТИЧЕСКИ ВАЖНО ↓↓↓
        dsrdtr=False,    # Отключить DTR сброс
        rtscts=False,    # Отключить RTS/CTS  
        xonxoff=False,   # Отключить software flow control
    )
    
    # ДАЕМ ПОРТУ УСТОЯТЬСЯ БЕЗ СБРОСОВ
    time.sleep(0.5)
    
    junk = ser.read_all()  # выкидываем 0x00 0x00
    if junk:
        print(f"🧹 Выбросили: {junk.hex()}")
    time.sleep(0.1)
    
    print("🚀 Отправляем ЧИСТЫЙ 0x55...")
    ser.write(b'\x55')
    ser.flush()
    
    time.sleep(0.1)
    received = ser.read(10)
    print(f"📨 Получено: {received.hex()}")
    
    ser.close()

clean_serial_test()