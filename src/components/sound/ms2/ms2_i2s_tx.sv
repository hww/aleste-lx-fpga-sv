// Module: ms2_i2s_tx
// Description: I2S Transmitter for Magic Sound 2
// Supports 16/24/32-bit sample width, configurable clock dividers

module ms2_i2s_tx #(
    parameter SAMPLE_WIDTH = 16,        // Bit width of audio samples (16, 24, 32)
    parameter CLK_DIVIDER  = 8          // clk_i / (2 * CLK_DIVIDER) = i2s_bclk frequency
)(
    // System signals
    input  wire                     clk_i,          // Main clock (e.g., 96 MHz)
    input  wire                     rst_i,          // Reset (active high)
    
    // Data interface
    input  wire                     sample_valid_i, // New sample data valid
    input  wire [SAMPLE_WIDTH-1:0]  sample_left_i,  // Left channel sample
    input  wire [SAMPLE_WIDTH-1:0]  sample_right_i, // Right channel sample
    output wire                     ready_o,        // Ready for new sample
    
    // I2S physical interface
    output logic                    i2s_bclk_o,     // Bit clock
    output logic                    i2s_lrclk_o,    // Left/Right channel select
    output logic                    i2s_data_o      // Serial data
);

//-----------------------------------------------------------------------------
// Internal registers and wires
//-----------------------------------------------------------------------------
logic [SAMPLE_WIDTH-1:0] left_sample_reg;
logic [SAMPLE_WIDTH-1:0] right_sample_reg;
logic [SAMPLE_WIDTH-1:0] shift_reg;
logic                    shift_reg_loaded;

logic [7:0]             bit_counter;    // Counts bits for current channel
logic                    current_channel; // 0 = left, 1 = right

// Clock generation counters
logic [CLK_DIVIDER-1:0] bclk_counter;
logic                   bclk_rise;
logic                   bclk_fall;

//-----------------------------------------------------------------------------
// I2S Bit Clock (BCLK) generation
//-----------------------------------------------------------------------------
always_ff @(posedge clk_i or posedge rst_i) begin
    if (rst_i) begin
        bclk_counter <= '0;
        i2s_bclk_o   <= 1'b0;
    end else begin
        if (bclk_counter == (CLK_DIVIDER - 1)) begin
            bclk_counter <= '0;
            i2s_bclk_o   <= ~i2s_bclk_o; // Toggle BCLK
        end else begin
            bclk_counter <= bclk_counter + 1;
        end
    end
end

// Generate rise/fall detection for BCLK
assign bclk_rise = (bclk_counter == (CLK_DIVIDER/2 - 1)) && !i2s_bclk_o;
assign bclk_fall = (bclk_counter == (CLK_DIVIDER/2 - 1)) && i2s_bclk_o;

//-----------------------------------------------------------------------------
// Left/Right Clock (LRCLK) generation and bit counting
// LRCLK changes on BCLK falling edge (I2S standard)
//-----------------------------------------------------------------------------
always_ff @(posedge clk_i or posedge rst_i) begin
    if (rst_i) begin
        bit_counter      <= '0;
        current_channel  <= 1'b0;
        i2s_lrclk_o      <= 1'b0;
    end else if (bclk_fall) begin
        if (bit_counter == (SAMPLE_WIDTH - 1)) begin
            bit_counter <= '0;
            current_channel <= ~current_channel;
            i2s_lrclk_o <= ~i2s_lrclk_o; // Toggle LRCLK on channel change
        end else begin
            bit_counter <= bit_counter + 1;
        end
    end
end

//-----------------------------------------------------------------------------
// Sample data latching
//-----------------------------------------------------------------------------
always_ff @(posedge clk_i or posedge rst_i) begin
    if (rst_i) begin
        left_sample_reg   <= '0;
        right_sample_reg  <= '0;
        shift_reg_loaded  <= 1'b0;
    end else if (sample_valid_i) begin
        left_sample_reg  <= sample_left_i;
        right_sample_reg <= sample_right_i;
        shift_reg_loaded <= 1'b1;
    end
    // Auto-clear loaded flag when both channels transmitted
    else if (bclk_fall && (bit_counter == (SAMPLE_WIDTH - 1)) && (current_channel == 1'b1)) begin
        shift_reg_loaded <= 1'b0;
    end
end

// Ready for new sample when current sample is being transmitted
assign ready_o = (bclk_fall && (bit_counter == (SAMPLE_WIDTH - 1)) && (current_channel == 1'b1)) || !shift_reg_loaded;

//-----------------------------------------------------------------------------
// Shift register loading and serial data generation
// Data changes on BCLK falling edge, sampled on rising edge (I2S standard)
//-----------------------------------------------------------------------------
always_ff @(posedge clk_i or posedge rst_i) begin
    if (rst_i) begin
        shift_reg  <= '0;
        i2s_data_o <= 1'b0;
    end else if (bclk_fall) begin
        // Load new data at the beginning of frame
        if (bit_counter == (SAMPLE_WIDTH - 1)) begin
            if (current_channel == 1'b0) begin
                // Next channel is Left (LRCLK = 0)
                shift_reg <= left_sample_reg;
            end else begin
                // Next channel is Right (LRCLK = 1)  
                shift_reg <= right_sample_reg;
            end
        end else begin
            // Shift out data MSB first
            shift_reg <= {shift_reg[SAMPLE_WIDTH-2:0], 1'b0};
        end
        
        // Output MSB of shift register
        i2s_data_o <= shift_reg[SAMPLE_WIDTH-1];
    end
end

//-----------------------------------------------------------------------------
// Optional: Add output registers for better timing
//-----------------------------------------------------------------------------
/*
always_ff @(posedge clk_i) begin
    if (rst_i) begin
        i2s_bclk_o  <= 1'b0;
        i2s_lrclk_o <= 1'b0;
        i2s_data_o  <= 1'b0;
    end else begin
        i2s_bclk_o  <= i2s_bclk_int;
        i2s_lrclk_o <= i2s_lrclk_int;
        i2s_data_o  <= i2s_data_int;
    end
end
*/

endmodule
