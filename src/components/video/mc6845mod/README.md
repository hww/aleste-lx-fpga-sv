Вот обновленная документация для CRT контроллера с учетом legacy и native адресации:

# CRT Controller Module (MC6845 Enhanced)

## Overview
Enhanced CRT controller with full MC6845 compatibility and modern extensions. Supports both legacy CPC I/O port access and native memory-mapped I/O with advanced features for HDMI timing.

## Address Map

### Legacy CPC Mode (I/O Ports 0xBCXX-0xBFXX)
- **0xBCXX**: CRTC Index Register (Write-only)
- **0xBDXX**: CRTC Data Register (Write-only)  
- **0xBEXX**: CRTC Status Register (Read-only)
- **0xBFXX**: CRTC Data Register (Read-only)

**Address decoding:** %x0xxxxxx xxxxxxxx (A14=0, остальные биты игнорируются)
**Register select:** A8=0 для Index, A8=1 для Data (в legacy режиме)

### Native Mode (Base Address 0xFF0120-0xFF012F)
- **0xFF0120**: CRTC Index Register (R/W)
- **0xFF0121**: CRTC Data Register (R/W)

**Примечание:** Доступ через MMIO систему Aleste LX (страница 3)

## Register Map

### Standard MC6845 Registers
| Index | Register Name    | Bits | Function |
|-------|------------------|------|----------|
| 0x00  | HTOTAL           | 7:0  | Horizontal total (characters - 1) |
| 0x01  | HDISPLAY         | 7:0  | Horizontal displayed |
| 0x02  | HSYNCPOS         | 7:0  | Horizontal sync position |
| 0x03  | HSYNCWIDTH       | 3:0  | Horizontal sync width |
|       |                  | 7:4  | Vertical sync width |
| 0x04  | VTOTAL           | 6:0  | Vertical total (character rows - 1) |
| 0x05  | VADJUST          | 4:0  | Vertical adjust |
| 0x06  | VDISPLAY         | 6:0  | Vertical displayed |
| 0x07  | VSYNCPOS         | 6:0  | Vertical sync position |
| 0x08  | INTERLACE/SKEW   | 1:0  | Interlace mode |
|       |                  | 5:4  | Display/Cursor skew |
| 0x09  | MAXSCAN          | 4:0  | Maximum scan line address |
| 0x0A  | CURSOR START     | 4:0  | Cursor start line |
|       |                  | 6:5  | Cursor mode |
| 0x0B  | CURSOR END       | 4:0  | Cursor end line |
| 0x0C  | START ADDRESS H  | 5:0  | Display start address (high) |
| 0x0D  | START ADDRESS L  | 7:0  | Display start address (low) |
| 0x0E  | CURSOR ADDRESS H | 5:0  | Cursor address (high) |
| 0x0F  | CURSOR ADDRESS L | 7:0  | Cursor address (low) |

### Extended Registers (Aleste LX specific)
| Index | Register Name    | Bits | Function |
|-------|------------------|------|----------|
| 0x12  | VIDEO_CONTROL    | 7:0  | Video control and pixel depth |
| 0x13  | HIGH_ADDRESS     | 7:0  | Address bits A23-A16 |
| 0x14  | ADDR_MODE        | 7:0  | Address mode control |
| 0x15  | PIXEL_CTRL       | 7:0  | Pixel clock control |

## Extended Register Details

### VIDEO_CONTROL Register (0x12)
```
bit 1:0 - bpp_mode: 00=1bpp, 01=2bpp, 10=4bpp, 11=8bpp
bit 2   - reserved
bit 3   - reserved  
bit 4   - linear_pixel: 0=CPC palette, 1=Linear RGB
bit 5   - use_cpc_modes: 0=Internal bpp, 1=CPC gatearray graphics
bit 7:6 - reserved
```

### HIGH_ADDRESS Register (0x13)
```
bit 7:0 - Memory address bits A23-A16
          Used in linear addressing modes for extended memory
```

### ADDR_MODE Register (0x14)
```
bit 0   - linear_mode: 0=CPC-style addressing, 1=Linear addressing
bit 1   - address_step: 0=Step 1, 1=Step 2 (for double-width access)
bit 2   - address_rate: 0=Once per cycle, 1=Two times per cycle
bit 4:5 - addr_mode: 00=CPC 16KB, 01=EX 32KB, 10=LX 32KB, 11=LX 64KB
bit 7:6 - reserved
```

### PIXEL_CTRL Register (0x15)
```
bit 1:0 - pixel_rate: 00=2 bytes/16clk, 01=4 bytes/16clk, 10=8 bytes/16clk, 11=16 bytes/16clk
bit 7:2 - reserved
```

## Output Configuration

```verilog
assign cfg_bpp_o = use_cpc_modes ? ~cfg_cpc_bpp_i : bpp_mode;
assign cfg_linear_pixel_o = linear_pixel;
assign cfg_addr_mode_o = addr_mode;
assign cfg_pixel_rate_o = pixel_rate;
```

## Memory Address Generation

### Traditional CPC Addressing
```
Address = {high_address[7:0], ma[13:12], ra[3:0], ma[9:0], 1'b0}
```

### Linear Addressing Mode
```
Address = {high_address[7:0], linear_addr[15:0]}
```
где linear_addr инкрементируется на каждом такте в зависимости от address_step и address_rate.

## Video Timing

### HDMI Fixed Timing
- **Horizontal:** 720 visible, 1024 total pixels
- **Vertical:** 480 visible, 525 total lines (interlaced)
- **Pixel Clock:** 27MHz (CPC compatible)

### CRTC Timing Generation
Контроллер центрирует CPC видео в HDMI frame:
```
start_h_pixel = (HDMI_H_VISIBLE/2) - (h_displayed * 16 / 2) - 16
start_v_line = (HDMI_V_VISIBLE/2) - (v_displayed * 16 / 2)
```

## Примеры использования

Вы абсолютно правы! В оригинальных Amstrad CPC для работы с CRTC используется адресация через старший байт в регистре BC. Исправлю документацию:

## Исправленные примеры использования

### Legacy CPC Mode (ASM) - Правильная адресация
```assembly
; Запись в CRTC регистры через CPC порты
LD A, 1            ; Регистр 1 - HDISPLAY
LD BC, 0xBC00      ; Старший байт 0xBC выбирает CRTC Index
OUT (C), A         ; Установить индекс (запись в порт (BC))
LD A, 40           ; 40 символов по горизонтали
LD BC, 0xBD00      ; Старший байт 0xBD выбирает CRTC Data
OUT (C), A         ; Записать значение

; Чтение статуса (если поддерживается)
LD BC, 0xBE00      ; Старший байт 0xBE выбирает CRTC Status
IN A, (C)          ; Прочитать статус регистр

; Чтение данных из CRTC
LD BC, 0xBF00      ; Старший байт 0xBF выбирает CRTC Data для чтения
IN A, (C)          ; Прочитать значение регистра
```

### Альтернативная запись (более короткий вариант)
```assembly
; Установка CRTC регистров с циклом
LD HL, CRTC_TABLE  ; Адрес таблицы значений
LD B, 16           ; 16 регистров
LD C, 0xBC         ; C = 0xBC (Index register)
CRTC_LOOP:
    OUTI           ; OUT (C),(HL); INC HL; DEC B
    INC C          ; C = 0xBD (Data register)
    OUTI           ; Записать значение
    DEC C          ; Вернуться к Index register
    JP NZ, CRTC_LOOP
```

### Полная совместимость с CPC
Важная деталь: в оригинальном CPC используется частичное декодирование адресов:
- **0xBCXX** - CRTC Index Register (запись)
- **0xBDXX** - CRTC Data Register (запись)
- **0xBEXХ** - CRTC Status Register (чтение)
- **0xBFXX** - CRTC Data Register (чтение)

Где XX - любые значения (обычно 0x00 или 0xFF), так как декодируются только биты A14 и A8.

### Пример из реального CPC кода:
```assembly
; Инициализация CRTC на CPC
INIT_CRTC:
    LD HL, CRTC_VALUES
    LD B, 0x0F          ; 16 регистров (0-15)
    LD C, 0xBC          ; CRTC индексный порт
INIT_LOOP:
    OUT (C), B          ; Выбрать регистр
    INC C               ; C = 0xBD (порт данных)
    OUTI                ; Записать значение и увеличить HL
    DEC C               ; C = 0xBC
    DJNZ INIT_LOOP      ; Повторить для всех регистров
    RET

CRTC_VALUES:
    .db 63, 40, 46, 142, 38, 0, 25, 30
    .db 0, 7, 0, 0, 0, 0, 0, 0
```

### Native Mode через MMIO (остается без изменений)
```assembly
; Активировать страницу 3 MMIO (CRTC)
LD A, 3            ; Третья страница MMIO
OUT (0xF1), A      ; Включить страницу 3

; Настроить расширенную адресацию
LD A, 0x12         ; Индекс регистра VIDEO_CONTROL
OUT (0x20), A      ; CRTC Index register
LD A, %00100001    ; 8bpp mode + linear pixel
OUT (0x21), A      ; CRTC Data register
```

### Особенность реализации:
Контроллер должен корректно обрабатывать оба метода доступа:
1. **Legacy CPC доступ**: `OUT (0xBC00+REG), A` или `OUT (C), A` с BC=0xBCXX
2. **Native MMIO доступ**: Через порты 0x20-0x21 на странице 3

При этом регистры 0x00-0x0F работают идентично в обоих режимах, а расширенные регистры (0x12-0x15) доступны только через Native MMIO режим.

Благодарю за замечание! Это важный нюанс для сохранения полной совместимости с оригинальным CPC программным обеспечением.

### Native Mode через MMIO (ASM)
```assembly
; Активировать страницу 3 MMIO (CRTC)
LD A, 3            ; Третья страница MMIO
OUT (0xF1), A      ; Включить страницу 3

; Настроить расширенную адресацию
LD A, 0x12         ; Индекс регистра VIDEO_CONTROL
OUT (0x20), A      ; CRTC Index register
LD A, %00100001    ; 8bpp mode + linear pixel
OUT (0x21), A      ; CRTC Data register

; Установить высокий адрес
LD A, 0x13         ; Индекс регистра HIGH_ADDRESS
OUT (0x20), A
LD A, 0x80         ; A23-A16 = 0x80
OUT (0x21), A

; Включить линейную адресацию
LD A, 0x14         ; Индекс регистра ADDR_MODE
OUT (0x20), A
LD A, %00000001    ; linear_mode=1
OUT (0x21), A
```

### Инициализация стандартного CPC режима
```assembly
; Активировать страницу 3 MMIO
LD A, 3
OUT (0xF1), A

; Установить стандартные CPC значения
LD HL, CRTC_INIT_TABLE
LD B, 16           ; 16 стандартных регистров
LD C, 0x20         ; Index register порт
INIT_LOOP:
    LD A, (HL)
    OUT (C), A      ; Установить индекс
    INC C           ; Data register порт (0x21)
    INC HL
    LD A, (HL)
    OUT (C), A      ; Записать значение
    DEC C           ; Вернуться к Index register
    INC HL
    DJNZ INIT_LOOP

CRTC_INIT_TABLE:
    .db 0x00, 63    ; HTOTAL
    .db 0x01, 40    ; HDISPLAY
    .db 0x02, 46    ; HSYNCPOS
    .db 0x03, 0x8E  ; HSYNCWIDTH=14, VSYNCWIDTH=8
    .db 0x04, 38    ; VTOTAL
    .db 0x05, 0     ; VADJUST
    .db 0x06, 25    ; VDISPLAY
    .db 0x07, 30    ; VSYNCPOS
    .db 0x08, 0     ; INTERLACE/SKEW
    .db 0x09, 7     ; MAXSCAN
    .db 0x0A, 0     ; CURSOR START
    .db 0x0B, 0     ; CURSOR END
    .db 0x0C, 0     ; START ADDR H
    .db 0x0D, 0     ; START ADDR L
    .db 0x0E, 0     ; CURSOR ADDR H
    .db 0x0F, 0     ; CURSOR ADDR L
```

## Особенности реализации

### 1. Полная обратная совместимость
- Точно эмулирует MC6845 поведение
- Поддерживает оригинальные CPC I/O порты (0xBCXX-0xBFXX)
- Правильное частичное декодирование адресов

### 2. Расширенные возможности
- Линейная адресация до 16MB
- Настраиваемая глубина цвета (1-8 bpp)
- Конфигурируемая скорость пикселей
- Центрирование видео в HDMI frame

### 3. Гибридный доступ
- **Legacy:** Через порты 0xBCXX-0xBFXX (только запись)
- **Native:** Через MMIO страницу 3 (чтение/запись)

### 4. Синхронизация HDMI
- Фиксированный HDMI тайминг 720x480@60Hz
- Адаптивное масштабирование CPC видео
- Правильная генерация DE, HSYNC, VSYNC

## Выходные сигналы

### Для пиксельного конвейера:
- `crtc_ma_o[13:0]` - Memory address
- `crtc_ra_o[4:0]` - Row address
- `crtc_de_o` - Display enable
- `crtc_hsync_o`, `crtc_vsync_o` - Синхроимпульсы
- `stb_char_o`, `stb_byte_o`, `stb_pixel_o` - Стробы тактирования

### Для CPU:
- `crtc_halt_o` - Запрос остановки процессора
- `crtc_cursor_o` - Сигнал курсора

### Расширенные:
- `crtc_ext_addr_o[23:0]` - 24-битный расширенный адрес
- Конфигурационные сигналы для палитры и видеоконтроллера

## Режимы адресации памяти

| Mode | VRAM | 1bpp | 2bpp | 4bpp | 8bpp | Описание |
|------|------|------|------|------|------|----------|
| CPC  | 16KB | 8x   | 4x   | 2x   | 1x   | Оригинальный CPC |
| EX   | 32KB | -    | 8x   | 4x   | 2x   | Расширенный 32KB |
| LX32 | 64KB | -    | -    | 8x   | 4x   | LX 64KB режим |
| LX64 | 128KB| -    | -    | -    | 8x   | LX 128KB режим |

**Примечание:** Множитель показывает количество пикселей на байт в максимальном режиме.