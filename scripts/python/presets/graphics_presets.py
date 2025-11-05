"""
Пресеты графических режимов для patch_loader
Формат: [регистр, значение, маска] 
"""
"""
// Video Control Register (reg_video_control) - 8 bits
// [7:5] - Reserved for future use
// [4]   - use_cpc_modes: 0=Normal modes, 1=CPC-compatible video modes
// [3]   - linear_mode: 0=Single access, 1=Continuous memory access  
// [2]   - burst_enable: 0=Single cycle access, 1=Burst mode access (REQUIRES SDRAM SUPPORT!)
// [1:0] - bpp_mode: 00=1bpp, 01=2bpp, 10=4bpp, 11=8bpp
wire [1:0] bpp_mode        = reg_video_control[1:0];
wire       burst_enable    = reg_video_control[2]; // Reuse existing bit
wire       linear_mode = reg_video_control[3];
wire       use_cpc_modes   = reg_video_control[4];

// Pixel Control Register (reg_pixel_ctrl) - 8 bits  
// [7:2] - Reserved for future use
// [1:0] - pixel_clock_sel: 00=27MHz, 01=54MHz, 10=74MHz, 11=108MHz
wire [1:0] pixel_clock_sel = reg_pixel_ctrl[1:0];  // From new register

// Address Mode Register (reg_addr_mode) - 8 bits
// [7:3] - Reserved for future use
// [2:0] - addr_mode: 
//          000=(Main) CPC 16KB
//          001=(Reserved) EX 32KB  
//          010=(Reserved) LX 32KB
//          011=(Reserved) LX 64KB
//          100=(Main Linear) 16,32,64,...,128KB
//          101-111=Reserved
wire [2:0] addr_mode = reg_addr_mode[2:0];   // From new register
wire cpc_mode =  addr_mode == 3'b000; // Linear addressing mode
wire linear_mode =  addr_mode[2]; // Linear addressing mode

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
                # Расширенные регистры
                [0x12, 0b00001010, 0b0001111], # R18: VIDEO_CONTROL - use_cpc=0, bpp=10 (4bpp)
                [0x14, 0b00000000, 0b00000111], # R20: ADDR_MODE - linear (100)
                [0x15, 0b00000000, 0b00000011]  # R21: PIXEL_CTRL - 27MHz
            ],
            "gate_array": [

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
                # Расширенные регистры - ИЗМЕНЯЕМ ТОЛЬКО bpp_mode!
                [0x12, 0b00001001, 0b00011111], # R18: VIDEO_CONTROL - use_cpc=0, bpp=01 (2bpp)
                [0x14, 0b00000000, 0b00000111], # R20: ADDR_MODE - linear (100)
                [0x15, 0b00000000, 0b00000011]  # R21: PIXEL_CTRL - 27MHz
            ],
            "gate_array": [
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
                [0x12, 0b00001000, 0b00011111], # R18: VIDEO_CONTROL - use_cpc=0, bpp=00 (1bpp)
                [0x14, 0b00000000, 0b00000111], # R20: ADDR_MODE - linear (100)
                [0x15, 0b00000000, 0b00000011]  # R21: PIXEL_CTRL - 27MHz
            ],
            "palette": [
                ["gradient_16c"]
            ]
        }
    },

    "lx_160x200_256c": {
        "name": "LX 160x200 256 colors",
        "description": "Extended mode 160x200 with 256 colors, 32KB memory",
        "devices": {
            "crtc": [
                # CRTC базовые регистры (как у CPC режимов)
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
                
                # РАСШИРЕННЫЕ РЕГИСТРЫ - КЛЮЧЕВЫЕ ИЗМЕНЕНИЯ!
                [0x12, 0b00001011, 0b00011111], # R18: use_cpc_modes=0, linear=1, bpp=11 (8bpp)
                [0x14, 0b00000100, 0b00000111], # R26: ADDR_MODE=100 (linear)
                [0x1B, 0b00000001, 0b00000011], # R27: PIXEL_CTRL - sel=01 (32KB буфер)
            ],
            "gate_array": [
                # GateArray настройки для 256 цветов
            ],
            "palette": [
                ["gradient_256c"]  # Полная 256-цветная палитра
            ]
        }
    },
    
    "lx_320x200_16c": {
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
                [0x12, 0b00001010, 0b00011111], # use_cpc_modes=0, linear=1, bpp=10 (4bpp)
                [0x14, 0b00000100, 0b00000111], # ADDR_MODE=100 (linear)
                [0x1B, 0b00000001, 0b00000011], # PIXEL_CTRL - sel=01 (32KB буфер)
            ],
            "palette": [
                ["gradient_16c"]
            ]
        }
    },
    
    "lx_320x200_4c": {
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
                [0x12, 0b00001001, 0b00011111], # use_cpc_modes=0, linear=1, bpp=01 (2bpp)
                [0x14, 0b00000100, 0b00000111], # ADDR_MODE=100 (linear) 
                [0x1B, 0b00000000, 0b00000011], # PIXEL_CTRL - sel=00 (16KB буфер)
            ],
            "palette": [
                ["gradient_16c"]
            ]
        }
    },
    
    "lx_320x200_256c": {
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
                [0x12, 0b00001011, 0b00011111], # use_cpc_modes=0, linear=1, bpp=11 (8bpp)
                [0x14, 0b00000100, 0b00000111], # ADDR_MODE=100 (linear)
                [0x1B, 0b00000010, 0b00000011], # PIXEL_CTRL - sel=10 (64KB буфер)
            ],
            "palette": [
                ["gradient_256c"]
            ]
        }
    },
    
    "lx_640x200_16c": {
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
                [0x12, 0b00001010, 0b00011111], # use_cpc_modes=0, linear=1, bpp=10 (4bpp)
                [0x14, 0b00000100, 0b00000111], # ADDR_MODE=100 (linear)
                [0x1B, 0b00000010, 0b00000011], # PIXEL_CTRL - sel=10 (64KB буфер)
            ],
            "palette": [
                ["gradient_16c"]
            ]
        }
    },
    
    "lx_640x200_4c": {
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
                [0x12, 0b00001001, 0b00011111], # use_cpc_modes=0, linear=1, bpp=01 (2bpp)
                [0x14, 0b00000100, 0b00000111], # ADDR_MODE=100 (linear)
                [0x1B, 0b00000001, 0b00000011], # PIXEL_CTRL - sel=01 (32KB буфер)
            ],
            "palette": [
                ["gradient_16c"]
            ]
        }
    }
}