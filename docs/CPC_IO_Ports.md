# Amstrad CPC 6128 vs ALESTE 520EX I/O Space

## CPC I/O Port Allocation Rules

Components use partial address decoding. It is therefore possible to send the same value to different components simultaneously by carefully using custom I/O ports.

| Hardware device         | Read/Write | b15 | b14 | b13 | b12 | b11 | b10 | b9  | b8  | b7  | b6  | b5  | b4  | b3  | b2  | b1  | b0  |
| ----------------------- | ---------- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
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
| 0xFA7E | %xxxxx0x0 0xxxxxxx | Floppy Motor Control (for 765 FDC)                                            | W   |
| 0xFB7E | %xxxxx0x1 0xxxxxx0 | 765 FDC (internal) Status Register                                            | R   |
| 0xFB7F | %xxxxx0x1 0xxxxxx1 | 765 FDC (internal) Data Register                                              | RW  |

### Aleste 520EX I/O Map (Overview)

| I/O    | Decoded as         | Status  | Port                                                                | RW  |
| ------ | ------------------ | ------- | ------------------------------------------------------------------- | --- |
| 0x7CXX | %0xxxxx00 xxxxxxxx | keep    | Aleste RAM Mapper page 0 (extended "Gate Array 3")                  | RW  |
| 0x7DXX | %0xxxxx01 xxxxxxxx | keep    | Aleste RAM Mapper page 1 (extended "Gate Array 3")                  | RW  |
| 0x7EXX | %0xxxxx10 xxxxxxxx | keep    | Aleste RAM Mapper page 2 (extended "Gate Array 3")                  | RW  |
| 0x7FXX | %0xxxxx11 xxxxxxxx | keep    | Aleste RAM Mapper page 3 (extended "Gate Array 3")                  | RW  |
| 0x7FXX | %0xxxxxxx xxxxxxxx | keep    | Aleste Multiport (customized Gate Array)                            | W   |
| 0xBCXX | %x0xxxx00 xxxxxxxx | keep    | 6845 CRTC Index                                                     | W   |
| 0xBDXX | %x0xxxx01 xxxxxxxx | keep    | 6845 CRTC Data Out                                                  | W   |
| 0xBEXX | %x0xxxx10 xxxxxxxx | keep    | 6845 CRTC Status (as far as supported)                              | R   |
| 0xBFXX | %x0xxxx11 xxxxxxxx | keep    | 6845 CRTC Data In (as far as supported)                             | R   |
| 0xDFXX | %xx0xxxxx xxxxxxxx | keep    | Upper ROM Bank Number (bank 3 = Aleste Bootmenu)                    | W   |
| 0xEEXX | %xxx0xxx0 xxxxxxxx | modify  | Aleste 8251 USART chip (RS232/Mouse) Data                           | RW  |
| 0xEFXX | %xxx0xxx1 xxxxxxxx | modify  | Aleste 8251 USART chip (RS232/Mouse) Control/Status                 | RW  |
| 0xF4XX | %xxxx0x00 xxxxxxxx | keep    | 8255 PIO Port A (PSG/8253 Timer/Real Time Clock data)               | RW  |
| 0xF5XX | %xxxx0x01 xxxxxxxx | keep    | 8255 PIO Port B (Vsync,PrnBusy,Tape,etc.)                           | R   |
| 0xF6XX | %xxxx0x10 xxxxxxxx | keep    | 8255 PIO Port C (KeybRow, Real Time Clock control,Tape,PSG Control) | W   |
| 0xF7XX | %xxxx0x11 xxxxxxxx | keep    | 8255 PIO Control -Register                                          | W   |
| 0xFA7E | %xxxxx0x0 0xxxxxxx | keep    | Floppy Motor Control (for 765 FDC)                                  | W   |
| 0xFABF | %xxxxx0x0 10xxxxxx | modify  | Aleste EXTPORT                                                      | W   |
| 0xFB7E | %xxxxx0x1 0xxxxxx0 | keep    | 765 FDC (internal) Status Register                                  | R   |
| 0xFB7F | %xxxxx0x1 0xxxxxx1 | keep    | 765 FDC (internal) Data Register                                    | RW  |

### The registers will be reserved for compatibility with CPC

| I/O    | Decoded as         | Status    | Port                                                         | RW  |
| ------ | ------------------ | --------- | ------------------------------------------------------------ | --- |
| 0xEFXX | %xxx0xxxx xxxxxxxx | reserved  | Printer Port                                                 | W   |
| 0xFADC | %xxxxx0x0 xx0xxx00 | reserved  | Amstrad Serial Interface Z80-SIO / DART port A Data Register | RW  |
| 0xFADD | %xxxxx0x0 xx0xxx01 | reserved  | Amstrad Serial Interface Z80-SIO / DART port A Control Reg.  | RW  |
| 0xFADE | %xxxxx0x0 xx0xxx10 | reserved  | Amstrad Serial Interface Z80-SIO / DART port B Data Register | RW  |
| 0xFADF | %xxxxx0x0 xx0xxx11 | reserved  | Amstrad Serial Interface Z80-SIO / DART port B Control Reg.  | RW  |
| 0xFBDC | %xxxxx0x1 xx0xxx00 | reserved  | Amstrad Serial Interface 8253 Timer counter 0                | RW  |
| 0xFBDD | %xxxxx0x1 xx0xxx01 | reserved  | Amstrad Serial Interface 8253 Timer counter 1                | RW  |
| 0xFBDE | %xxxxx0x1 xx0xxx10 | reserved  | Amstrad Serial Interface 8253 Timer counter 2                | RW  |
| 0xFBDF | %xxxxx0x1 xx0xxx11 | reserved  | Amstrad Serial Interface 8253 Timer Modus Select             | W   |

### Ext Port (Port FABFh)

| bit | Status | Action                                                                               |
| --- | ------ | ------------------------------------------------------------------------------------ |
| 7-6 |        | not used                                                                             |
| 5-4 | remove | PPI Port A usage                                                                     |
|     |        | 0 = PSG (Sound Chip; default, as in CPC) (With PPI.Port C: BC1/BDIR)                 |
|     |        | 1 = Reserved (would access both PSG and 8253 together)                               |
|     |        | 2 = RTC (Real-Time Clock) (With PPI.Port C: Bit2=DS, Bit1=AS, Bit0=R/W.              |
|     |        | So combinations are 2, write address, 4 write data, 5 read data)                     |
|     |        | 3 = 8253 (Baudrate/Future Timer) (With address lines A0 and A1 = register selection) |
|     |        |                                                                                      |
| 3   | modify | force video to black                                                                 |
| 2   | modify | MAPMOD                                                                               |
|     |        |                                                                                      |
|     |        | When MAPMOD=0: Uses CPC-style 27-color palette, and CPC6128-style RAM banking        |
|     |        | When MAPMOD=1: Uses special 64-color palette, and extended RAM mapper                |
|     |        |                                                                                      |
| 1   | modify | HIGHX                                                                                |
|     |        | Enables high resolution in X. Also changes some clock frequences. Controls           |
|     |        | decoding of video address.                                                           |
| 0   | remove | HIZ                                                                                  |
|     |        | Not fully understood yet. Controls decoding of video address                         |

### Aleste Gate Array (aka Patasonic's Multiport) (Port 7Fxxh)

Aleste "Gate Array" is similar in functionality to the Gate-Array in the CPC/Plus.

| D7  | D6  | Status | Action                                         |
| --- | --- | ------ | ---------------------------------------------- |
| 0   | 0   | keep   | Gate Array Register 0 - Palette index          |
| 0   | 1   | keep   | Gate Array Register 1 - Palette data           |
| 1   | 0   | keep   | Gate Array Register 2 - Mode, Rom enable, Leds |
| 1   | 1   | keep   | Gate Array Register 3 - RAM banking            |

#### Gate Array Register 0 - Palette Index

| bit  | Status | Value                                                              |
| ---- | ------ | ------------------------------------------------------------------ |
| 7..6 | keep   | Must be 0 (select register 0)                                      |
| 5    | keep   | not used                                                           |
| 4..0 | keep   | Palette Index (00h..0Fh=Ink 0-15, 10h=Border, 11..1Fh=same as 10h) |

Selects the palette index (to be used by next write to Palette Data).

| Depth | Status | Normal Inks (as on CPC) | Secondary Inks (Aleste FUTURE Feature) |
| ----- | ------ | ----------------------- | -------------------------------------- |
| 1 bit | keep   | 0..1                    | 2..3                                   |
| 2 bit | keep   | 0..3                    | 4..7                                   |
| 4 bit | keep   | 0..15                   | N/A (uses 0..15 too)                   |

#### Gate Array Register 1 - Palette Data

The number is converted by IC D62.

    When MAPPER is set in EXTPORT, then the numbers effectively define a R,G,B colour with 2 bits per element, but the rom then changes the order of the bits before it gets to the hardware.
    When MAPPER is not set, the number is equivalent to the CPC's Gate-Array colour value, but this is looked up in IC D62 and converted into a 2-bit per element R,G,B for the aleste video hardware.

    Note - The CPC supports 3 intensities per color (0%, 50%, 100%), the Aleste supports four intensities (0%, 33%, 66%, 100%). In the CPC-style 27-color mode, the Aleste uses only the dark intensities (0%, 33%, 66%), this gives it a proper ratio (66% being twice 33%), the downside is that the 64-color mode appears brighter - so one may need to adjust brightness on the monitor whenever switching between 27-color and 64-color 
    modes.

### Gate Array Register 2 - Video Mode, ROM enable, LEDs

| bit  | Status | Action                   |
| ---- | ------ | ------------------------ |
| 7    |        | 1                        |
| 6    |        | 0                        |
| 5    | move   | CAPS LED                 |
| 4    | move   | RUS LED                  |
| 3    | keep   | Upper rom enable/disable |
| 2    | keep   | Lower rom enable/disable |
| 1..0 | keep   | Mode                     |

bit 0,1 define the mode. The actual resolution is then dependant on bit 1 of EXTPORT. When HIGHTX is 0, CPC modes are chosen. When HIGHTX is 1, Aleste modes are chosen.

CPC modes:

| bit 1 | bit 0 | Status | Mode                                           |
| ----- | ----- | ------ | ---------------------------------------------- |
| 0     | 0     | keep   | 160x200 (16 colours)                           |
| 0     | 1     | keep   | 320x200 (4 colours)                            |
| 1     | 0     | keep   | 640x200 (2 colours)                            |
| 1     | 1     | keep   | Don't know. On CPC this is 160x200 (4 colours) |

Aleste modes has exactly same encoding but can make faster rate

#### Gate Array Register 3 - RAM banking (in CPC-style MAPMOD=0)

Controls RAM Banking, similar to the Gate Array on CPC6128 (or, more specific, similar to the 16L8 PAL IC which assists the CPC6128s Gate Array).

In the Aleste register 3 is effectively Mapper select.

Writing to port #7Fxx with bit 7 and bit 6 of data set to 1 can be used to set page 3 RAM bank in Aleste mapper mode, or to define CPC RAM configuration in CPC mode.

Actually, it seems to work more like an Inicron RAM-Box (which isn't fully compatible with the dk'tronics style Standard Memory Expansions).
Gate Array Register 3 - RAM banking (in Aleste's special MAPMOD=1)

#### Four I/O ports control the mapper:

| I/O    | Status   | Decoded as         | Page   | Memory region |
| ------ | -------- | ------------------ | ------ | ------------- |
| 0x7CXX | keep     | %0xxxxx00 xxxxxxxx | page 0 | &0000-&3fff   |
| 0x7DXX | keep     | %0xxxxx01 xxxxxxxx | page 1 | &4000-&7fff   |
| 0x7EXX | keep     | %0xxxxx10 xxxxxxxx | page 2 | &8000-&bfff   |
| 0x7FXX | keep     | %0xxxxx11 xxxxxxxx | page 3 | &c000-&ffff   |

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

| Val | Name     | Status  | Area and purpose                                  |
| --- | -------- | ------- | ------------------------------------------------- |
| 00h | BASIC    | Keep    | (bytes in 4000h..7FFFh in the Aleste's 64K EPROM) |
| 03h | BOOTMENU | Keep    | (bytes in C000h..FFFFh in the Aleste's 64K EPROM) |
| 07h | AMSDOS   | Keep    | (bytes in 8000h..BFFFh in the Aleste's 64K EPROM) |

All other values 01h..02h, 04h..06h, 08h..FFh do select BASIC, too.

The BOOTMENU is an aleste specific ROM bank. BASIC and AMSDOS are 1:1 same as in CPC6128. The BIOS (lower ROM bank) is almost same as in CPC6128 (only the Startup Message and Printer handling are modified).

## Aleste LX Memory Architecture Proposal

### 1. Core Principles

1.  **CPC Compatibility** - Sacred
2.  **Aleste 520EX Spirit** - Extensible platform
3.  **Modern Architecture** - Protected mode, Wishbone, slotting

### 2. Strategy: Two Worlds - Two Realities

The system must operate in two fundamentally different modes, controlled by a switch, register, or automatically upon accessing a specific port.

*   **Legacy Mode:** Complete, unadulterated emulation of Amstrad CPC + key Aleste ports that do not conflict (like memory mapper at `7C-7Fxx`). All "reserved" CPC ports work natively. Aleste ports that conflict (USART at `EFxx`) are disabled in this mode. This mode is for running old software.
*   **Protected/Native Mode:** Enabled by a special port or access to a "magic" address. In this mode:
    *   Hardware decoders for conflicting CPC ports (SIO/DART, Timer, Printer at `EFxx`) are disabled.
    *   Native Aleste devices (USART, EXTPORT) are activated.
    *   Memory and I/O protection mechanisms are enabled.
    *   All accesses to legacy ports (`FADC`, `EFxx`, etc.) are trapped and handled by a hypervisor/BIOS to emulate old behavior on new hardware.

### 3. Slot Register and Memory Mapper (MSX-style)

The slot register is placed in a free and logically allocated space.

**Recommended location: `0xDBXX`**
*   Since CPC already uses `0xDFXX` for Upper ROM, which is conceptually close. Thus, we free up `0xDBXX` for the slot register.

**Proposed map:**

| I/O          | Status | Purpose                                                                                                      | Mode  |
| :----------- | :----- | :----------------------------------------------------------------------------------------------------------- | :---- |
| `0xDCXX`| keep   | **Bank Register for Page 0 (0000-3FFF) of CURRENT SLOT**                                                     | Both  |
| `0xDDXX`| keep   | **Bank Register for Page 1 (4000-7FFF) of CURRENT SLOT**                                                     | Both  |
| `0xDEXХ`| keep   | **Bank Register for Page 2 (8000-BFFF) of CURRENT SLOT**                                                     | Both  |
| `0xDFXX`| keep   | **Bank Register for Page 3 (C000-FFFF) of CURRENT SLOT** / **Upper ROM Bank Number** (CPC compatibility)      | Both  |
| `0xDBXX`| keep   | **Slot Select Register**. The written byte (0-3) selects the active slot whose bank registers are visible at DC-DF. | Both  |

**How it works:** The program switches the slot via `0xDBXX`, then configures its pages via `0xDC-DFXX`. The hypervisor in Protected Mode can intercept these writes and virtualize the mapping for each task.

### 4. Memory-Mapped I/O (MMIO) for New Project (LX)

This is the ideal architecture for protected mode.

**CPU Address Space View:**

| CPU Address Range | Size  | Purpose (from CPU/Programmer perspective)                                  |
| :---------------- | :---- | :------------------------------------------------------------------------- |
| `0x0000`     | 16KB  | **Hypervisor/BIOS Code**. Executable code. Entry point at `M1` @ `0x0000`. |
| `0x4000`     | 16KB  | **Memory-Mapped I/O Window**. Unified space for system management.         |
| `0x8000`     | 16KB  | **Video Memory**. Linear framebuffer, accessible to the CPU.               |
| `0xC000`     | 16KB  | **Working Memory**. Data and code for the current task.                    |

**Key idea:** The `0x4000-0x7FFF` block is not "data" but a control window. Writing to address `0x4000` could be a command to change the bank in slot 0, and reading from `0x4003` could read the mouse status.

### 5. Wishbone View: Physical Memory and Device Organization

The physical address space is 24 bits (`0x000000` - `0xFFFFFF`).

| Physical Address (24-bit) | Size  | Purpose for the System                                                  |
|:--------------------------|:------|:------------------------------------------------------------------------|
| `0x000000`                | 4 MB  | **SLOT 0**: Main space for user programs and data.                      |
| `0x400000`                | 4 MB  | **SLOT 1**: Additional space (additional RAM, expansions).              |
| `0x800000`                | 4 MB  | **SLOT 2**: Reserve or for special purposes.                            |
| `0xC00000`                | 4 MB  | **SLOT 3**: **Hypervisor Space**. Has access to all resources.          |
| ↳ `0xFE0000`              | 128KB | **I/O Mirror Block (at the end of EACH slot)**. Mirrored for all slots. |
|                           |       | **Amstrad I/O** (`0xFE0000-0xFEFFFF`)                                   |
|                           |       | **Aleste LX I/O** (`0xFF0000-0xFFFFFF`).                                |

**How it works phenomenally:**

1.  **Uniformity:** The address `0xFF1234` will always point to the same Aleste LX register, regardless of which slot the executing code is in. This removes a huge layer of problems with reconfiguring the MMU when switching context.
2.  **Isolation and Access:** A program in **SLOT 0** (user) can only access its own 4 MB and the shared I/O block. The hypervisor in **SLOT 3** has access to all 16 MB (all slots) and the same I/O block. This is a clean and simple rights model.
3.  **Compatibility:** In Legacy Mode, you can simply map the entire **SLOT 0** to the first 64KB of RAM, and redirect accesses to addresses `> 0x10000` to the I/O block of that slot, thereby emulating the behavior of I/O ports.

### 6. Slot Management and MMU

The MMU makes a decision based on two input parameters:
1.  **Mapper output (22 bits)** - what the program selected via the bank registers.
2.  **Current slot number (2 bits)** - which is set either by the hypervisor or by a separate register.

**Proposed control register map (still in MMIO, say at CPU address `0x4000`):**

| CPU Address | Register Name       | Size | Purpose                                                                                |
| :---------- | :------------------ | :--- | :------------------------------------------------------------------------------------- |
| `0x4000`    | `BANK_0`            | 1B   | Bank for page 0 (0000-3FFF) in the current slot.                                       |
| `0x4001`    | `BANK_1`            | 1B   | Bank for page 1 (4000-7FFF) in the current slot.                                       |
| `0x4002`    | `BANK_2`            | 1B   | Bank for page 2 (8000-BFFF) in the current slot.                                       |
| `0x4003`    | `BANK_3`            | 1B   | Bank for page 3 (C000-FFFF) in the current slot.                                       |
| `0x4004`    | `CURRENT_SLOT`      | 1B   | **For Hypervisor only!** Sets which slot's data is currently on the bus (0-3). For user code - read-only, returns its number. |
| `0x4005`    | `GLOBAL_CTRL`       | 1B   | Bit 0: Mode (0=Legacy, 1=Native). Bit 1: Write protection for user slots.              |

**Code example:**

```asm
; Write the value 5 to the bank register of page 2 for slot 1
LD A, 1
LD (0x4004), A   ; CURRENT_SLOT = 1 (Hypervisor call)
LD A, 5
LD (0x4002), A   ; BANK_2 = 5 (for the current slot, which is 1)
; Now the CPU's access to 0x8000-BFFF will go to bank 5 of slot 1.
```

### 7. Translation of legacy IO devices to MMIO space

Designed to preserve address recognition for all original platform devices. Doing this 100% is impossible.

**Strategy: Enhanced Hybrid Mirroring**

The principle `MMIO_ADDRESS = 0xC000 | (ORIGINAL_PORT & 0xFF00) | ((ORIGINAL_PORT & 0x00FF) >> N)` does not work for devices where lower addresses were used, hence this method can be called hybrid.

**Example:**

1.  Take the original port address (16 bits).
2.  **Add `0xC000` on the left.** This places the entire mirror in the selected 16KB page.
3.  **Keep the high byte of the port as is.**
4.  **Shift the low byte of the port to the right** to remove "garbage" bits that do not participate in decoding, and thus avoid collisions.
5.  **Fix the lower bits in separate cases** shift the lowest (displaced bits to the left).

That is, we manually assign addresses, but **keep the high byte in the MMIO address** for maximum clarity.

| Original Port | Device            | MMIO Address (Aleste LX) | Assignment Principle                                                    |
|:--------------|:------------------|:-------------------------|:------------------------------------------------------------------------|
| `0xBCXX`      | **CRTC Index**    | `0xCBCXX`                | `0xC000 + 0xBC00` + offset (if needed)                                  |
| `0xBDXX`      | **CRTC Data**     | `0xCBDXX`                | ...                                                                     |
| `0xDFXX`      | **ROM Select**    | `0xCDFXX`                | `0xC000 + 0xDF00`                                                       |
| `0xF4XX`      | **PPI Port A**    | `0xCF4XX`                | `0xC000 + 0xF400`                                                       |
| `0xFB7E`      | **FDC Status**    | `0xCFB0E`                | `0xC000 + 0xFB00 + 0x0E`**. Manually assign offset `0x0E` for Status. |
| `0xFB7F`      | **FDC Data**      | `0xCFB0F`                | `0xC000 + 0xFB00 + 0x0F`**. Manually assign offset `0x0F` for Data.   |
| `0xFADC`      | **SIO Ch.A Data** | `0xCFAD0`                | `0xC000 + 0xFA00 + 0xD0`**. Use part of the low byte as an offset.    |
| `0xFADD`      | **SIO Ch.A Ctrl** | `0xCFAD1`                | `0xC000 + 0xFA00 + 0xD1`**.                                           |

**Advantage of this approach:**

A programmer seeing the address `0xCFB0F` immediately understands: "This is something related to ports `0xFBxx`, and this is register number `0x0F`". This is **much more intuitive** than `0xC001`.

### 8. MMIO Page Map (CPU Addresses: `0xC000 - 0xFFFF`)

| Start    | End      | Length | Platform               | Purpose                                                                          |
|:---------|:---------|:-------|:-----------------------|:---------------------------------------------------------------------------------|
| `0xC000` | `0xC0FF` | 256B   | **LX (Control)**       | **System registers MMU, slotting, general control.** The core of the new system. |
|          |          |        |                        | `0xC000`: BANK0                                                                  |
|          |          |        |                        | `0xC010`: CURRENT_SLOT                                                           |
|          |          |        |                        | `0xC011`: GLOBAL_CTRL (Legacy/Protected Mode)                                    |
| `0xC100` | `0xC1FF` | 256B   | **LX (Core)**          | **Registers of the new CPU core (LX).** Cache control, interrupts, clocking.     |
|          |          |        |                        | `0xC100`: CACHE_CTRL                                                             |
|          |          |        |                        | `0xC101`: INT_VECTOR_BASE                                                        |
| `0xC200` | `0xC2FF` | 256B   | **LX (Sound)**         | **SoundMagic 2.** Advanced sound synthesizer (FM, PCM, samples).                 |
|          |          |        |                        | `0xC200`: SM2_CH0_FREQ_L                                                         |
|          |          |        |                        | `0xC201`: SM2_CH0_FREQ_H                                                         |
|          |          |        |                        | `0xC202`: SM2_CH0_CTRL                                                           |
|          |          |        |                        | `0xC210`: SM2_GLOBAL_VOLUME                                                      |
| `0xC300` | `0xC3FF` | 256B   | **LX (Graphics)**      | **Graphics Accelerator.** Blitter, hardware sprites, gamma correction.           |
|          |          |        |                        | `0xC300`: BLIT_SRC_ADDR_L                                                        |
|          |          |        |                        | `0xC301`: BLIT_SRC_ADDR_H                                                        |
|          |          |        |                        | `0xC302`: BLIT_CTRL                                                              |
|          |          |        |                        | `0xC310`: SPRITE_CTRL                                                            |
| `0xC400` | `0xC4FF` | 256B   | **LX (DMA)**           | **DMA Controller.** High-speed memory-memory, memory-device copies.              |
|          |          |        |                        | `0xC400`: DMA_SRC_ADDR                                                           |
|          |          |        |                        | `0xC408`: DMA_DEST_ADDR                                                          |
|          |          |        |                        | `0xC410`: DMA_LENGTH                                                             |
|          |          |        |                        | `0xC411`: DMA_CTRL (Start, Trigger)                                              |
| `0xC500` | `0xC5FF` | 256B   | **LX (Network)**       | **Ethernet/Wi-Fi controller.**                                                   |
|          |          |        |                        | `0xC500`: NET_MAC0                                                               |
|          |          |        |                        | `0xC506`: NET_TX_DATA                                                            |
|          |          |        |                        | `0xC507`: NET_STATUS                                                             |
| `0xC600` | `0xC6FF` | 256B   | **LX (SD Card)**       | **SD Card Host Controller.** Access to the file system.                          |
|          |          |        |                        | `0xC600`: SD_DATA                                                                |
|          |          |        |                        | `0xC601`: SD_CMD                                                                 |
|          |          |        |                        | `0xC602`: SD_STATUS                                                              |
| `0xC700` | `0xC7FF` | 256B   | **LX (RTC)**           | **Real-Time Clock.** Calendar, clock, alarm.                                     |
|          |          |        |                        | `0xC700`: RTC_SEC                                                                |
|          |          |        |                        | `0xC706`: RTC_YEAR                                                               |
|          |          |        |                        | `0xC707`: RTC_CTRL                                                               |
| `0xC800` | `0xC8FF` | 256B   | **LX (Debug)**         | **Debug and service registers.**                                                 |
|          |          |        |                        | `0xC800`: DEBUG_LED                                                              |
|          |          |        |                        | `0xC801`: SYSTEM_TICK_MS                                                         |
| `0xC900` | `0xCBFF` | 768B   | **- Reserve -**        | **Reserved for future LX expansions.**                                           |
| `0xCC00` | `0xCFFF` | 1KB    | **EX (Compatibility)** | **Mirror of Aleste 520EX ports.** USART, EXTPORT.                                |
|          |          |


Of course. Here is the translation and integration of the requested sections into the previous English summary, reflecting the accurate, hardware-centric view of the memory manager.

---

### 9. What Happens When Writing 0 to Bit 7 of Port `#7F00`?

As you correctly pointed out, this action **does not control the cassette motor, the disk drive, or reset the FDC**. Those functions have their own dedicated ports and are managed separately by the system's PPI (i8255).

**The Actual Effect:** A write to port `#7F00` with bit 7 set to 0 (i.e., `OUT #7F00, A` where A < 128) is interpreted by the internal GAL logic not as a peripheral command, but as a **specific instruction for the memory manager itself**.

*   **The typical result of this command is to reset the GAL's internal bank register to a default state**, most commonly the standard 64KB memory map:
    *   Segment 1 (`#4000-#7FFF`) -> Bank 1
    *   Segment 2 (`#8000-#BFFF`) -> Bank 2
    *   Segment 3 (`#C000-#FFFF`) -> Bank 3
    *   Segment 0 (`#0000-#3FFF`) -> Bank 0 (or ROM, depending on the R bit in `#DF00`)

**Practical Use:** This command provides a swift way to return the memory mapping to a "safe" or legacy-compatible state. It's a hardware-level reset of the banking configuration without the need for a full system reset, crucial for ensuring compatibility with software that does not expect or manage extended memory.

---

### 10. Internal GAL Logic (Simplified)

The heart of the CPC's memory management is a programmable logic device (GAL or CPLD). This chip continuously monitors the system's address bus and the state of the I/O ports. Its primary job is to generate the correct **Column Address Strobe (CAS)** signals and control the higher address lines (**A14, A15**) going to the DRAM chips based on the desired configuration.

Here’s a simplified view of its operation:

1.  **Address Decoding:** The GAL decodes the upper address lines (A15-A14) to determine which 16KB segment the Z80 CPU is accessing:
    *   `00`: Segment 0
    *   `01`: Segment 1
    *   `10`: Segment 2
    *   `11`: Segment 3

2.  **Bank Selection for Segments 1, 2, and 3:** For these segments, the GAL checks the values of M0, M1, and M2 stored in its internal latch (from the last write to `#7F00`).
    *   If the value is **not `11`**, the GAL directly generates the corresponding CAS signals and address lines to select the fixed bank (0, 1, or 2) from the base 64KB RAM.
    *   If the value is **`11`**, the GAL uses the extended bank number stored in its second internal latch (from the last write to `#DF00`) to calculate and generate the complex CAS and address signals required to select one of up to 64 physical RAM banks.

3.  **Bank Selection for Segment 0:** The logic for this segment also involves the R bit from the `#DF00` register. The GAL uses this bit to decide whether to assert signals that enable the ROM chip or allow access to the RAM (Bank 0).

In essence, the entire sophisticated banking mechanism is encapsulated within this single piece of programmable logic. The I/O ports `#7F00` and `#DF00` simply serve as the interface for the CPU to load values into the GAL's internal configuration registers. This elegant design explains the system's flexibility and efficiency in managing memory far beyond its original 64KB specification.