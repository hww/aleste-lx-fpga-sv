// test_data_generator.v
`default_nettype none

module test_data_generator (
    input clk, rst,
    
    // Wishbone Master Interface
    output reg        wb_cyc_o,
    output reg        wb_stb_o,
    input             wb_ack_i,
    output reg        wb_we_o,
    output reg [23:0] wb_adr_o,
    output reg [15:0] wb_dat_o,
    input      [15:0] wb_dat_i,
    output reg [1:0]  wb_sel_o,
    output reg [1:0]  wb_tag_o,
    
    // Control
    input start_i,
    output reg done_o
);

// =============================================================================
// Internal state
// =============================================================================
typedef enum logic [1:0] {
    IDLE      = 2'b00,
    WRITE_MEM = 2'b01,
    VERIFY    = 2'b10,
    DONE      = 2'b11
} state_t;

state_t current_state;

reg [23:0] address;
reg [15:0] write_data;
reg [15:0] read_data;
reg [15:0] error_count;

// =============================================================================
// Test Pattern Generator
// =============================================================================
always @(posedge clk or posedge rst) begin
    if (rst) begin
        current_state <= IDLE;
        wb_cyc_o <= 1'b0;
        wb_stb_o <= 1'b0;
        wb_we_o <= 1'b0;
        address <= 24'h0;
        write_data <= 16'h0001;
        done_o <= 1'b0;
        error_count <= 16'b0;
    end else begin
        case (current_state)
            IDLE: begin
                if (start_i) begin
                    current_state <= WRITE_MEM;
                    address <= 24'h000000;
                    write_data <= 16'h0001;
                    wb_cyc_o <= 1'b1;
                    wb_stb_o <= 1'b1;
                    wb_we_o <= 1'b1;
                    wb_tag_o <= 2'b00; // Доступ к памяти
                end
            end
            
            WRITE_MEM: begin
                wb_adr_o <= address;
                wb_dat_o <= write_data;
                wb_sel_o <= 2'b11; // Оба байта
                
                if (wb_ack_i) begin
                    address <= address + 24'h2;
                    write_data <= write_data + 16'h1;
                    
                    if (address >= 24'h00FFFE) begin // Заполнили 64KB
                        current_state <= VERIFY;
                        address <= 24'h000000;
                        write_data <= 16'h0001;
                        wb_we_o <= 1'b0; // Переключаемся на чтение
                    end
                end
            end
            
            VERIFY: begin
                wb_adr_o <= address;
                
                if (wb_ack_i) begin
                    read_data <= wb_dat_i;
                    
                    // Проверяем считанные данные
                    if (wb_dat_i != write_data) begin
                        error_count <= error_count + 16'h1;
                    end
                    
                    address <= address + 24'h2;
                    write_data <= write_data + 16'h1;
                    
                    if (address >= 24'h00FFFE) begin
                        current_state <= DONE;
                        wb_cyc_o <= 1'b0;
                        wb_stb_o <= 1'b0;
                        done_o <= 1'b1;
                    end
                end
            end
            
            DONE: begin
                // Остаемся в этом состоянии
            end
        endcase
    end
end

endmodule