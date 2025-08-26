module u765_wb_tb
(
    // Wishbone interface
    input            wb_clk_i,
    input            wb_rst_i,
    input            wb_cyc_i,
    input            wb_stb_i,
    input            wb_we_i,
    input      [2:0] wb_adr_i,
    input      [7:0] wb_dat_i,
    output reg [7:0] wb_dat_o,
    output reg       wb_ack_o,
    
    // FDC control signals
    input      [1:0] ready,        // disk is inserted in MiST(er)
    input      [1:0] motor,        // drive motor
    input      [1:0] available,    // drive available
    input            fast,         // "Fast" mode
    
    // SD card interface
    input      [1:0] img_mounted,  // signaling that new image has been mounted
    input            img_wp,       // write protect
    input     [31:0] img_size,     // size of image in bytes
    output reg[31:0] sd_lba,
    output reg [1:0] sd_rd,
    output reg [1:0] sd_wr,
    input            sd_ack,
    input      [8:0] sd_buff_addr,
    input      [7:0] sd_buff_dout,
    output     [7:0] sd_buff_din,
    input            sd_buff_wr
);

// Internal signals
wire        fdc_ce;
wire        fdc_reset;
wire        fdc_a0;
wire        fdc_nRD;
wire        fdc_nWR;
wire  [7:0] fdc_din;
wire  [7:0] fdc_dout;

// Wishbone address decoding
wire wb_access = wb_cyc_i & wb_stb_i;
wire [2:0] reg_addr = wb_adr_i;

// FDC control signals
assign fdc_ce = wb_access;
assign fdc_reset = wb_rst_i;
assign fdc_a0 = reg_addr[0];
assign fdc_nRD = ~(wb_access & ~wb_we_i);
assign fdc_nWR = ~(wb_access & wb_we_i);
assign fdc_din = wb_dat_i;

// Instantiate the u765 FDC with reduced cycles for testing
u765 #(100) u765_inst (
    .clk_sys(wb_clk_i),
    .ce(fdc_ce),
    .reset(fdc_reset),
    .ready(ready),
    .motor(motor),
    .available(available),
    .fast(fast),
    .a0(fdc_a0),
    .nRD(fdc_nRD),
    .nWR(fdc_nWR),
    .din(fdc_din),
    .dout(fdc_dout),

    .img_mounted(img_mounted),
    .img_wp(img_wp),
    .img_size(img_size),
    .sd_lba(sd_lba),
    .sd_rd(sd_rd),
    .sd_wr(sd_wr),
    .sd_ack(sd_ack),
    .sd_buff_addr(sd_buff_addr),
    .sd_buff_dout(sd_buff_dout),
    .sd_buff_din(sd_buff_din),
    .sd_buff_wr(sd_buff_wr)
);

// Wishbone handshake
always @(posedge wb_clk_i or posedge wb_rst_i) begin
    if (wb_rst_i) begin
        wb_ack_o <= 1'b0;
        wb_dat_o <= 8'h00;
    end else begin
        wb_ack_o <= wb_access & ~wb_ack_o;
        if (wb_access & ~wb_we_i) begin
            wb_dat_o <= fdc_dout;
        end
    end
end

endmodule
