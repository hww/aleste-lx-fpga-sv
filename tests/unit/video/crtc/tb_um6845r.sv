module tb_um6845r (
    input            CLOCK,
    input            CLKEN,
    input            nCLKEN,
    input            nRESET,
    input            CRTC_TYPE,
    input            ENABLE,
    input            nCS,
    input            R_nW,
    input            RS,
    input      [7:0] DI,
    output reg [7:0] DO,
    output reg       VSYNC,
    output reg       HSYNC,
    output           DE,
    output           FIELD,
    output           CURSOR,
    output    [13:0] MA,
    output     [4:0] RA
);

    // Instantiate DUT
    UM6845R dut (
        .CLOCK(CLOCK),
        .CLKEN(CLKEN),
        .nCLKEN(nCLKEN),
        .nRESET(nRESET),
        .CRTC_TYPE(CRTC_TYPE),
        .ENABLE(ENABLE),
        .nCS(nCS),
        .R_nW(R_nW),
        .RS(RS),
        .DI(DI),
        .DO(DO),
        .VSYNC(VSYNC),
        .HSYNC(HSYNC),
        .DE(DE),
        .FIELD(FIELD),
        .CURSOR(CURSOR),
        .MA(MA),
        .RA(RA)
    );

endmodule
