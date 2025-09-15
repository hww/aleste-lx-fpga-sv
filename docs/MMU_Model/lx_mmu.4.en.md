# Aleste LX System Architecture

## 1. Basic Principles

The system is built on a Z80 processor with extended 24-bit address space (16 MB) through a bank switching mechanism similar to MSX, but with extended functionality. Supports two main operating modes for backward compatibility and extended functionality.

## 2. Operating Modes

The system state is defined by two independent parameters: privilege mode and I/O device set.
`S = {supervisor_mode, native_mode, mmio_userlock}`

### 2.1. Privilege Mode
Defines the level of access to system resources.
*   **User Mode**: Execution of application code. Limited access to memory slots and I/O ports.
*   **Supervisor Mode**: Execution of kernel code (privileged mode). Full access to all system resources. Hardware entry on events (trap). After reset, the system always starts in this mode.

### 2.2. Compatibility Mode
Defines which set of I/O devices and memory management mechanism is active.
*   **Legacy Mode**: Full hardware and software compatibility with Amstrad CPC. Uses CPC port addressing. In `supervisor` mode, this mode is ignored; `native` always applies.
*   **Native Mode**: Extended mode with new functionality, using a modern set of I/O ports (00h-BFh) and a full-fledged slot mechanism.

## 3. Memory Organization

### 3.1. Logical and Physical Space
*   **Physical Address Space**: 24 bits (16 MB).
*   **Z80 Logical Address Space**: 16 bits (64 KB).
*   **Logical Slots**: The 64 KB logical space is divided into 4 slots of 16 KB each:
    *   **Slot 0**: 0000-3FFF (CPC RAM, base memory)
    *   **Slot 1**: 4000-7FFF (CPC ROM, system ROM)
    *   **Slot 2**: 8000-BFFF (User extended memory)
    *   **Slot 3**: C000-FFFF (Supervisor memory, privileged)
*   **Bank Switching**: To map a 16KB logical slot to 16MB of physical memory, an 8-bit page (bank) register is used.
    `physical_address = {bank_reg[7:0], cpu_a[13:0]}`

### 3.2. MMIO Space: The HI and LO Concept

The last 64 KB of the physical address space (addresses `FF0000h - FFFFFFh`) are reserved for Memory-Mapped I/O (MMIO) device memory. This space is logically divided into two parts, a fundamental principle of the architecture:

*   **`MMIO_HI` (Addresses `FF8000h - FFFFFFh`, approximately)**: This area is intended for **emulating Legacy devices** of the Amstrad CPC in the native system. Devices in this area are **hardwired** to their physical addresses (e.g., `Gate Array` at `FF0100h`, `CRTC` at `FF0110h`). In Legacy mode, access to CPC ports (7FXXh, BCXXh, etc.) is translated into direct accesses to these fixed addresses in MMIO_HI via a mechanism that maps the full Z80 bus address `A[15:0]`.

*   **`MMIO_LO` (Addresses `FF0000h - FF7FFFh`, main area)**: This area is intended for **new devices** of the Aleste LX system (PIC, DMA, modern sound, graphics) and is accessible via a bank switching (window) mechanism. Access to this space is done through a special 256-byte "window" in the Z80 address space.

**Important:** A device's address in the MMIO space is part of its architectural contract. This allows not only the CPU but also other bus masters (e.g., the **DMA controller**) to directly access peripheral devices at their fixed addresses on the fast Wishbone bus, which is critical for performance.

### 3.3. MMIO_LO Structure (Page 0)

The first page of MMIO_LO (Page 0, addresses `FF0000h - FF7FFFh`) contains the most essential system devices, placed with a 32-byte step for alignment and simple address decoding:

*   **`FF0000h`**: PIC Controller (interrupt controller).
*   **`FF0020h`**: NMI Controller (non-maskable interrupt controller).
*   **`FF0040h`**: IPC Mailbox (system mailbox).
*   **`FF0060h`**: System Timer (system timer).
*   **`FF0080h`**: RTC Controller (real-time clock).
*   **`FF00A0h - FF00BFh`**: Reserved for future system devices.
*   **`FF00C0h` - `FF00FFh`**: Reserved for MMU (memory manager).
    *   **`FF00D0h` - `FF00EFh`**: MMU register block (memory manager).

Subsequent pages of MMIO_LO contain more complex and larger devices:
*   **`FF0100h`**: Space for Legacy CPC devices (Gate Array, CRTC, etc.).
*   **`FF0200h`**: DMA Controller.
*   **`FF0300h`**: Graphics Chip.
*   **`FF0400h`**: Sound Chip.

## 4. System Control Registers

### 4.1. Control Registers (Native Mode)
Accessible via I/O ports in the range D0-FF.
*   **`GLOBAL_CTRL` (Port `D7`)**: Master control register for mode settings.

    | Bit | Group       | Purpose                                                                                                             |
    |-----|-------------|---------------------------------------------------------------------------------------------------------------------|
    | 0   | Functional  | **native_mode**: 1=Native mode, 0=Legacy mode.                                                                      |
    | 1   | Functional  | **supervisor_mode**: 1=Supervisor mode (set by hardware or software).                                                |
    | 2   | Functional  | **supervisor_hook**: 1=Enable hardware trap on addresses 0038h/0066h.                                                |
    | 3   | Reserved    | For future functional expansion.                                                                                    |
    | 4   | Security    | **mmio_userlock**: (0=Allow direct MMIO access, 1=Lock access -> SysCall only) **<- Default is 1!**                  |
    | 5-7 | Reserved    | For future security bits.                                                                                           |

*   **`SUPER_SLOT` (Port `D9`)**: Active slot selection for **supervisor** mode.
*   **`USER_SLOT` (Port `DB`)**: Active slot selection for **user** mode.
*   **`BANK_0` - `BANK_3` (Ports `DC`-`DF`)**: Page selection for the four memory areas (slots) in the current mode.
*   **`SYS_CALL_CMD_PORT` (Port `D4`)**: Port for calling operating system commands (**Native mode**).
*   **`MMIO_PAGE` (Port `D3`)**: 256-byte page number in the MMIO_LO space.
*   **`MMIO_WINDOW` (Ports `00h-СFh`)**: Window for reading/writing data to the selected MMIO_LO page.
    `mmio_physical_address = FF0000h + {MMIO_PAGE, cpu_a[6:0]}`

### 4.2. Compatibility Registers (Legacy Mode)
Designed for emulating the Amstrad CPC environment. Accessible via ports of the form `XXYYh`.
*   **`RMR` / `MMR` (Port `7FXXh`)**: CPC memory and graphics control registers.
*   **`ROM_SEL` (Port `DFXXh`)**: ROM bank selection for the upper memory area (C000-FFFF).
*   **`SYSCALL_LEGACY` (Port `D400h`)**: Operating system function call. (Analog of port `D4` in Native mode).

## 5. Mode Switching Mechanisms

### 5.1. Software Switching
Write to the `GLOBAL_CTRL` register (port `D7`):
`S ← {data[1], data[0]}` (sets supervisor and native modes).

### 5.2. Hardware Switching (Trap) to Supervisor Mode
Entry into privileged mode is done by hardware when the condition is met:
`trap = (supervisor_hook == 1) ∧ (M1 signal active) ∧ (address_bus == 0038h ∨ address_bus == 0066h)`
This allows the kernel to intercept interrupt or reset handling.

### 5.3. Switching via Syscall
Writing to the `syscall` register triggers a transition to Supervisor mode. The supervisor must clear the register upon completion of the operation.

- Function code: Passed in register A.
- Arguments: Passed via registers. Standard convention for such systems (e.g., CP/M, MSX-DOS) is to use register pairs.
  - BC — 1st argument (e.g., file handle, device number)
  - DE — 2nd argument (e.g., pointer to data or size)
  - HL — 3rd argument (e.g., pointer to buffer or additional parameter)

Return value: Typically in register A (status) or HL (result, pointer).

Register preservation: The system call handler in the supervisor is expected to save and restore all registers except those used for returning the value.

Example of a correct call:

```asm
; Preparing arguments for syscall_write (function code 0x02)
LD A, 2          ; A = Function code 'write'
LD BC, file_handle ; BC = 1st arg.: file handle
LD DE, data_size ; DE = 2nd arg.: data size
LD HL, data_buffer ; HL = 3rd arg.: pointer to buffer
CALL syscall     ; Call wrapper
; Check return value in A (0=success, else error code)
; The handler in supervisor will know that for function 0x02, arguments are expected in BC, DE, HL.
```


```asm
; The wrapper itself resides in user space
syscall:
    OUT (D4h), A    ; !!! THE MAGIC COMMAND !!! (For Native Mode: port D4)
    RET             ; The program will return here after syscall execution

; Or for Legacy Mode:
syscall_legacy:
    OUT (D400h), A  ; !!! THE MAGIC COMMAND !!! (For Legacy Mode: port D400)
    RET
```

Supervisor-mode code (handler):

```asm
Syscall_Dispatcher:
    ; A already contains the function code
    CP 0
    JP Z, Syscall_OpenFile
    CP 1
    JP Z, Syscall_ReadFile
    CP 2
    JP Z, Syscall_WriteFile ; <--- Jump here
    ; ... etc.

Syscall_WriteFile:
    ; Parameters are already in registers: A=code, BC=file_handle, HL=buffer, DE=size
    ; BC = file_handle, HL = data_buffer, E = size
    ; Only the actual work remains.
    ; ... processing ...
    RET ; Return from dispatcher
```

### 5.4. Exiting Supervisor Mode
The exit is a **multi-step process**, synchronized with the CPU instruction cycle, ensuring correct termination of kernel code execution.

1.  **Exit Initiation**: The kernel program executes an `OUT` command with data `0` to a special port.
    ```asm
    out (supervisor_mode_port), a ; where a=0
    ```
2.  **Detection**: The hardware detects this write and sets an internal flag `EXIT_SUPERVISOR_PENDING = 1`. **Important:** At this stage, the CPU is still in supervisor mode.
3.  **RETN Execution**: The next instruction (usually `RETN` or `RETI`) is executed fully in supervisor mode, restoring the return address in user code.
    ```asm
    retn ; Instruction executes in supervisor mode
    ```
4.  **M1 Synchronization**: The hardware waits for the **next** `M1` bus cycle (start of fetching a new instruction). This is the synchronization point.
5.  **Switching**: Upon `M1` activation and with the `EXIT_SUPERVISOR_PENDING` flag set, the hardware resets the `supervisor_mode` and switches memory banks to user ones.
6.  **Fetch in User Mode**: Instruction fetch at the return address now occurs from user memory.


**Result:** The `RETN` instruction is executed in supervisor mode, and the instruction following it is executed in user mode.

### 5.5. Determining the Active Slot
The active slot is selected based on the current privilege mode:
`current_slot = (supervisor_mode == 1) ? SUPER_SLOT : USER_SLOT`

### 5.6. Mapper Operation Algorithm
Access to bank registers `BANK_0`...`BANK_3` is redirected to one of the 16 internal mapper registers depending on the active slot.
```cpp
void write_to_bank_register(uint8_t address_low_bits, uint8_t data) {
    page_index = (current_slot * 4) + (address_low_bits & 0b00000011);
    internal_mapper_registers[page_index] = data;
}
```

### 5.7. Security Access Policy
- User Native Mode: With `mmio_userlock=1`, access to ports 00-BF and D3, D7, D9, DB-DF is prohibited. Only D4 (SysCall) is allowed.
- User Legacy Mode: With `mmio_userlock=1`, D400 (SysCall) and all standard CPC ports are allowed.
- Supervisor Mode: Access is always allowed.

### 5.8. System Call for Unlocking MMIO Access

For unlocking access to `mmio` ports, there is `SYS_MMIO_ACCESS_REQUEST` (Function code: `0xFE`).

- **Purpose:** Request to unlock direct MMIO access.
- **Input:** `A = 0xFE`, `BC = 0x0001` (MMIO request flag).
- **Output:** `A = Result code` (0: allowed, 1: denied).
- **Behavior:** The kernel may request user confirmation or check the program's digital signature. On success, it sets `mmio_userlock = 0`.

## 6. Detailed Information on Native Mode MMU Registers

### 6.1 GLOBAL_CTRL Register
The complete register table is provided in section 4.1.

### 6.2 Extended Mapper Access
Designed for use with system DMA for quick saving and restoring of the entire mapper state.

| Wishbone Address | Slot | CPU Page |
|:----------------:|:----:|----------|
|     FF00E0       |  0   | 0000     |
|     FF00E1       |  0   | 4000     |
|     FF00E2       |  0   | 8000     |
|     FF00E3       |  0   | C000     |
|     FF00E4       |  1   | 0000     |
|     FF00E5       |  1   | 4000     |
|     FF00E6       |  1   | 8000     |
|     FF00E7       |  1   | C000     |
|     FF00E8       |  2   | 0000     |
|     FF00E9       |  2   | 4000     |
|     FF00EA       |  2   | 8000     |
|     FF00EB       |  2   | C000     |
|     FF00EC       |  3   | 0000     |
|     FF00ED       |  3   | 4000     |
|     FF00EE       |  3   | 8000     |
|     FF00EF       |  3   | C000     |

## 7. IPC Mailbox (System Mailbox)

**Purpose:** To provide ultra-fast, deterministic, and secure exchange of service commands and notifications between the **Supervisor (Kernel)** and **Drivers** running in kernel space.

**Location:** A dedicated area in MMIO space (e.g., `FF0040h - FF005Fh`).

**Hardware Implementation:** Consists of a set of registers:
*   **`MAILBOX_CMD`**: The driver writes the action code here (e.g., `SND_BUF_EMPTY`, `DSK_IO_DONE`).
*   **`MAILBOX_DATA_*`**: Command parameters (channel number, address, etc.).
*   **`MAILBOX_STATUS`**: Bits `FULL` (message not read) and `ACK` (acknowledgment of processing).
*   **`MAILBOX_INT_CTRL`**: Interrupt control upon message receipt.

**Protocol:** The driver writes the command and data, the hardware sets `FULL` and generates an interrupt to the kernel (if enabled). The kernel, after processing the message, clears the `FULL` flag.

## 8. Mathematical Model

### 8.1. Address Translation
The algorithm for translating a logical address to a physical one depends on the modes.
```
physical_address =
    if (supervisor_mode == 1) or (native_mode == 1) then
        // Native or supervisor mode: use the mapper
        { internal_mapper_registers[current_slot * 4 + page_number], cpu_a[13:0] }
    else
        // Legacy mode: use CPC mechanics
        legacy_cpc_mapping(cpu_a, RMR, MMR)
```

### 8.2. State Machine
The change in system state can be described as:
```
S(t+1) =
    if trap_condition then
        {1, S(t).native_mode} // Enter Supervisor, Native mode unchanged
    else if exit_supervisor_pending & next_M1_cycle then
        {0, S(t).native_mode} // Exit to User, Native mode unchanged
    else if io_write_to_D7h then
        {data[1], data[0]}    // Software setting of both modes
    else
        S(t)                  // State unchanged
```

## 9. Register and Address Table


| Device / Description                       | RW | D7 | D6 | Legacy IO Address | Legacy Wishbone Address | Native IO Address | Native Wishbone Address |
|--------------------------------------------|----|----|----|-------------------|-------------------------|-------------------|-------------------------|
| **ORIGINAL CPC DEVICES**                   |    |    |    |                   |                         |                   |                         |
| Gate Array                                 | W  |    |    | 7FXX              | FF7FXX                  | -                 | FF0100 (16 bytes)       |
| Gate Array Palette Index                   | W  | 0  | 0  | 7FXX              | FF7FXX                  | -                 | ↳ +0                    |
| Gate Array Palette Value                   | W  | 0  | 1  | 7FXX              | FF7FXX                  | -                 | ↳ +0                    |
| Gate Array Rom enable                      | W  | 1  | 0  | 7FXX              | FF7FXX                  | -                 | ↳ +0                    |
| Gate Array RAM banking                     | W  | 1  | 1  | 7FXX              | FF7FXX                  | -                 | ↳ +0                    |
| CRTC 6845 Index Register                   | W  |    |    | BCXX              | FFBCXX                  | -                 | FF0110 (16 bytes)       |
| CRTC 6845 Data Register                    | RW |    |    | BDXX              | FFBDXX                  | -                 | ↳ +1                    |
| Upper ROM Select                           | W  |    |    | DFXX              | FFDFXX                  | -                 | FF0120 (16 bytes)       |
| Printer Port                               | W  |    |    | EFXX              | FFEFXX                  | W                 | FF0130 (16 bytes)       |
| **CPC PPI**                                |    |    |    |                   |                         |                   |                         |
| 8255 PPI Port A (PSG Data)                 | RW |    |    | F4XX              | FFF4XX                  | -                 | FF0140 (16 bytes)       |
| 8255 PPI Port B (Vsync,PrnBusy,Tape,etc.)  | RW |    |    | F5XX              | FFF5XX                  | -                 | ↳ +1                    |
| 8255 PPI Port C (KeybRow,Tape,PSG Control) | RW |    |    | F6XX              | FFF6XX                  | -                 | ↳ +2                    |
| PPI Control Register                       | W  |    |    | F7XX              | FFF7XX                  | -                 | ↳ +3                    |
| **CPC FDC**                                |    |    |    |                   |                         |                   |                         |
| FFloppy Motor Control (for 765 FDC)        | W  |    |    | FA7E              | FFFA7E                  | -                 | FF0150 (16 bytes)       |
| 765 FDC (internal) Status Register         | R  |    |    | FB7E              | FFFA7E                  | -                 | ↳ +0                    |
| 765 FDC (internal) Data Register           | RW |    |    | FB7F              | FFFB7F                  | -                 | ↳ +1                    |
| **CPC SERIAL**                             |    |    |    |                   |                         |                   |                         |
| 80-SIO / DART port                         | RW |    |    | FADC-FADF         | FFFADC-FFFADF           | -                 | FF0160 (16 bytes)       |
| 8253 Timer                                 | RW |    |    | FBDC-FBDF         | FFFBDC-FFFBDF           | -                 | FF0170 (16 bytes)       |
| MMIO SYSCALL                               | RW |    |    | D400              | FF00D4                  | -                 | `4`                     |
| **LX MMU REGISTERS (CLASSIC 8-bit)**       |    |    |    |                   |                         |                   |                         |
| MMIO Data Window                           | RW |    |    | -                 | -                       | 00-BF             | FF00D0 + {PAGE, ADDR}   |
| MMIO Page Register                         | RW |    |    | -                 | -                       | D3                | FF00D3                  |
| MMIO SYSCALL                               | RW |    |    | D400              | FF00D4                  | D4                | FF00D4                  |
| Control Register                           | RW |    |    | -                 | -                       | D7                | FF00D7                  |
| Super Slot Select                          | RW |    |    | -                 | -                       | D9                | FF00D9                  |
| User Slot Select                           | RW |    |    | -                 | -                       | DB                | FF00DB                  |
| Bank 0 Register                            | RW |    |    | -                 | -                       | DC                | FF00DC                  |
| Bank 1 Register                            | RW |    |    | -                 | -                       | DD                | FF00DD                  |
| Bank 2 Register                            | RW |    |    | -                 | -                       | DE                | FF00DE                  |
| Bank 3 Register                            | RW |    |    | -                 | -                       | DF                | FF00DF                  |
| **Extended Mapper Access**                 |    |    |    |                   |                         |                   |                         |
| Bank 0-3 Registers                         | RW |    |    | -                 | FF00DC-FF00DF           | -                 | FF00DC-FF00DF           |
| **LX MMIO PAGE 0**                         |    |    |    |                   |                         |                   |                         |
| PIC Controller                             | RW |    |    | -                 | -                       | -                 | FF0000 (32 bytes)       |
| NMI Controller                             | RW |    |    | -                 | -                       | -                 | FF0020 (32 bytes)       |
| IPC Mailbox                                | RW |    |    | -                 | -                       | -                 | FF0040 (32 bytes)       |
| System Timer                               | RW |    |    | -                 | -                       | -                 | FF0060 (32 bytes)       |
| RTC Controller                             | RW |    |    | -                 | -                       | -                 | FF0080 (32 bytes)       |
| **LX MMIO PAGE 1**                         |    |    |    |                   |                         |                   |                         |
| (Reserved Legacy Devices)                  | RW |    |    | -                 | -                       | -                 | FF0100 (64 bytes)       |
| **LX MMIO PAGE 2 and beyond**              |    |    |    |                   |                         |                   |                         |
| DMA Controller                             | RW |    |    | -                 | -                       | -                 | FF0200 (256 bytes)      |
| Graphics Chip                              | RW |    |    | -                 | -                       | -                 | FF0300 (256 bytes)      |
| Sound Chip                                 | RW |    |    | -                 | -                       | -                 | FF0400 (256 bytes)      |

`1` MMIO Data Window accesses not a fixed address, but a range `FF0000 - FFFFFF` depending on the page register.
`2` MMIO Data Window is only accessible in `superviser` mode or if `mmio_userlock` access is enabled.
`3` MMIO Data Window is not accessible in legacy mode, but SYSCALL is available.
`4` In legacy mode, the SYSCALL register is accessible at address D400 but the native FF00D4 responds at this address.

## 10. Legacy MMU Registers

Below are registers exclusively for the MMU of the original CPC 6128 platform.

### Register RMR (Control Interrupt counter, ROM mapping and Graphics mode)

This is a general purpose register responsible for the graphics mode and the ROM configuration.

| bit  |              | Action                                            |
|------|--------------|---------------------------------------------------|
| 7    |              | Must be 1                                         |
| 6    |              | Must be 0                                         |
| 5    | -            | must be 0 on Plus machines with ASIC unlocked     |
| 4    | irq_control  | Interrupt generation control                      |
| 3    | upper_rom    | 1=Upper ROM area disable, 0=Upper ROM area enable |
| 2    | lower_rom    | 1=Lower ROM area disable, 0=Lower ROM area enable |
| 1..0 | graphic_mode | Graphics Mode selection e                         |

- `upper_rom` starts at C000
- `lower_rom` starts from 0000
- `graphic_mode` defines the graphics mode, this is a CPC legacy and even though it's not related to the MMU, it must be supported in the MMU for simplicity.
- In Amstrad, writing to ROM performs a write to the underlying RAM.

### Upper ROM Select (DFXX)

An eight-bit register that selects a 16KB memory bank in addresses C000-CFFF when `upper_rom` is set to 1.

### Register MMR (RAM memory mapping)

| Bit | Purpose     | Description                                                                   |
|:----|:------------|:------------------------------------------------------------------------------|
| 7   | 1           | Must be 1                                                                     |
| 6   | 1           | Must be 1                                                                     |
| 5-3 | **bbb**     | High bits of the bank number. They select a 64KB block in extended memory.    |
| 2-0 | **ccc**     | Configuration defining the low bits of the bank number.                       |

**CPC 128 Memory map**

| Address    | 0     | 1     | 2     | 3     | 4     | 5     | 6     | 7     |
|------------|-------|-------|-------|-------|-------|-------|-------|-------|
| C000-FFFF | RAM_3 | RAM_7 | RAM_7 | RAM_7 | RAM_3 | RAM_3 | RAM_3 | RAM_3 |
| 8000-BFFF | RAM_2 | RAM_2 | RAM_6 | RAM_2 | RAM_2 | RAM_2 | RAM_2 | RAM_2 |
| 4000-7FFF | RAM_1 | RAM_1 | RAM_5 | RAM_3 | RAM_4 | RAM_5 | RAM_6 | RAM_7 |
| 0000-3FFF | RAM_0 | RAM_0 | RAM_4 | RAM_0 | RAM_0 | RAM_0 | RAM_0 | RAM_0 |

**CPC 512 KB Memory map**

| Address    | ccc=0 | ccc=1     | ccc=2     | ccc=3     | ccc=4     | ccc=5     | ccc=6     | ccc=7     |
|------------|-------|-----------|-----------|-----------|-----------|-----------|-----------|-----------|
| 0000-3FFF | 0     | 0         | bbb*4 + 0 | 0         | 0         | 0         | 0         | 0         |
| 4000-7FFF | 1     | 1         | bbb*4 + 1 | 3         | bbb*4 + 0 | bbb*4 + 1 | bbb*4 + 2 | bbb*4 + 3 |
| 8000-BFFF | 2     | 2         | bbb*4 + 2 | 2         | 2         | 2         | 2         | 2         |
| C000-FFFF | 3     | bbb*4 + 3 | bbb*4 + 3 | bbb*4 + 3 | 3         | 3         | 3         | 3         |

---