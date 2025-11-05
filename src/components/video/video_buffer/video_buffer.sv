`default_nettype none

module video_buffer (
    input   logic        vmem_clk_i,
    input   logic        rst_i,

    input   logic [1:0]  cfg_rate,
    // Memory interface
    input   logic [15:0] vmem_data_i,
    input   logic        vmem_ack0_i,
    input   logic        vmem_ack1_i,
    output  logic        vmem_req_o,
    
    // CRTC timing
    input   logic        pixel_clk_i,
    input   logic        stb_pixel_i,
    input   logic        stb_byte_i,
    input   logic        stb_origin_i,

    output  logic        stb_pixel_o,
    output  logic        stb_byte_o,
    input   logic        de_i,
    output  logic        de_o,
    output  logic [7:0]  data_o,

    // Debugging
    output  logic [1:0]  debug_byte_select_o
);

// Регистры состояния
logic [15:0] input_buffer [0:1];
logic [7:0] output_buffer [0:3];

// ==============================================
// Input data FSM
// ==============================================

localparam VMEM_IDLE = 2'b00;
localparam VMEM_READ_WORD_0 = 2'b01;
localparam VMEM_READ_WORD_1 = 2'b10;
localparam VMEM_WAIT = 2'b11;

logic [1:0] vmem_state = 0;
logic data_req;
logic data_valid;

always @(posedge vmem_clk_i) begin
    if (rst_i) begin
        data_valid <= 0;
        vmem_state <= '0;
        vmem_req_o <= '0;
        input_buffer[0] <= 16'b0;
        input_buffer[1] <= 16'b0;
    end else begin
        case (vmem_state)
        VMEM_IDLE: begin
            if (data_req) begin  // Запрос только когда DE активно
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
                vmem_state <= VMEM_WAIT;
                data_valid <= '1;
            end
        end
        
        VMEM_WAIT: begin
            if (!data_req) begin
                vmem_state <= VMEM_IDLE;
                data_valid <= '0;
            end
        end

        default: vmem_state <= VMEM_IDLE;
        endcase
    end
end

// ==============================================
// Convert input register to the bytes stream
// ==============================================

logic [1:0] byte_count = 0;
logic bufer_enable, de_delayed, phase1;

always @(posedge pixel_clk_i) begin
    if (rst_i) begin
        byte_count <= 2'b00;
        output_buffer[0] <= 0;
        output_buffer[1] <= 0;
        output_buffer[2] <= 0;
        output_buffer[3] <= 0;
        data_req <= '0;
    end else begin

        if (stb_origin_i) begin
            case (cfg_rate)
                2'b00: begin // 2 bytes per 16 pixels
                    data_req <= de_i && !phase1;
                end
                2'b01: begin // 4 bytes per 16 pixels
                    data_req <= de_i && !phase1;
                end
                2'b10: begin // 8 bytes per 16 pixels
                    data_req <= de_i;
                end
                2'b11: begin // 16 bytes per 16 pixels
                    data_req <= de_i;
                end
            endcase
            // T4 or T12 stb byte is based on mode 
            if (data_valid) begin  // Только при активном DE
                output_buffer[0] <= input_buffer[0][7:0];
                output_buffer[1] <= input_buffer[0][15:8];
                output_buffer[2] <= input_buffer[1][7:0];
                output_buffer[3] <= input_buffer[1][15:8];
            end            
        end

        // Count bytes every byte access
        if (stb_byte_i) begin
            // T4 or T12
            // T0, T4, T8, T12 
            // T0, T2, T4, T6, T8, T10, T12, T14
            if (stb_origin_i) begin
                case (cfg_rate)
                    2'b00: begin // 2 bytes per 16 pixels
                        if (phase1) byte_count <= 2'b00;
                        else byte_count <= byte_count + 2'b01;
                    end
                    2'b01: begin // 4 bytes per 16 pixels
                        if (phase1) byte_count <= 2'b00;
                        else byte_count <= byte_count + 2'b01;
                    end
                    2'b10: begin // 8 bytes per 16 pixels
                        byte_count <= 2'b00;
                    end
                    2'b11: begin // 16 bytes per 16 pixels
                        byte_count <= 2'b00;
                    end
                endcase
            end else begin
                // reset to 0 every origin
                byte_count <= byte_count + 2'b01;
            end
        end
    end
end

// EF 0123456789ABCDEF 0123
//        4       C          <--- origin
always @(posedge pixel_clk_i) begin
    if (rst_i) begin
        bufer_enable <= '0;
        de_delayed <= '0;
        phase1 <= '0;
    end else begin
        if (!de_i) begin
            // первый доступ в память прогрев
            phase1 <= '0;                    
        end else if (stb_origin_i) begin
            phase1 <= ~phase1;
        end
        if (stb_origin_i) begin
            bufer_enable <= de_i; // прогрев пайплайна
            de_delayed <= bufer_enable; 
        end 
    end
end


// Delay the signals 1 pixel because the input signals used to copy 
// data to the output
always @(posedge pixel_clk_i) begin
    if (rst_i) begin
        stb_byte_o <= '0;     
        stb_pixel_o <= '0;
    end else begin
        stb_byte_o <= stb_byte_i;  // stb_byte_o только при активном DE
        stb_pixel_o <= stb_pixel_i;
    end
end
// Video interface - выдаем 0 когда DE неактивно
assign data_o = de_delayed ? output_buffer[byte_count] : 8'h00;
assign de_o = de_delayed;
// debugging
assign debug_byte_select_o = byte_count;

endmodule
