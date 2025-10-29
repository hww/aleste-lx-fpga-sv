"""
Умные пресеты графических режимов для Aleste LX
Формат: [регистр, значение, маска] или [регистр, значение]
"""

GRAPHICS_PRESETS = {
    "cpc_mode0": {
        "name": "CPC Mode 0 (160x200, 16 colors)",
        "description": "Standard CPC mode with 16 colors",
        "devices": {
            "crtc": [
                # Основные регистры таймингов
                [0x00, 63, 0xFF],    # R0: HTOTAL
                [0x01, 40, 0xFF],    # R1: HDISPLAY  
                [0x02, 46, 0xFF],    # R2: HSYNCPOS
                [0x03, 142, 0xFF],   # R3: HSYNCWIDTH (14) + VSYNCWIDTH (8)
                [0x04, 38, 0x7F],    # R4: VTOTAL (7 bits)
                [0x05, 0, 0x1F],     # R5: VADJUST (5 bits)
                [0x06, 25, 0x7F],    # R6: VDISPLAY (7 bits)
                [0x07, 30, 0x7F],    # R7: VSYNCPOS (7 bits)
                [0x08, 0, 0x33],     # R8: INTERLACE & SKEW
                [0x09, 7, 0x1F],     # R9: MAXSCAN (5 bits)
                
                # Адреса и курсор
                [0x0A, 0, 0x7F],     # R10: CURSOR_START
                [0x0B, 0, 0x1F],     # R11: CURSOR_END
                [0x0C, 0, 0x3F],     # R12: START_ADDR_H (6 bits)
                [0x0D, 0, 0xFF],     # R13: START_ADDR_L
                [0x0E, 0, 0x3F],     # R14: CURSOR_H (6 bits)
                [0x0F, 0, 0xFF],     # R15: CURSOR_L
                
                # Расширенные регистры - ОСТОРОЖНО с масками!
                [0x12, 0b00000100, 0b00011111], # R18: VIDEO_CONTROL - только bpp(2) + флаги
                [0x1A, 0b00000000, 0b00000111], # R26: ADDR_MODE - CPC mode
                [0x1B, 0b00000000, 0b00000011], # R27: PIXEL_CTRL - 27MHz
            ],
            
            "gate_array": [
                # Регистр 2: Mode/ROM/LEDs (D7-D6=10 для выбора регистра)
                [0x02, 0b10000000, 0b11000011], # MODE 0: D7-D6=10, D1-D0=00
            ],
            
            "palette": [
                ["gradient_16c"]  # Специальная команда для градиентной палитры
            ]
        }
    },
    
    "test_hires": {
        "name": "Test High Resolution (640x480, 256 colors)", 
        "description": "Extended mode for testing",
        "devices": {
            "crtc": [
                # Тайминги для 640x480
                [0x00, 79, 0xFF],    # HTOTAL
                [0x01, 80, 0xFF],    # HDISPLAY
                [0x02, 88, 0xFF],    # HSYNCPOS
                [0x03, 142, 0xFF],   # SYNC_WIDTHS
                [0x04, 31, 0x7F],    # VTOTAL
                [0x05, 0, 0x1F],     # VADJUST
                [0x06, 30, 0x7F],    # VDISPLAY
                [0x07, 28, 0x7F],    # VSYNCPOS
                [0x08, 0, 0x33],     # INTERLACE
                [0x09, 7, 0x1F],     # MAXSCAN
                
                # Адреса
                [0x0C, 0x00, 0x3F],  # START_H
                [0x0D, 0x00, 0xFF],  # START_L
                
                # Расширенные настройки
                [0x12, 0b00010011, 0b00011111], # 8bpp + continuous mode
                [0x1A, 0b00000100, 0b00000111], # Linear addressing
                [0x1B, 0b00000001, 0b00000011], # 54MHz pixel clock
                [0x19, 0x04, 0xFF],  # HIGH_ADDRESS = 0x040000
            ],
            
            "gate_array": [
                [0x02, 0b10000000, 0b11000011], # MODE 0 (для совместимости)
            ],
            
            "palette": [
                ["gradient_256c"]  # Полная 256-цветная палитра
            ]
        }
    }
}