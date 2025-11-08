# Video Palette Module

## Overview
Advanced color palette controller with full CPC legacy compatibility and extended modern color modes. Implements a unified palette architecture with hardware-accelerated color manipulation.

## Address Map

### Legacy CPC Mode (TAG=11)
- **0xBC00**: Gate Array registers (when D7=0)
  - D7-D6=00: Palette index (5-bit: 16 colors + border)
  - D7-D6=01: Palette data (CPC color conversion)
  - D7-D6=10: Border color (CPC color conversion)

### Native Mode (TAG=01, Base=0x0100-0x011F)
- **0x00**: Palette index (R/W)
- **0x01**: Palette data low (R/W, mode-dependent auto-increment)
- **0x02**: Palette data high (R/W, 12-bit mode only)



- **0x03**: Border color low (R/W)
- **0x04**: Border color high (R/W)
- **0x05**: Control register (R/W)
- **0x06**: Palette modifier (R/W, OR/XOR operations)

## Control Register
```
bit 0-1: palette_write_mode (00=12-bit, 01=CPC, 10=MSX, 11=YJK)
bit 2-3: Reserved
bit 4:   Reserved  
bit 5:   auto_increment     (1=auto-increment palette index)
bit 6:   modifier_type      (0=OR, 1=XOR)
bit 7:   modifier_enable    (1=enable palette index modification)
```

## Color Modes

### CPC Legacy Mode
- 16 colors + border color via hardware register mapping
- Accurate CPC color conversion using distributed ROM LUT
- 5-bit palette index (bit4 selects border vs palette)
- Write-only access in legacy mode, reads return 0

### 12-bit Native Mode
- Direct 12-bit color from pixel data
- High/low byte write with auto-increment after high byte
- Bypasses color conversion for maximum flexibility

### MSX Mode
- MSX2+ compatible 8-bit color conversion
- Hardware-optimized distributed LUT conversion
- Perceptual color mapping for optimal quality

### YJK Mode
- Advanced MSX2+ YJK color space conversion
- Specialized for graphic arts and photo applications
- Maintains full MSX software compatibility

## Palette Modification Features

### Index Modification
- **OR mode**: Force palette bank selection
- **XOR mode**: Palette animation and bank switching
- Applied to pixel index before palette lookup
- Enables dynamic palette effects without data movement

### Auto-increment Behavior
- **CPC/EX modes**: Manual index management
- **MSX/YJK modes**: Increments after data write
- **12-bit mode**: Increments after high byte write
- Reads never affect index

## Border Handling
- Dedicated 12-bit border color register
- Separate from main palette RAM
- CPC legacy: border uses same color conversion as palette
- Native modes: direct 12-bit color assignment
- Pixel generator provides border detection signal

## Color Conversion

### CPC Color LUT
- Hardware-accurate conversion using distributed ROM
- Preserves exact CPC color behavior including hardware quirks
- Multiple register values map to same colors (hardware behavior)

### MSX/YJK Conversion
- Hardware-optimized distributed LUT implementation
- MSX mode: Standard 8-bit to 12-bit RGB conversion
- YJK mode: Advanced color space conversion for graphic arts
- Single-cycle operation with registered outputs

## Integration Points
- **Input**: 8-bit pixel indices from pixel pipeline
- **Input**: Border detection signal from CRT controller
- **Output**: 12-bit RGB to scan converter/HDMI
- **Control**: Mode selection via control register
- **Bus**: Wishbone-compatible interface with legacy support

## Performance Characteristics
- Single-cycle color lookup in all modes
- Pipeline-friendly design with registered outputs
- Zero-wait state register access
- Distributed LUT for minimal combinatorial delay

## Resource Usage (FPGA)
- 256×12-bit palette RAM (3,072 bits)
- Distributed ROMs for color conversion
- Minimal combinational logic for mode selection
- Register-based control path

## Design Philosophy
- **Accuracy**: Hardware-perfect CPC legacy compatibility
- **Quality**: High-quality color conversion for modern modes  
- **Performance**: Single-cycle operation with pipeline support
- **Flexibility**: Software-controlled mode switching
- **Efficiency**: Minimal FPGA resources through distributed LUT

## Key Improvements
- **Logical Register Order**: Color data (palette + border) grouped together, followed by control registers
- **Enhanced Color Modes**: Added YJK mode for advanced graphics applications
- **Unified Architecture**: Single module handles all color conversion needs
- **Legacy Compatibility**: Full CPC gate array emulation while providing modern features
