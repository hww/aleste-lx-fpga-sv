"""
Пресеты графических режимов для patch_loader
Формат: [регистр, значение, маска] 
"""
"""
Пресеты графических режимов для patch_loader
Формат: [регистр, значение, маска] 
"""

GRAPHICS_PRESETS = {
    "cpc_mode0": {
        "name": "CPC Mode 0 (160x200, 16 colors)",
        "description": "Standard CPC mode with 16 colors, 16KB memory",
        "devices": {
            "crtc": [
                # CRTC базовые регистры
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
                [0x0C, 0, 0x3F],     # R12: START_ADDR_H (6 bits)
                [0x0D, 0, 0xFF],     # R13: START_ADDR_L
            ],
            "gate_array": [
                # Расширенные регистры
                [0x12, 0b00000100, 0b00011111], # R18: VIDEO_CONTROL - bpp_mode=01 (2bpp)
                [0x1A, 0b00000000, 0b00000111], # R26: ADDR_MODE - CPC mode
                [0x1B, 0b00000000, 0b00000011], # R27: PIXEL_CTRL - 27MHz
            ],
            "palette": [
                ["gradient_16c"]  # Специальная команда для настройки палитры
            ]
        }
    },
    
    "cpc_mode1": {
        "name": "CPC Mode 1 (320x200, 4 colors)", 
        "description": "Standard CPC mode with 4 colors, 16KB memory",
        "devices": {
            "crtc": [
                # CRTC базовые регистры (такие же как mode0)
                [0x00, 63, 0xFF],    # R0: HTOTAL
                [0x01, 40, 0xFF],    # R1: HDISPLAY
                [0x02, 46, 0xFF],    # R2: HSYNCPOS  
                [0x03, 142, 0xFF],   # R3: HSYNCWIDTH
                [0x04, 38, 0x7F],    # R4: VTOTAL
                [0x05, 0, 0x1F],     # R5: VADJUST
                [0x06, 25, 0x7F],    # R6: VDISPLAY
                [0x07, 30, 0x7F],    # R7: VSYNCPOS
                [0x08, 0, 0x33],     # R8: INTERLACE
                [0x09, 7, 0x1F],     # R9: MAXSCAN
                
                # Адреса
                [0x0C, 0, 0x3F],     # R12: START_ADDR_H
                [0x0D, 0, 0xFF],     # R13: START_ADDR_L
            ],
            "gate_array": [
                # Расширенные регистры - ИЗМЕНЯЕМ ТОЛЬКО bpp_mode!
                [0x12, 0b00001000, 0b00011111], # R18: VIDEO_CONTROL - bpp_mode=10 (4bpp)
                [0x1A, 0b00000000, 0b00000111], # R26: ADDR_MODE - CPC mode  
                [0x1B, 0b00000000, 0b00000011], # R27: PIXEL_CTRL - 27MHz
            ],
            "palette": [
                ["gradient_16c"]
            ]
        }
    },
    
    "cpc_mode2": {
        "name": "CPC Mode 2 (640x200, 2 colors)",
        "description": "Standard CPC mode with 2 colors, 16KB memory", 
        "devices": {
            "crtc": [
                # CRTC базовые регистры (такие же)
                [0x00, 63, 0xFF],    # R0: HTOTAL
                [0x01, 40, 0xFF],    # R1: HDISPLAY
                [0x02, 46, 0xFF],    # R2: HSYNCPOS
                [0x03, 142, 0xFF],   # R3: HSYNCWIDTH
                [0x04, 38, 0x7F],    # R4: VTOTAL
                [0x05, 0, 0x1F],     # R5: VADJUST
                [0x06, 25, 0x7F],    # R6: VDISPLAY
                [0x07, 30, 0x7F],    # R7: VSYNCPOS
                [0x08, 0, 0x33],     # R8: INTERLACE
                [0x09, 7, 0x1F],     # R9: MAXSCAN
                
                # Адреса
                [0x0C, 0, 0x3F],     # R12: START_ADDR_H
                [0x0D, 0, 0xFF],     # R13: START_ADDR_L
            ],
            "gate_array": [
                # Расширенные регистры - ИЗМЕНЯЕМ bpp_mode!
                [0x12, 0b00001100, 0b00011111], # R18: VIDEO_CONTROL - bpp_mode=11 (8bpp)
                [0x1A, 0b00000000, 0b00000111], # R26: ADDR_MODE - CPC mode
                [0x1B, 0b00000000, 0b00000011], # R27: PIXEL_CTRL - 27MHz
            ],
            "palette": [
                ["gradient_16c"]
            ]
        }
    }
}