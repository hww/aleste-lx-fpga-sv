// =============================================================================
// Title         : Wishbone 32-bit to 16-bit Converter
// Description   : Converts 32-bit Wishbone master to 16-bit slave interface
//                 with proper half-word selection and data alignment
// =============================================================================
module wb_32to16_converter (
    wb_if.master32 wb_m,   // 32-bit master interface
    wb_if.slave16  wb_s    // 16-bit slave interface
);

    // ---- ADDRESS AND CONTROL SIGNALS ----
    assign wb_s.adr_o = {wb_m.adr_o[31:2], 1'b0}; // Word-aligned address
    assign wb_s.we_o  = wb_m.we_o;
    assign wb_s.cyc_o = wb_m.cyc_o;
    assign wb_s.stb_o = wb_m.stb_o && (|wb_m.sel_o);

    // ---- HALF-WORD SELECTION LOGIC ----
    always_comb begin
        wb_s.sel_o = 2'b00;
        case (wb_m.adr_o[1])
            1'b0: wb_s.sel_o = wb_m.sel_o[1:0];  // Lower half-word
            1'b1: wb_s.sel_o = wb_m.sel_o[3:2];  // Upper half-word
        endcase
    end

    // ---- DATA WRITE PATH (32-bit → 16-bit) ----
    always_comb begin
        wb_s.dat_o = 16'b0;
        case (wb_m.adr_o[1])
            1'b0: wb_s.dat_o = wb_m.dat_o[15:0];   // Lower half-word
            1'b1: wb_s.dat_o = wb_m.dat_o[31:16];  // Upper half-word
        endcase
    end

    // ---- DATA READ PATH (16-bit → 32-bit) ----
    always_comb begin
        wb_m.dat_i = 32'b0;
        case (wb_m.adr_o[1])
            1'b0: wb_m.dat_i = {16'b0, wb_s.dat_i};  // Lower half-word
            1'b1: wb_m.dat_i = {wb_s.dat_i, 16'b0};  // Upper half-word
        endcase
    end

    // ---- RESPONSE SIGNALS ----
    assign wb_m.ack_i = wb_s.ack_i;
    assign wb_m.err_i = wb_s.err_i;
    assign wb_m.rty_i = wb_s.rty_i;

endmodule
