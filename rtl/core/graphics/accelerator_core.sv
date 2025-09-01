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
    input  logic [15:0] transparent_color_i,
    input  logic        start_i,
    input  logic [7:0]  operation_mode_i,
    
    // New registers for fast operations
    input  logic [15:0] char_fg_color_i,
    input  logic [15:0] char_bg_color_i,
    input  logic        char_bg_transparent_i,
    input  logic [63:0] char_pattern_i,
    input  logic        fast_point_enable_i,
    input  logic [15:0] fast_point_data_i,
    
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
    STATE_ERROR,
    
    // Fast operation states
    STATE_FAST_POINT_CALC,
    STATE_FAST_POINT_WRITE,
    STATE_CHAR_INIT,
    STATE_CHAR_READ_PATTERN,
    STATE_CHAR_PROCESS_ROW,
    STATE_CHAR_WRITE_ROW,
    STATE_CHAR_NEXT_ROW
} state_t;

state_t current_state, next_state;

// Internal registers
logic [15:0] current_x, current_y;
logic [31:0] src_address, dst_address;
logic [31:0] processed_data;
logic [15:0] pixels_remaining;
logic operation_complete;

// Character drawing registers
logic [2:0] char_row_counter;
logic [7:0] current_char_row;
logic [15:0] char_current_x, char_current_y;

// Fast point registers
logic [31:0] fast_point_address;
logic fast_point_done;

// Address calculator interface
logic [31:0] calc_address;
logic calc_valid;
logic calc_error;

// Coordinate counters
always_ff @(posedge clk_i or posedge rst_i) begin
    if (rst_i) begin
        current_x <= 16'h0;
        current_y <= 16'h0;
        pixels_remaining <= 16'h0;
        char_row_counter <= 3'b0;
        char_current_x <= 16'h0;
        char_current_y <= 16'h0;
    end else if (cke_i) begin
        case (current_state)
            STATE_INIT: begin
                current_x <= 16'h0;
                current_y <= 16'h0;
                pixels_remaining <= width_i * height_i;
                char_current_x <= dst_x_i;
                char_current_y <= dst_y_i;
            end
            
            STATE_NEXT_PIXEL: begin
                if (current_x == width_i - 1) begin
                    current_x <= 16'h0;
                    current_y <= current_y + 1'b1;
                end else begin
                    current_x <= current_x + 1'b1;
                end
                pixels_remaining <= pixels_remaining - 1'b1;
            end
            
            STATE_CHAR_NEXT_ROW: begin
                char_row_counter <= char_row_counter + 1'b1;
                char_current_y <= char_current_y + 1'b1;
                char_current_x <= dst_x_i;
            end
            
            STATE_CHAR_PROCESS_ROW: begin
                char_current_x <= char_current_x + 1'b1;
            end
        endcase
    end
end

// Operation complete detection
assign operation_complete = (pixels_remaining == 16'h0);

// Fast point address calculation (combinational)
assign fast_point_address = dst_base_addr_i + (dst_y_i * 1024 + dst_x_i) * 2;

// State machine
always_ff @(posedge clk_i or posedge rst_i) begin
    if (rst_i) begin
        current_state <= STATE_IDLE;
        busy_o <= 1'b0;
        done_o <= 1'b0;
        error_o <= 1'b0;
        mem_read_req_o <= 1'b0;
        mem_write_req_o <= 1'b0;
        mem_addr_o <= 32'h0;
        mem_data_o <= 32'h0;
        fast_point_done <= 1'b0;
    end else if (cke_i) begin
        current_state <= next_state;
        
        // Default outputs
        mem_read_req_o <= 1'b0;
        mem_write_req_o <= 1'b0;
        done_o <= 1'b0;
        fast_point_done <= 1'b0;
        
        case (current_state)
            STATE_IDLE: begin
                busy_o <= 1'b0;
                if (start_i) begin
                    busy_o <= 1'b1;
                    if (fast_point_enable_i) begin
                        next_state <= STATE_FAST_POINT_CALC;
                    end else if (operation_mode_i[7:6] == 2'b11) begin
                        next_state <= STATE_CHAR_INIT;
                    end else begin
                        next_state <= STATE_INIT;
                    end
                end
            end
            
            STATE_FAST_POINT_CALC: begin
                mem_addr_o <= fast_point_address;
                mem_data_o <= {16'h0, fast_point_data_i};
                next_state <= STATE_FAST_POINT_WRITE;
            end
            
            STATE_FAST_POINT_WRITE: begin
                mem_write_req_o <= 1'b1;
                if (mem_ready_i) begin
                    next_state <= STATE_DONE;
                    fast_point_done <= 1'b1;
                end
            end
            
            STATE_CHAR_INIT: begin
                char_row_counter <= 3'b0;
                next_state <= STATE_CHAR_READ_PATTERN;
            end
            
            STATE_CHAR_READ_PATTERN: begin
                current_char_row <= char_pattern_i[char_row_counter*8 +: 8];
                next_state <= STATE_CHAR_PROCESS_ROW;
            end
            
            STATE_CHAR_PROCESS_ROW: begin
                if (current_char_row[7]) begin
                    // Draw foreground pixel
                    mem_addr_o <= dst_base_addr_i + (char_current_y * 1024 + char_current_x) * 2;
                    mem_data_o <= {16'h0, char_fg_color_i};
                    mem_write_req_o <= 1'b1;
                    next_state <= STATE_CHAR_WRITE_ROW;
                end else if (!char_bg_transparent_i) begin
                    // Draw background pixel
                    mem_addr_o <= dst_base_addr_i + (char_current_y * 1024 + char_current_x) * 2;
                    mem_data_o <= {16'h0, char_bg_color_i};
                    mem_write_req_o <= 1'b1;
                    next_state <= STATE_CHAR_WRITE_ROW;
                end else begin
                    // Transparent pixel, skip
                    if (char_current_x == dst_x_i + 7) begin
                        next_state <= STATE_CHAR_NEXT_ROW;
                    end else begin
                        next_state <= STATE_CHAR_PROCESS_ROW;
                    end
                end
            end
            
            STATE_CHAR_WRITE_ROW: begin
                if (mem_ready_i) begin
                    if (char_current_x == dst_x_i + 7) begin
                        if (char_row_counter == 3'd7) begin
                            next_state <= STATE_DONE;
                        end else begin
                            next_state <= STATE_CHAR_NEXT_ROW;
                        end
                    end else begin
                        next_state <= STATE_CHAR_PROCESS_ROW;
                    end
                end
            end
            
            STATE_DONE: begin
                done_o <= 1'b1;
                busy_o <= 1'b0;
                if (!start_i) begin
                    next_state <= STATE_IDLE;
                end
            end
            
            // Original states remain unchanged for backward compatibility
            STATE_INIT: begin
                next_state <= STATE_CALC_SRC_ADDR;
            end
            
            STATE_CALC_SRC_ADDR: begin
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
                next_state <= STATE_CALC_DST_ADDR;
            end
            
            STATE_CALC_DST_ADDR: begin
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

endmodule