Отлично, понял! Вот исправленная документация с правильными примерами на ASM для Aleste LX:

# Video Palette Module

## Overview
Advanced color palette controller with full CPC legacy compatibility and extended modern color modes. Implements a unified palette architecture with hardware-accelerated color manipulation.

## Address Map

### Legacy CPC Mode (I/O Port 0x7FXX)
- **0x7FXX**: Gate Array registers (write-only)
  - When D7=0: Palette control register
    - D7-D6=00: Palette index (5-bit: 16 colors + border, bits D4-D0)
    - D7-D6=01: Palette data (CPC color conversion, bits D5-D0)
    - D7-D6=10: Border color (CPC color conversion, bits D5-D0)
  - When D7=1: Other Gate Array functions (handled elsewhere)
  
**Address decoding:** %01xxxxxx xxxxxxxx (A15=0, A14=1, остальные биты игнорируются)

### Native Mode через Memory Mapped I/O
Aleste LX использует страничную MMIO систему:

| Страница | Адрес в памяти | Порты I/O | Описание |
|----------|----------------|-----------|----------|
| 0 | 0xFF0000-0xFF007F | 0x00-0x7F | System registers |
| 1 | 0xFF0080-0xFF00FF | 0x80-0xFF | Reserved |
| **2** | **0xFF0100-0xFF017F** | **0x00-0x7F** | **Video Palette registers** |
| 3 | 0xFF0180-0xFF01FF | 0x80-0xFF | CRTC registers |

**Регистры палитры (страница 2):**
- **0x00**: Palette index (R/W)
- **0x01**: Palette data low (R/W, mode-dependent auto-increment)
- **0x02**: Palette data high (R/W, 12-bit mode only)
- **0x03**: Border color low (R/W)
- **0x04**: Border color high (R/W)
- **0x05**: Control register (R/W)
- **0x06**: Palette modifier (R/W, OR/XOR operations)

## Control Register (0x05)
```
bit 0-1: palette_write_mode (00=12-bit, 01=CPC, 10=MSX, 11=YJK)
bit 2-3: Reserved
bit 4:   Reserved  
bit 5:   auto_increment     (1=auto-increment palette index)
bit 6:   modifier_type      (0=OR, 1=XOR)
bit 7:   modifier_enable    (1=enable palette index modification)
```

## Color Modes

### CPC Legacy Mode (I/O Port 0x7FXX)
- **Address:** 0x7FXX (A15=0, A14=1)
- **Access:** Write-only, reads return undefined
- **Features:**
  - 16 colors + border color via hardware register mapping
  - Accurate CPC color conversion using distributed ROM LUT
  - 5-bit palette index (bit4 selects border vs palette)
  - Hardware-compatible partial address decoding

### 12-bit Native Mode
- Direct 12-bit color from pixel data
- High/low byte write with auto-increment after high byte
- Bypasses color conversion for maximum flexibility
- Access через MMIO страницу 2

### MSX Mode
- MSX2+ compatible 8-bit color conversion
- Hardware-optimized distributed LUT conversion
- Perceptual color mapping for optimal quality
- Access через MMIO страницу 2

### YJK Mode
- Advanced MSX2+ YJK color space conversion
- Specialized for graphic arts and photo applications
- Maintains full MSX software compatibility
- Access через MMIO страницу 2

## Legacy CPC Gate Array Protocol

### Palette Index Register (D7-D6=00)
```
Port: 0x7FXX
Format: %00xxxxxx
Bits:
  D7-D6: 00 - Index register
  D5:    Reserved (0)
  D4:    Border select (0=palette, 1=border)
  D3-D0: Color index (0-15)
```

### Palette Data Register (D7-D6=01)
```
Port: 0x7FXX  
Format: %01xxxxxx
Bits:
  D7-D6: 01 - Data register
  D5-D0: CPC color value
```

### Border Color Register (D7-D6=10)
```
Port: 0x7FXX
Format: %10xxxxxx
Bits:
  D7-D6: 10 - Border register
  D5-D0: CPC color value
```

## Palette Modification Features

### Index Modification
- **OR mode**: Force palette bank selection
- **XOR mode**: Palette animation and bank switching
- Applied to pixel index before palette lookup
- Enables dynamic palette effects without data movement

### Auto-increment Behavior
- **CPC Legacy mode**: Manual index management (via 0x7FXX)
- **MSX/YJK modes**: Increments after data write
- **12-bit mode**: Increments after high byte write
- **Native CPC mode**: Increments after data write
- Reads never affect index

## Примеры использования


## Правильная адресация для `OUT (C), A`

### CPC Legacy Mode (ASM) - Правильная адресация
```assembly
; Установить палитру индекс 5
LD A, %00000101     ; Index 5, palette (not border)
LD BC, 0x7F00       ; B=0x7F (старший), C=0x00 (младший)
OUT (C), A          ; Записать в порт (BC), C содержит младший байт!

; Установить цвет CPC цвет 26
LD A, %01011010     ; Data register + color 26
LD BC, 0x7F00       ; B=0x7F, C=0x00
OUT (C), A
```

### Исправленный пример установки палитры:
```assembly
; Установка нескольких цветов палитры
SETUP_PALETTE:
    LD HL, PALETTE_DATA  ; Данные цветов
    LD B, 16             ; 16 цветов (счетчик)
    LD C, 0x00           ; C = 0x00 (младший байт адреса)
    ; НЕ ВЕРНО: LD C, 0x7F - это ошибка!
    
PALETTE_LOOP:
    ; Установить индекс цвета
    LD A, 16             ; Рассчитать индекс (16 цветов)
    SUB B                ; A = 16 - B (от 0 до 15)
    LD B, 0x7F           ; B = 0x7F (старший байт адреса)
    OUT (C), A           ; Установить индекс
                         ; (C) означает порт с адресом B:C = 0x7F00
    
    ; Установить значение цвета
    LD A, (HL)           ; Получить значение цвета
    SET 6, A             ; Установить биты D7-D6=01 (палитра)
    OUT (C), A           ; Записать цвет
    INC HL
    
    ; Восстановить B как счетчик
    LD B, 16
    SUB B                ; B = счетчик - 1
    LD B, A
    DJNZ PALETTE_LOOP
    
    ; Установить цвет бордюра
    LD A, %10001010      ; Border register + color 10
    LD B, 0x7F           ; B = 0x7F
    OUT (C), A
    RET
```

### Более эффективная версия (сохраняем счетчик в другом регистре):
```assembly
; Установка палитры (эффективная версия)
SETUP_PALETTE:
    LD HL, PALETTE_DATA
    LD D, 16             ; D = счетчик (16 цветов)
    LD BC, 0x7F00        ; B=0x7F, C=0x00 - правильно!
    
PALETTE_LOOP:
    ; Установить индекс цвета
    LD A, 16
    SUB D                ; A = 16 - D (индекс 15..0)
    OUT (C), A           ; Установить индекс
    
    ; Установить значение цвета  
    LD A, (HL)
    SET 6, A             ; Data register
    OUT (C), A           ; Записать цвет
    INC HL
    
    DEC D
    JR NZ, PALETTE_LOOP
    
    ; Установить цвет бордюра
    LD A, %10001010      ; Border register + color 10
    OUT (C), A
    RET
```

### Пример из реального CPC программного обеспечения (исправленный):
```assembly
; Стандартная CPC инициализация палитры
INIT_GATEARRAY:
    LD BC, 0x7F00        ; B=0x7F, C=0x00 - правильно!
    
    ; Установить цвет бордюра (черный)
    LD A, %10000000      ; Border register + black (0)
    OUT (C), A
    
    ; Заполнить всю палитру цветом по умолчанию
    LD D, 16             ; 16 цветов
    LD E, 0x14           ; Первый цвет по умолчанию
    
INIT_LOOP:
    LD A, 16
    SUB D                ; Индекс цвета (15..0)
    OUT (C), A           ; Установить индекс
    
    LD A, E
    SET 6, A             ; Установить биты D7-D6=01 (палитра)
    OUT (C), A           ; Записать значение цвета
    
    INC E                ; Следующий цвет
    DEC D
    JR NZ, INIT_LOOP
    RET
```

### Быстрая анимация палитры на CPC (исправленная):
```assembly
; Быстрое переключение между двумя палитрами
ANIMATE_PALETTE:
    LD BC, 0x7F00        ; B=0x7F, C=0x00
    
ANIM_LOOP:
    ; Первая палитра (яркая)
    LD D, 16
    LD HL, PALETTE1
    
ANIM1:
    LD A, 16
    SUB D                ; Индекс
    OUT (C), A           ; Установить индекс
    
    LD A, (HL)
    SET 6, A             ; Data register
    OUT (C), A           ; Записать цвет
    INC HL
    
    DEC D
    JR NZ, ANIM1
    
    ; Задержка
    CALL DELAY
    
    ; Вторая палитра (темная)  
    LD D, 16
    LD HL, PALETTE2
    
ANIM2:
    LD A, 16
    SUB D                ; Индекс
    OUT (C), A           ; Установить индекс
    
    LD A, (HL)
    SET 6, A             ; Data register
    OUT (C), A           ; Записать цвет
    INC HL
    
    DEC D
    JR NZ, ANIM2
    
    ; Задержка
    CALL DELAY
    
    JP ANIM_LOOP
```


### Native Mode через MMIO (ASM)
```assembly
; Активировать страницу 2 MMIO (палитра)
LD A, 2             ; Вторая страница MMIO
OUT (0xF1), A       ; Включить страницу 2

; Переключиться в 12-bit режим с auto-increment
LD A, %00100000     ; 12-bit mode + auto-increment
OUT (0x05), A       ; Control register

; Заполнить палитру градиентом
LD HL, GRADIENT_DATA
LD B, 0             ; 256 цветов
LOOP:
    LD A, (HL)      ; Low byte (синий)
    INC HL
    OUT (0x01), A   ; Palette data low
    LD A, (HL)      ; High byte (зеленый/красный)
    INC HL
    OUT (0x02), A   ; Palette data high
    DJNZ LOOP

; Установить цвет бордюра
LD A, 0xFF          ; Красный максимум
OUT (0x03), A       ; Border low
LD A, 0x0F          ; Зеленый/красный
OUT (0x04), A       ; Border high
```

### Быстрая очистка палитры (ASM)
```assembly
; Активировать страницу 2
LD A, 2
OUT (0xF1), A

; Включить 12-bit режим с auto-increment
LD A, %00100000
OUT (0x05), A

; Очистить все 256 цветов
LD A, 0
OUT (0x00), A       ; Установить индекс 0
LD B, 128           ; 256 байт / 2 = 128 итераций
CLEAR_LOOP:
    OUT (0x01), A   ; Low byte = 0
    OUT (0x02), A   ; High byte = 0
    DJNZ CLEAR_LOOP
```

### Использование модификатора палитры (ASM)
```assembly
; Активировать страницу 2
LD A, 2
OUT (0xF1), A

; Включить XOR модификатор
LD A, %11000000     ; modifier_enable + XOR mode
OUT (0x05), A       ; Control register

; Установить модификатор для анимации
LD A, %00010000     ; XOR с 0x10
OUT (0x06), A       ; Palette modifier

; Теперь все обращения к палитре будут использовать
; pixel_index ^ 0x10, что позволяет быстро переключать
; между двумя банками палитр по 16 цветов
```

## Border Handling
- Dedicated 12-bit border color register
- Separate from main palette RAM
- **CPC legacy**: Uses same color conversion as palette (via D4 flag)
- **Native modes**: Direct 12-bit color assignment
- Pixel generator provides border detection signal

## Color Conversion

### CPC Color LUT
- Hardware-accurate conversion using distributed ROM
- Preserves exact CPC color behavior including hardware quirks
- Multiple register values map to same colors (hardware behavior)
- Used in both legacy (0x7FXX) and native CPC mode

### MSX/YJK Conversion
- Hardware-optimized distributed LUT implementation
- MSX mode: Standard 8-bit to 12-bit RGB conversion
- YJK mode: Advanced color space conversion for graphic arts
- Single-cycle operation with registered outputs

## Access Modes Summary

| Mode | Address | Access | Description |
|------|---------|--------|-------------|
| CPC Legacy | 0x7FXX | Write-only | Original CPC Gate Array protocol |
| Native MMIO | Page 2, 0x00-0x06 | Read/Write | Extended palette features через MMIO |

## CPC I/O Port Compatibility

The module implements correct partial address decoding for CPC compatibility:

| Device | Required Address Bits | Port Range |
|--------|---------------------|------------|
| Gate Array | A15=0, A14=1 | 0x4000-0x7FFF |
| Our Implementation | A15=0, A14=1 | 0x7FXX (0x7F00-0x7FFF) |

**Note:** The module responds to the entire 0x4000-0x7FFF range for legacy compatibility, but standard CPC software uses 0x7FXX.

## Performance Characteristics
- Single-cycle color lookup in all modes
- Pipeline-friendly design with registered outputs
- Zero-wait state register access
- Distributed LUT for minimal combinatorial delay

## Design Philosophy
- **Accuracy**: Hardware-perfect CPC legacy compatibility with correct address decoding
- **Quality**: High-quality color conversion for modern modes  
- **Performance**: Single-cycle operation with pipeline support
- **Flexibility**: Software-controlled mode switching
- **Compatibility**: Full CPC 0x7FXX port support with partial address decoding