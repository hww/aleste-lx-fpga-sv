// Module: ms2_mixer
// Description: Multi-channel interpolator and mixer with saturation
// Features: Linear interpolation, per-channel volume, global volume, saturation

module ms2_mixer #(
    parameter NUM_CHANNELS    = 4,        // Number of audio channels
    parameter SAMPLE_WIDTH    = 16,       // Input sample width (16-bit)
    parameter ACCUM_WIDTH     = 24,       // Accumulator width for mixing
    parameter VOLUME_WIDTH    = 8         // Volume control width (8-bit)
)(
    // System signals
    input  wire                     clk_i,
    input  wire                     rst_i,
    
    // Channel data interface
    input  wire [SAMPLE_WIDTH-1:0]  sample_prev_i [NUM_CHANNELS], // Previous samples
    input  wire [SAMPLE_WIDTH-1:0]  sample_curr_i [NUM_CHANNELS], // Current samples  
    input  wire [15:0]              frac_i [NUM_CHANNELS],        // Fractional part 16.16
    input  wire                     valid_i,                      // Data valid
    
    // Volume controls
    input  wire [VOLUME_WIDTH-1:0]  ch_vol_l_i [NUM_CHANNELS],   // Per-channel left volume
    input  wire [VOLUME_WIDTH-1:0]  ch_vol_r_i [NUM_CHANNELS],   // Per-channel right volume
    input  wire [VOLUME_WIDTH-1:0]  global_vol_l_i,              // Global left volume
    input  wire [VOLUME_WIDTH-1:0]  global_vol_r_i,              // Global right volume
    
    // Output
    output logic [SAMPLE_WIDTH-1:0] sample_out_l_o,              // Mixed left output
    output logic [SAMPLE_WIDTH-1:0] sample_out_r_o,              // Mixed right output
    output logic                    valid_o                      // Output valid
);

//-----------------------------------------------------------------------------
// Internal signals and registers
//-----------------------------------------------------------------------------
// Pipeline stages
typedef enum logic [1:0] {
    STAGE_INTERPOLATE,
    STAGE_CHANNEL_MIX,
    STAGE_GLOBAL_MIX
} pipeline_stage_t;

pipeline_stage_t current_stage;

// Interpolation results
logic signed [SAMPLE_WIDTH:0] interpolated [NUM_CHANNELS]; // +1 bit for precision

// Channel volume applied results  
logic signed [ACCUM_WIDTH-1:0] ch_mix_l [NUM_CHANNELS];
logic signed [ACCUM_WIDTH-1:0] ch_mix_r [NUM_CHANNELS];

// Mixed results before global volume
logic signed [ACCUM_WIDTH-1:0] mixed_l;
logic signed [ACCUM_WIDTH-1:0] mixed_r;

// Global volume applied results
logic signed [ACCUM_WIDTH-1:0] global_mixed_l;
logic signed [ACCUM_WIDTH-1:0] global_mixed_r;

// Control signals
logic valid_pipeline [2:0]; // Pipeline for valid signal

//-----------------------------------------------------------------------------
// Pipeline control
//-----------------------------------------------------------------------------
always_ff @(posedge clk_i or posedge rst_i) begin
    if (rst_i) begin
        current_stage <= STAGE_INTERPOLATE;
        valid_pipeline <= '{default: 0};
    end else begin
        // Shift valid through pipeline
        valid_pipeline[0] <= valid_i;
        valid_pipeline[1] <= valid_pipeline[0];
        valid_pipeline[2] <= valid_pipeline[1];
        
        valid_o <= valid_pipeline[2]; // Output valid after 3 cycles
        
        // Simple stage progression (could be FSM for more control)
        if (valid_i) begin
            current_stage <= STAGE_INTERPOLATE;
        end else if (valid_pipeline[0]) begin
            current_stage <= STAGE_CHANNEL_MIX;
        end else if (valid_pipeline[1]) begin
            current_stage <= STAGE_GLOBAL_MIX;
        end
    end
end

//-----------------------------------------------------------------------------
// Stage 1: Linear Interpolation
//-----------------------------------------------------------------------------
generate
for (genvar i = 0; i < NUM_CHANNELS; i++) begin : gen_interpolation
    always_ff @(posedge clk_i) begin
        if (valid_i) begin
            // Linear interpolation: sample = prev + frac*(curr - prev)
            logic signed [SAMPLE_WIDTH:0] sample_diff;
            logic signed [SAMPLE_WIDTH+16:0] interpolated_temp;
            
            sample_diff = $signed(sample_curr_i[i]) - $signed(sample_prev_i[i]);
            interpolated_temp = $signed(sample_prev_i[i]) + (($signed(sample_diff) * $signed(frac_i[i])) >>> 16);
            
            // Round and saturate to original bit width + 1
            interpolated[i] <= saturate(interpolated_temp, SAMPLE_WIDTH + 1);
        end
    end
end
endgenerate

//-----------------------------------------------------------------------------
// Stage 2: Per-channel volume application and accumulation
//-----------------------------------------------------------------------------
always_ff @(posedge clk_i) begin
    if (valid_pipeline[0]) begin
        mixed_l <= '0;
        mixed_r <= '0;
        
        for (int i = 0; i < NUM_CHANNELS; i++) begin
            // Apply left channel volume
            ch_mix_l[i] = ($signed(interpolated[i]) * $signed(ch_vol_l_i[i])) >>> VOLUME_WIDTH;
            // Apply right channel volume  
            ch_mix_r[i] = ($signed(interpolated[i]) * $signed(ch_vol_r_i[i])) >>> VOLUME_WIDTH;
            
            // Accumulate with saturation
            mixed_l <= saturate($signed(mixed_l) + $signed(ch_mix_l[i]), ACCUM_WIDTH);
            mixed_r <= saturate($signed(mixed_r) + $signed(ch_mix_r[i]), ACCUM_WIDTH);
        end
    end
end

//-----------------------------------------------------------------------------
// Stage 3: Global volume application and final saturation
//-----------------------------------------------------------------------------
always_ff @(posedge clk_i) begin
    if (valid_pipeline[1]) begin
        // Apply global volume
        global_mixed_l <= ($signed(mixed_l) * $signed(global_vol_l_i)) >>> VOLUME_WIDTH;
        global_mixed_r <= ($signed(mixed_r) * $signed(global_vol_r_i)) >>> VOLUME_WIDTH;
        
        // Final saturation to output bit width
        sample_out_l_o <= saturate(global_mixed_l, SAMPLE_WIDTH);
        sample_out_r_o <= saturate(global_mixed_r, SAMPLE_WIDTH);
    end
end

//-----------------------------------------------------------------------------
// Saturation function
//-----------------------------------------------------------------------------
function automatic logic signed [SAMPLE_WIDTH:0] saturate(input logic signed [ACCUM_WIDTH-1:0] value, 
                                                         input int width);
    logic signed [ACCUM_WIDTH-1:0] max_positive;
    logic signed [ACCUM_WIDTH-1:0] max_negative;
    
    max_positive = (1 << (width - 1)) - 1;
    max_negative = -(1 << (width - 1));
    
    if (value > max_positive) begin
        return max_positive;
    end else if (value < max_negative) begin
        return max_negative;
    end else begin
        return value[width-1:0];
    end
endfunction

//-----------------------------------------------------------------------------
// Optional: Add clipping detection
//-----------------------------------------------------------------------------
/*
logic clip_l, clip_r;

always_ff @(posedge clk_i) begin
    if (valid_pipeline[1]) begin
        clip_l <= (global_mixed_l > ((1 << (SAMPLE_WIDTH-1)) - 1)) || 
                  (global_mixed_l < -(1 << (SAMPLE_WIDTH-1)));
        clip_r <= (global_mixed_r > ((1 << (SAMPLE_WIDTH-1)) - 1)) || 
                  (global_mixed_r < -(1 << (SAMPLE_WIDTH-1)));
    end
end
*/

endmodule
