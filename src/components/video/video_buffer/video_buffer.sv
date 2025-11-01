// =============================================================================
// VBUF - Color Palette Unit
// =============================================================================
// For Aleste LX project by H2W
// =============================================================================
// The video output buffer
// Supports double buffering and burst mode
// =============================================================================


`default_nettype none

module video_buffer (
    input   logic        vmem_clk_i,
    input   logic        rst_i,

    // Memory interface
    input   logic [15:0] vmem_data_i,
    input   logic        vmem_ack0_i,
    input   logic        vmem_ack1_i,
    output  logic        vmem_req_o,
    
    // CRTC timing
    input   logic        pixel_clk_i,
    input   logic        stb_char_i,
    input   logic        stb_byte_i,
    output  logic        stb_char_o,
    output  logic        stb_byte_o,
    input   logic        de_i,
    output  logic        de_o,
    output  logic [7:0]  data_o,

    // Debugging
    output  logic [1:0]  debug_byte_select_o
);

// Регистры состояния
logic [15:0] input_buffer [0:1];
logic [15:0] output_buffer [0:1];

// ==============================================
// Inpyut data FSM
// ==============================================

localparam VMEM_IDLE = 3'b000;
localparam VMEM_READ_WORD_0 = 3'b001;
localparam VMEM_READ_WORD_1 = 3'b010;

logic [2:0] vmem_state = 0;

always @(posedge vmem_clk_i) begin
    if (rst_i) begin
        vmem_state <= '0;
        vmem_req_o <= '0;
        input_buffer[0] <= 16'b0;
        input_buffer[1] <= 16'b0;
    end else begin
        casez (vmem_state)
        VMEM_IDLE: begin
            if (stb_char_i) begin
                vmem_req_o <= 1'b1;
                vmem_state <= VMEM_READ_WORD_0;
            end
        end

        VMEM_READ_WORD_0: begin
            if (vmem_ack0_i) begin
                input_buffer[0] <= vmem_data_i;
                vmem_state <= VMEM_READ_WORD_1;
            end
        end

        VMEM_READ_WORD_1: begin
            if (vmem_ack1_i) begin
                input_buffer[1] <= vmem_data_i;
                vmem_req_o <= '0;
                vmem_state <= VMEM_IDLE;
            end
        end
        endcase
    end
end

// ==============================================
// Convert input logicister to the bytes stream
// ==============================================

logic [1:0] byte_count = 0;

always @(posedge pixel_clk_i) begin
    if (rst_i) begin
        byte_count <= 2'b00;
        output_buffer[0] <= 0;
        output_buffer[1] <= 0;
    end else begin
        if (stb_char_i) begin
            byte_count <= 2'b00;
            output_buffer[0] <= input_buffer[0];
            output_buffer[1] <= input_buffer[1];
        end
        else if (stb_byte_i) begin
            byte_count <= byte_count + 2'b01;
        end
    end
end

// Delay the sygnals 1 pixel
always @(posedge pixel_clk_i) begin
    if (rst_i) begin
        de_o <= 1'b0;
        stb_char_o <= 1'b0;
        stb_byte_o <= 1'b0;        
    end else begin
        de_o <= de_i;       
        stb_char_o <= stb_char_i;
        stb_byte_o <= stb_byte_i;    
    end
end

// Video interface
assign data_o = byte_count[0] ? output_buffer[byte_count[1]][15:8] : output_buffer[byte_count[1]][7:0];


// debugging
assign debug_byte_select_o = byte_count;

endmodule
