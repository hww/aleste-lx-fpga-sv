#!/usr/bin/env python3
"""
Простая программа для отправки одного байта 0x55 на COM4 в Windows
"""
import serial
import time

def main():
    try:
        # Открываем COM4
        print("📡 Opening COM4...")
        ser = serial.Serial('COM4', 115200, timeout=1)
        time.sleep(0.1)
        
        # Очищаем буфер
        print("🧹 Clearing buffers...")
        ser.reset_input_buffer()
        ser.reset_output_buffer()
        
        # Отправляем один байт 0x55
        print("🚀 Sending single byte: 0x55")
        ser.write(bytes([0x55]))
        ser.flush()
        
        print("✅ Byte sent successfully!")
        
        # Закрываем порт
        ser.close()
        print("🔒 Port closed")
        
    except Exception as e:
        print(f"❌ Error: {e}")

if __name__ == "__main__":
    main()