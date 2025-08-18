# Naming Conventions

## General Rules

- Snake_case for all identifiers (modules, signals, variables)

- UPPER_SNAKE_CASE for constants, parameters, and macros

- Prefixes/Suffixes indicate signal properties

- Consistent naming across hierarchy (don't change names when crossing module boundaries)

## Module Naming

```systemverilog
module fifo_controller ( ... );  // Descriptive, lowercase
module uart_transceiver ( ... );
```

## Signals and Ports

| Convention | Example | Description | 
|------------|---------|-------------|
| signal_in	 | data_in | Input port |
| signal_out | 	ready_out | Output port |
| signal_n   | reset_n| 	Active-low signal |
| signal_p   | 	clk_p| 	Positive polarity (differential pair) |
| _o suffix  | 	data_o	| Alternative output suffix |
| _i suffix	 | addr_i| 	Alternative input suffix |
| clk_<domain> | 	clk_core| 	Clock signal with domain |
| rst_<domain> | 	rst_async| 	Reset signal with type |

# Constants and Parameters

```systemverilog
localparam FIFO_DEPTH = 16;
parameter DATA_WIDTH = 32;
`define CLOCK_PERIOD 10
```

## Instances

```systemverilog
// Prefix with module purpose
uart_rx uart_rx_inst ( ... );  // <module>_<purpose>_inst
clock_div #(.DIV(2)) clk_div_2x ( ... );
```

## Best Practices

1. Avoid abbreviations unless universally understood (addr not adr)

2. Be specific with clock/reset names (clk_core, rst_async_n)

3. Group related signals with prefixes:

```systemverilog
axi_awaddr, axi_awvalid, axi_awready  // AXI AW channel
```

4. Match case exactly (Verilog is case-sensitive)

5. Don't use Verilog keywords as identifiers (reg, wire, initial)

## Examples

```systemverilog

module memory_controller (
    input  logic         clk_sys,       // System clock
    input  logic         rst_sys_n,     // Active-low system reset
    input  logic [31:0]  data_in,       // Input data bus
    output logic [31:0]  data_out,      // Output data bus
    output logic         ready_o        // Ready output
);

localparam MAX_BURST = 8;
wire fifo_empty_n;
```


## State Machines
```systemverilog

// State enum (UPPER_CASE for states)  
typedef enum logic [2:0] {  
    IDLE,  
    READ_FIFO,  
    WRITE_RAM,  
    ERROR_HANDLE  
} fsm_state_t;  

// Signals:  
logic [2:0] current_state, next_state;  // Prefix with "state_" if ambiguous  
```
### Best Practices:

1. Suffix _t for typedefs (optional but common in SV)

2. Use current_/next_ prefix for explicit FSM registers

## Packages

```systemverilog

package pkg_uart;  // "pkg_" prefix for packages  
  localparam BAUD_RATE = 115200;  
  typedef logic [7:0] uart_data_t;  
endpackage  
```

## Interfaces

```systemverilog
interface axi_stream_if #(parameter WIDTH = 32);  // "_if" suffix  
  logic [WIDTH-1:0] tdata;  
  logic             tvalid;  
  logic             tready;  
  modport master (output tdata, tvalid, input tready);  
endinterface  
```

## Best Practices:

1. Use _if suffix for interface definitions

2. Name modports by role (master, slave, initiator, target)

## Assertions

```systemverilog
// SVA naming:  
property p_no_overflow;  // "p_" prefix for properties  
  @(posedge clk) disable iff (!rst_n)  
    fifo_count <= FIFO_DEPTH;  
endproperty  

assert property (p_no_overflow)  
  else $error("FIFO overflow detected");  // Descriptive error messages  
```

# Generate Blocks

```systemverilog

generate  
  for (genvar i = 0; i < 8; i++) begin : gen_byte_lane  // "gen_" prefix for blocks  
    assign data_out[i*8 +: 8] = byte_mask[i] ? data_in[i*8 +: 8] : 8'hFF;  
  end  
endgenerate  
```

# Clock Domains

```systemverilog
logic clk_core;      // Primary clock  
logic clk_uart_2x;   // Derived clock (2x UART baud)  
logic rst_async_n;   // Asynchronous reset  
```

# Additional Recommendations

1. File Names: Match module name (e.g., uart_transceiver.sv for module uart_transceiver)

2. Macros: UPPER_CASE with project prefix:
    systemverilog

3. `define RISCV_TILELINK_MAX_PAYLOAD 64  

4. Testbench: Prefix with tb_ (e.g., tb_uart.sv)

## Exceptions

- Vendor IP: Preserve original names (e.g., Xilinx’s s_axis_* for AXI streams)

- Legacy Code: Isolate with wrappers if refactoring is impractical

- Generated code (Verilator, Yosys) may use different styles - isolate these


## This follows:

- IEEE 1800-2017 recommendations

- Google Verilog Style Guide adaptations

- Industry consensus from OpenTitan, lowRISC projects

- Tool compatibility with Verilator/Yosys/Questa

- Accellera’s SV Guidelines

- ARM’s AMBA AXI Naming

- Synopsys/Intel FPGA Recommendations