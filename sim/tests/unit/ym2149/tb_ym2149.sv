module tb_ym2149 (
    // Clock and reset
    input CLK,
    input RESET,
    input CE,
    
    // Bus interface
    input BDIR,
    input BC,
    input [7:0] DI,
    output [7:0] DO,
    
    // Audio outputs
    output [7:0] CHANNEL_A,
    output [7:0] CHANNEL_B,
    output [7:0] CHANNEL_C,
    
    // Configuration
    input SEL,
    input MODE,
    
    // Activity indicator
    output [5:0] ACTIVE,
    
    // I/O ports
    input [7:0] IOA_in,
    output [7:0] IOA_out,
    input [7:0] IOB_in,
    output  [7:0] IOB_out
);
    // Instantiate DUT
    YM2149 dut (
        .CLK(CLK),
        .CE(CE),
        .RESET(RESET),
        .BDIR(BDIR),
        .BC(BC),
        .DI(DI),
        .DO(DO),
        .CHANNEL_A(CHANNEL_A),
        .CHANNEL_B(CHANNEL_B),
        .CHANNEL_C(CHANNEL_C),
        .SEL(SEL),
        .MODE(MODE),
        .ACTIVE(ACTIVE),
        .IOA_in(IOA_in),
        .IOA_out(IOA_out),
        .IOB_in(IOB_in),
        .IOB_out(IOB_out)
    );
 
endmodule
