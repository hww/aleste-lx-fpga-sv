module pixel_pipeline (
    input wire clk,
    input wire rst,
    
    // Input from video memory
    input wire [15:0] vmem_data,
    input wire vmem_valid,
    
    // Configuration from palette control register
    input wire [1:0] bpp_mode,    // 00=1bpp, 01=2bpp, 10=4bpp, 11=8bpp
    input wire tetrad_mode,       // 0=CPC-style, 1=тетрадный
    input wire cpc_override,      // 0=legacy CPC modes, 1=extended
    
    // Output to palette
    output reg [7:0] pixel_index,
    output reg pixel_valid
);

// Internal registers
reg [15:0] shift_reg;
reg [3:0] bit_counter;
reg [15:0] data_latch;
reg processing;

// FSM states
localparam IDLE = 1'b0;
localparam PROCESSING = 1'b1;
reg state;

// Main pipeline
always @(posedge clk or posedge rst) begin
    if (rst) begin
        shift_reg <= 16'b0;
        bit_counter <= 4'b0;
        data_latch <= 16'b0;
        pixel_valid <= 1'b0;
        pixel_index <= 8'b0;
        state <= IDLE;
        processing <= 1'b0;
    end else begin
        pixel_valid <= 1'b0;
        
        case (state)
            IDLE: begin
                if (vmem_valid) begin
                    // Latch new data and start processing
                    data_latch <= vmem_data;
                    shift_reg <= vmem_data;
                    bit_counter <= 4'b0;
                    state <= PROCESSING;
                    processing <= 1'b1;
                end
            end
            
            PROCESSING: begin
                if (bit_counter < 16) begin
                    // Extract next pixel based on mode
                    case (bpp_mode)
                        2'b00: begin // 1 bpp - 16 pixels per word
                            pixel_index <= {7'b0, shift_reg[15]};
                            shift_reg <= {shift_reg[14:0], 1'b0};
                            bit_counter <= bit_counter + 1;
                            pixel_valid <= 1'b1;
                        end
                        
                        2'b01: begin // 2 bpp - 8 pixels per word
                            if (tetrad_mode) begin
                                // Тетрадный режим: группы по 2 бита
                                case (bit_counter[2:0])
                                    3'b000: pixel_index <= {6'b0, shift_reg[15:14]};
                                    3'b010: pixel_index <= {6'b0, shift_reg[13:12]};
                                    3'b100: pixel_index <= {6'b0, shift_reg[11:10]};
                                    3'b110: pixel_index <= {6'b0, shift_reg[9:8]};
                                    default: pixel_index <= 8'b0;
                                endcase
                                shift_reg <= {shift_reg[13:0], 2'b0};
                                bit_counter <= bit_counter + 2;
                            end else begin
                                // CPC-style: чередование битов
                                // pixel0: bits 7,5,3,1; pixel1: bits 6,4,2,0
                                case (bit_counter[2:0])
                                    3'b000: pixel_index <= {6'b0, shift_reg[15], shift_reg[13]};
                                    3'b010: pixel_index <= {6'b0, shift_reg[11], shift_reg[9]};
                                    3'b100: pixel_index <= {6'b0, shift_reg[7], shift_reg[5]};
                                    3'b110: pixel_index <= {6'b0, shift_reg[3], shift_reg[1]};
                                    default: pixel_index <= 8'b0;
                                endcase
                                shift_reg <= {shift_reg[14:0], 1'b0}; // Shift by 1 for interleaved
                                bit_counter <= bit_counter + 1;
                            end
                            pixel_valid <= 1'b1;
                        end
                        
                        2'b10: begin // 4 bpp - 4 pixels per word
                            case (bit_counter[1:0])
                                2'b00: pixel_index <= {4'b0, shift_reg[15:12]};
                                2'b01: pixel_index <= {4'b0, shift_reg[11:8]};
                                2'b10: pixel_index <= {4'b0, shift_reg[7:4]};
                                2'b11: pixel_index <= {4'b0, shift_reg[3:0]};
                            endcase
                            shift_reg <= 16'b0; // All pixels extracted at once
                            bit_counter <= 4'b1111; // Mark as completed
                            pixel_valid <= 1'b1;
                        end
                        
                        2'b11: begin // 8 bpp - 2 pixels per word
                            case (bit_counter[0])
                                1'b0: pixel_index <= shift_reg[15:8];
                                1'b1: pixel_index <= shift_reg[7:0];
                            endcase
                            shift_reg <= 16'b0; // All pixels extracted at once  
                            bit_counter <= 4'b1111; // Mark as completed
                            pixel_valid <= 1'b1;
                        end
                    endcase
                end else begin
                    // All pixels extracted from current word
                    state <= IDLE;
                    processing <= 1'b0;
                end
            end
        endcase
    end
end

// Optional: Output ready signal for flow control
wire ready_for_data;
assign ready_for_data = (state == IDLE) || (bit_counter >= 16);

endmodule

