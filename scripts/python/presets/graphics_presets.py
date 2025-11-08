"""
Пресеты графических режимов для patch_loader
Формат: [регистр, значение, маска] 

FF0120 CRTC

   R18 Video Control Register (reg_video_control) - 8 bits
   ---------------------------------------------------------
   [1:0] - bpp_mode: 00=1bpp, 01=2bpp, 10=4bpp, 11=8bpp
   [2]   - reserved
   [3]   - reserved  
   [4]   - linear_pixel:  0=CPC palette,  1=Linear RGB
   [5]   - use_cpc_modes: 0=Internal bpp, 1=CPC gatearray graphics
   [7]   - reserved

   R19 Hi address register
   ---------------------------------------------------------

   R20 Address Mode Register (reg_addr_mode) - 8 bits
   ---------------------------------------------------------
   [0]   - linear_mode: 0=CPC-style, 1=Linear addressing
   [1]   - address step: 0-Once per cycle, 1-two times per cycle
   [2]   - address rate: 0-Once per cycle, 1-two times per cycle
   [5:4] - addr_mode: 000=CPC 16KB, 001=EX 32KB, 010=LX 32KB, 011=LX 64KB, 100=Linear
   [7:6] - Reserved for future use

   R21 Pixel Control Register (reg_pixel_ctrl) - 8 bits  
   ---------------------------------------------------------
   [1:0] - bytes per 16clk: 00=2 bytes, 01=4 bytes, 10=8 bytes, 11=16 bytes
   [7:2] - Reserved for future use
  
sFF0100 PALETTE 
  
   R0 Color index:
   ---------------------------------------------------------

   R1 Color data low:
   ---------------------------------------------------------

   R2 Color data hi:
   ---------------------------------------------------------

   R3 Border lo:
   ---------------------------------------------------------

   R4 Border hi:
   ---------------------------------------------------------

   R5 Control register:
   ---------------------------------------------------------
   [7] - modifier_enable
   [6] - modifier_type (0=OR, 1=XOR)  
   [5] - auto_increment
   [4] - reserved
   [3] - reserved
   [1:0] - palette_write_mode
   WRITE_MODE_CPC   = 2'b01;
   WRITE_MODE_12BIT = 2'b00;
   WRITE_MODE_MSX   = 2'b10;
   WRITE_MODE_YJK   = 2'b11;

   R6 Color modifier:
   ---------------------------------------------------------

"""

GRAPHICS_PRESETS = {

    # =================== CPC ======================   

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
                # Расширенные регистры - не использоавть cpc mode, 
                # использовать внутренний но с cpc режимом палитры и пикселов                
                [0x12, 0b00000000, 0b00110011], # R18: VIDEO_CONTROL 
                [0x14, 0b00000000, 0b00110111], # R20: ADDR_MODE
                [0x15, 0b00000000, 0b00000011]  # R21: PIXEL_CTRL     
            ],
            "gate_array": [
            ],
            #"palette": [
            #    ["gradient_16c"]
            #]
        }
    },

    "cpc_mode1": {
        "name": "CPC Mode 1 (320x200, 4 colors)", 
        "description": "Standard CPC mode with 4 colors, 16KB memory",
        "devices": {
            "crtc": [
                # CRTC базовые регистры (такие же как mode0)
                [0x00, 63, 0xFF],    [0x01, 40, 0xFF],    [0x02, 46, 0xFF],
                [0x03, 142, 0xFF],   [0x04, 38, 0x7F],    [0x05, 0, 0x1F],
                [0x06, 25, 0x7F],    [0x07, 30, 0x7F],    [0x08, 0, 0x33],
                [0x09, 7, 0x1F],     [0x0C, 0, 0x3F],     [0x0D, 0, 0xFF],

                # Расширенные регистры - не использоавть cpc mode, 
                # использовать внутренний но с cpc режимом палитры и пикселов
                [0x12, 0b00000001, 0b00110011], # R18: VIDEO_CONTROL 
                [0x14, 0b00000000, 0b00110111], # R20: ADDR_MODE 
                [0x15, 0b00000000, 0b00000011]  # R21: PIXEL_CTRL
            ],
            "gate_array": [
            ],
            #"palette": [
            #    ["gradient_16c"]
            #]
        }
    },
 

    "cpc_mode0": {
        "name": "CPC Mode 0 (160x200, 16 colors)",
        "description": "Standard CPC mode with 16 colors, 16KB memory",
        "devices": {
            "crtc": [
                # CRTC базовые регистры
                [0x00, 63, 0xFF],    [0x01, 40, 0xFF],    [0x02, 46, 0xFF],
                [0x03, 142, 0xFF],   [0x04, 38, 0x7F],    [0x05, 0, 0x1F],
                [0x06, 25, 0x7F],    [0x07, 30, 0x7F],    [0x08, 0, 0x33],
                [0x09, 7, 0x1F],     [0x0C, 0, 0x3F],     [0x0D, 0, 0xFF],

                # Расширенные регистры - не использоавть cpc mode, 
                # использовать внутренний но с cpc режимом палитры и пикселов
                [0x12, 0b00000010, 0b00110011], # R18: VIDEO_CONTROL 
                [0x14, 0b00000000, 0b00110111], # R20: ADDR_MODE 
                [0x15, 0b00000000, 0b00000011]  # R21: PIXEL_CTRL
            ],
            "gate_array": [

            ],
            #"palette": [
            #    ["gradient_16c"]  # Специальная команда для настройки палитры
            #]
        }
    },
    
    # =================== 16 KB ======================

    "16k1b": {
        "name": "LX 320x200 4 colors",
        "description": "Extended mode 320x200 with 4 colors, 16KB memory", 
        "devices": {
            "crtc": [
                # CRTC базовые регистры
                [0x00, 63, 0xFF],    [0x01, 40, 0xFF],    [0x02, 46, 0xFF],
                [0x03, 142, 0xFF],   [0x04, 38, 0x7F],    [0x05, 0, 0x1F],
                [0x06, 25, 0x7F],    [0x07, 30, 0x7F],    [0x08, 0, 0x33],
                [0x09, 7, 0x1F],     [0x0C, 0, 0x3F],     [0x0D, 0, 0xFF],
                
                # Расширенные регистры
                [0x12, 0b00010000, 0b00110011], # R18: VIDEO_CONTROL 
                [0x14, 0b00000001, 0b00110111], # R20: ADDR_MODE
                [0x15, 0b00000000, 0b00000011], # R21: PIXEL_CTRL     
            ],
            "palette": [
                ["gradient_16c"]
            ]
        }
    },
   
    "16k2b": {
        "name": "LX 640x200 2 colors",
        "description": "Extended mode 640x200 with 2 colors, 16KB memory", 
        "devices": {
            "crtc": [
                # CRTC базовые регистры
                [0x00, 63, 0xFF],    [0x01, 40, 0xFF],    [0x02, 46, 0xFF],
                [0x03, 142, 0xFF],   [0x04, 38, 0x7F],    [0x05, 0, 0x1F],
                [0x06, 25, 0x7F],    [0x07, 30, 0x7F],    [0x08, 0, 0x33],
                [0x09, 7, 0x1F],     [0x0C, 0, 0x3F],     [0x0D, 0, 0xFF],
                
                # Расширенные регистры
                [0x12, 0b00010001, 0b00110011], # R18: VIDEO_CONTROL 
                [0x14, 0b00000001, 0b00110111], # R20: ADDR_MODE
                [0x15, 0b00000000, 0b00000011], # R21: PIXEL_CTRL     
            ],
            "palette": [
                ["gradient_16c"]
            ]
        }
    },
 
    "16k4b": {
        "name": "LX 160x200 16 colors",
        "description": "Extended mode 160x200 with 16 colors, 16KB memory", 
        "devices": {
            "crtc": [
                # CRTC базовые регистры
                [0x00, 63, 0xFF],    [0x01, 40, 0xFF],    [0x02, 46, 0xFF],
                [0x03, 142, 0xFF],   [0x04, 38, 0x7F],    [0x05, 0, 0x1F],
                [0x06, 25, 0x7F],    [0x07, 30, 0x7F],    [0x08, 0, 0x33],
                [0x09, 7, 0x1F],     [0x0C, 0, 0x3F],     [0x0D, 0, 0xFF],

                # Расширенные регистры - не использоавть cpc mode, 
                # использовать внутренний но с cpc режимом палитры и пикселов
                [0x12, 0b00010010, 0b00110011], # R18: VIDEO_CONTROL 
                [0x14, 0b00000001, 0b00110111], # R20: ADDR_MODE 
                [0x15, 0b00000000, 0b00000011]  # R21: PIXEL_CTRL
            ],
            "gate_array": [

            ],
            #"palette": [
            #    ["gradient_16c"]  # Специальная команда для настройки палитры
            #]
        }
    }, 
    # =================== 32 KB ======================

    "32k2b": {
        "name": "LX 640x200 4 colors",
        "description": "Extended mode 640x200 with 4 colors, 32KB memory",
        "devices": {
            "crtc": [
                # CRTC базовые регистры
                [0x00, 63, 0xFF],    [0x01, 40, 0xFF],    [0x02, 46, 0xFF],
                [0x03, 142, 0xFF],   [0x04, 38, 0x7F],    [0x05, 0, 0x1F],
                [0x06, 25, 0x7F],    [0x07, 30, 0x7F],    [0x08, 0, 0x33],
                [0x09, 7, 0x1F],     [0x0C, 0, 0x3F],     [0x0D, 0, 0xFF],
                
                # Расширенные регистры
                [0x12, 0b00010001, 0b00110011], # R18: VIDEO_CONTROL 
                [0x14, 0b00000011, 0b00000111], # R20: ADDR_MODE
                [0x15, 0b00000001, 0b00000011], # R21: PIXEL_CTRL     
            ],
            "palette": [
                #["gradient_16c"]
            ]
        }
    },

    "32k4b": {
        "name": "LX 320x200 16 colors", 
        "description": "Extended mode 320x200 with 16 colors, 32KB memory",
        "devices": {
            "crtc": [
                # CRTC базовые регистры
                [0x00, 63, 0xFF],    [0x01, 40, 0xFF],    [0x02, 46, 0xFF],
                [0x03, 142, 0xFF],   [0x04, 38, 0x7F],    [0x05, 0, 0x1F],
                [0x06, 25, 0x7F],    [0x07, 30, 0x7F],    [0x08, 0, 0x33],
                [0x09, 7, 0x1F],     [0x0C, 0, 0x3F],     [0x0D, 0, 0xFF],
                
                # Расширенные регистры
                [0x12, 0b00010010, 0b00110011], # R18: VIDEO_CONTROL 
                [0x14, 0b00000011, 0b00110111], # R20: ADDR_MODE
                [0x15, 0b00000001, 0b00000011], # R21: PIXEL_CTRL     
            ],
            "palette": [
                #["gradient_16c"]
            ]
        }
    },

    "32k8b": {
        "name": "LX 160x200 256 colors",
        "description": "Extended mode 160x200 with 256 colors, 32KB memory",
        "devices": {
            "crtc": [
                # CRTC базовые регистры (как у CPC режимов)
                [0x00, 63, 0xFF],    [0x01, 40, 0xFF],    [0x02, 46, 0xFF],
                [0x03, 142, 0xFF],   [0x04, 38, 0x7F],    [0x05, 0, 0x1F],
                [0x06, 25, 0x7F],    [0x07, 30, 0x7F],    [0x08, 0, 0x33],
                [0x09, 7, 0x1F],     [0x0C, 0, 0x3F],     [0x0D, 0, 0xFF],
                
                # РАСШИРЕННЫЕ РЕГИСТРЫ - КЛЮЧЕВЫЕ ИЗМЕНЕНИЯ!
                [0x12, 0b00010011, 0b00110011], # R18: VIDEO_CONTROL 
                [0x14, 0b00000011, 0b00110111], # R20: ADDR_MODE
                [0x15, 0b00000001, 0b00000011], # R21: PIXEL_CTRL     
            ],
            "gate_array": [
                # GateArray настройки для 256 цветов
            ],
            "palette": [
                #["gradient_256c"]  # Полная 256-цветная палитра
            ]
        }
    },
     


    # =================== 64 KB ======================

    "64k4b": {
        "name": "LX 640x200 16 colors",
        "description": "Extended mode 640x200 with 16 colors, 64KB memory",
        "devices": {
            "crtc": [
                # CRTC базовые регистры
                [0x00, 63, 0xFF],    [0x01, 40, 0xFF],    [0x02, 46, 0xFF],
                [0x03, 142, 0xFF],   [0x04, 38, 0x7F],    [0x05, 0, 0x1F],
                [0x06, 25, 0x7F],    [0x07, 30, 0x7F],    [0x08, 0, 0x33],
                [0x09, 7, 0x1F],     [0x0C, 0, 0x3F],     [0x0D, 0, 0xFF],
                
                # Расширенные регистры
                [0x12, 0b00010010, 0b00110011], # R18: VIDEO_CONTROL 
                [0x14, 0b00000111, 0b00000111], # R20: ADDR_MODE
                [0x15, 0b00000010, 0b00000011], # R21: PIXEL_CTRL     
            ],
            "palette": [
                #["gradient_16c"]
            ]
        }
    },
    
    "64k8b": {
        "name": "LX 320x200 256 colors",
        "description": "Extended mode 320x200 with 256 colors, 64KB memory",
        "devices": {
            "crtc": [
                # CRTC базовые регистры
                [0x00, 63, 0xFF],    [0x01, 40, 0xFF],    [0x02, 46, 0xFF],
                [0x03, 142, 0xFF],   [0x04, 38, 0x7F],    [0x05, 0, 0x1F],
                [0x06, 25, 0x7F],    [0x07, 30, 0x7F],    [0x08, 0, 0x33],
                [0x09, 7, 0x1F],     [0x0C, 0, 0x3F],     [0x0D, 0, 0xFF],
                
                # Расширенные регистры
                [0x12, 0b00010011, 0b00110011], # R18: VIDEO_CONTROL 
                [0x14, 0b00000111, 0b00110111], # R20: ADDR_MODE
                [0x15, 0b00000010, 0b00000011], # R21: PIXEL_CTRL     
            ],
            "palette": [
                #["gradient_256c"]
            ]
        }
    },
    
  
}