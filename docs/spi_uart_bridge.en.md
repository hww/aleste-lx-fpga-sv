# UART/SPI Bridge Protocol Specification
**Version 1.2**
*Module Architecture for Alesta LX*
**Status**: 
Approved as architecture cornerstone

## Overview

The protocol provides unified access to the system via UART (initial phase) and SPI (future implementation). One atomic packet represents one complete operation between the host system and FPGA. The protocol separates access to main memory and control registers for greater flexibility.

## Command Format (8 bits)

```
[7]   - Reserved bit (0=basic commands, 1=extended commands)
[6:4] - Operation type
[3:0] - Parameters/data size
```

## Basic Commands

All basic commands operate when the reserved bit equals 0. This is the main set of operations for daily system interaction.

### Main Operation Types:
- `000` - **Memory Read** (via Wishbone)
- `001` - **Memory Write** (via Wishbone)
- `010` - **Register Read** (FPGA control)
- `011` - **Register Write** (FPGA control)
- `100` - **Events** (instant actions with parameters)
- `101` - **Global Status** (system state query)
- `110` - *Reserved*
- `111` - *Reserved*

### Data Size Encoding

For data operations, bits [3:0] indicate the packet size for transmission. This enables efficient handling of various data volumes.

```
`0000` - 1 byte
`0001` - 2 bytes
`0010` - 4 bytes
`0011` - 8 bytes
`0100` - 16 bytes
`0101` - 32 bytes
`0110` - 64 bytes
`0111` - 128 bytes
`1000-1111` - *Reserved*
```

## Command Specification

The following sections detail the main command types that provide separate access to memory and control registers, as well as event transmission and system status queries.

### Memory Read (`0_000_xxxx`)

Operation for reading data from main system memory via Wishbone bus. Used for accessing video memory, RAM, and other memory-mapped devices.

```
Transmit: [CMD] [ADDR 24-bit]
Receive: [DATA N-bytes]
```

**Example:** `0_000_0010` - read 4 bytes from memory at address 0x001000

### Memory Write (`0_001_xxxx`)

Operation for writing data to main system memory via Wishbone bus. Provides direct access to all memory-mapped system resources.

```
Transmit: [CMD] [ADDR 24-bit] [DATA N-bytes]
Receive: [ACK 8-bit] (0x00 = success)
```

**Example:** `0_001_0001` - write 2 bytes to video memory at address 0xC000

### Register Read (`0_010_xxxx`)

Operation for reading values from FPGA control registers. Registers are used for system configuration, peripheral management, and obtaining status from various modules.

```
Transmit: [CMD] [REG_ADDR 8-bit]
Receive: [REG_VALUE 8-bit]
```

**Example:** `0_010_0000` - read video controller status register (address 0x10)

### Register Write (`0_011_xxxx`)

Operation for writing values to FPGA control registers. Allows system configuration, test initiation, and hardware module control.

```
Transmit: [CMD] [REG_ADDR 8-bit] [REG_VALUE 8-bit]
Receive: [ACK 8-bit] (0x00 = success)
```

**Example:** `0_011_0000` - write value 0x55 to configuration register (address 0x01)

### Events (`0_100_xxxx`)

Operation for sending instant events with parameters. Events are used to trigger one-time actions that don't require persistent state in registers.

```
Transmit: [CMD] [EVENT_ID 8-bit] [PARAM 8-bit]
Receive: [STATUS 8-bit]
```

**Event Examples:**
- `0_100_0000` - CPU Reset (parameter: reset type)
- `0_100_0001` - IRQ Generation (parameter: IRQ number)
- `0_100_0010` - NMI Interrupt Generation
- `0_100_0100` - Memory Test Start (parameter: test type)

### Global Status (`0_101_xxxx`)

Operation for querying overall system state. Returns a combined status byte containing key flags from various subsystems.

```
Transmit: [CMD]
Receive: [STATUS 8-bit]
```

**Status Bits:**
- `[0]` - CPU halted (processor stopped)
- `[1]` - System reset active (system in reset state)
- `[2]` - HDMI VSYNC (frame synchronization pulse)
- `[3]` - SD card inserted (memory card present)
- `[4]` - Reset button pressed (reset button active)
- `[5]` - PLL locked (clock generators stable)
- `[6]` - SDRAM calibrated (memory calibrated)
- `[7]` - FPGA overload (overheating or overload condition)

## Extended Commands (reserved bit = 1)

Commands `1_xxxxxxx` are reserved for future protocol versions. Complete freedom for semantic redefinition to extend functionality without breaking backward compatibility.

## UART Implementation Notes

### Packet Boundaries:
- **Timeout**: 3.5 characters without data = end of packet
- **Fixed length**: determined by command type

### Speeds:
- **Basic**: 9600 baud (demo compatibility)
- **Operational**: 115200 baud
- **Maximum**: 1 Mbaud (for future SPI)

## SPI Migration Path

### Natural Transition:
- **CS signal** defines atomic operation boundaries
- **Same protocol** - only physical layer changes
- **DMA support** for efficient data transfer

### 4-wire SPI Advantages:
- **Double speed** with dual/quad mode
- **Streaming operations** without byte gaps
- **Hardware support** in microcontrollers

## Usage Examples

```python
# Read 4 bytes from video memory
send([0x02, 0x00, 0x10, 0x00])  # CMD=0x02, ADDR=0x001000
receive([0x12, 0x34, 0x56, 0x78])  # Data

# Write configuration register
send([0x30, 0x01, 0x55])  # CMD=0x30, REG=0x01, VALUE=0x55
receive([0x00])  # Success acknowledgment

# Query global status
send([0x50])  # CMD=0x50
receive([0x25])  # Status: PLL locked + CPU halted

# Send reset event
send([0x40, 0x01, 0xFF])  # CMD=0x40, EVENT=0x01, PARAM=0xFF
receive([0x00])  # Execution status
```

