`default_nettype none

module pattern #(
    parameter H_RESOLUTION = 640,      // Horizontal resolution
    parameter V_RESOLUTION = 480,      // Vertical resolution  
    parameter BITS_PER_COLOR = 8,      // Bits per color channel
    parameter RESET_CYCLES = 4         // Reset duration in clock cycles
)(
    // Clock inputs
    input  wire              i_tmdsclk,    // TMDS clock (10x pixel clock)
    input  wire              i_pixclk,     // Pixel clock
    
    // Pixel data outputs
    output wire [BITS_PER_COLOR-1:0] red,  // Red color component
    output wire [BITS_PER_COLOR-1:0] grn,  // Green color component
    output wire [BITS_PER_COLOR-1:0] blu,  // Blue color component
    
    // Control outputs
    output wire              o_rd,         // Read enable signal
    
    // TMDS encoded outputs (for verification)
    output wire [9:0]        o_TMDS_red,   // Encoded red TMDS data
    output wire [9:0]        o_TMDS_grn,   // Encoded green TMDS data
    output wire [9:0]        o_TMDS_blu    // Encoded blue TMDS data
);

    // Internal signals
    wire [3*BITS_PER_COLOR-1:0] pixel_data;  // Combined RGB pixel data
    wire                        o_red, o_grn, o_blu;  // Serial TMDS outputs
    wire                        o_newline, o_newframe; // Timing signals
    
    // Assign color components from combined pixel data
    assign red = pixel_data[3*BITS_PER_COLOR-1:2*BITS_PER_COLOR];
    assign grn = pixel_data[2*BITS_PER_COLOR-1:1*BITS_PER_COLOR];  
    assign blu = pixel_data[1*BITS_PER_COLOR-1:0*BITS_PER_COLOR];

    // Power-on reset generation
    reg [RESET_CYCLES-1:0] reset_counter = 0;
    wire reset_active = ~reset_counter[RESET_CYCLES-1];
    
    always @(posedge i_pixclk) begin
        if (reset_active) begin
            reset_counter <= reset_counter + 1;
        end
    end

    // HDMI encoder instance
    llhdmi #(
        .H_VISIBLE(H_RESOLUTION),
        .V_VISIBLE(V_RESOLUTION)
    ) llhdmi_encoder (
        // Clock inputs
        .i_tmdsclk(i_tmdsclk),
        .i_pixclk(i_pixclk),
        
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
        
        // TMDS encoded outputs
        .o_TMDS_red(o_TMDS_red),
        .o_TMDS_grn(o_TMDS_grn),
        .o_TMDS_blu(o_TMDS_blu),
        
        // Serial TMDS outputs (unused in this module)
        .o_red(o_red),
        .o_grn(o_grn), 
        .o_blu(o_blu)
    );

    // VGA test pattern generator
    vgatestsrc #(
        .BITS_PER_COLOR(BITS_PER_COLOR),
        .H_WIDTH(12),  // Sufficient for up to 4096 pixels wide
        .V_WIDTH(12),  // Sufficient for up to 4096 pixels high
        .FRAC_BITS(16)
    ) vga_test_pattern (
        // Clock and reset
        .i_pixclk(i_pixclk),
        .i_reset(reset_active),
        
        // Screen dimensions
        .i_width(H_RESOLUTION),
        .i_height(V_RESOLUTION),
        
        // Control signals
        .i_rd(o_rd),
        .i_newline(o_newline),
        .i_newframe(o_newframe),
        
        // Pixel output
        .o_pixel(pixel_data)
    );

    // Verilator lint directives for unused signals
    /* verilator lint_off UNUSED */
    wire unused_signals = o_red | o_grn | o_blu;
    /* verilator lint_on UNUSED */

endmodule