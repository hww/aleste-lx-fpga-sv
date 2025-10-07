# Video Palette Module

## Overview
Color palette controller with CPC legacy compatibility and extended 12-bit color modes. Handles color conversion and palette management for the video system.

## Address Map

### Legacy CPC Mode (TAG=11)
- **0xBC00**: Gate Array registers
  - D7-D6=00: Palette index (4-bit)
  - D7-D6=01: Palette data (write only)

### Native Mode (TAG=01, Base=0x0100)
- **0x00**: Palette index (R/W)
- **0x01**: Palette data low (R/W, auto-increment)
- **0x02**: Palette data high (R/W, 12-bit mode only)
- **0x03**: Control register (R/W)

## Control Register
```
bit 0-1: bpp_mode       (00=1bpp, 01=2bpp, 10=4bpp, 11=8bpp)
bit 2:   tetrad_mode    (0=CPC interleave, 1=sequential)
bit 3:   cpc_override   (0=legacy modes, 1=extended modes)  
bit 4-5: palette_mode   (00=CPC, 01=EX, 10=Native8, 11=Native12)
bit 6:   auto_inc       (1=auto-increment on write)
bit 7:   reserved
```

## Color Modes

### CPC Mode
- 16 legacy colors via hardware register mapping
- Colors converted to 12-bit RGB (4-bit per component)
- Write-only access in legacy mode

### EX Mode  
- 6-bit color (2 bits per component)
- Scaled to 12-bit RGB output

### Native 8-bit
- 256-entry palette, 12-bit colors
- Full read/write access

### Native 12-bit
- Direct 12-bit color from pixel index
- Bypasses palette RAM

## Auto-increment Behavior
- **8-bit mode**: Increments after palette data low write
- **12-bit mode**: Increments after palette data high write
- Reads never increment

## Known Compromises

### Color Accuracy
- CPC colors approximated in 12-bit space (0, 136, 255 vs ideal 0, 128, 255)
- 2-bit to 4-bit scaling introduces quantization error
- Mathematically optimal for given bit depth

### Legacy Limitations  
- CPC palette registers write-only in legacy mode
- Limited to 16 colors in legacy compatibility mode

## Integration
- Provides bpp_mode, tetrad_mode, cpc_override to pixel generator
- Accepts pixel indices from video pipeline
- Outputs 12-bit RGB to scan doubler/HDMI

## Resource Usage
- 256×12-bit palette RAM (384 bytes)
- Distributed ROM for CPC color conversion
- Combinational color mode logic