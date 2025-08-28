// =============================================================================
// Title         : Wishbone 16-bit to 8-bit Converter  
// Description   : Converts 16-bit Wishbone master to 8-bit slave interface
//                 with proper byte selection and data alignment
// =============================================================================
module wb_16to8_converter (
    wb_if.master16 wb_m,  // 16-bit master interface
    wb_if.slave8   wb_s   // 8-bit slave interface
);

    // ---- ADDRESS AND CONTROL SIGNALS ----
    assign wb_s.adr_o = wb_m.adr_o;  // Address passes through
    assign wb_s.we_o  = wb_m.we_o;
    assign wb_s.cyc_o = wb_m.cyc_o;
    assign wb_s.stb_o = wb_m.stb_o && (|wb_m.sel_o);  // Strobe only if any sel active

    // ---- BYTE SELECTION LOGIC ----
    // 8-bit device uses single bit select based on address[0]
    always_comb begin
        wb_s.sel_o = 1'b0;
        case (wb_m.adr_o[0])
            1'b0: wb_s.sel_o = wb_m.sel_o[0];  // Lower byte
            1'b1: wb_s.sel_o = wb_m.sel_o[1];  // Upper byte
        endcase
    end

    // ---- DATA WRITE PATH (16-bit → 8-bit) ----
    // Select appropriate byte from 16-bit data
    always_comb begin
        wb_s.dat_o = 8'b0;
        case (wb_m.adr_o[0])
            1'b0: wb_s.dat_o = wb_m.dat_o[7:0];   // Lower byte
            1'b1: wb_s.dat_o = wb_m.dat_o[15:8];  // Upper byte
        endcase
    end

    // ---- DATA READ PATH (8-bit → 16-bit) ----
    // Place 8-bit data in correct byte lane of 16-bit bus
    always_comb begin
        wb_m.dat_i = 16'b0;
        case (wb_m.adr_o[0])
            1'b0: wb_m.dat_i = {8'b0, wb_s.dat_i};  // Lower byte
            1'b1: wb_m.dat_i = {wb_s.dat_i, 8'b0};  // Upper byte
        endcase
    end

    // ---- RESPONSE SIGNALS ----
    assign wb_m.ack_i = wb_s.ack_i;
    assign wb_m.err_i = wb_s.err_i;
    assign wb_m.rty_i = wb_s.rty_i;

endmodule
