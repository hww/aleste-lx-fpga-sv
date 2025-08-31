// Module: ms2_channel
// Description: Single DMA channel with address generator, loop control, and interpolation
// Features: 24.16 fixed-point addressing, loop modes, ping-pong, error detection

// Настройка канала для воспроизведения сэмпла 44000 Гц при sample rate 96000 Гц
// step_i = (44000 << 16) / 96000; // ~0.45833 в 16.16 формате
// 
// Бесконечное зацикливание сэмпла
// loop_en_i = 1'b1;
// loop_start_i = 24'h100000; // Начало сэмпла
// loop_end_i = 24'h100FFF;   // Конец сэмпла (4Кб)

module ms2_channel #(
    parameter AW              = 24,       // Address width (24 bits)
    parameter SW              = 16,       // Sample width (16 bits)  
    parameter ACCUM_FRAC_BITS = 16        // Fractional bits for accumulator (16)
)(
    // System signals
    input  wire                     clk_i,
    input  wire                     rst_i,
    
    // Control interface
    input  wire                     enable_i,       // Channel enable
    input  wire [AW-1:0]            start_addr_i,   // Start address
    input  wire [AW-1:0]            end_addr_i,     // End address
    input  wire [AW-1:0]            loop_start_i,   // Loop start address
    input  wire [AW-1:0]            loop_end_i,     // Loop end address
    input  wire [31:0]              step_i,         // Frequency step (16.16 format)
    input  wire                     loop_en_i,      // Loop enable
    input  wire                     pingpong_i,     // Ping-pong mode
    input  wire                     irq_en_i,       // IRQ on EOF enable
    
    // Sample interface
    input  wire                     sample_tick_i,  // Sample rate tick
    input  wire                     sample_valid_i, // New sample data valid
    input  wire [SW-1:0]            sample_data_i,  // Sample data from memory
    
    // Status outputs
    output logic [AW+ACCUM_FRAC_BITS-1:0] addr_accum_o, // Current address (24.16)
    output logic [15:0]             frac_o,         // Fractional part for interpolation
    output logic                    need_sample_o,  // Request new sample
    output logic                    eof_o,          // End of frame detected
    output logic                    error_o,        // Address error
    output logic                    active_o,       // Channel active
    
    // Data outputs
    output logic [SW-1:0]           prev_sample_o,  // Previous sample for interpolation
    output logic [SW-1:0]           curr_sample_o   // Current sample
);

//-----------------------------------------------------------------------------
// Internal registers and signals
//-----------------------------------------------------------------------------
logic [AW+ACCUM_FRAC_BITS-1:0] accumulator;        // 24.16 fixed-point accumulator
logic [AW+ACCUM_FRAC_BITS-1:0] next_accumulator;
logic [AW-1:0] current_addr;                       // Integer part of address
logic [15:0] current_frac;                         // Fractional part

logic direction;                                   // Current direction (0=forward, 1=backward)
logic pingpong_direction;                          // Ping-pong direction flag

logic [SW-1:0] prev_sample_reg;
logic [SW-1:0] curr_sample_reg;

logic address_valid;
logic in_loop_region;
logic at_end_addr;
logic at_start_addr;

//-----------------------------------------------------------------------------
// Address accumulator and fractional part
//-----------------------------------------------------------------------------
always_comb begin
    current_addr = accumulator[AW+ACCUM_FRAC_BITS-1:ACCUM_FRAC_BITS];
    current_frac = accumulator[ACCUM_FRAC_BITS-1:0];
end

// Update accumulator on sample tick
always_ff @(posedge clk_i or posedge rst_i) begin
    if (rst_i) begin
        accumulator <= '0;
        direction   <= 1'b0;
        pingpong_direction <= 1'b0;
    end else if (enable_i && sample_tick_i) begin
        accumulator <= next_accumulator;
        
        // Update direction for ping-pong mode
        if (pingpong_i) begin
            if (at_end_addr) begin
                direction <= 1'b1; // Reverse direction
                pingpong_direction <= 1'b1;
            end else if (at_start_addr) begin
                direction <= 1'b0; // Forward direction
                pingpong_direction <= 1'b0;
            end
        end
    end
end

// Next accumulator calculation with direction
always_comb begin
    if (!enable_i) begin
        next_accumulator = '0;
    end else begin
        if (direction) begin
            // Moving backward
            next_accumulator = accumulator - {step_i, {ACCUM_FRAC_BITS{1'b0}}};
        end else begin
            // Moving forward
            next_accumulator = accumulator + {step_i, {ACCUM_FRAC_BITS{1'b0}}};
        end
    end
end

//-----------------------------------------------------------------------------
// Address validation and boundary checking
//-----------------------------------------------------------------------------
always_comb begin
    // Check if current address is within valid range
    address_valid = (current_addr >= start_addr_i) && (current_addr <= end_addr_i);
    
    // Check if in loop region
    in_loop_region = (current_addr >= loop_start_i) && (current_addr <= loop_end_i);
    
    // Check boundary conditions
    at_end_addr = (current_addr >= end_addr_i);
    at_start_addr = (current_addr <= start_addr_i);
end

//-----------------------------------------------------------------------------
// Loop and ping-pong logic
//-----------------------------------------------------------------------------
always_ff @(posedge clk_i or posedge rst_i) begin
    if (rst_i) begin
        eof_o <= 1'b0;
        error_o <= 1'b0;
    end else if (enable_i) begin
        // EOF detection
        if (sample_tick_i && at_end_addr && !loop_en_i && !pingpong_i) begin
            eof_o <= 1'b1;
        end else if (sample_valid_i) begin
            eof_o <= 1'b0;
        end
        
        // Error detection - address out of bounds
        if (!address_valid) begin
            error_o <= 1'b1;
        end
        
        // Loop handling
        if (sample_tick_i && loop_en_i && at_end_addr) begin
            // Wrap around to loop start
            accumulator <= {loop_start_i, {ACCUM_FRAC_BITS{1'b0}}};
        end
        
        // Ping-pong handling
        if (sample_tick_i && pingpong_i) begin
            if (at_end_addr && !direction) begin
                // Hit end while moving forward - bounce back
                accumulator <= {end_addr_i, {ACCUM_FRAC_BITS{1'b0}}} - 
                              {step_i, {ACCUM_FRAC_BITS{1'b0}}};
            end else if (at_start_addr && direction) begin
                // Hit start while moving backward - bounce forward
                accumulator <= {start_addr_i, {ACCUM_FRAC_BITS{1'b0}}} + 
                              {step_i, {ACCUM_FRAC_BITS{1'b0}}};
            end
        end
    end else begin
        eof_o <= 1'b0;
        error_o <= 1'b0;
    end
end

//-----------------------------------------------------------------------------
// Sample data handling
//-----------------------------------------------------------------------------
always_ff @(posedge clk_i or posedge rst_i) begin
    if (rst_i) begin
        prev_sample_reg <= '0;
        curr_sample_reg <= '0;
        need_sample_o <= 1'b0;
    end else if (enable_i) begin
        // Request new sample when integer part of address changes
        need_sample_o <= (current_addr != accumulator[AW+ACCUM_FRAC_BITS-1:ACCUM_FRAC_BITS]);
        
        if (sample_valid_i) begin
            // Shift samples for interpolation
            prev_sample_reg <= curr_sample_reg;
            curr_sample_reg <= sample_data_i;
        end
    end else begin
        need_sample_o <= 1'b0;
        prev_sample_reg <= '0;
        curr_sample_reg <= '0;
    end
end

//-----------------------------------------------------------------------------
// Output assignments
//-----------------------------------------------------------------------------
assign addr_accum_o = accumulator;
assign frac_o = current_frac;
assign prev_sample_o = prev_sample_reg;
assign curr_sample_o = curr_sample_reg;
assign active_o = enable_i;

//-----------------------------------------------------------------------------
// Optional: Precision mode for high-quality interpolation
//-----------------------------------------------------------------------------
/*
logic [AW+ACCUM_FRAC_BITS-1:0] precise_accumulator;

always_ff @(posedge clk_i) begin
    if (enable_i && sample_tick_i) begin
        // Maintain high-precision accumulator even during loops
        if (loop_en_i && at_end_addr) begin
            precise_accumulator <= {loop_start_i, current_frac};
        end else if (pingpong_i && ((at_end_addr && !direction) || (at_start_addr && direction))) begin
            precise_accumulator <= accumulator; // Keep fractional part during bounce
        end else begin
            precise_accumulator <= next_accumulator;
        end
    end
end
*/

endmodule
