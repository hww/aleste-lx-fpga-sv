// =============================================================================
// Title         : Wishbone 8-bit to 16-bit Converter
// Description   : Converts 8-bit Wishbone master to 16-bit slave interface
//                 with proper data replication and alignment
// =============================================================================
module wb_8to16_converter (
    wb_if.master8  wb_m,  // 8-bit master interface
    wb_if.slave16  wb_s   // 16-bit slave interface
);

    // ---- ADDRESS AND CONTROL SIGNALS ----
    assign wb_s.adr_o = {wb_m.adr_o[31:1], 1'b0}; // Half-word aligned
    assign wb_s.we_o  = wb_m.we_o;
    assign wb_s.cyc_o = wb_m.cyc_o;
    assign wb_s.stb_o = wb_m.stb_o && wb_m.sel_o;

    // ---- HALF-WORD SELECTION LOGIC ----
    // Always select both bytes for 8-bit accesses
    assign wb_s.sel_o = 2'b11;  // Always full half-word

    // ---- DATA WRITE PATH (8-bit → 16-bit) ----
    // Replicate 8-bit data to both bytes
    assign wb_s.dat_o = {wb_m.dat_o, wb_m.dat_o};  // Replicate byte

    // ---- DATA READ PATH (16-bit → 8-bit) ----
    // Select appropriate byte from 16-bit data
    always_comb begin
        wb_m.dat_i = 8'b0;
        case (wb_m.adr_o[0])
            1'b0: wb_m.dat_i = wb_s.dat_i[7:0];   // Lower byte
            1'b1: wb_m.dat_i = wb_s.dat_i[15:8];  // Upper byte
        endcase
    end

    // ---- RESPONSE SIGNALS ----
    assign wb_m.ack_i = wb_s.ack_i;
    assign wb_m.err_i = wb_s.err_i;
    assign wb_m.rty_i = wb_s.rty_i;

endmodule
