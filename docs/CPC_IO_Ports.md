# CPC 6128 vs ALESTE 520EX I/O Space



## CPC I/O Port Allocation Rules

Components use partial address decoding. It is therefore possible to send the same value to different components simultaneously by carefully using custom I/O ports.

| Hardware device         | Read/Write | b15 | b14 | b13 | b12 | b11 | b10 | b9  | b8  | b7  | b6  | b5  | b4  | b3  | b2  | b1  | b0  |
| ----------------------- | ---------- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
|                         |            |     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |
| Gate Array              | Write only | 0   | 1   | -   | -   | -   | -   | -   | -   | -   | -   | -   | -   | -   | -   | -   | -   |
| PAL (RAM configuration) | Write only | 0   | *   | -   | -   | -   | -   | -   | -   | -   | -   | -   | -   | -   | -   | -   | -   |
| CRTC                    | Read/Write | -   | 0   | -   | -   | -   | -   | r1  | r0  | -   | -   | -   | -   | -   | -   | -   | -   |
| Upper ROM select        | Write only | -   | -   | 0   | -   | -   | -   | -   | -   | -   | -   | -   | -   | -   | -   | -   | -   |
| Printer Port            | Write only | -   | -   | -   | 0   | -   | -   | -   | -   | -   | -   | -   | -   | -   | -   | -   | -   |
| 8255 PPI                | Read/Write | -   | -   | -   | -   | 0   | -   | r1  | r0  | -   | -   | -   | -   | -   | -   | -   | -   |
| Expansion Peripherals   | Read/Write | -   | -   | -   | -   | -   | 0   | x   | x   | x   | x   | x   | x   | x   | x   | x   | x   |

Legend:

    "-" means this bit is ignored,
    "0" means the bit must be set to "0" for the hardware device to respond,
    "1" means the bit must be set to "1" for the hardware device to respond.
    "r1" and "r0" mean a bit used to define a register
    "*" Bit14 of the PAL port must be at 1 on CPCs equipped with CRTCs 0/1/2. It can be at 0 or 1 on CRTCs 3/4. For compatibility reasons, it is strongly advised to always set bit14 to 1 to select PAL.

## CPC Official I/O Ports

The official ports are defined to eliminate conflict between devices, as follows:

| I/O    | Decoded as         | Port                                                                          | RW  |
| ------ | ------------------ | ----------------------------------------------------------------------------- | --- |
| 0x7FXX | %01xxxxxx xxxxxxxx | Gate Array                                                                    | W   |
| 0x7FXX | %0xxxxxxx xxxxxxxx | PAL extension to Gate Array for 128K RAM banking                              | W   |
| 0xBCXX | %x0xxxx00 xxxxxxxx | 6845 CRTC Index                                                               | W   |
| 0xBDXX | %x0xxxx01 xxxxxxxx | 6845 CRTC Data Out                                                            | W   |
| 0xBEXX | %x0xxxx10 xxxxxxxx | 6845 CRTC Status (as far as supported)                                        | R   |
| 0xBFXX | %x0xxxx11 xxxxxxxx | 6845 CRTC Data In (as far as supported)                                       | R   |
| 0xDFXX | %xx0xxxxx xxxxxxxx | Upper ROM Bank Number                                                         | W   |
| 0xEFXX | %xxx0xxxx xxxxxxxx | Printer Port                                                                  | W   |
| 0xF4XX | %xxxx0x00 xxxxxxxx | 8255 PPI Port A (PSG Data)                                                    | RW  |
| 0xF5XX | %xxxx0x01 xxxxxxxx | 8255 PPI Port B (Vsync,PrnBusy,Tape,etc.)                                     | R   |
| 0xF6XX | %xxxx0x10 xxxxxxxx | 8255 PPI Port C (KeybRow,Tape,PSG Control)                                    | W   |
| 0xF7XX | %xxxx0x11 xxxxxxxx | 8255 PPI Control-Register                                                     | W   |
| 0xF8FF | N/A                | Peripheral Soft Reset (MC_BOOT_PROGRAM and MC_START_PROGRAM do OUT [F8FF],FF) | W   |
| 0xFA7E | %xxxxx0x0 0xxxxxxx | Floppy Motor Control (for 765 FDC)                                            | W   |
| 0xFADC | %xxxxx0x0 xx0xxx00 | Amstrad Serial Interface Z80-SIO / DART port A Data Register                  | RW  |
| 0xFADD | %xxxxx0x0 xx0xxx01 | Amstrad Serial Interface Z80-SIO / DART port A Control Reg.                   | RW  |
| 0xFADE | %xxxxx0x0 xx0xxx10 | Amstrad Serial Interface Z80-SIO / DART port B Data Register                  | RW  |
| 0xFADF | %xxxxx0x0 xx0xxx11 | Amstrad Serial Interface Z80-SIO / DART port B Control Reg.                   | RW  |
| 0xFB7E | %xxxxx0x1 0xxxxxx0 | 765 FDC (internal) Status Register                                            | R   |
| 0xFB7F | %xxxxx0x1 0xxxxxx1 | 765 FDC (internal) Data Register                                              | RW  |
| 0xFBDC | %xxxxx0x1 xx0xxx00 | Amstrad Serial Interface 8253 Timer counter 0                                 | RW  |
| 0xFBDD | %xxxxx0x1 xx0xxx01 | Amstrad Serial Interface 8253 Timer counter 1                                 | RW  |
| 0xFBDE | %xxxxx0x1 xx0xxx10 | Amstrad Serial Interface 8253 Timer counter 2                                 | RW  |
| 0xFBDF | %xxxxx0x1 xx0xxx11 | Amstrad Serial Interface 8253 Timer Modus Select                              | W   |

### Aleste 520EX I/O Map (Overview)

| I/O    | Decoded as         | Keep   | Port                                                                | RW  |
| ------ | ------------------ | ------ | ------------------------------------------------------------------- | --- |
| 0x7CXX | %0xxxxx00 xxxxxxxx | yes    | Aleste RAM Mapper page 0 (extended "Gate Array 3")                  | RW  |
| 0x7DXX | %0xxxxx01 xxxxxxxx | yes    | Aleste RAM Mapper page 1 (extended "Gate Array 3")                  | RW  |
| 0x7EXX | %0xxxxx10 xxxxxxxx | yes    | Aleste RAM Mapper page 2 (extended "Gate Array 3")                  | RW  |
| 0x7FXX | %0xxxxx11 xxxxxxxx | yes    | Aleste RAM Mapper page 3 (extended "Gate Array 3")                  | RW  |
| 0x7FXX | %0xxxxxxx xxxxxxxx | yes    | Aleste Multiport (customized Gate Array)                            | W   |
| 0xBCXX | %x0xxxx00 xxxxxxxx | yes    | 6845 CRTC Index                                                     | W   |
| 0xBDXX | %x0xxxx01 xxxxxxxx | yes    | 6845 CRTC Data Out                                                  | W   |
| 0xBEXX | %x0xxxx10 xxxxxxxx | yes    | 6845 CRTC Status (as far as supported)                              | R   |
| 0xBFXX | %x0xxxx11 xxxxxxxx | yes    | 6845 CRTC Data In (as far as supported)                             | R   |
| 0xDFXX | %xx0xxxxx xxxxxxxx | yes    | Upper ROM Bank Number (bank 3 = Aleste Bootmenu)                    | W   |
| 0xEEXX | %xxx0xxx0 xxxxxxxx | no/mod | Aleste 8251 USART chip (RS232/Mouse) Data                           | RW  |
| 0xEFXX | %xxx0xxx1 xxxxxxxx | no/mod | Aleste 8251 USART chip (RS232/Mouse) Control/Status                 | RW  |
| 0xF4XX | %xxxx0x00 xxxxxxxx | yes    | 8255 PIO Port A (PSG/8253 Timer/Real Time Clock data)               | RW  |
| 0xF5XX | %xxxx0x01 xxxxxxxx | yes    | 8255 PIO Port B (Vsync,PrnBusy,Tape,etc.)                           | R   |
| 0xF6XX | %xxxx0x10 xxxxxxxx | yes    | 8255 PIO Port C (KeybRow, Real Time Clock control,Tape,PSG Control) | W   |
| 0xF7XX | %xxxx0x11 xxxxxxxx | yes    | 8255 PIO Control -Register                                          | W   |
| 0xFA7E | %xxxxx0x0 0xxxxxxx | yes    | Floppy Motor Control (for 765 FDC)                                  | W   |
| 0xFABC | %xxxxx0x0 10xxxx00 | no/mod | Aleste EXTPORT with CS53: Forward PPI Port A to 8253 Timer 0        | W   |
| 0xFABD | %xxxxx0x0 10xxxx01 | no/mod | Aleste EXTPORT with CS53: Forward PPI Port A to 8253 Timer 1        | W   |
| 0xFABE | %xxxxx0x0 10xxxx10 | no/mod | Aleste EXTPORT with CS53: Forward PPI Port A to 8253 Timer 2        | W   |
| 0xFABF | %xxxxx0x0 10xxxx11 | no/mod | Aleste EXTPORT with CS53: Forward PPI Port A to 8253 Control        | W   |
| 0xFABF | %xxxxx0x0 10xxxxxx | mod    | Aleste EXTPORT                                                      | W   |
| 0xFB7E | %xxxxx0x1 0xxxxxx0 | yes    | 765 FDC (internal) Status Register                                  | R   |
| 0xFB7F | %xxxxx0x1 0xxxxxx1 | yes    | 765 FDC (internal) Data Register                                    | RW  |

Where:  (yes) Keep supporting, (no) does not nedded, (mod) can be modified, reused or moved, 
        (move) move to other place, (res) reserved for compatibility

### The registers will be reserved for compatibility with CPC

| I/O    | Decoded as         | Keep | Port                                                         | RW  |
| ------ | ------------------ | ---- | ------------------------------------------------------------ | --- |
| 0xEFXX | %xxx0xxxx xxxxxxxx | res  | Printer Port                                                 | W   |
| 0xFADC | %xxxxx0x0 xx0xxx00 | res  | Amstrad Serial Interface Z80-SIO / DART port A Data Register | RW  |
| 0xFADD | %xxxxx0x0 xx0xxx01 | res  | Amstrad Serial Interface Z80-SIO / DART port A Control Reg.  | RW  |
| 0xFADE | %xxxxx0x0 xx0xxx10 | res  | Amstrad Serial Interface Z80-SIO / DART port B Data Register | RW  |
| 0xFADF | %xxxxx0x0 xx0xxx11 | res  | Amstrad Serial Interface Z80-SIO / DART port B Control Reg.  | RW  |
| 0xFBDC | %xxxxx0x1 xx0xxx00 | res  | Amstrad Serial Interface 8253 Timer counter 0                | RW  |
| 0xFBDD | %xxxxx0x1 xx0xxx01 | res  | Amstrad Serial Interface 8253 Timer counter 1                | RW  |
| 0xFBDE | %xxxxx0x1 xx0xxx10 | res  | Amstrad Serial Interface 8253 Timer counter 2                | RW  |
| 0xFBDF | %xxxxx0x1 xx0xxx11 | res  | Amstrad Serial Interface 8253 Timer Modus Select             | W   |

Where:  (yes) Keep supporting, (no) does not nedded, (mod) can be modified, reused or moved, 
        (move) move to other place, (res) reserved for compatibility

### Magic Sound Registers

| Port | Keep | A10 | A9  | A8  | A5  | A3  | A2  | A1  | 0   | RW  | Expl.                          |
| ---- | ---- | --- | --- | --- | --- | --- | --- | --- | --- | --- | ------------------------------ |
| FXDX | move | 0   | X   | X   | 0   | X   | X   | X   | X   |     | The board selected.            |
| F8DX | move | 0   | 0   | 0   | 0   | r   | r   | r   | r   | RW  | DMA Controller 8237            |
|      |      |     |     |     |     |     |     |     |     |     | rrrr is reg number             |
|      |      |     |     |     |     |     |     |     |     |     | D[7..0] Data                   |
| F9DX | move | 0   | 0   | 1   | 0   | (1) | 0   | r   | r   | W   | TIMER 8254 CHANNELS 0,1,2      |
|      |      |     |     |     |     |     |     |     |     |     | rr is reg number               |
|      |      |     |     |     |     |     |     |     |     |     | D[7..0] Data                   |
| F9DY | move | 0   | 0   | 1   | 0   | 0   | (1) | r   | r   | W   | TIMER 8254 CHANNELS 3, and DAC |
|      |      |     |     |     |     |     |     |     |     |     | nn is reg number               |
|      |      |     |     |     |     |     |     |     |     |     | D[7..0] Data                   |
| FADX | move | 0   | 1   | 0   | 0   | X   | X   | c   | c   | W   | VOLUME CONTROL                 |
|      |      |     |     |     |     |     |     |     |     |     | cc is channel number           |
|      |      |     |     |     |     |     |     |     |     |     | D[5..0] Volume                 |
| FBDX | move | 0   | 1   | 1   | 0   | c   | c   | m   | m   | W   | MAPPER                         |
|      |      |     |     |     |     |     |     |     |     |     | cc is channel number           |
|      |      |     |     |     |     |     |     |     |     |     | mm is mapper's page register   |
|      |      |     |     |     |     |     |     |     |     |     | D[5..0] inverted page number   |
 After reset timers do not work until first write to it's regs
 After dma end ('tc' signal) the NMI to Z80 generated

### Ext Port (Port FABFh)

| bit | Keep | Action                                                                               |
| --- | ---- | ------------------------------------------------------------------------------------ |
| 7-6 |      | not used                                                                             |
| 5-4 | no   | PPI Port A usage                                                                     |
|     |      |                                                                                      |
|     |      | 0 = PSG (Sound Chip; default, as in CPC) (With PPI.Port C: BC1/BDIR)                 |
|     |      | 1 = Reserved (would access both PSG and 8253 together)                               |
|     |      | 2 = RTC (Real-Time Clock) (With PPI.Port C: Bit2=DS, Bit1=AS, Bit0=R/W.              |
|     |      | So combinations are 2, write address, 4 write data, 5 read data)                     |
|     |      | 3 = 8253 (Baudrate/Future Timer) (With address lines A0 and A1 = register selection) |
|     |      |                                                                                      |
| 3   | mod  | force video to black                                                                 |
| 2   | mod  | MAPMOD                                                                               |
|     |      |                                                                                      |
|     |      | When MAPMOD=0: Uses CPC-style 27-color palette, and CPC6128-style RAM banking        |
|     |      | When MAPMOD=1: Uses special 64-color palette, and extended RAM mapper                |
|     |      |                                                                                      |
| 1   | mod  | HIGHX                                                                                |
|     |      | Enables high resolution in X. Also changes some clock frequences. Controls           |
|     |      | decoding of video address.                                                           |
| 0   | no   | HIZ                                                                                  |
|     |      | Not fully understood yet. Controls decoding of video address                         |

Where:  (yes) Keep supporting, (no) does not nedded, (mod) can be modified, reused or moved, 
        (move) move to other place, (res) reserved for compatibility


### Aleste Gate Array (aka Patasonic's Multiport) (Port 7Fxxh)

Aleste "Gate Array" is similar in functionality to the Gate-Array in the CPC/Plus.


| D7  | D6  | Keep | Action                                         |
| --- | --- | ---- | ---------------------------------------------- |
| 0   | 0   | yes  | Gate Array Register 0 - Palette index          |
| 0   | 1   | yes  | Gate Array Register 1 - Palette data           |
| 1   | 0   | yes  | Gate Array Register 2 - Mode, Rom enable, Leds |
| 1   | 1   | yes  | Gate Array Register 3 - RAM banking            |

Where:  (yes) Keep supporting, (no) does not nedded, (mod) can be modified, reused or moved, 
        (move) move to other place, (res) reserved for compatibility


#### Gate Array Register 0 - Palette Index


| bit  | Keep | Value                                                              |
| ---- | ---- | ------------------------------------------------------------------ |
| 7..6 | yes  | Must be 0 (select register 0)                                      |
| 5    | yes  | not used                                                           |
| 4..0 | yes  | Palette Index (00h..0Fh=Ink 0-15, 10h=Border, 11..1Fh=same as 10h) |

Where:  (yes) Keep supporting, (no) does not nedded, (mod) can be modified, reused or moved, 
        (move) move to other place, (res) reserved for compatibility

Selects the palette index (to be used by next write to Palette Data).

| Depth | Keep | Normal Inks (as on CPC) | Secondary Inks (Aleste FUTURE Feature) |
| ----- | ---- | ----------------------- | -------------------------------------- |
| 1 bit | yes  | 0..1                    | 2..3                                   |
| 2 bit | yes  | 0..3                    | 4..7                                   |
| 4 bit | yes  | 0..15                   | N/A (uses 0..15 too)                   |

Where:  (yes) Keep supporting, (no) does not nedded, (mod) can be modified, reused or moved, 
        (move) move to other place, (res) reserved for compatibility


#### Gate Array Register 1 - Palette Data

The number is converted by IC D62.

    When MAPPER is set in EXTPORT, then the numbers effectively define a R,G,B colour with 2 bits per element, but the rom then changes the order of the bits before it gets to the hardware.
    When MAPPER is not set, the number is equivalent to the CPC's Gate-Array colour value, but this is looked up in IC D62 and converted into a 2-bit per element R,G,B for the aleste video hardware.

    Note - The CPC supports 3 intensities per color (0%, 50%, 100%), the Aleste supports four intensities (0%, 33%, 66%, 100%). In the CPC-style 27-color mode, the Aleste uses only the dark intensities (0%, 33%, 66%), this gives it a proper ratio (66% being twice 33%), the downside is that the 64-color mode appears brighter - so one may need to adjust brightness on the monitor whenever switching between 27-color and 64-color 
    modes.


### Gate Array Register 2 - Video Mode, ROM enable, LEDs


| bit  | Keep | Action                   |
| ---- | ---- | ------------------------ |
| 7    |      | 1                        |
| 6    |      | 0                        |
| 5    | move | CAPS LED                 |
| 4    | move | RUS LED                  |
| 3    | yes  | Upper rom enable/disable |
| 2    | yes  | Lower rom enable/disable |
| 1..0 | yes  | Mode                     |

Where:  (yes) Keep supporting, (no) does not nedded, (mod) can be modified, reused or moved, 
        (move) move to other place, (res) reserved for compatibility


bit 0,1 define the mode. The actual resolution is then dependant on bit 1 of EXTPORT. When HIGHTX is 0, CPC modes are chosen. When HIGHTX is 1, Aleste modes are chosen.

CPC modes:


| bit 1 | bit 0 | Keep | Mode                                           |
| ----- | ----- | ---- | ---------------------------------------------- |
| 0     | 0     | yes  | 160x200 (16 colours)                           |
| 0     | 1     | yes  | 320x200 (4 colours)                            |
| 1     | 0     | yes  | 640x200 (2 colours)                            |
| 1     | 1     | yes  | Don't know. On CPC this is 160x200 (4 colours) |

Where:  (yes) Keep supporting, (no) does not nedded, (mod) can be modified, reused or moved, 
        (move) move to other place, (res) reserved for compatibility

Aleste modes has exactly same encoding but can make faster rate


#### Gate Array Register 3 - RAM banking (in CPC-style MAPMOD=0)

Controls RAM Banking, similar to the Gate Array on CPC6128 (or, more specific, similar to the 16L8 PAL IC which assists the CPC6128s Gate Array).

In the Aleste register 3 is effectively Mapper select.

Writing to port #7Fxx with bit 7 and bit 6 of data set to 1 can be used to set page 3 RAM bank in Aleste mapper mode, or to define CPC RAM configuration in CPC mode.

Actually, it seems to work more like an Inicron RAM-Box (which isn't fully compatible with the dk'tronics style Standard Memory Expansions).
Gate Array Register 3 - RAM banking (in Aleste's special MAPMOD=1)

#### Four I/O ports control the mapper:


| I/O    | Keep     | Decoded as         | Page   | Memory region |
| ------ | -------- | ------------------ | ------ | ------------- |
| 0x7CXX | yes/move | %0xxxxx00 xxxxxxxx | page 0 | &0000-&3fff   |
| 0x7DXX | yes/move | %0xxxxx01 xxxxxxxx | page 1 | &4000-&7fff   |
| 0x7EXX | yes/move | %0xxxxx10 xxxxxxxx | page 2 | &8000-&bfff   |
| 0x7FXX | yes/move | %0xxxxx11 xxxxxxxx | page 3 | &c000-&ffff   |

Where:  (yes) Keep supporting, (no) does not nedded, (mod) can be modified, reused or moved, 
        (move) move to other place, (res) reserved for compatibility

The decoding of the I/O port for the mapper uses bit 15 of the I/O address in the same way as the Aleste "Gate Array".

Address Bit 9,8 define which page.

To avoid writing to the Aleste "Gate-Array", Data bits 7 and 6 must be 1.

The remaining bits define the RAM block/configuration to use.

In Aleste mapper mode, writing to the mapper changes the RAM for one page.

It is not know:

    Must you write to #7Fxx in CPC mode to define RAM configuration or can you also use #7Cxx, #7Dxx, #7Exx for same effect
    When you write CPC RAM configuration is it mirrored in all mapper registers?

### Upper ROM Bank

Works like the Upper ROM Bank Number on CPCs. The banks used for the Aleste BIOS are:

| Val | Name     | Keeep    | Area and purpose                                  |
| --- | -------- | -------- | ------------------------------------------------- |
| 00h | BASIC    | Yes      | (bytes in 4000h..7FFFh in the Aleste's 64K EPROM) |
| 03h | BOOTMENU | Yes/Move | (bytes in C000h..FFFFh in the Aleste's 64K EPROM) |
| 07h | AMSDOS   | Yes      | (bytes in 8000h..BFFFh in the Aleste's 64K EPROM) |

Where:  (yes) Keep supporting, (no) does not nedded, (mod) can be modified, reused or moved, 
        (move) move to other place, (res) reserved for compatibility

All other values 01h..02h, 04h..06h, 08h..FFh do select BASIC, too.

The BOOTMENU is an aleste specific ROM bank. BASIC and AMSDOS are 1:1 same as in CPC6128. The BIOS (lower ROM bank) is almost same as in CPC6128 (only the Startup Message and Printer handling are modified). For details, see:

    Media:AlesteBiosDisassembly.txt  - Disassembly of differences between CPC6128 and Aleste BIOS
    Media:AlesteBootmenuRomBank3.asm - Original source code for BOOTMENU (Upper ROM Bank 3)


## Aleste LX

1.  **Совместимость с Amstrad CPC** — святость.
2.  **Дух Aleste 520EX** — развиваемая платформа.
3.  **Современная архитектура** — защищённый режим, Wishbone, слотинг.

Исходя из этого, появляется стратегию.

---

### 1. Стратегия: Два Мира — Две Реальности

Система должна работать в двух фундаментально разных режимах, управляемых либо переключателем, либо регистром, либо автоматически (по факту обращения к порту).

*   **🔒 Режим Наследия (Legacy Mode):** Полная, нефальсифицированная эмуляция Amstrad CPC + *ключевые* порты Aleste (которые не конфликтуют, типа маппера памяти на `7C-7Fxx`). Все "reserved" порты CPC работают нативно. Порты Aleste, которые конфликтуют (USART на `EFxx`), в этом режиме **отключены**. Это режим для запуска старого софта.
*   **🚀 Защищённый/Нативный Режим (Aleste Mode):** Включается либо специальным портом, либо доступом к "магическому" адресу. В этом режиме:
    *   Аппаратно отключаются декодеры конфликтующих портов CPC (SIO/DART, Timer, Printer на `EFxx`).
    *   Активируются *родные* устройства Aleste (USART, EXTPORT).
    *   Включается механизм защиты памяти и I/O.
    *   Все обращения к legacy-портам (`FADC`, `EFxx` и т.д.) **траппятся** и обрабатываются гипервизором/BIOS для эмуляции старого поведения на новом железе.

Это решает главную проблему конфликтов кардинально.

---

### 2. Слотовый Регистр и Маппер Памяти (MSX-стиль)

Ваша идея верна. Мы помещаем его в **свободное и логически выделяемое пространство**.

**Рекомендуемое место: `0xD8XX - 0xDFXX`**
*   Так как CPC уже использует `0xDFXX` для Upper ROM, что концептуально близко. Поэтому освобождаем `0xDCXX`, `0xDDXX`, `0xDEXХ` — и получаем 4 порта на слот.
*   **Декодирование:** Маска `%110111xx` (`0xD8`-`0xDF`) легко выделается. Игнорируем младший байт.

#### Предлагаемая карта:

| I/O          | Keep | Назначение                                                                                                      | Режим  |
| :----------- | :--- | :-------------------------------------------------------------------------------------------------------------- | :----- |
| **`0xD8XX`** | yes  | **Bank Register for Page 0 (0000-3FFF) of CURRENT SLOT**                                                        | Both   |
| **`0xD9XX`** | yes  | **Bank Register for Page 1 (4000-7FFF) of CURRENT SLOT**                                                        | Both   |
| **`0xDAXX`** | yes  | **Bank Register for Page 2 (8000-BFFF) of CURRENT SLOT**                                                        | Both   |
| **`0xDBXX`** | yes  | **Bank Register for Page 3 (C000-FFFF) of CURRENT SLOT**                                                        | Both   |
| **`0xDCXX`** | yes  | **Slot Select Register**. Записываемый байт выбирает активный слот (0-3), чьи банковые регистры видны на D8-DB. | Both   |
| **`0xDDXX`** | mod  | *Зарезервировано для будущего расширения (например, атрибуты страниц: R/W, Exec)*                               | Native |
| **`0xDEXХ`** | mod  | *Зарезервировано*                                                                                               | Native |
| **`0xDFXX`** | yes  | **Upper ROM Bank Number** (совместимость с CPC). В Native Mode может быть переназначен.                         | Both   |

**Как это работает:** Программа переключает слот через `0xDCXX`, затем настраивает его страницы через `0xD8-DBXX`. Гипервизор в Protected Mode может перехватывать эти записи и виртуализировать маппинг для каждой задачи.

---

### 3. Memory-Mapped I/O для нового проекта (LX)

Это **идеальная** архитектура для защищённого режима. Ваш план верен.

Это то, как процессор и программист видят память. 

| CPU Address Space | Size | Назначение (с точки зрения CPU / Программиста)             |
| :---------------- | :--- | :--------------------------------------------------------- |
| **`0x0000`**      | 16КБ | **Hypervisor/BIOS Code**. Исполняемый код. Точка           |
|                   |      | входа по `M1` @ `0x0000` для системных вызовов.            |
| **`0x4000`**      | 16КБ | **Memory-Mapped I/O Window**. Единое пространство          |
|                   |      | для управления всей системой. CPU обращается сюда как к    |
|                   |      | памяти (`LD (IO_ADDR), A`), а деcoder на шине преобразует  |
|                   |      | это в сигналы управления конкретными устройствами.         |
| **`0x8000`**      | 32КБ | **Video Memory**. Линейный framebuffer, доступный для CPU. |
| **`0xFE00`**      | 512Б | **Hypervisor Stack**. Быстрая память для стека             |
|                   |      | обработчиков исключений и системных вызовов.               |

**Ключевая мысль:** Блок `0x4000-0x7FFF` — это не "данные", а **окно управления**. Запись по адресу `0x4000` может быть приказом сменить банк в слоте 0, а чтение с `0x4003` — прочитать статус мыши.

---

### 2. Wishbone View: Физическая организация памяти и устройств

Давайте визуализируем эту структуру. Физическое адресное пространство — 24 бита (`0x000000` - `0xFFFFFF`).

| Физический адрес (24-bit) | Размер | Назначение для CPU                                                         |
| :------------------------ | :----- | :------------------------------------------------------------------------- |
| **`0x000000`**            | 4 МБ   | **SLOT 0**: Основное пространство для программ и данных пользователя.      |
| **`0x400000`**            | 4 МБ   | **SLOT 1**: Дополнительное пространство (доп. RAM, расширения).            |
| **`0x800000`**            | 4 МБ   | **SLOT 2**: Резерв или специальное назначение.                             |
| **`0xC00000`**            | 4 МБ   | **SLOT 3**: **Hypervisor Space**. Имеет доступ ко всем ресурсам.           |
| ↳ **`0xFE0000`**          | 128КБ  | **I/O Mirror Block (в конце КАЖДОГО слота)**. Повторяется для всех слотов. |
|                           |        | **Amstrad I/O** (`0xFE0000`-`0xFEFFFF`)                                    |
|                           |        | **Aleste LX I/O** (`0xFF0000`-`0xFFFFFF`).                                 |

**Как это работает феноменально:**

1.  **Единообразие:** Адрес `0xFF1234` всегда будет указывать на один и тот же регистр Aleste LX, **независимо от того, в каком слоте находится выполняемый код**. Это снимает огромный пласт проблем с перенастройкой MMU при переключении контекста.
2.  **Изоляция и доступ:** Программа в **SLOT 0** (пользовательская) может иметь доступ *только* к своим 4 МБ и к общему I/O блоку. Гипервизор в **SLOT 3** имеет доступ ко всем 16 МБ (ко всем слотам) *и* к тому же самому I/O блоку. Это чистая и простая модель прав.
3.  **Совместимость:** В Legacy-режиме можно просто замаппить весь **SLOT 0** на первые 64КБ RAM, а обращение к адресам `> 0x10000` перенаправлять в I/O-блок этого слота, эмулируя тем самым поведение портов ввода-вывода.

---

### 3. Управление Слотами и MMU


| MMIO Address | Size | Назначение                                                                          |
| :----------- | :--- | :---------------------------------------------------------------------------------- |
| `0x4000`     | 1Б   | **SLOT_SELECT**: Выбор активного слота (0-3), чьи банковые регистры сейчас активны. |
| `0x4001`     | 1Б   | **BANK_0_SEL**: Банк для страницы 0 (0000-3FFF) выбранного слота.                   |
| `0x4002`     | 1Б   | **BANK_1_SEL**: Банк для страницы 1 (4000-7FFF) выбранного слота.                   |
| `0x4003`     | 1Б   | **BANK_2_SEL**: Банк для страницы 2 (8000-BFFF) выбранного слота.                   |
| `0x4004`     | 1Б   | **BANK_3_SEL**: Банк для страницы 3 (C000-FFFF) выбранного слота.                   |
| `0x4005`     | 1Б   | **GLOBAL_CTRL**:                                                                    |
|              |      | Бит 0: Режим (0=Legacy, 1=Native).                                                  |
|              |      | Бит 1: Защита записи для User Slots.                                                |
|              |      | Остальные биты - резерв.                                                            |
| `0x4006`     | 1Б   | **HYPERVISOR_BANK_SEL**:                                                            |
|              |      | Банк из SLOT 0/1/2, который должен быть отображен в Hypervisor Space (SLOT 3)       |
|              |      | по определённому адресу. Это для доступа гипервизора к данным пользователя.         |
| ...          | ...  | ...                                                                                 |
| `0x4100`     |      | **Начало блока регистров конкретных устройств** (звук, сеть, таймеры).              |


**Пример кода:**

```asm
; Записать значение 5 в банковый регистр страницы 2 для слота 1
LD A, 1
LD (0x4000), A   ; SLOT_SELECT = 1
LD A, 5
LD (0x4002), A   ; BANK_2_SEL = 5
; Теперь обращение CPU к 0x8000-BFFF будет идти в банк 5 слота 1.
```

Идея превосходна! Вы описываете классическую, мощную и элегантную архитектуру MMU с полностью независимыми наборами регистров для каждого слота. Давайте оформим это в кристально чистую таблицу и схему.

---

### 4. Архитектура Многозадачного Маппера Памяти (MMU)

**Принцип работы:**  

Состояние маппера (банки для всех страниц) — это неотъемлемая часть контекста задачи. Каждому из 4-х слотов выделен свой собственный, **независимый набор из 4-х банковых регистров**. Переключение активного слота мгновенно активирует его конфигурацию маппинга.

#### Таблица Управления Маппером (MMIO)

Доступ к регистрам маппера осуществляется через Memory-Mapped I/O в диапазоне `0x4000-0x400F`.  
**Старшие 2 бита адреса (`A3, A2`) выбирают слот.**  
**Младшие 2 бита адреса (`A1, A0`) выбирают страницу в выбранном слоте.**

| CPU Address |  A3   |  A2   |  A1   |  A0   | Register Name  | Назначение                                                         |
| ----------: | :---: | :---: | :---: | :---: | :------------- | :----------------------------------------------------------------- |
|  **0x4000** |   0   |   0   |   0   |   0   | `SLOT0_BANK0`  | Банк для Страницы 0 (&0000-&3FFF) в **Слоте 0**                    |
|  **0x4001** |   0   |   0   |   0   |   1   | `SLOT0_BANK1`  | Банк для Страницы 1 (&4000-&7FFF) в **Слоте 0**                    |
|  **0x4002** |   0   |   0   |   1   |   0   | `SLOT0_BANK2`  | Банк для Страницы 2 (&8000-&BFFF) в **Слоте 0**                    |
|  **0x4003** |   0   |   0   |   1   |   1   | `SLOT0_BANK3`  | Банк для Страницы 3 (&C000-&FFFF) в **Слоте 0**                    |
|  **0x4004** |   0   |   1   |   0   |   0   | `SLOT1_BANK0`  | Банк для Страницы 0 (&0000-&3FFF) в **Слоте 1**                    |
|  **0x4005** |   0   |   1   |   0   |   1   | `SLOT1_BANK1`  | Банк для Страницы 1 (&4000-&7FFF) в **Слоте 1**                    |
|  **0x4006** |   0   |   1   |   1   |   0   | `SLOT1_BANK2`  | Банк для Страницы 2 (&8000-&BFFF) в **Слоте 1**                    |
|  **0x4007** |   0   |   1   |   1   |   1   | `SLOT1_BANK3`  | Банк для Страницы 3 (&C000-&FFFF) в **Слоте 1**                    |
|  **0x4008** |   1   |   0   |   0   |   0   | `SLOT2_BANK0`  | Банк для Страницы 0 (&0000-&3FFF) в **Слоте 2**                    |
|  **0x4009** |   1   |   0   |   0   |   1   | `SLOT2_BANK1`  | Банк для Страницы 1 (&4000-&7FFF) в **Слоте 2**                    |
|  **0x400A** |   1   |   0   |   1   |   0   | `SLOT2_BANK2`  | Банк для Страницы 2 (&8000-&BFFF) в **Слоте 2**                    |
|  **0x400B** |   1   |   0   |   1   |   1   | `SLOT2_BANK3`  | Банк для Страницы 3 (&C000-&FFFF) в **Слоте 2**                    |
|  **0x400C** |   1   |   1   |   0   |   0   | `SLOT3_BANK0`  | Банк для Страницы 0 (&0000-&3FFF) в **Слоте 3** (Hypervisor)       |
|  **0x400D** |   1   |   1   |   0   |   1   | `SLOT3_BANK1`  | Банк для Страницы 1 (&4000-&7FFF) в **Слоте 3** (Hypervisor)       |
|  **0x400E** |   1   |   1   |   1   |   0   | `SLOT3_BANK2`  | Банк для Страницы 2 (&8000-&BFFF) в **Слоте 3** (Hypervisor)       |
|  **0x400F** |   1   |   1   |   1   |   1   | `SLOT3_BANK3`  | Банк для Страницы 3 (&C000-&FFFF) в **Слоте 3** (Hypervisor)       |
|  **0x4010** |       |       |       |       | `CURRENT_SLOT` | **Только для записи Hypervisor'ом.** Выбирает активный слот (0-3). |
|  **0x4011** |       |       |       |       | `GLOBAL_CTRL`  | Бит 0: Режим (0=Legacy, 1=Native).                                 |
|             |       |       |       |       |                | Бит 1: Защита записи для слотов 0-2.                               |

---

#### 🎯 Схема работы MMU

```
                          ┌─────────────────────────────────────────┐
                          │                  MMU (24-bit)           │
                          │                                         │
 Z80 CPU                  │    ┌─────────────┐  ┌─────────────┐     │
   16-bit Address         │    │   SLOT 0    │  │   SLOT 1    │     │
   ──────────────────────►│    │  Registers  │  │  Registers  │     │
   [A15:A0]               │    │ ┌─┐ ┌─┐ ┌─┐ │  │ ┌─┐ ┌─┐ ┌─┐ │     │
                          │    │ │B│ │B│ │B│ │  │ │B│ │B│ │B│ │     │
                          │    │ │0│ │1│ │N│ │  │ │0│ │1│ │N│ │     │
                          │    │ └─┘ └─┘ └─┘ │  │ └─┘ └─┘ └─┘ │     │
                          │    └─────────────┘  └─────────────┘     │
                          │                                         │
                          │    ┌─────────────┐  ┌─────────────┐     │
                          │    │   SLOT 2    │  │   SLOT 3    │     │
«CURRENT_SLOT» Register   │    │  Registers  │  │  Registers  │     │
(из MMIO 0x4010)          │    │ ┌─┐ ┌─┐ ┌─┐ │  │ ┌─┐ ┌─┐ ┌─┐ │     │
       ──────────────────►│    │ │B│ │B│ │B│ │  │ │B│ │B│ │B│ │     │
                          │    │ │0│ │1│ │N│ │  │ │0│ │1│ │N│ │     │
                          │    │ └─┘ └─┘ └─┘ │  │ └─┘ └─┘ └─┘ │     │
                          │    └─────────────┘  └─────────────┘     │
                          │                     ▲                   │
                          │                     │                   │
                          │                 Выбор набора            │
                          │                 регистров               │
                          └─────────────────────────────────────────┘
                                                │
                                                ▼
                                         24-bit Physical Address
                                         на шину Wishbone
                                         {Слот, Банк, Смещение}
```

**Как читать схему:**
1.  CPU выполняет доступ к памяти по своему 16-битному адресу.
2.  **Активный набор регистров** внутри MMU выбирается значением из регистра `CURRENT_SLOT`.
3.  Старшие биты адреса CPU (A15, A14) выбирают один из 4-х банковых регистров **в активном наборе**.
4.  Значение из выбранного банкового регистра подставляется как старшие биты физического адреса.
5.  На шину Wishbone выходит полный **24-битный физический адрес**, сформированный как `{НомерСлота(2бита), Банк(6бит?), Смещение(16бит)}`.

---

### Пример кода

**Задача:** Для задачи в Слоте 1 установить банк 10 для страницы 2 (&8000-&BFFF).

```asm
; 1. Гипервизор переключается на слот 1 (если это не текущий)
LD A, 1
LD (0x4010), A   ; CURRENT_SLOT = 1

; 2. Теперь запись в 0x4006 идет в регистры Слота 1!
LD A, 10         ; Банк №10
LD (0x4006), A   ; SLOT1_BANK2 = 10
; Готово! Теперь обращение CPU к &8000-&BFFF
; будет идти в банк 10 слота 1.
```

**Преимущество:** Гипервизор может настраивать маппинг для любого слота, в любой момент, просто выбирая его через `CURRENT_SLOT`. Состояние всех слотов сохраняется аппаратно.

---

### 5. Итоговая архитектура

1.  **CPU View:** Чёткое разделение: Код (`0x0000`), Управление (`0x4000`), Видео (`0x8000`), Стек (`0xFE00`).
2.  **Wishbone View:** Чёткое разделение: Слоты пользователя (0-2), Слот гипервизора (3), выделенные блоки I/O.
3.  **Управление:** Centralized через Memory-Mapped I/O по адресу `0x4000`. Просто, predictable, эффективно.
4.  **Совместимость:** В Legacy Mode блок `0x4000` просто не используется или маппится на физические порты CPC. В Native Mode — это центр управления.

---

### Архитектура с I/O в конце каждого слота

Давайте визуализируем эту структуру. Физическое адресное пространство — 24 бита (`0x000000` - `0xFFFFFF`).

| Физический адрес (24-bit) | Размер | Назначение для CPU                                                         |
| :------------------------ | :----- | :------------------------------------------------------------------------- |
| **`0x000000`**            | 4 МБ   | **SLOT 0**: Основное пространство для программ и данных пользователя.      |
| **`0x400000`**            | 4 МБ   | **SLOT 1**: Дополнительное пространство (доп. RAM, расширения).            |
| **`0x800000`**            | 4 МБ   | **SLOT 2**: Резерв или специальное назначение.                             |
| **`0xC00000`**            | 4 МБ   | **SLOT 3**: **Hypervisor Space**. Имеет доступ ко всем ресурсам.           |
| ↳ **`0xFE0000`**          | 128КБ  | **I/O Mirror Block (в конце КАЖДОГО слота)**. Повторяется для всех слотов. |
|                           |        | **Amstrad I/O** (`0xFE0000`-`0xFEFFFF`)                                    |
|                           |        | **Aleste LX I/O** (`0xFF0000`-`0xFFFFFF`).                                 |

**Как это работает феноменально:**

1.  **Единообразие:** Адрес `0xFF1234` всегда будет указывать на один и тот же регистр Aleste LX, **независимо от того, в каком слоте находится выполняемый код**. Это снимает огромный пласт проблем с перенастройкой MMU при переключении контекста.
2.  **Изоляция и доступ:** Программа в **SLOT 0** (пользовательская) может иметь доступ *только* к своим 4 МБ и к общему I/O блоку. Гипервизор в **SLOT 3** имеет доступ ко всем 16 МБ (ко всем слотам) *и* к тому же самому I/O блоку. Это чистая и простая модель прав.
3.  **Совместимость:** В Legacy-режиме можно просто замаппить весь **SLOT 0** на первые 64КБ RAM, а обращение к адресам `> 0x10000` перенаправлять в I/O-блок этого слота, эмулируя тем самым поведение портов ввода-вывода.

---

### Управление маппером (как с этим работать)

Ваш MMU теперь принимает решение на основе двух входных параметров:
1.  **Выход маппера (22 бита)** — что выбрала программа через банковые регистры.
2.  **Номер текущего слота (2 бита)** — который задается либо гипервизором, либо отдельным регистром.

**Предлагаемая карта управляющих регистров (все еще в MMIO, скажем, по CPU-адресу `0x4000`):**

| CPU Address | Register Name  | Size | Назначение                                                                                                                                        |
| :---------- | :------------- | :--- | :------------------------------------------------------------------------------------------------------------------------------------------------ |
| `0x4000`    | `BANK_0`       | 1Б   | Банк для страницы 0 (0000-3FFF) **в текущем слоте**.                                                                                              |
| `0x4001`    | `BANK_1`       | 1Б   | Банк для страницы 1 (4000-7FFF) **в текущем слоте**.                                                                                              |
| `0x4002`    | `BANK_2`       | 1Б   | Банк для страницы 2 (8000-BFFF) **в текущем слоте**.                                                                                              |
| `0x4003`    | `BANK_3`       | 1Б   | Банк для страницы 3 (C000-FFFF) **в текущем слоте**.                                                                                              |
| `0x4004`    | `CURRENT_SLOT` | 1Б   | **Только для Hypervisor!** Задает, данные какого слота сейчас видны на шине (0-3). Для пользовательского кода — read-only, возвращает свой номер. |
| `0x4005`    | `GLOBAL_CTRL`  | 1Б   | Бит 0: Режим (0=Legacy, 1=Native). Бит 1: Запрет записи для пользовательских слотов.                                                              |

**Пример:** Программа в слоте 1 пишет `LD (0x4003), 5`. MMU видит: "Слот=1, команда записи в банковый регистр 3. Значит, нужно установить 5-й банк **в слоте 1** для его верхней страницы".

## Трансляция legacy IO устройств MMIO пространство

Предназначена для сохранения узнаваемости адресов для всех оригинальных устройств платвормы CPC. Разумеется сделать это на 100% невозможно. 

### Стратегия: Полное и Прозрачное Зеркалирование (Enhanced Hybrid)

Принцип работы `MMIO_ADDRESS = 0xC000 | (ORIGINAL_PORT & 0xFF00) | ((ORIGINAL_PORT & 0x00FF) >> N )`

Этот принциа не работает в тех устройствах где использовались младщие адреса, из за этого этот метод можно назвать гибридным.

**Пример:**

1.  Берём оригинальный адрес порта (16 бит).
2.  **Добавляем слева бит `0100` Это помещает всё зеркало в выбранную 16КБ страницу.
3.  **Сохраняем старший байт порта как есть.**
4.  **Младший байт порта сдвигаем вправо,** чтобы убрать "мусорные" биты, которые не участвуют в декодировании, и thus избежать коллизий.
5.  **Исправляем младшие биты в отделных случаях** сдвигаем самые младшие (вытесненные биты влево)

Тоесть мы вручную назначаем адреса, но **сохраняем старший байт в MMIO-адресе** для максимальной наглядности.

| Оригинальный Порт | Устройство           | MMIO Адрес (Aleste LX) | Принцип назначения                                                          |
| :---------------- | :------------------- | :--------------------- | :-------------------------------------------------------------------------- |
| `0xBCXX`          | **CRTC Index**       | `0xCBCXX`              | `0xC000 + 0xBC00` + смещение (если нужно)                                   |
| `0xBDXX`          | **CRTC Data**        | `0xCBDXX`              | ...                                                                         |
| `0xDFXX`          | **ROM Select**       | `0xCDFXX`              | `0xC000 + 0xDF00`                                                           |
| `0xF4XX`          | **PPI Port A**       | `0xCF4XX`              | `0xC000 + 0xF400`                                                           |
| `0xFB7E`          | **FDC Status**       | `0xCFB0E`              | **`0xC000 + 0xFB00 + 0x0E`**. Руками назначаем смещение `0x0E` для Status.  |
| `0xFB7F`          | **FDC Data**         | `0xCFB0F`              | **`0xC000 + 0xFB00 + 0x0F`**. Руками назначаем смещение `0x0F` для Data.    |
| `0xFADC`          | **SIO Ch.A Data**    | `0xCFAD0`              | **`0xC000 + 0xFA00 + 0xD0`**. Используем часть младшего байта как смещение. |
| `0xFADD`          | **SIO Ch.A Control** | `0xCFAD1`              | **`0xC000 + 0xFA00 + 0xD1`**.                                               |

**Преимущество этого подхода:**

Программист, видя адрес `0xCFB0F`, сразу понимает: "Это что-то related to портам `0xFBxx`, и это регистр под номером `0x0F`". Это **намного более интуитивно**, чем `0xC001`.

---

### 🗺️ Карта 16КБ Страницы MMIO (Адреса CPU: `0xC000 - 0xFFFF`)

| Начало   | Конец    | Длина | Платформа               | Назначение                                                                         |
|:---------|:---------|:------|:------------------------|:-----------------------------------------------------------------------------------|
| `0xC000` | `0xC0FF` | 256Б  | **LX (Управление)**     | **Системные регистры MMU, слотинг, общее управление.** Ядро новой системы.         |
|          |          |       |                         | `0xC000`: BANK0                                                                    |
|          |          |       |                         | `0xC010`: CURRENT_SLOT                                                             |
|          |          |       |                         | `0xC011`: GLOBAL_CTRL (Legacy/Protected Mode)                                      |
| `0xC100` | `0xC1FF` | 256Б  | **LX (Ядро)**           | **Регистры ядра нового CPU (LX).** Управление кэшем, прерываниями, тактированием.  |
|          |          |       |                         | `0xC100`: CACHE_CTRL                                                               |
|          |          |       |                         | `0xC101`: INT_VECTOR_BASE                                                          |
| `0xC200` | `0xC2FF` | 256Б  | **LX (Звук)**           | **SoundMagic 2.** Продвинутый звуковой синтезатор (FM, PCM, семплы).               |
|          |          |       |                         | `0xC200`: SM2_CH0_FREQ_L                                                           |
|          |          |       |                         | `0xC201`: SM2_CH0_FREQ_H                                                           |
|          |          |       |                         | `0xC202`: SM2_CH0_CTRL                                                             |
|          |          |       |                         | `0xC210`: SM2_GLOBAL_VOLUME                                                        |
| `0xC300` | `0xC3FF` | 256Б  | **LX (Графика)**        | **Graphics Accelerator.** Блиттер, аппаратные спрайты, гамма-коррекция.            |
|          |          |       |                         | `0xC300`: BLIT_SRC_ADDR_L                                                          |
|          |          |       |                         | `0xC301`: BLIT_SRC_ADDR_H                                                          |
|          |          |       |                         | `0xC302`: BLIT_CTRL                                                                |
|          |          |       |                         | `0xC310`: SPRITE_CTRL                                                              |
| `0xC400` | `0xC4FF` | 256Б  | **LX (DMA)**            | **DMA Controller.** Высокоскоростные копирования память-память, память-устройство. |
|          |          |       |                         | `0xC400`: DMA_SRC_ADDR                                                             |
|          |          |       |                         | `0xC408`: DMA_DEST_ADDR                                                            |
|          |          |       |                         | `0xC410`: DMA_LENGTH                                                               |
|          |          |       |                         | `0xC411`: DMA_CTRL (Start, Trigger)                                                |
| `0xC500` | `0xC5FF` | 256Б  | **LX (Сеть)**           | **Ethernet/Wi-Fi контроллер.**                                                     |
|          |          |       |                         | `0xC500`: NET_MAC0                                                                 |
|          |          |       |                         | `0xC506`: NET_TX_DATA                                                              |
|          |          |       |                         | `0xC507`: NET_STATUS                                                               |
| `0xC600` | `0xC6FF` | 256Б  | **LX (SD Card)**        | **SD Card Host Controller.** Доступ к файловой системе.                            |
|          |          |       |                         | `0xC600`: SD_DATA                                                                  |
|          |          |       |                         | `0xC601`: SD_CMD                                                                   |
|          |          |       |                         | `0xC602`: SD_STATUS                                                                |
| `0xC700` | `0xC7FF` | 256Б  | **LX (RTC)**            | **Real-Time Clock.** Календарь, часы, будильник.                                   |
|          |          |       |                         | `0xC700`: RTC_SEC                                                                  |
|          |          |       |                         | `0xC706`: RTC_YEAR                                                                 |
|          |          |       |                         | `0xC707`: RTC_CTRL                                                                 |
| `0xC800` | `0xC8FF` | 256Б  | **LX (Отладочные)**     | **Отладочные и сервисные регистры.**                                               |
|          |          |       |                         | `0xC800`: DEBUG_LED                                                                |
|          |          |       |                         | `0xC801`: SYSTEM_TICK_MS                                                           |
| `0xC900` | `0xCBFF` | 768Б  | **- Резерв -**          | **Зарезервировано для будущих расширений LX.**                                     |
| `0xCC00` | `0xCFFF` | 1КБ   | **EX (Совместимость)**  | **Зеркало портов Aleste 520EX.** USART, EXTPORT.                                   |
|          |          |       |                         | `0xCC00`: USART_DATA                                                               |
|          |          |       |                         | `0xCC01`: USART_CTRL                                                               |
|          |          |       |                         | `0xCC02`: EXTPORT_CTRL                                                             |
| `0xD000` | `0xDFFF` | 4КБ   | **CPC (Совместимость)** | **Точное зеркало ВСЕХ портов Amstrad CPC.** Гипервизор использует это              |
|          |          |       |                         | для эмуляции в Protected Mode.                                                     |
|          |          |       |                         | `0xDF7E`: FDC_DATA (Зеркало `0xFB7F`)                                              |
|          |          |       |                         | `0xDF4`: PPI_PORTA (Зеркало `0xF4`)                                                |
|          |          |       |                         | `0xDBC`: CRTC_INDEX (Зеркало `0xBC`)                                               |
| `0xE000` | `0x7FFF` | 8КБ   | **- Резерв -**          | **Большой резерв для будущего.** Возможно, для дополнительной                      |
|          |          |       |                         | видеопамяти или ещё не придуманных устройств.                                      |
