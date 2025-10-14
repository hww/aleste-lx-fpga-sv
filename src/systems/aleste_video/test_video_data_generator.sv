// test_video_data_generator_fixed.v
`default_nettype none

module test_video_data_generator (
    input clk, rst,
    
    // Wishbone Master Interface
    output reg        wb_cyc_o,
    output reg        wb_stb_o,
    input             wb_ack_i,
    output reg        wb_we_o,
    output reg [23:0] wb_adr_o,
    output reg [15:0] wb_dat_o,
    output reg [1:0]  wb_sel_o,
    output reg [1:0]  wb_tag_o,
    
    // Control
    input start_i,
    output reg active_o
);

// =============================================================================
// Internal state
// =============================================================================
typedef enum logic [1:0] {
    IDLE      = 2'b00,
    FILL_VRAM = 2'b01,
    RUNNING   = 2'b10
} state_t;

state_t current_state;

reg [23:0] address;
reg [23:0] next_address;
reg [1:0] pattern_type;
reg [15:0] frame_counter;

// =============================================================================
// Pattern Generators
// =============================================================================
function [15:0] generate_pattern;
    input [23:0] addr;
    input [1:0]  ptype;
    begin
        case (ptype)
            2'b00: generate_pattern = {addr[7:0], addr[15:8]}; // Градиент
            2'b01: generate_pattern = {addr[15:0] ^ 16'hFFFF}; // Шахматка  
            2'b10: generate_pattern = {8'h00, addr[15:8]};     // Вертикальные полосы
            2'b11: generate_pattern = {addr[7:0], 8'h00};      // Горизонтальные полосы
        endcase
    end
endfunction

// =============================================================================
// State Machine - БЕСКОНЕЧНОЕ ЗАПОЛНЕНИЕ
// =============================================================================
always @(posedge clk or posedge rst) begin
    if (rst) begin
        current_state <= IDLE;
        wb_cyc_o <= 1'b0;
        wb_stb_o <= 1'b0;
        wb_we_o <= 1'b0;
        wb_adr_o <= 24'h0;
        wb_dat_o <= 16'h0;
        wb_sel_o <= 2'b11;
        wb_tag_o <= 2'b00;
        address <= 24'h0;
        pattern_type <= 2'b00;
        active_o <= 1'b0;
        frame_counter <= 16'h0;
    end else begin
        case (current_state)
            IDLE: begin
                wb_cyc_o <= 1'b0;
                wb_stb_o <= 1'b0;
                wb_we_o <= 1'b0;
                address <= 24'h0;
                active_o <= 1'b0;
                frame_counter <= 16'h0;
                
                if (start_i) begin
                    current_state <= FILL_VRAM;
                    wb_cyc_o <= 1'b1;
                    wb_stb_o <= 1'b1;
                    wb_we_o <= 1'b1;
                    wb_adr_o <= 24'h0;
                    wb_dat_o <= generate_pattern(24'h0, pattern_type);
                    active_o <= 1'b1;
                end
            end
            
            FILL_VRAM, RUNNING: begin
                // Обновляем адрес ТОЛЬКО при получении ack
                if (wb_ack_i) begin
                    address <= address + 24'h2;
                    
                    // Проверяем достижение конца 64KB
                    if (address >= 24'hFFFE) begin
                        address <= 24'h0;
                        pattern_type <= pattern_type + 2'b01;
                        frame_counter <= frame_counter + 16'h1;
                        
                        // Переход в RUNNING после первого заполнения
                        if (current_state == FILL_VRAM) begin
                            current_state <= RUNNING;
                        end
                    end
                    
                    // Обновляем выходные сигналы
                    wb_adr_o <= address + 24'h2;
                    wb_dat_o <= generate_pattern(address + 24'h2, pattern_type);
                end
                
                // Всегда активны в этих состояниях
                wb_cyc_o <= 1'b1;
                wb_stb_o <= 1'b1;
                wb_we_o <= 1'b1;
            end
        endcase
    end
end

endmodule
