module accelerator_core (
    input  logic        clk_i,
    input  logic        rst_i,
    input  logic        cke_i,
    
    // Register inputs
    input  logic [31:0] src_base_addr_i,
    input  logic [31:0] dst_base_addr_i,
    input  logic [15:0] src_x_i, src_y_i,
    input  logic [15:0] dst_x_i, dst_y_i,
    input  logic [15:0] width_i, height_i,
    input  logic [15:0] fill_color_i,
    input  logic        start_i,
    input  logic [7:0]  operation_mode_i,
    
    // Memory interface
    output logic        mem_read_req_o,
    output logic        mem_write_req_o,
    output logic [31:0] mem_addr_o,
    output logic [31:0] mem_data_o,
    input  logic [31:0] mem_data_i,
    input  logic        mem_ready_i,
    
    // Status
    output logic        busy_o,
    output logic        done_o,
    output logic        error_o
);

typedef enum logic [3:0] {
    STATE_IDLE,
    STATE_INIT,
    STATE_CALC_SRC_ADDR,
    STATE_READ_SRC,
    STATE_CALC_DST_ADDR,
    STATE_PROCESS_DATA,
    STATE_WRITE_DST,
    STATE_NEXT_PIXEL,
    STATE_CHECK_BOUNDS,
    STATE_DONE,
    STATE_ERROR
} state_t;

state_t current_state, next_state;

// Internal registers
logic [15:0] current_x, current_y;
logic [31:0] src_address, dst_address;
logic [31:0] processed_data;
logic [15:0] pixels_remaining;
logic operation_complete;

// Coordinate counters
always_ff @(posedge clk_i or posedge rst_i) begin
    if (rst_i) begin
        current_x <= 16'h0;
        current_y <= 16'h0;
        pixels_remaining <= 16'h0;
    end else if (cke_i) begin
        if (current_state == STATE_INIT) begin
            current_x <= 16'h0;
            current_y <= 16'h0;
            pixels_remaining <= width_i * height_i;
        end else if (current_state == STATE_NEXT_PIXEL) begin
            if (current_x == width_i - 1) begin
                current_x <= 16'h0;
                current_y <= current_y + 1'b1;
            end else begin
                current_x <= current_x + 1'b1;
            end
            pixels_remaining <= pixels_remaining - 1'b1;
        end
    end
end

// Operation complete detection
assign operation_complete = (pixels_remaining == 16'h0);

// State machine
always_ff @(posedge clk_i or posedge rst_i) begin
    if (rst_i) begin
        current_state <= STATE_IDLE;
        busy_o <= 1'b0;
        done_o <= 1'b0;
        error_o <= 1'b0;
    end else if (cke_i) begin
        current_state <= next_state;
        
        case (current_state)
            STATE_IDLE: begin
                busy_o <= 1'b0;
                done_o <= 1'b0;
                if (start_i) begin
                    next_state <= STATE_INIT;
                    busy_o <= 1'b1;
                end
            end
            
            STATE_INIT: begin
                next_state <= STATE_CALC_SRC_ADDR;
            end
            
            STATE_CALC_SRC_ADDR: begin
                // Calculate source address here
                next_state <= STATE_READ_SRC;
            end
            
            STATE_READ_SRC: begin
                mem_read_req_o <= 1'b1;
                if (mem_ready_i) begin
                    mem_read_req_o <= 1'b0;
                    next_state <= STATE_PROCESS_DATA;
                end
            end
            
            STATE_PROCESS_DATA: begin
                // Process data (format conversion, alpha blending, etc.)
                next_state <= STATE_CALC_DST_ADDR;
            end
            
            STATE_CALC_DST_ADDR: begin
                // Calculate destination address
                next_state <= STATE_WRITE_DST;
            end
            
            STATE_WRITE_DST: begin
                mem_write_req_o <= 1'b1;
                if (mem_ready_i) begin
                    mem_write_req_o <= 1'b0;
                    next_state <= STATE_NEXT_PIXEL;
                end
            end
            
            STATE_NEXT_PIXEL: begin
                next_state <= STATE_CHECK_BOUNDS;
            end
            
            STATE_CHECK_BOUNDS: begin
                if (operation_complete) begin
                    next_state <= STATE_DONE;
                end else begin
                    next_state <= STATE_CALC_SRC_ADDR;
                end
            end
            
            STATE_DONE: begin
                done_o <= 1'b1;
                busy_o <= 1'b0;
                if (!start_i) begin
                    next_state <= STATE_IDLE;
                    done_o <= 1'b0;
                end
            end
            
            STATE_ERROR: begin
                error_o <= 1'b1;
                if (!start_i) begin
                    next_state <= STATE_IDLE;
                    error_o <= 1'b0;
                end
            end
        endcase
    end
end

// Default outputs
assign mem_read_req_o = (current_state == STATE_READ_SRC);
assign mem_write_req_o = (current_state == STATE_WRITE_DST);

endmodule