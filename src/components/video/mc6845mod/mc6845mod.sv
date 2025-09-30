module mc6845mod #(
    parameter WB_ADDRESS  = 16'h6845,// Bus address
    parameter HDMI_WIDTH  = 720,     // Fixed HDMI active width
    parameter HDMI_HEIGHT = 240,     // Fixed HDMI active height  
    parameter HDMI_TOTAL_W = 864,    // Fixed HDMI total width
    parameter HDMI_TOTAL_H = 262,    // Fixed HDMI total height
    parameter PIXELS_PER_CHAR = 8,   // Pixels per character
    parameter LINES_PER_ROW = 8      // Lines per text row
)(
    // Wishbone Slave Interface
    input logic wb_clk_i,
    input logic wb_rst_i,
    input logic wb_cyc_i,
    input logic wb_stb_i, 
    input logic [23:0] wb_adr_i,
    input logic [31:0] wb_dat_i,
    input logic [3:0] wb_sel_i,
    input logic wb_we_i,
    output logic wb_ack_o,
    output logic [31:0] wb_dat_o,
    output logic sel_o,
    
    // Pixel Clock Domain  
    input logic pix_clk_i,
    input logic pix_en_i,
    
    // Sync Input
    input logic sync_i,
    
    // Video Outputs
    output logic de_o,
    output logic hsync_o,
    output logic vsync_o, 
    output logic newline_o,
    output logic newframe_o,
    output logic cursor_o,
    
    // Memory Address Interface
    output logic [13:0] ma_o,
    output logic [4:0] ra_o
);

// Register addresses (as in original 6845)
localparam REG_HTOTAL     = 5'h00;  // Ignored (fixed HDMI)
localparam REG_HDISPLAY   = 5'h01;  // Horizontal displayed chars
localparam REG_HSYNCPOS   = 5'h02;  // Horizontal sync position (centering)
localparam REG_HSYNCWIDTH = 5'h03;  // Horizontal sync width
localparam REG_VTOTAL     = 5'h04;  // Ignored (fixed HDMI)  
localparam REG_VADJUST    = 5'h05;  // Vertical adjust
localparam REG_VDISPLAY   = 5'h06;  // Vertical displayed rows
localparam REG_VSYNCPOS   = 5'h07;  // Vertical sync position (centering)
localparam REG_INTERLACE  = 5'h08;  // Interlace mode
localparam REG_MAXSCAN    = 5'h09;  // Max scan line address
localparam REG_CURSTART   = 5'h0A;  // Cursor start line
localparam REG_CUREND     = 5'h0B;  // Cursor end line  
localparam REG_STARTH     = 5'h0C;  // Start address high
localparam REG_STARTL     = 5'h0D;  // Start address low
localparam REG_CURH       = 5'h0E;  // Cursor position high
localparam REG_CURL       = 5'h0F;  // Cursor position low

// Internal registers
logic [7:0] regs [0:15];
logic [4:0] addr_reg;  // Address register for indexed access

// Counters
logic [10:0] h_counter;  // 0-863 (HDMI horizontal)
logic [10:0] v_counter;  // 0-261 (HDMI vertical)  
logic [13:0] memory_addr;
logic [4:0] row_addr;

// Chip select
assign sel_o = (wb_adr_i[23:8] == WB_ADDRESS) && wb_cyc_i && wb_stb_i;

// Wishbone write
always @(posedge wb_clk_i) begin
    if (wb_rst_i) begin
        wb_ack_o <= 0;
        addr_reg <= 0;
        // Reset registers to defaults
        for (int i = 0; i < 16; i++) regs[i] <= 0;
        // Set some sane defaults
        regs[REG_HDISPLAY] <= 80;   // 640 pixels
        regs[REG_VDISPLAY] <= 25;   // 200 lines
        regs[REG_HSYNCPOS] <= 90;   // Default sync position
        regs[REG_VSYNCPOS] <= 26;   // Default sync position
        regs[REG_MAXSCAN] <= 7;     // 8 lines per row
        regs[REG_CURSTART] <= 6;    // Cursor start
        regs[REG_CUREND] <= 7;      // Cursor end
    end else begin
        wb_ack_o <= 0;
        
        if (sel_o && !wb_ack_o) begin
            wb_ack_o <= 1;
            
            if (wb_we_i) begin
                // Write to address or data register
                if (wb_adr_i[0]) begin
                    // Data register write
                    regs[addr_reg] <= wb_dat_i[7:0];
                end else begin
                    // Address register write  
                    addr_reg <= wb_dat_i[4:0];
                end
            end else begin
                // Read from address or data register
                if (wb_adr_i[0]) begin
                    // Data register read
                    wb_dat_o <= {24'b0, regs[addr_reg]};
                end else begin
                    // Address register read (read-only in original)
                    wb_dat_o <= {27'b0, addr_reg};
                end
            end
        end
    end
end

// Pixel domain logic
always @(posedge pix_clk_i) begin
    if (pix_en_i) begin
        // Handle sync input
        if (sync_i) begin
            h_counter <= HDMI_TOTAL_W - 1;  // Sync to end of line
            v_counter <= HDMI_TOTAL_H - 1;  // Sync to end of frame
        end else begin
            // Normal counter increment
            if (h_counter >= HDMI_TOTAL_W - 1) begin
                h_counter <= 0;
                if (v_counter >= HDMI_TOTAL_H - 1)
                    v_counter <= 0;
                else
                    v_counter <= v_counter + 1;
            end else begin
                h_counter <= h_counter + 1;
            end
        end
        
        // Memory address generation (original 6845 logic)
        if (de_o) begin
            ma_o <= memory_addr;
            ra_o <= row_addr;
            
            // Increment memory address every character
            if (h_counter[2:0] == (PIXELS_PER_CHAR - 1)) 
                memory_addr <= memory_addr + 1;
        end
        
        // Row address logic
        if (newline_o && de_o) begin
            if (row_addr >= regs[REG_MAXSCAN])
                row_addr <= 0;
            else
                row_addr <= row_addr + 1;
                
            if (row_addr >= regs[REG_MAXSCAN])
                memory_addr <= {regs[REG_STARTH], regs[REG_STARTL]};
        end
    end
end

// Active area calculation based on sync positions
logic [10:0] h_active_start = {regs[REG_HSYNCPOS], 3'b0}; // Convert chars to pixels
logic [10:0] h_active_end = h_active_start + ({regs[REG_HDISPLAY], 3'b0} - 1);
logic [10:0] v_active_start = {regs[REG_VSYNCPOS], 3'b0}; // Convert rows to lines  
logic [10:0] v_active_end = v_active_start + ({regs[REG_VDISPLAY], 3'b0} - 1);

// Output signals
assign de_o = (h_counter >= h_active_start) && (h_counter <= h_active_end) &&
              (v_counter >= v_active_start) && (v_counter <= v_active_end);

// Sync generation based on registers
assign hsync_o = (h_counter >= {regs[REG_HSYNCPOS], 3'b0}) && 
                 (h_counter < ({regs[REG_HSYNCPOS], 3'b0} + {regs[REG_HSYNCWIDTH], 3'b0}));
assign vsync_o = (v_counter >= {regs[REG_VSYNCPOS], 3'b0}) &&
                 (v_counter < ({regs[REG_VSYNCPOS], 3'b0} + 1)); // 1 line vsync

// Strobe signals
assign newline_o = (h_counter == h_active_end);
assign newframe_o = newline_o && (v_counter == v_active_end);

// Cursor logic (original 6845)
logic [13:0] cursor_addr = {regs[REG_CURH], regs[REG_CURL]};
logic cursor_on = (memory_addr == cursor_addr) && 
                 (row_addr >= regs[REG_CURSTART][4:0]) && 
                 (row_addr <= regs[REG_CUREND][4:0]) &&
                 de_o;

assign cursor_o = cursor_on;

endmodule
