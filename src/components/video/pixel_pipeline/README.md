# Video Mode Controller

## Overview
Separate Wishbone slave device that controls video pixel formats and modes. Keeps CRTС and palette untouched while providing extended video modes.

## Address Map
- **Base Address**: `0x0140` (TAG=01, Native IO System space)
- **Register Size**: 1 byte
- **Access**: Read/Write

## Control Register Format
```
bit 0-1: bpp_mode       - Bits per pixel (00=1bpp, 01=2bpp, 10=4bpp, 11=8bpp)
bit 2:   reserved       - Reserved for future use
bit 3:   tetrad_mode    - 0=CPC-style bit interleave, 1=tetrad grouping  
bit 4:   use_cpc_modes  - 0=use bpp_mode, 1=use legacy CPC graphic_mode
bit 5-7: reserved       - Reserved for future expansion
```

## Mode Behavior

### When use_cpc_modes = 1 (Legacy CPC):
- Ignores bpp_mode and tetrad_mode
- Uses CPC graphic_mode[1:0] from Gate Array:
  - `00`: 16 colors (2bpp CPC-style)
  - `01`: 4 colors (4bpp) 
  - `10`: 2 colors (1bpp)
  - `11`: 16 colors (2bpp)

### When use_cpc_modes = 0 (Extended):
- Uses bpp_mode directly:
  - `00`: 1bpp (2 colors)
  - `01`: 2bpp (4 colors)
  - `10`: 4bpp (16 colors) 
  - `11`: 8bpp (256 colors)
- tetrad_mode affects 2bpp pixel grouping

## Reset State
- `use_cpc_modes = 1` - Full CPC compatibility by default
- `bpp_mode = 01` - 2bpp mode
- All other bits = 0

## Integration
- Connects to pixel pipeline for mode control
- Does not affect CRTС or palette registers
- Pure extension without breaking legacy behavior

## Usage Example
```asm
; Switch to extended 8bpp mode
ld a, 00001011b ; bpp=11 (8bpp), tetrad=0, use_cpc=0
ld (&0140), a
```
