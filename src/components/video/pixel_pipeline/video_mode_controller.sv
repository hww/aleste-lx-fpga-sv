module video_mode_controller (
    // Wishbone Slave Interface
    input wire        wb_clk_i,
    input wire        wb_rst_i,
    input wire [23:0] wb_adr_i,
    input wire [7:0]  wb_dat_i,
    output reg [7:0]  wb_dat_o,
    input wire        wb_we_i,
    input wire        wb_stb_i,
    input wire        wb_cyc_i,
    output reg        wb_ack_o,
    input wire [1:0]  tag_i,
    
    // Video Mode Outputs
    output reg [1:0]  bpp_mode,       // 00=1bpp, 01=2bpp, 10=4bpp, 11=8bpp
    output reg        tetrad_mode,    // 0=CPC-style, 1=тетрадный
    output reg        use_cpc_modes,  // 0=use bpp_mode, 1=use CPC graphic_mode
    output reg        reserved_bit    // Для будущего расширения
);

// Parameters
parameter BASE_ADDRESS = 9'h140;  // 0x0140 в Native IO space

// Internal registers
reg [7:0] mode_control_reg;

// Address decoding
wire address_valid;
wire our_address;

assign address_valid = (tag_i == 2'b01);  // Native IO System
assign our_address = (wb_adr_i[15:0] == {7'b0, BASE_ADDRESS});

// Generate SEL signal для Wishbone
wire wb_sel;
assign wb_sel = address_valid && our_address && wb_stb_i && wb_cyc_i;

// Control register mapping
always @(*) begin
    bpp_mode = mode_control_reg[1:0];
    reserved_bit = mode_control_reg[2];
    tetrad_mode = mode_control_reg[3];
    use_cpc_modes = mode_control_reg[4];
    // Биты [7:5] reserved
end

// Wishbone transaction handling
always @(posedge wb_clk_i or posedge wb_rst_i) begin
    if (wb_rst_i) begin
        mode_control_reg <= 8'b0000_0100; // Reset: use CPC modes, 2bpp
        wb_ack_o <= 1'b0;
        wb_dat_o <= 8'b0;
    end else begin
        wb_ack_o <= 1'b0;
        
        if (wb_sel) begin
            wb_ack_o <= 1'b1; // Always ack for simplicity
            
            if (wb_we_i) begin
                // Write to mode control register
                mode_control_reg <= wb_dat_i;
            end else begin
                // Read from mode control register
                wb_dat_o <= mode_control_reg;
            end
        end
    end
end

endmodule
