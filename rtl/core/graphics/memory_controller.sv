module memory_controller (
    input  logic        clk_i,
    input  logic        rst_i,
    input  logic        cke_i,
    
    // Control interface
    input  logic        read_enable_i,
    input  logic        write_enable_i,
    input  logic [31:0] address_i,
    input  logic [31:0] data_i,
    output logic [31:0] data_o,
    output logic        ready_o,
    output logic        error_o,
    
    // Wishbone Master interface
    output logic        wbm_cyc_o,
    output logic        wbm_stb_o,
    output logic        wbm_we_o,
    output logic [3:0]  wbm_sel_o,
    output logic [31:0] wbm_adr_o,
    output logic [31:0] wbm_dat_o,
    input  logic [31:0] wbm_dat_i,
    input  logic        wbm_ack_i,
    input  logic        wbm_err_i,
    
    // Prefetch control
    input  logic        prefetch_enable_i,
    input  logic [1:0]  buffer_size_i
);

typedef enum logic [1:0] {
    STATE_IDLE,
    STATE_READ,
    STATE_WRITE,
    STATE_ERROR
} state_t;

state_t current_state, next_state;

// Internal signals
logic [31:0] read_buffer [0:3];
logic [1:0] buffer_write_ptr;
logic [1:0] buffer_read_ptr;
logic buffer_empty;
logic buffer_full;
logic [2:0] burst_counter;
logic [31:0] next_address;

// Buffer status
assign buffer_empty = (buffer_write_ptr == buffer_read_ptr);
assign buffer_full = (buffer_write_ptr + 1'b1 == buffer_read_ptr);

// State machine
always_ff @(posedge clk_i or posedge rst_i) begin
    if (rst_i) begin
        current_state <= STATE_IDLE;
        wbm_cyc_o <= 1'b0;
        wbm_stb_o <= 1'b0;
        wbm_we_o <= 1'b0;
        ready_o <= 1'b0;
        error_o <= 1'b0;
        buffer_write_ptr <= 2'b00;
        buffer_read_ptr <= 2'b00;
        burst_counter <= 3'b000;
    end else if (cke_i) begin
        current_state <= next_state;
        
        case (current_state)
            STATE_IDLE: begin
                ready_o <= 1'b1;
                if (read_enable_i && !buffer_full) begin
                    wbm_cyc_o <= 1'b1;
                    wbm_stb_o <= 1'b1;
                    wbm_we_o <= 1'b0;
                    wbm_adr_o <= address_i;
                    next_state <= STATE_READ;
                    ready_o <= 1'b0;
                end else if (write_enable_i) begin
                    wbm_cyc_o <= 1'b1;
                    wbm_stb_o <= 1'b1;
                    wbm_we_o <= 1'b1;
                    wbm_adr_o <= address_i;
                    wbm_dat_o <= data_i;
                    next_state <= STATE_WRITE;
                    ready_o <= 1'b0;
                end
            end
            
            STATE_READ: begin
                if (wbm_ack_i) begin
                    read_buffer[buffer_write_ptr] <= wbm_dat_i;
                    buffer_write_ptr <= buffer_write_ptr + 1'b1;
                    burst_counter <= burst_counter + 1'b1;
                    
                    if (burst_counter == 3'b111 || !prefetch_enable_i) begin
                        wbm_cyc_o <= 1'b0;
                        wbm_stb_o <= 1'b0;
                        next_state <= STATE_IDLE;
                    end else begin
                        wbm_adr_o <= wbm_adr_o + 4; // Next word
                    end
                end else if (wbm_err_i) begin
                    next_state <= STATE_ERROR;
                end
            end
            
            STATE_WRITE: begin
                if (wbm_ack_i) begin
                    wbm_cyc_o <= 1'b0;
                    wbm_stb_o <= 1'b0;
                    next_state <= STATE_IDLE;
                end else if (wbm_err_i) begin
                    next_state <= STATE_ERROR;
                end
            end
            
            STATE_ERROR: begin
                error_o <= 1'b1;
                wbm_cyc_o <= 1'b0;
                wbm_stb_o <= 1'b0;
                if (!read_enable_i && !write_enable_i) begin
                    next_state <= STATE_IDLE;
                    error_o <= 1'b0;
                end
            end
        endcase
        
        // Read from buffer
        if (read_enable_i && !buffer_empty) begin
            data_o <= read_buffer[buffer_read_ptr];
            buffer_read_ptr <= buffer_read_ptr + 1'b1;
        end
    end
end

// Byte select generation based on address
assign wbm_sel_o = 4'b1111; // Always full word access for simplicity

endmodule