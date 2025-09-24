// Module: ms2_wb_master
// Description: Wishbone Master interface with round-robin arbitration
// Handles memory read requests from multiple channels
module ms2_wb_master #(
    parameter NUM_CHANNELS    = 4,        // Number of channels
    parameter AW              = 24,       // Address width
    parameter SW              = 16,       // Sample width
    parameter ACCUM_FRAC_BITS = 16        // Fractional bits for accumulator
)(
    // System signals
    input  wire                        clk_i,
    input  wire                        rst_i,
    
    // Interface from channels
    input  wire [NUM_CHANNELS-1:0]     ch_req_i,       // Sample request from channels
    input  wire [AW-1:0]               ch_addr_i [NUM_CHANNELS], // Address from each channel
    
    // Interface to channels
    output logic [NUM_CHANNELS-1:0]    ch_ack_o,       // Sample data acknowledge
    output logic [SW-1:0]              ch_data_o [NUM_CHANNELS], // Sample data to channels
    output logic [NUM_CHANNELS-1:0]    ch_error_o,     // Error signal to channels
    
    // Wishbone Master Interface
    output logic                       wbm_cyc_o,
    output logic                       wbm_stb_o,
    output logic                       wbm_we_o,
    output logic [AW-1:0]              wbm_adr_o,
    input  wire [SW-1:0]               wbm_dat_i,
    input  wire                        wbm_ack_i,
    input  wire                        wbm_err_i
);

    //-----------------------------------------------------------------------------
    // INTERNAL SIGNALS
    //-----------------------------------------------------------------------------
    typedef enum logic [1:0] {
        STATE_IDLE,
        STATE_REQUEST,
        STATE_WAIT_ACK
    } state_t;
    
    state_t current_state, next_state;
    
    // Arbitration signals
    logic [NUM_CHANNELS-1:0] pending_requests;
    logic [NUM_CHANNELS-1:0] request_mask;
    logic [$clog2(NUM_CHANNELS)-1:0] current_channel;
    logic [$clog2(NUM_CHANNELS)-1:0] next_channel;
    logic any_pending_requests;
    
    // Registered signals
    logic [AW-1:0] current_addr;
    logic [$clog2(NUM_CHANNELS)-1:0] registered_channel;
    
    //-----------------------------------------------------------------------------
    // REQUEST ARBITRATION LOGIC
    //-----------------------------------------------------------------------------
    
    // Track pending requests
    always_ff @(posedge clk_i or posedge rst_i) begin
        if (rst_i) begin
            pending_requests <= '0;
        end else begin
            // Set bit when channel requests, clear when acknowledged
            for (int i = 0; i < NUM_CHANNELS; i++) begin
                if (ch_req_i[i] && !ch_ack_o[i]) begin
                    pending_requests[i] <= 1'b1;
                end else if (ch_ack_o[i]) begin
                    pending_requests[i] <= 1'b0;
                end
            end
        end
    end
    
    // Round-robin arbitration
    always_ff @(posedge clk_i or posedge rst_i) begin
        if (rst_i) begin
            current_channel <= '0;
        end else if (current_state == STATE_IDLE && any_pending_requests) begin
            current_channel <= next_channel;
        end
    end
    
    // Find next channel with pending request (round-robin)
    always_comb begin
        next_channel = current_channel;
        any_pending_requests = |pending_requests;
        
        if (any_pending_requests) begin
            // Start searching from next channel
            for (int i = 1; i <= NUM_CHANNELS; i++) begin
                int index = (current_channel + i) % NUM_CHANNELS;
                if (pending_requests[index]) begin
                    next_channel = index;
                    break;
                end
            end
        end
    end
    
    //-----------------------------------------------------------------------------
    // FSM FOR WISHBONE MASTER CONTROL
    //-----------------------------------------------------------------------------
    
    // State register
    always_ff @(posedge clk_i or posedge rst_i) begin
        if (rst_i) begin
            current_state <= STATE_IDLE;
            registered_channel <= '0;
            current_addr <= '0;
        end else begin
            current_state <= next_state;
            
            if (current_state == STATE_IDLE && any_pending_requests) begin
                registered_channel <= next_channel;
                current_addr <= ch_addr_i[next_channel];
            end
        end
    end
    
    // Next state logic
    always_comb begin
        next_state = current_state;
        
        case (current_state)
            STATE_IDLE: begin
                if (any_pending_requests) begin
                    next_state = STATE_REQUEST;
                end
            end
            
            STATE_REQUEST: begin
                next_state = STATE_WAIT_ACK;
            end
            
            STATE_WAIT_ACK: begin
                if (wbm_ack_i || wbm_err_i) begin
                    if (any_pending_requests) begin
                        next_state = STATE_REQUEST;
                    end else begin
                        next_state = STATE_IDLE;
                    end
                end
            end
        endcase
    end
    
    // Output logic
    always_comb begin
        // Default outputs
        wbm_cyc_o = 1'b0;
        wbm_stb_o = 1'b0;
        wbm_we_o = 1'b0;
        wbm_adr_o = '0;
        ch_ack_o = '0;
        ch_error_o = '0;
        
        for (int i = 0; i < NUM_CHANNELS; i++) begin
            ch_data_o[i] = '0;
        end
        
        case (current_state)
            STATE_IDLE: begin
                // Wait for requests
            end
            
            STATE_REQUEST: begin
                wbm_cyc_o = 1'b1;
                wbm_stb_o = 1'b1;
                wbm_we_o = 1'b0; // Read operation
                wbm_adr_o = current_addr;
            end
            
            STATE_WAIT_ACK: begin
                wbm_cyc_o = 1'b1;
                wbm_adr_o = current_addr;
                
                if (wbm_ack_i) begin
                    // Successful read - acknowledge to channel
                    ch_ack_o[registered_channel] = 1'b1;
                    ch_data_o[registered_channel] = wbm_dat_i;
                end else if (wbm_err_i) begin
                    // Error - signal to channel
                    ch_error_o[registered_channel] = 1'b1;
                    ch_ack_o[registered_channel] = 1'b1; // Still acknowledge to clear request
                end
            end
        endcase
    end
    
    // Additional error handling - if wbm_err_i comes without being in WAIT_ACK state
    always_ff @(posedge clk_i or posedge rst_i) begin
        if (rst_i) begin
            // Reset error tracking
        end else if (wbm_err_i && current_state != STATE_WAIT_ACK) begin
            // Unexpected error - log or handle appropriately
            // Could implement global error register here
        end
    end

endmodule
