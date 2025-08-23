// ==================================================
// SDRAM System Parameters
// ==================================================

// Memory Architecture
`define SDRAM_ADDR_WIDTH     13
`define SDRAM_BANK_WIDTH     2  
`define SDRAM_DATA_WIDTH     16
`define SDRAM_COL_WIDTH      9
`define SDRAM_ROW_WIDTH      13

// Timing Parameters (в наносекундах)
`define SDRAM_T_RC           60
`define SDRAM_T_RAS          42
`define SDRAM_T_RCD          18
`define SDRAM_T_RP           18
`define SDRAM_T_WR           12

// Controller Configuration
`define SDRAM_CAS_LATENCY    2
`define SDRAM_BURST_LENGTH   1
`define SDRAM_BURST_TYPE     0      // 0: Sequential, 1: Interleaved

// Wishbone Interface
`define WB_ADDR_WIDTH        24
`define WB_DATA_WIDTH        16
`define WB_SEL_WIDTH         2

// Address Mapping
`define SDRAM_BANK_OFFSET    22     // [23:22] - bank address
`define SDRAM_ROW_OFFSET     9      // [21:9]  - row address  
`define SDRAM_COL_OFFSET     0      // [8:0]   - column address

// ==================================================
// Helper Macros
// ==================================================

// Extract address components
`define SDRAM_BANK(addr)     addr[`SDRAM_BANK_OFFSET +: `SDRAM_BANK_WIDTH]
`define SDRAM_ROW(addr)      addr[`SDRAM_ROW_OFFSET +: `SDRAM_ROW_WIDTH]
`define SDRAM_COL(addr)      addr[`SDRAM_COL_OFFSET +: `SDRAM_COL_WIDTH]

// Timing in clock cycles
`define SDRAM_T_RC_CYCLES    ((`SDRAM_T_RC * CLK_FREQ) / 1000000000)
`define SDRAM_T_RAS_CYCLES   ((`SDRAM_T_RAS * CLK_FREQ) / 1000000000)
