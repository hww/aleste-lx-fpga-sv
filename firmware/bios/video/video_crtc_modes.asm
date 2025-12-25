SECTION VIDEO_CRTC_MODES

; Режим 0: 80x25 текст (CPC Mode 2 совместимый)
crtc_mode_0_text:
    db CRTC_HTOTAL,        63
    db CRTC_HDISPLAY,      40
    db CRTC_HSYNCPOS,      46
    db CRTC_HSYNCWIDTH,    142
    db CRTC_VTOTAL,        38
    db CRTC_VADJUST,       0
    db CRTC_VDISPLAY,      25
    db CRTC_VSYNCPOS,      30
    db CRTC_INTERLACE,     0
    db CRTC_MAXSCAN,       7
    db CRTC_START_ADDR_H,  0
    db CRTC_START_ADDR_L,  0
    ; Расширенные регистры
    db CRTC_VIDEO_CONTROL, 0b00000000  ; 1bpp, CPC palette
    db CRTC_ADDR_MODE,     0b00000000  ; CPC 16KB
    db CRTC_PIXEL_CTRL,    0b00000000  ; 2 bytes per 16clk
crtc_mode_0_size equ ($ - crtc_mode_0_text) / 2

; Режим 1: 640x200 1bpp (CPC Mode 2)
crtc_mode_1_640x200:
    db CRTC_HTOTAL,        63
    db CRTC_HDISPLAY,      40
    db CRTC_HSYNCPOS,      46
    db CRTC_HSYNCWIDTH,    142
    db CRTC_VTOTAL,        38
    db CRTC_VADJUST,       0
    db CRTC_VDISPLAY,      25    ; 200/8 = 25
    db CRTC_VSYNCPOS,      30
    db CRTC_INTERLACE,     0
    db CRTC_MAXSCAN,       7
    db CRTC_START_ADDR_H,  0
    db CRTC_START_ADDR_L,  0
    ; Расширенные регистры
    db CRTC_VIDEO_CONTROL, 0b00010000  ; 1bpp, Linear RGB
    db CRTC_ADDR_MODE,     0b00000001  ; EX 32KB (для 16KB)
    db CRTC_PIXEL_CTRL,    0b00000000  ; 2 bytes
crtc_mode_1_size equ ($ - crtc_mode_1_640x200) / 2

; Режим 2: 320x200 4bpp (CPC Mode 1)
crtc_mode_2_320x200:
    db CRTC_HTOTAL,        63
    db CRTC_HDISPLAY,      40
    db CRTC_HSYNCPOS,      46
    db CRTC_HSYNCWIDTH,    142
    db CRTC_VTOTAL,        38
    db CRTC_VADJUST,       0
    db CRTC_VDISPLAY,      25
    db CRTC_VSYNCPOS,      30
    db CRTC_INTERLACE,     0
    db CRTC_MAXSCAN,       7
    db CRTC_START_ADDR_H,  0
    db CRTC_START_ADDR_L,  0
    ; Расширенные регистры
    db CRTC_VIDEO_CONTROL, 0b00010010  ; 4bpp, Linear RGB
    db CRTC_ADDR_MODE,     0b00000001  ; EX 32KB
    db CRTC_PIXEL_CTRL,    0b00000000  ; 2 bytes
crtc_mode_2_size equ ($ - crtc_mode_2_320x200) / 2

; Режим 3: CPC Mode 0 (160x200, 16 colors)
crtc_mode_3_cpc_mode0:
    db CRTC_HTOTAL,        63
    db CRTC_HDISPLAY,      40
    db CRTC_HSYNCPOS,      46
    db CRTC_HSYNCWIDTH,    142
    db CRTC_VTOTAL,        38
    db CRTC_VADJUST,       0
    db CRTC_VDISPLAY,      25
    db CRTC_VSYNCPOS,      30
    db CRTC_INTERLACE,     0
    db CRTC_MAXSCAN,       7
    db CRTC_START_ADDR_H,  0
    db CRTC_START_ADDR_L,  0
    ; Расширенные регистры
    db CRTC_VIDEO_CONTROL, 0b00000010  ; 4bpp, CPC palette
    db CRTC_ADDR_MODE,     0b00000000  ; CPC 16KB
    db CRTC_PIXEL_CTRL,    0b00000000  ; 2 bytes
crtc_mode_3_size equ ($ - crtc_mode_3_cpc_mode0) / 2

; Режим 4: 16k1b: LX 320x200 4 colors
crtc_mode_4_16k1b:
    db CRTC_HTOTAL,        63
    db CRTC_HDISPLAY,      40
    db CRTC_HSYNCPOS,      46
    db CRTC_HSYNCWIDTH,    142
    db CRTC_VTOTAL,        38
    db CRTC_VADJUST,       0
    db CRTC_VDISPLAY,      25
    db CRTC_VSYNCPOS,      30
    db CRTC_INTERLACE,     0
    db CRTC_MAXSCAN,       7
    db CRTC_START_ADDR_H,  0
    db CRTC_START_ADDR_L,  0
    ; Расширенные регистры
    db CRTC_VIDEO_CONTROL, 0b00010000  ; 1bpp, Linear RGB
    db CRTC_ADDR_MODE,     0b00000001  ; EX 32KB (для 16KB)
    db CRTC_PIXEL_CTRL,    0b00000000  ; 2 bytes
crtc_mode_4_size equ ($ - crtc_mode_4_16k1b) / 2

; Режим 5: 16k2b: LX 640x200 2 colors (текущий режим)
crtc_mode_5_16k2b:
    db CRTC_HTOTAL,        63
    db CRTC_HDISPLAY,      40
    db CRTC_HSYNCPOS,      46
    db CRTC_HSYNCWIDTH,    142
    db CRTC_VTOTAL,        38
    db CRTC_VADJUST,       0
    db CRTC_VDISPLAY,      25
    db CRTC_VSYNCPOS,      30
    db CRTC_INTERLACE,     0
    db CRTC_MAXSCAN,       7
    db CRTC_START_ADDR_H,  0
    db CRTC_START_ADDR_L,  0
    ; Расширенные регистры
    db CRTC_VIDEO_CONTROL, 0b00010001  ; 2bpp, Linear RGB
    db CRTC_ADDR_MODE,     0b00000001  ; EX 32KB
    db CRTC_PIXEL_CTRL,    0b00000000  ; 2 bytes
crtc_mode_5_size equ ($ - crtc_mode_5_16k2b) / 2

; Режим 6: 16k4b: LX 160x200 16 colors
crtc_mode_6_16k4b:
    db CRTC_HTOTAL,        63
    db CRTC_HDISPLAY,      40
    db CRTC_HSYNCPOS,      46
    db CRTC_HSYNCWIDTH,    142
    db CRTC_VTOTAL,        38
    db CRTC_VADJUST,       0
    db CRTC_VDISPLAY,      25
    db CRTC_VSYNCPOS,      30
    db CRTC_INTERLACE,     0
    db CRTC_MAXSCAN,       7
    db CRTC_START_ADDR_H,  0
    db CRTC_START_ADDR_L,  0
    ; Расширенные регистры
    db CRTC_VIDEO_CONTROL, 0b00010010  ; 4bpp, Linear RGB
    db CRTC_ADDR_MODE,     0b00000001  ; EX 32KB
    db CRTC_PIXEL_CTRL,    0b00000000  ; 2 bytes
crtc_mode_6_size equ ($ - crtc_mode_6_16k4b) / 2

; Режим 7: 32k2b: LX 640x200 4 colors
crtc_mode_7_32k2b:
    db CRTC_HTOTAL,        63
    db CRTC_HDISPLAY,      40
    db CRTC_HSYNCPOS,      46
    db CRTC_HSYNCWIDTH,    142
    db CRTC_VTOTAL,        38
    db CRTC_VADJUST,       0
    db CRTC_VDISPLAY,      25
    db CRTC_VSYNCPOS,      30
    db CRTC_INTERLACE,     0
    db CRTC_MAXSCAN,       7
    db CRTC_START_ADDR_H,  0
    db CRTC_START_ADDR_L,  0
    ; Расширенные регистры
    db CRTC_VIDEO_CONTROL, 0b00010001  ; 2bpp, Linear RGB
    db CRTC_ADDR_MODE,     0b00000011  ; LX 32KB
    db CRTC_PIXEL_CTRL,    0b00000001  ; 4 bytes
crtc_mode_7_size equ ($ - crtc_mode_7_32k2b) / 2

; Режим 8: 32k4b: LX 320x200 16 colors
crtc_mode_8_32k4b:
    db CRTC_HTOTAL,        63
    db CRTC_HDISPLAY,      40
    db CRTC_HSYNCPOS,      46
    db CRTC_HSYNCWIDTH,    142
    db CRTC_VTOTAL,        38
    db CRTC_VADJUST,       0
    db CRTC_VDISPLAY,      25
    db CRTC_VSYNCPOS,      30
    db CRTC_INTERLACE,     0
    db CRTC_MAXSCAN,       7
    db CRTC_START_ADDR_H,  0
    db CRTC_START_ADDR_L,  0
    ; Расширенные регистры
    db CRTC_VIDEO_CONTROL, 0b00010010  ; 4bpp, Linear RGB
    db CRTC_ADDR_MODE,     0b00000011  ; LX 32KB
    db CRTC_PIXEL_CTRL,    0b00000001  ; 4 bytes
crtc_mode_8_size equ ($ - crtc_mode_8_32k4b) / 2

; Режим 9: 32k8b: LX 160x200 256 colors
crtc_mode_9_32k8b:
    db CRTC_HTOTAL,        63
    db CRTC_HDISPLAY,      40
    db CRTC_HSYNCPOS,      46
    db CRTC_HSYNCWIDTH,    142
    db CRTC_VTOTAL,        38
    db CRTC_VADJUST,       0
    db CRTC_VDISPLAY,      25
    db CRTC_VSYNCPOS,      30
    db CRTC_INTERLACE,     0
    db CRTC_MAXSCAN,       7
    db CRTC_START_ADDR_H,  0
    db CRTC_START_ADDR_L,  0
    ; Расширенные регистры
    db CRTC_VIDEO_CONTROL, 0b00010011  ; 8bpp, Linear RGB
    db CRTC_ADDR_MODE,     0b00000011  ; LX 32KB
    db CRTC_PIXEL_CTRL,    0b00000001  ; 4 bytes
crtc_mode_9_size equ ($ - crtc_mode_9_32k8b) / 2

; Режим 10: 64k4b: LX 640x200 16 colors
crtc_mode_10_64k4b:
    db CRTC_HTOTAL,        63
    db CRTC_HDISPLAY,      40
    db CRTC_HSYNCPOS,      46
    db CRTC_HSYNCWIDTH,    142
    db CRTC_VTOTAL,        38
    db CRTC_VADJUST,       0
    db CRTC_VDISPLAY,      25
    db CRTC_VSYNCPOS,      30
    db CRTC_INTERLACE,     0
    db CRTC_MAXSCAN,       7
    db CRTC_START_ADDR_H,  0
    db CRTC_START_ADDR_L,  0
    ; Расширенные регистры
    db CRTC_VIDEO_CONTROL, 0b00010010  ; 4bpp, Linear RGB
    db CRTC_ADDR_MODE,     0b00000111  ; LX 64KB
    db CRTC_PIXEL_CTRL,    0b00000010  ; 8 bytes
crtc_mode_10_size equ ($ - crtc_mode_10_64k4b) / 2

; Режим 11: 64k8b: LX 320x200 256 colors
crtc_mode_11_64k8b:
    db CRTC_HTOTAL,        63
    db CRTC_HDISPLAY,      40
    db CRTC_HSYNCPOS,      46
    db CRTC_HSYNCWIDTH,    142
    db CRTC_VTOTAL,        38
    db CRTC_VADJUST,       0
    db CRTC_VDISPLAY,      25
    db CRTC_VSYNCPOS,      30
    db CRTC_INTERLACE,     0
    db CRTC_MAXSCAN,       7
    db CRTC_START_ADDR_H,  0
    db CRTC_START_ADDR_L,  0
    ; Расширенные регистры
    db CRTC_VIDEO_CONTROL, 0b00010011  ; 8bpp, Linear RGB
    db CRTC_ADDR_MODE,     0b00000111  ; LX 64KB
    db CRTC_PIXEL_CTRL,    0b00000010  ; 8 bytes
crtc_mode_11_size equ ($ - crtc_mode_11_64k8b) / 2


; Таблица указателей на режимы CRTC
crtc_mode_tables:
    ; mode 0: 80x25 текст (CPC Mode 2 совместимый)
    dw crtc_mode_0_text
    db crtc_mode_0_size
    
    ; mode 1: 640x200 1bpp (CPC Mode 2)
    dw crtc_mode_1_640x200
    db crtc_mode_1_size
    
    ; mode 2: 320x200 4bpp (CPC Mode 1)
    dw crtc_mode_2_320x200
    db crtc_mode_2_size
    
    ; mode 3: CPC Mode 0 (160x200, 16 colors)
    dw crtc_mode_3_cpc_mode0
    db crtc_mode_3_size
    
    ; mode 4: 16k1b: LX 320x200 4 colors
    dw crtc_mode_4_16k1b
    db crtc_mode_4_size
    
    ; mode 5: 16k2b: LX 640x200 2 colors
    dw crtc_mode_5_16k2b
    db crtc_mode_5_size
    
    ; mode 6: 16k4b: LX 160x200 16 colors
    dw crtc_mode_6_16k4b
    db crtc_mode_6_size
    
    ; mode 7: 32k2b: LX 640x200 4 colors
    dw crtc_mode_7_32k2b
    db crtc_mode_7_size
    
    ; mode 8: 32k4b: LX 320x200 16 colors
    dw crtc_mode_8_32k4b
    db crtc_mode_8_size
    
    ; mode 9: 32k8b: LX 160x200 256 colors
    dw crtc_mode_9_32k8b
    db crtc_mode_9_size
    
    ; mode 10: 64k4b: LX 640x200 16 colors
    dw crtc_mode_10_64k4b
    db crtc_mode_10_size
    
    ; mode 11: 64k8b: LX 320x200 256 colors
    dw crtc_mode_11_64k8b
    db crtc_mode_11_size

CRTC_MODES_COUNT equ ($ - crtc_mode_tables) / 3