module z80_wb_tb (
    // Z80 interface
    output logic nM1,
    output logic nMREQ,
    output logic nIORQ,
    output logic nRD,
    output logic nWR,
    output logic nRFSH,
    output logic nHALT,
    output logic nBUSACK,
    input  logic nWAIT,
    input  logic nINT,
    input  logic nNMI,
    input  logic nRESET,
    input  logic nBUSRQ,
    input  logic CLK,
    output logic [15:0] A,
    inout  wire  [7:0] D,

    // Wishbone interface - НАПРАВЛЕНИЕ ИСПРАВЛЕНО!
    input  logic wb_cyc_o,    // output от DUT -> input к TB
    input  logic wb_stb_o,    // output от DUT -> input к TB
    output logic wb_ack_i,    // input к DUT -> output от TB
    input  logic wb_we_o,     // output от DUT -> input к TB
    input  logic [23:0] wb_adr_o,  // output от DUT -> input к TB
    input  logic [7:0] wb_dat_o,   // output от DUT -> input к TB
    output logic [7:0] wb_dat_i,   // input к DUT -> output от TB
    input  logic [0:0] wb_sel_o    // output от DUT -> input к TB
);

    // Internal signals
    logic [7:0] d_out;
    logic d_drive;
    
    // Bidirectional data bus handling
    assign D = d_drive ? d_out : 8'bz;
    
    // Instance of the DUT
    z80_wb dut (
        // Z80 interface
        .nM1(nM1),
        .nMREQ(nMREQ),
        .nIORQ(nIORQ),
        .nRD(nRD),
        .nWR(nWR),
        .nRFSH(nRFSH),
        .nHALT(nHALT),
        .nBUSACK(nBUSACK),
        .nWAIT(nWAIT),
        .nINT(nINT),
        .nNMI(nNMI),
        .nRESET(nRESET),
        .nBUSRQ(nBUSRQ),
        .CLK(CLK),
        .A(A),
        .D(D),
        
        // Wishbone interface - НАПРАВЛЕНИЕ ИСПРАВЛЕНО!
        .wb_cyc_o(wb_cyc_o),    // output -> input
        .wb_stb_o(wb_stb_o),    // output -> input
        .wb_ack_i(wb_ack_i),    // input -> output
        .wb_we_o(wb_we_o),      // output -> input
        .wb_adr_o(wb_adr_o),    // output -> input
        .wb_dat_o(wb_dat_o),    // output -> input
        .wb_dat_i(wb_dat_i),    // input -> output
        .wb_sel_o(wb_sel_o)     // output -> input
    );

endmodule
