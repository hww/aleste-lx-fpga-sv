`default_nettype none

// Include configuration
`include "config_27mhz.vh"

module sdlx_llhdmi_system #(
    parameter BASE_CLOCK    = `BASE_CLOCK,

    parameter H_VISIBLE     = `H_VISIBLE,// Horizontal resolution
    parameter H_FRONT_PORCH = `H_FRONT_PORCH,
    parameter H_SYNC_PULSE  = `H_SYNC_PULSE,
    parameter H_BACK_PORCH  = `H_BACK_PORCH,
    parameter H_TOTAL       = H_VISIBLE + H_FRONT_PORCH + H_SYNC_PULSE + H_BACK_PORCH,
    
    parameter V_VISIBLE     = `V_VISIBLE,// Vertical resolution
    parameter V_FRONT_PORCH = `V_FRONT_PORCH,
    parameter V_SYNC_PULSE  = `V_SYNC_PULSE,
    parameter V_BACK_PORCH  = `V_BACK_PORCH,

    parameter BITS_PER_COLOR = 8,      // Bits per color channel
    parameter RESET_CYCLES = 4,        // Reset duration in clock cycles
    parameter CLOCK_INDEX = 3,         // GPIO index for clock output
    parameter DATA_INDICES = 3         // Number of data channels (R, G, B)
)(
    // Primary clock input
    input  wire              clk_25mhz,
    
    // Differential HDMI outputs
    output wire [DATA_INDICES:0] gpdi_dp,  // Positive differential outputs
    output wire [DATA_INDICES:0] gpdi_dn,  // Negative differential outputs
    
    // System control output
    output wire              wifi_gpio0
);       
    localparam GEN_H_WIDTH = 11;
    localparam GEN_V_WIDTH = 9;

    // System clock signals
    wire clk_100m;      // 100MHz system clock
    wire clk_32m;       // 32MHz video system clock
    wire clk_16m;       // 16MHz pattern generator clock
    
    // TMDS clock signals
    wire clk_tdms_pixel;   // 27MHz pixel clock
    wire clk_tdms;         // 270MHz TMDS clock
    
    // PLL locked signal
    wire pll_locked;
    
    // Reset signals
    reg [RESET_CYCLES-1:0] reset_counter = 0;
    wire system_reset;
    
    // Pattern generator signals
    wire [23:0] pattern_pixel;
    wire pattern_hsync;
    wire pattern_vsync;
    wire pattern_pixel_stb;
    wire pattern_de;
    wire pattern_newline;
    wire pattern_newframe;
    wire [GEN_H_WIDTH-1:0] pattern_hpos;
    wire [GEN_V_WIDTH-1:0] pattern_vpos;

    // Scaler input signals (16MHz domain)
    wire scaler_src_pixel_stb;
    wire [23:0] scaler_src_pixel_data;
    wire scaler_src_hsync;
    wire scaler_src_vsync;
    wire scaler_src_de;
    
    // Scaler output signals (27MHz domain)
    wire scaler_dst_pixel_stb;
    wire [23:0] scaler_dst_pixel_data;
    wire scaler_dst_newline;
    wire scaler_dst_newframe;
    wire scaler_dst_de;
    
    // HDMI signals
    wire [BITS_PER_COLOR-1:0] red, grn, blu;
    wire o_rd, o_newline, o_newframe;
    wire o_red, o_grn, o_blu;
    
    // Keep the board from rebooting
    assign wifi_gpio0 = 1'b1;
    
    // System PLL instance
    system_pll system_pll_inst(
        .rst(1'b0),
        .clkin_25M(clk_25mhz),
        .clk_100M(clk_100m),
        .clk_32M(clk_32m),
        .clk_16M(clk_16m),
        .locked(pll_locked)
    );
    
    // Video PLL for HDMI clocks
    video_pll vid_pll_inst(
        .rst(~pll_locked),
        .clkin_25M(clk_25mhz),
        .clk_270M(clk_tdms),
        .clk_27M(clk_tdms_pixel),
        .locked()  // Можно подключить к system_reset при необходимости
    );

    // Reset generation
    assign system_reset = ~pll_locked | (reset_counter != {RESET_CYCLES{1'b1}});
    
    always @(posedge clk_32m) begin
        if (~pll_locked) begin
            reset_counter <= 0;
        end else if (system_reset) begin
            reset_counter <= reset_counter + 1;
        end
    end

    pal_timing  #(
        .H_WIDTH(GEN_H_WIDTH),
        .V_WIDTH(GEN_V_WIDTH)
    ) pattern_timing (
        .clk_i(clk_32m),
        .pixclk_i(clk_16m),
        .reset_i(system_reset),
        .hpos_o(pattern_hpos),
        .vpos_o(pattern_vpos),
        .rd_o(pattern_pixel_stb),
        .newline_o(pattern_newline), 
        .newframe_o(pattern_newframe),
        .hsync_o(pattern_hsync),
        .vsync_o(pattern_vsync)
    );

    // Assign DE signal for pattern generator
    assign pattern_de = pattern_pixel_stb;

    // Test pattern generator (16MHz domain)
    pal_pattern  #(
        .BITS_PER_COLOR(8),         // 8 bits per color channel для 24-bit RGB
        .H_WIDTH(12),               // Bit width for horizontal counter
        .V_WIDTH(12),               // Bit width for vertical counter  
        .FRAC_BITS(16)              // Fractional bits for gradient calculation
    ) pattern_gen(
        // Clock and reset
        .pixclk_i(clk_16m),     // 16MHz pixel clock
        .reset_i(system_reset),
        // Control signals
        .rd_i(pattern_de),      // Read enable (pixel valid)
        // Pixel output
        .pixel_o(pattern_pixel),
        // Новые выходы для синхросигналов
        .newline_i(pattern_newline),     // Строб последнего пиксела строки
        .newframe_i(pattern_newframe)    // Строб последнего пиксела кадра
    );
    
    // Assign pattern generator outputs to scaler inputs
    assign scaler_src_pixel_stb = pattern_pixel_stb;
    assign scaler_src_pixel_data = pattern_pixel;
    assign scaler_src_hsync = pattern_hsync;
    assign scaler_src_vsync = pattern_vsync;
    assign scaler_src_de = pattern_de;

    // HDMI scaler - cross-domain scaling
    hdmi_scaler #(
        .SRC_WIDTH(640),           // Input pattern width
        .SRC_HEIGHT(384),          // Input pattern height
        .DATA_WIDTH(24),           // 24-bit RGB
        .V_SCALE(2),               // Vertical scaling factor
        .DST_WIDTH(H_VISIBLE),     // Output width from config
        .DST_HEIGHT(V_VISIBLE),    // Output height from config
        .DST_TOTAL_WIDTH(H_TOTAL)  // Total line width
    ) scaler_inst (
        // Source domain (16MHz)
        .src_clk_i(clk_32m),
        .src_rst_i(system_reset),
        .src_pixel_stb_i(scaler_src_pixel_stb),
        .src_pixel_data_i(scaler_src_pixel_data),
        .src_newline_i(pattern_newline),
        .src_newframe_i(pattern_newframe),

        // Destination domain (27MHz)
        .dst_clk_i(clk_tdms_pixel),
        .dst_rst_i(system_reset),
        
        // Scaled output
        .dst_pixel_data_o(scaler_dst_pixel_data),
        .dst_newline_o(scaler_dst_newline),
        .dst_newframe_o(scaler_dst_newframe),
        .dst_de_o(scaler_dst_de),
        .dst_hreset_o(),  // Не подключен
        .dst_vreset_o()   // Не подключен
    );

    // Extract color components from scaled 24-bit RGB data
    assign red = scaler_dst_pixel_data[23:16];
    assign grn = scaler_dst_pixel_data[15:8];
    assign blu = scaler_dst_pixel_data[7:0];

    // HDMI encoder instance (27MHz domain)
    llhdmi #(
        .H_VISIBLE(H_VISIBLE),
        .H_FRONT_PORCH(H_FRONT_PORCH),
        .H_SYNC_PULSE(H_SYNC_PULSE),
        .H_BACK_PORCH(H_BACK_PORCH),
        .V_VISIBLE(V_VISIBLE),
        .V_FRONT_PORCH(V_FRONT_PORCH),
        .V_SYNC_PULSE(V_SYNC_PULSE),
        .V_BACK_PORCH(V_BACK_PORCH)
    ) llhdmi_encoder (
        // Clock inputs
        .i_tmdsclk(clk_tdms),
        .i_pixclk(clk_tdms_pixel),
        
        // Control inputs
        .i_reset(system_reset),
        
        // Pixel data inputs
        .i_red(red),
        .i_grn(grn),
        .i_blu(blu),
        
        // Status outputs
        .o_rd(o_rd),
        .o_newline(o_newline),
        .o_newframe(o_newframe),
        
        // Serial TMDS outputs
        .o_red(o_red),
        .o_grn(o_grn),
        .o_blu(o_blu)
    );

    // Differential output buffers for HDMI signals
    OBUFDS OBUFDS_red(
        .I(o_red),
        .O(gpdi_dp[2]),
        .OB(gpdi_dn[2])
    );
    
    OBUFDS OBUFDS_grn(
        .I(o_grn),
        .O(gpdi_dp[1]),
        .OB(gpdi_dn[1])
    );
    
    OBUFDS OBUFDS_blu(
        .I(o_blu),
        .O(gpdi_dp[0]),
        .OB(gpdi_dn[0])
    );
    
    OBUFDS OBUFDS_clock(
        .I(clk_tdms_pixel),
        .O(gpdi_dp[CLOCK_INDEX]),
        .OB(gpdi_dn[CLOCK_INDEX])
    );

endmodule
