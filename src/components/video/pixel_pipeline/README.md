# Video Mode Controller

## Overview
Separate Wishbone slave device that controls video pixel formats and modes. Provides extended video modes while maintaining full CPC legacy compatibility. Controls the pixel pipeline unit for format conversion.

## Address Map
- **Base Address**: `0x0140` (TAG=01, Native IO System space)
- **Register Size**: 1 byte
- **Access**: Read/Write

## Control Register Format
```
bit 0-1: bpp_mode       - Bits per pixel (00=1bpp, 01=2bpp, 10=4bpp, 11=8bpp)
bit 2:   linear_mode    - 0=CPC-style bit interleave, 1=linear packing
bit 3:   reserved       - Reserved for future use  
bit 4:   use_cpc_modes  - 0=use bpp_mode, 1=use legacy CPC graphic_mode
bit 5-7: reserved       - Reserved for future expansion
```

## Mode Behavior

### When use_cpc_modes = 1 (Legacy CPC Compatibility):
- Ignores bpp_mode and linear_mode settings
- Uses CPC graphic_mode[1:0] from Gate Array:
  - `00`: Mode 0 - 16 colors (4bpp CPC-style interleaved)
  - `01`: Mode 1 - 4 colors (2bpp CPC-style interleaved) 
  - `10`: Mode 2 - 2 colors (1bpp linear)
  - `11`: Mode 3 - 16 colors (4bpp CPC-style interleaved)

### When use_cpc_modes = 0 (Extended Modes):
- Uses bpp_mode directly for pixel density:
  - `00`: 1bpp (2 colors, linear packing)
  - `01`: 2bpp (4 colors, linear or CPC-style)
  - `10`: 4bpp (16 colors, linear or CPC-style)
  - `11`: 8bpp (256 colors, linear only)
- linear_mode affects pixel bit ordering:
  - `0`: CPC-style bit interleaving (hardware compatible)
  - `1`: Linear bit packing (modern convention)

## Pixel Format Details

### 1bpp Mode (2 colors)
- **Linear**: Standard bitstream, MSB first
- **Memory**: 8 pixels per byte
- **Usage**: Monochrome graphics, text modes

### 2bpp Mode (4 colors) 
- **Linear**: `[7:6]`, `[5:4]`, `[3:2]`, `[1:0]` (2 bits per pixel)
- **CPC-style**: Bit-interleaved `[7,3]`, `[6,2]`, `[5,1]`, `[4,0]`
- **Memory**: 4 pixels per byte

### 4bpp Mode (16 colors)
- **Linear**: `[7:4]`, `[3:0]` (4 bits per pixel)  
- **CPC-style**: Bit-interleaved `[1,5,3,7]`, `[0,4,2,6]`
- **Memory**: 2 pixels per byte

### 8bpp Mode (256 colors)
- **Linear only**: Full byte per pixel
- **Memory**: 1 pixel per byte
- **Usage**: Truecolor palette modes, high-color graphics

## Timing and Synchronization

### Pixel Pipeline Operation
- **Input**: Byte stream at video_stb_i (memory fetch rate)
- **Output**: Pixel stream at stb_pixel_i (pixel display rate)
- **Conversion**: Real-time byte-to-pixel conversion based on bpp mode
- **Synchronization**: All mode changes synchronized to prevent artifacts

### Clock Domains
- **Configuration**: Wishbone clock domain (register writes)
- **Pixel Processing**: 27MHz pixel clock domain
- **Synchronization**: Mode registers latched during video_stb_i to prevent mid-scanline changes

## Reset State
- `use_cpc_modes = 1` - Full CPC compatibility by default
- `bpp_mode = 01` - 2bpp mode (CPC Mode 1 equivalent)
- `linear_mode = 0` - CPC-style interleaving
- All other bits = 0

## Integration Points

### Inputs from System
- Wishbone bus for configuration
- CPC graphic_mode for legacy compatibility
- Pixel clock and timing signals

### Outputs to Pixel Pipeline
- `cfg_bpp_i[1:0]` - Bits per pixel mode
- `cfg_linear_i` - Pixel packing mode

### Coordination with Other Units
- **CRTC**: Independent timing control
- **Palette**: Color lookup happens after pixel generation
- **Memory Controller**: Affects memory bandwidth requirements

## Performance Characteristics
- Zero-cycle mode switching latency
- Glitch-free transitions between modes
- Single-cycle pixel processing at 27MHz
- No performance penalty for CPC-style modes

## Usage Examples

### Assembly (Z80)
```asm
; Switch to extended 8bpp linear mode
ld a, 00001011b ; bpp=11 (8bpp), linear=1, use_cpc=0
ld (&0140), a

; Return to CPC Mode 1 compatibility
ld a, 00010000b ; use_cpc_modes=1 (other bits ignored)
ld (&0140), a
```

### C Code
```c
// Extended 4bpp linear mode
*((volatile uint8_t*)0x0140) = 0b00001100; // 4bpp linear

// CPC Mode 0 equivalent  
*((volatile uint8_t*)0x0140) = 0b00010000; // CPC modes
```

## Design Benefits
- **Backward Compatibility**: Full CPC mode support without modification
- **Forward Expansion**: Modern linear pixel formats for new software
- **Resource Efficient**: Minimal logic, pure control path
- **Timing Safe**: All mode changes synchronized to video timing
- **Modular**: Independent of CRTC and palette functionality

## Notes
- 8bpp mode requires linear_mode=1 (CPC-style not applicable)
- Mode changes take effect on next video_stb_i boundary
- Read operations return current register state
- Reserved bits should be written as 0 for future compatibility


