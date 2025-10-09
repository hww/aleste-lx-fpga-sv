```markdown
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
- **0x03**: Control register (R/W)
- **0x04**: Palette modifier (R/W, OR/XOR operations)
- **0x05**: Border color low (R/W)
- **0x06**: Border color high (R/W)

## Control Register
```
bit 0-1: Reserved
bit 2:   Reserved  
bit 3-4: palette_write_mode (00=CPC, 01=EX, 10=Native8, 11=Native12)
bit 5:   auto_inc           (1=auto-increment palette index)
bit 6:   modifier_type      (0=OR, 1=XOR)
bit 7:   modifier_enable    (1=enable palette index modification)
```

## Color Modes

### CPC Legacy Mode
- 16 colors + border color via hardware register mapping
- Accurate CPC color conversion using distributed ROM LUT
- 5-bit palette index (bit4 selects border vs palette)
- Write-only access in legacy mode, reads return 0

### EX Legacy Mode (Alesta EX)
- 6-bit color input (2 bits per RGB component)
- Simple bit-doubling to 12-bit RGB output
- Maintains compatibility with Alesta EX software

### Native 8-bit Mode
- 256-entry palette with high-quality 8→12 bit conversion
- MSX2+ inspired distributed LUT conversion:
  - R: 3→4 bits with perceptual gradation
  - G: 3→4 bits with perceptual gradation  
  - B: 2→4 bits with optimal distribution
- Full read/write access with auto-increment

### Native 12-bit Mode
- Direct 12-bit color from pixel data
- High/low byte write with auto-increment control
- Bypasses color conversion for maximum flexibility

## Palette Modification Features

### Index Modification
- **OR mode**: Force palette bank selection
- **XOR mode**: Palette animation and bank switching
- Applied only during pixel lookup in Native 8-bit mode
- Enables dynamic palette effects without data movement

### Auto-increment Behavior
- **CPC/EX modes**: Manual index management
- **Native 8-bit**: Increments after data write
- **Native 12-bit**: Increments after high byte write
- Reads never affect index

## Border Handling
- Dedicated 12-bit border color register
- Separate from main palette RAM
- CPC legacy: border uses same color conversion as palette
- Native modes: direct 12-bit color assignment
- Pixel generator provides border detection signal

## Color Conversion

### CPC Color LUT
- Hardware-accurate conversion using 256-entry distributed ROM
- Preserves exact CPC color behavior including hardware quirks
- Multiple register values map to same colors (hardware behavior)

### MSX2+ 8→12 bit Conversion
```
R_out = LUT_3to4[color8[7:5]]  // 8 perceptual levels
G_out = LUT_3to4[color8[4:2]]  // 8 perceptual levels  
B_out = LUT_2to4[color8[1:0]]  // 4 optimal levels
```

## Integration Points
- **Input**: 8-bit pixel indices from video generator
- **Input**: Border detection signal from raster control
- **Output**: 12-bit RGB to scan converter/HDMI
- **Control**: Mode selection via control register
- **DMA**: Wishbone-compatible interface

## Performance Characteristics
- Single-cycle color lookup in all modes
- Pipeline-friendly design with registered outputs
- Zero-wait state register access
- Distributed LUT for minimal combinatorial delay

## Resource Usage (FPGA)
- 256×12-bit palette RAM (3,072 bits)
- 3 distributed ROMs for color conversion (96 bits total)
- Minimal combinational logic for mode selection
- Register-based control path

## Design Philosophy
- **Accuracy**: Hardware-perfect CPC legacy compatibility
- **Quality**: High-quality color conversion for modern modes  
- **Performance**: Single-cycle operation with pipeline support
- **Flexibility**: Software-controlled mode switching
- **Efficiency**: Minimal FPGA resources through distributed LUT

## Known Limitations
- CPC legacy mode limited to original 16+1 colors
- EX mode uses simple scaling (original hardware limitation)
- Palette modification only affects Native 8-bit mode
- Legacy mode reads always return 0 (hardware compatibility)
```