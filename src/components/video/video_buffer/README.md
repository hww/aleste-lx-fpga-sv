# Video Buffer Module

## Overview
Double-buffered video memory interface that converts 16-bit memory reads into a continuous byte stream for the pixel pipeline. Handles memory bandwidth optimization and timing synchronization between memory and video domains.

## Block Diagram
```
Memory Controller → [16-bit Data] → Video Buffer → [8-bit Stream] → Pixel Pipeline
         ↑                              ↑                ↑
      vmem_clk_i                   pixel_clk_i      stb_pixel_i
```

## Interface Signals

### Memory Interface (vmem_clk_i domain)
- **vmem_data_i[15:0]**: 16-bit memory data input
- **vmem_ack0_i**: Acknowledge for first word
- **vmem_ack1_i**: Acknowledge for second word  
- **vmem_req_o**: Memory request signal

### Video Timing (pixel_clk_i domain)
- **stb_pixel_i**: Pixel clock strobe (27MHz)
- **stb_byte_i**: Byte output strobe
- **stb_sync1_i**: Sync pulse 1 (T0/T8 boundaries)
- **stb_sync2_i**: Sync pulse 2 (T4/T12 boundaries)
- **de_i**: Display Enable input
- **de_o**: Display Enable output (delayed)
- **data_o[7:0]**: Byte stream to pixel pipeline

### Configuration
- **cfg_rate[1:0]**: Memory bandwidth mode

## Memory Access Modes

### Mode 00: 2 bytes per 16 pixels (1bpp)
- **Memory BW**: 2 bytes per character line
- **Usage**: Ultra low bandwidth modes
- **Request**: Only at stb_sync1_i (T0/T8)
- **Buffer**: 2-byte buffer reused for entire character

### Mode 01: 4 bytes per 16 pixels (2bpp)  
- **Memory BW**: 4 bytes per character line
- **Usage**: Low bandwidth modes
- **Request**: Only at stb_sync1_i (T0/T8)
- **Buffer**: 4-byte buffer for half character line

### Mode 10: 8 bytes per 16 pixels (4bpp)
- **Memory BW**: 8 bytes per character line
- **Usage**: Medium bandwidth modes
- **Request**: Continuous during DE
- **Buffer**: Full 4-byte buffer reloaded every sync

### Mode 11: 16 bytes per 16 pixels (8bpp)
- **Memory BW**: 16 bytes per character line
- **Usage**: High bandwidth modes
- **Request**: Continuous during DE
- **Buffer**: Full 4-byte buffer reloaded every sync

## State Machine

### VMEM_IDLE
- Wait for data_req from video timing
- Assert vmem_req_o when active

### VMEM_READ_WORD_0
- Wait for vmem_ack0_i
- Store first 16-bit word to input_buffer[0]

### VMEM_READ_WORD_1  
- Wait for vmem_ack1_i
- Store second 16-bit word to input_buffer[1]

### VMEM_WAIT
- Hold data_valid until buffer consumed
- Wait for data_req to deassert

## Data Flow

### Input Processing
```
16-bit Word 0 [15:0] → Split → [7:0] → output_buffer[0]
                      → [15:8] → output_buffer[1]

16-bit Word 1 [15:0] → Split → [7:0] → output_buffer[2]  
                      → [15:8] → output_buffer[3]
```

### Output Sequencing
- **byte_count[1:0]** controls output_buffer selection
- **stb_byte_i** advances byte_count
- **stb_sync1_i/stb_sync2_i** reset sequencing based on cfg_rate

## Timing Characteristics

### Pipeline Delays
- **DE Delay**: 2 pixel clocks (bufer_enable → de_delayed)
- **Strobe Delay**: 1 pixel clock (stb_byte_i → stb_byte_o)
- **Data Delay**: 0 cycles (combinational output)

### Synchronization Points
- Memory requests synchronized to stb_sync1_i/stb_sync2_i
- Buffer updates occur at sync boundaries
- Byte counting resets at character boundaries

## Buffer Management

### Input Buffers (2×16-bit)
- Double-word memory interface
- Updated atomically when both words received
- Protected by data_valid flag

### Output Buffers (4×8-bit)  
- Byte-oriented for pixel pipeline
- Circular access via byte_count
- Zero-padded when DE inactive

## Configuration Settings

### cfg_rate Encoding
```
00: 1bpp modes  (2 bytes/16 pixels)
01: 2bpp modes  (4 bytes/16 pixels)  
10: 4bpp modes  (8 bytes/16 pixels)
11: 8bpp modes  (16 bytes/16 pixels)
```

## Reset Behavior
- All buffers cleared to zero
- State machine in VMEM_IDLE
- No memory requests pending
- Outputs forced to zero

## Debug Features
- **debug_byte_select_o[1:0]**: Current byte_count value
- Useful for verifying buffer sequencing

## Performance Notes
- Zero bubble memory pipeline when properly configured
- Handles memory latency through double buffering
- Maintains continuous byte stream to pixel pipeline
- Bandwidth scales automatically with cfg_rate

## Integration Guidelines

### Memory Controller
- Expects 32-bit bursts (2×16-bit words)
- vmem_ack0_i/vmem_ack1_i for flow control
- vmem_req_o indicates ready for next burst

### Pixel Pipeline
- Continuous 8-bit data stream
- stb_byte_o indicates valid byte
- de_o qualified output data

### Timing Controller
- stb_sync1_i/stb_sync2_i define character boundaries
- de_i controls memory request generation
