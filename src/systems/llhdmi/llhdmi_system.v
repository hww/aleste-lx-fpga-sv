`default_nettype none

// Include configuration
`ifdef CONFIG_27MHZ
    `include "config_27mhz.vh"
`else
    `include "config_25mhz.vh"  // Default
`endif

module llhdmi_system #(
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

    // Internal clock signals
    wire clk_tdms_pixel;   // Pixel clock
    wire clk_tdms;  // TMDS clock (10x pixel clock)
    
    // Video data signals
    wire [BITS_PER_COLOR-1:0] red, grn, blu;  // Color components
    wire [3*BITS_PER_COLOR-1:0] pixel_data;   // Combined pixel data
    
    // HDMI control signals
    wire o_rd;         // Read enable
    wire o_newline;    // End of line indicator
    wire o_newframe;   // End of frame indicator
    
    // TMDS encoded signals
    wire o_red, o_grn, o_blu;  // Serial TMDS outputs

    // Keep the board from rebooting by holding wifi_gpio0 high
    assign wifi_gpio0 = 1'b1;
    generate
      if (BASE_CLOCK == 25000000) begin
        clock clock_instance(
            .clkin_25MHz(clk_25mhz),      // Input 25MHz clock
            .clk_25MHz(clk_tdms_pixel),   // Output 25MHz pixel clock
            .clk_250MHz(clk_tdms)         // Output 250MHz TMDS clock
        );
      end 
      else if (BASE_CLOCK == 27000000) begin
        video_pll vid_pll_inst(
            .rst('0),
            .clkin_25M(clk_25mhz),        // Input 25MHz clock
            .clk_270M(clk_tdms),          // Output 270MHz TMDS clock
            .clk_27M(clk_tdms_pixel),     // Output 27MHz pixel clock
            .locked()
        );
      end
    endgenerate

    // Assign color components from combined pixel data
    assign red = pixel_data[3*BITS_PER_COLOR-1:2*BITS_PER_COLOR];
    assign grn = pixel_data[2*BITS_PER_COLOR-1:1*BITS_PER_COLOR];
    assign blu = pixel_data[1*BITS_PER_COLOR-1:0*BITS_PER_COLOR];

    // Power-on reset generation
    reg [RESET_CYCLES-1:0] reset_counter = 0;
    wire reset_active = ~reset_counter[RESET_CYCLES-1];
    
    always @(posedge clk_tdms_pixel) begin
        if (reset_active) begin
            reset_counter <= reset_counter + 1;
        end
    end

    // HDMI encoder instance
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
        .i_reset(reset_active),
        
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

    // VGA test pattern generator
    vgatestsrc #(
        .BITS_PER_COLOR(BITS_PER_COLOR),
        .H_WIDTH(12),  // Supports up to 4096 pixels wide
        .V_WIDTH(12),  // Supports up to 4096 pixels high
        .FRAC_BITS(16)
    ) vga_test_pattern (
        // Clock and reset
        .i_pixclk(clk_tdms_pixel),
        .i_reset(reset_active),
        
        // Screen dimensions
        .i_width(H_VISIBLE),
        .i_height(V_VISIBLE),
        
        // Control signals
        .i_rd(o_rd),
        .i_newline(o_newline),
        .i_newframe(o_newframe),
        
        // Pixel output
        .o_pixel(pixel_data)
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