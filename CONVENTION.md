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

## Exceptions

- Vendor IP may follow different conventions - maintain as-is for compatibility

- Generated code (Verilator, Yosys) may use different styles - isolate these

## This follows:

- IEEE 1800-2017 recommendations

- Google Verilog Style Guide adaptations

- Industry consensus from OpenTitan, lowRISC projects

- Tool compatibility with Verilator/Yosys/Questa