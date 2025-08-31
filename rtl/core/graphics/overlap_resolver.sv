module overlap_resolver (
    input  logic        clk_i,
    input  logic        rst_i,
    input  logic        cke_i,
    
    // Region parameters
    input  logic [31:0] src_base_addr_i,
    input  logic [31:0] dst_base_addr_i,
    input  logic [15:0] src_x_i, src_y_i,
    input  logic [15:0] dst_x_i, dst_y_i,
    input  logic [15:0] width_i, height_i,
    input  logic [1:0]  pixel_format_i,
    
    // Control
    input  logic        check_enable_i,
    
    // Results
    output logic        overlap_detected_o,
    output logic        src_first_o, // 0=process src first, 1=process dst first
    output logic        valid_o
);

// Internal calculations
logic [31:0] src_end_addr, dst_end_addr;
logic [31:0] src_start_addr, dst_start_addr;
logic overlap;
logic src_first;
logic result_valid;

// Calculate addresses (simplified)
assign src_start_addr = src_base_addr_i + (src_y_i * 1024 + src_x_i) * 2; // Assume 16bpp
assign dst_start_addr = dst_base_addr_i + (dst_y_i * 1024 + dst_x_i) * 2;
assign src_end_addr = src_start_addr + (width_i * height_i * 2);
assign dst_end_addr = dst_start_addr + (width_i * height_i * 2);

// Overlap detection
always_comb begin
    overlap = 1'b0;
    src_first = 1'b0;
    
    if (check_enable_i) begin
        // Check if regions overlap
        if ((src_start_addr < dst_end_addr) && (src_end_addr > dst_start_addr)) begin
            overlap = 1'b1;
            // Determine processing order: process source first if it's below destination
            src_first = (src_start_addr < dst_start_addr);
        end
    end
end

// Output registration
always_ff @(posedge clk_i or posedge rst_i) begin
    if (rst_i) begin
        overlap_detected_o <= 1'b0;
        src_first_o <= 1'b0;
        valid_o <= 1'b0;
    end else if (cke_i) begin
        overlap_detected_o <= overlap;
        src_first_o <= src_first;
        valid_o <= check_enable_i;
    end
end

endmodule