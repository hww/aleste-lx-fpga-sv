// =============================================================================
// VBUF - Video Line Buffer
// =============================================================================
// For Aleste LX project by H2W  
// =============================================================================
// Dual-port line buffer with 16-bit memory interface
// Supports burst mode and adaptive prefetch
// =============================================================================

module video_buffer (
    input wire clk_i,
    input wire rst_i,
    
    // Memory interface (16-bit)
    input wire [15:0] vmem_data_i,
    input wire vmem_valid_i,
    
    // CRTC timing signals
    input wire char_strobe_i,    // End of character
    input wire byte_strobe_i,    // Load byte to pipeline
    input wire pixel_strobe_i,   // Pixel shift in pipeline
    
    // To pixel_pipeline (8-bit)
    output reg [7:0] pixel_data_o,
    output reg pixel_valid_o,
    
    // Memory control
    output wire need_data_o
);

// =============================================================================
// Internal registers
// =============================================================================
reg [15:0] current_word;
reg [15:0] next_word;
reg has_current_word;
reg has_next_word;
reg byte_select; // 0 = high byte, 1 = low byte

// =============================================================================
// Buffer control logic
// =============================================================================
always @(posedge clk_i or posedge rst_i) begin
    if (rst_i) begin
        // Reset all registers
        current_word <= 16'b0;
        next_word <= 16'b0;
        has_current_word <= 1'b0;
        has_next_word <= 1'b0;
        byte_select <= 1'b0;
        pixel_data_o <= 8'b0;
        pixel_valid_o <= 1'b0;
    end else begin
        // Default values
        pixel_valid_o <= 1'b0;
        
        // =====================================================================
        // PHASE 1: Load data from memory (16-bit words)
        // =====================================================================
        if (vmem_valid_i) begin
            if (!has_current_word) begin
                // First word goes to current
                current_word <= vmem_data_i;
                has_current_word <= 1'b1;
            end else begin
                // Subsequent words go to next
                next_word <= vmem_data_i;
                has_next_word <= 1'b1;
            end
        end
        
        // =====================================================================
        // PHASE 2: Output bytes to pixel pipeline (8-bit bytes)
        // =====================================================================
        if (byte_strobe_i && has_current_word) begin
            // Output current byte (alternate between high and low bytes)
            if (byte_select) begin
                pixel_data_o <= current_word[7:0];  // Low byte
            end else begin
                pixel_data_o <= current_word[15:8]; // High byte
            end
            
            // Toggle byte selector
            byte_select <= ~byte_select;
            pixel_valid_o <= 1'b1;
            
            // Move to next word if we just output the second byte
            if (byte_select && has_next_word) begin
                current_word <= next_word;
                has_next_word <= 1'b0;
            end
        end
    end
end

// =============================================================================
// Output assignments
// =============================================================================

// Request new data when we don't have a next word buffered
assign need_data_o = !has_next_word;

endmodule