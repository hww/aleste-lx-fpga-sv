module spi_flash_reader (
    input wire clk_i,           // 100 MHz
    input wire rst_i,
    input wire start_i,
    input wire [23:0] flash_addr_i,
    output reg [15:0] data_o,
    output reg valid_o,
    output reg busy_o,
    
    // SPI физические линии - правильные пины!
    output wire spi_cs_n,      // N8
    output wire spi_clk,       // N9  
    output wire spi_mosi,      // T8
    input wire spi_miso,       // T7
    output wire spi_io2,       // M7 (для quad mode, пока не используем)
    output wire spi_io3        // N7 (для quad mode, пока не используем)
);

// =============================================================================
// Состояния FSM
// =============================================================================
typedef enum logic [2:0] {
    IDLE = 3'b000,
    CMD_SEND = 3'b001,
    ADDR_SEND = 3'b010,
    DUMMY_CYCLE = 3'b011,
    DATA_READ = 3'b100,
    DATA_VALID = 3'b101
} state_t;

state_t current_state;

// =============================================================================
// Регистры управления
// =============================================================================
reg [7:0] shift_reg;
reg [2:0] bit_counter;
reg [23:0] addr_reg;
reg [3:0] byte_counter;
reg [15:0] data_buffer;

// =============================================================================
// Параметры SPI Flash
// =============================================================================
parameter CMD_READ = 8'h03;        // Standard Read
parameter CMD_READ_ID = 8'h9F;     // Read Manufacturer ID
parameter DUMMY_CLOCKS = 8;        // Dummy clocks for read

// =============================================================================
// Основная FSM
// =============================================================================
always @(posedge clk_i or posedge rst_i) begin
    if (rst_i) begin
        current_state <= IDLE;
        valid_o <= 1'b0;
        busy_o <= 1'b0;
        data_o <= 16'b0;
        bit_counter <= 3'b000;
        byte_counter <= 4'b0000;
    end else begin
        valid_o <= 1'b0;
        
        case (current_state)
            IDLE: begin
                busy_o <= 1'b0;
                if (start_i) begin
                    current_state <= CMD_SEND;
                    addr_reg <= flash_addr_i;
                    busy_o <= 1'b1;
                    bit_counter <= 3'b000;
                    shift_reg <= CMD_READ;
                end
            end
            
            CMD_SEND: begin
                if (bit_counter == 3'b111) begin
                    current_state <= ADDR_SEND;
                    bit_counter <= 3'b000;
                    shift_reg <= addr_reg[23:16]; // Старший байт адреса
                end else begin
                    bit_counter <= bit_counter + 1;
                end
            end
            
            ADDR_SEND: begin
                if (bit_counter == 3'b111) begin
                    if (addr_reg[23:8] == 16'h0000) begin // Отправили 3 байта адреса
                        current_state <= DUMMY_CYCLE;
                        bit_counter <= 3'b000;
                    end else begin
                        shift_reg <= addr_reg[15:8]; // Следующий байт адреса
                        addr_reg <= {addr_reg[15:0], 8'h00};
                    end
                    bit_counter <= 3'b000;
                end else begin
                    bit_counter <= bit_counter + 1;
                end
            end
            
            DUMMY_CYCLE: begin
                if (bit_counter == DUMMY_CLOCKS[2:0]) begin
                    current_state <= DATA_READ;
                    bit_counter <= 3'b000;
                    byte_counter <= 4'b0000;
                    data_buffer <= 16'b0;
                end else begin
                    bit_counter <= bit_counter + 1;
                end
            end
            
            DATA_READ: begin
                // Собираем данные по спаду clock (после того как установили данные)
                data_buffer <= {data_buffer[14:0], spi_miso};
                
                if (bit_counter == 3'b111) begin
                    byte_counter <= byte_counter + 1;
                    
                    if (byte_counter == 4'b0001) begin // Собрали 2 байта
                        current_state <= DATA_VALID;
                        data_o <= data_buffer;
                        valid_o <= 1'b1;
                    end
                end
                
                bit_counter <= bit_counter + 1;
            end
            
            DATA_VALID: begin
                current_state <= IDLE;
                busy_o <= 1'b0;
            end
        endcase
    end
end

// =============================================================================
// SPI сигналы
// =============================================================================
assign spi_cs_n = (current_state == IDLE);
assign spi_clk = (current_state != IDLE) ? ~clk_i : 1'b0; // SPI clock = sys_clock/2
assign spi_mosi = shift_reg[7]; // MSB first

// IO2 и IO3 пока не используем - ставим в высокий импеданс
assign spi_io2 = 1'b1;
assign spi_io3 = 1'b1;

endmodule
