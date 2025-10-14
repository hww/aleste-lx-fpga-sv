// test_data_generator_final_working.v
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
reg address_reset;

// =============================================================================
// State Machine and Data Logic
// =============================================================================
always @(posedge clk or posedge rst) begin
    if (rst) begin
        current_state <= IDLE;
        wb_cyc_o <= 1'b0;
        wb_stb_o <= 1'b0;
        wb_we_o <= 1'b0;
        wb_adr_o <= 24'h0;
        wb_dat_o <= 16'h0;
        wb_sel_o <= 2'b00;
        wb_tag_o <= 2'b00;
        address <= 24'h0;
        write_data <= 16'h0001;
        done_o <= 1'b0;
        error_count <= 16'b0;
        address_reset <= 1'b0;
    end else begin
        case (current_state)
            IDLE: begin
                wb_cyc_o <= 1'b0;
                wb_stb_o <= 1'b0;
                wb_we_o <= 1'b0;
                address <= 24'h0;
                write_data <= 16'h0001;
                done_o <= 1'b0;
                error_count <= 16'b0;
                address_reset <= 1'b0;
                
                if (start_i) begin
                    current_state <= WRITE_MEM;
                    wb_cyc_o <= 1'b1;
                    wb_stb_o <= 1'b1;
                    wb_we_o <= 1'b1;
                    wb_adr_o <= 24'h0;
                    wb_dat_o <= 16'h0001;
                    wb_sel_o <= 2'b11;
                    wb_tag_o <= 2'b00;
                end
            end
            
            WRITE_MEM: begin
                wb_cyc_o <= 1'b1;
                wb_stb_o <= 1'b1;
                wb_we_o <= 1'b1;
                wb_sel_o <= 2'b11;
                wb_tag_o <= 2'b00;
                
                if (wb_ack_i) begin
                    // Обновляем адрес и данные
                    address <= address + 24'h2;
                    write_data <= write_data + 16'h1;
                    wb_adr_o <= address + 24'h2;
                    wb_dat_o <= write_data + 16'h1;
                    
                    // Проверяем переход в verify после 6-й записи
                    if (address == 24'h00000A) begin // После записи по адресу 0xA
                        current_state <= VERIFY;
                        // Сбрасываем для verify phase
                        address <= 24'h0;
                        write_data <= 16'h0001;
                        wb_adr_o <= 24'h0;
                        wb_we_o <= 1'b0;
                    end
                end
            end
            
            VERIFY: begin
                wb_cyc_o <= 1'b1;
                wb_stb_o <= 1'b1;
                wb_we_o <= 1'b0;
                wb_sel_o <= 2'b11;
                wb_tag_o <= 2'b00;
                wb_adr_o <= address;
                
                if (wb_ack_i) begin
                    read_data <= wb_dat_i;
                    
                    // Проверяем данные
                    if (wb_dat_i != write_data) begin
                        error_count <= error_count + 16'h1;
                    end
                    
                    // Обновляем адрес и данные
                    address <= address + 24'h2;
                    write_data <= write_data + 16'h1;
                    wb_adr_o <= address + 24'h2;
                    
                    // Проверяем переход в done после 6-го чтения
                    if (address == 24'h00000A) begin // После чтения по адресу 0xA
                        current_state <= DONE;
                        wb_cyc_o <= 1'b0;
                        wb_stb_o <= 1'b0;
                        done_o <= 1'b1;
                    end
                end
            end
            
            DONE: begin
                // Остаемся в этом состоянии
                wb_cyc_o <= 1'b0;
                wb_stb_o <= 1'b0;
                wb_we_o <= 1'b0;
                done_o <= 1'b1;
            end
        endcase
    end
end

endmodule
