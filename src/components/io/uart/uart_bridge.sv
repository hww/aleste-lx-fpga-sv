`default_nettype none
module uart_bridge (
    input  logic        clk_54m,      // System clock
    input  logic        rst,          // Synchronous reset
    // UART Interface
    input  logic        uart_rx,      // UART RX line
    output logic        uart_tx,      // UART TX line
    output logic        uart_rx_clk,      // UART RX clock
    output logic        uart_tx_clk,      // UART TX clock
    output logic        uart_tx_busy, // UART TX busy

    // Wishbone Master Interface
    output logic        wb_cyc_o,     // Cycle valid
    output logic        wb_stb_o,     // Strobe
    output logic        wb_we_o,      // Write enable
    output logic [1:0]  wb_sel_o,     // Byte select
    output logic [31:0] wb_adr_o,     // Address
    output logic [31:0] wb_dat_o,     // Data output
    input  logic [31:0] wb_dat_i,     // Data input
    input  logic        wb_ack_i,     // Acknowledge

    // Global status inputs
    input  logic        cpu_halted_i,     // CPU halted status
    input  logic        system_reset_i,   // System reset active
    input  logic        hdmi_vsync_i,     // HDMI VSYNC pulse
    input  logic        sd_card_inserted_i, // SD card present
    input  logic        reset_button_i,   // Reset button pressed
    input  logic        pll_locked_i,     // PLL locked status
    input  logic        sdram_calibrated_i, // SDRAM calibrated
    input  logic        fpga_overload_i,  // FPGA overload/temperature

    output logic [2:0]  state_o,          // Debug state output
    output logic        uart_rx_ready     // UART RX ready
);

// Внутренние сигналы для подключения UART
logic [7:0] uart_din;
logic uart_wr;
logic uart_rx_ready_clr;
logic [7:0] uart_dout;

// Инстанция UART
uart uart_inst (
    .clk_i(clk_54m),
    .rst_i(rst),
    
    // transmitter
    .tx_data_i(uart_din),
    .tx_wr_i(uart_wr), 
    .tx_o(uart_tx),
    .tx_busy_o(uart_tx_busy),
    .tx_clk_o(uart_tx_clk),
    // receiver  
    .rx_i(uart_rx),
    .rx_ready_o(uart_rx_ready),
    .rx_ready_clr_i(uart_rx_ready_clr),
    .rx_data_o(uart_dout),
    .rx_clk_o(uart_rx_clk)
);

// Состояния конечного автомата протокола
typedef enum logic [2:0] {
    STATE_IDLE        = 3'b000,
    STATE_READ_CMD    = 3'b001,
    STATE_READ_ADDR   = 3'b010,
    STATE_READ_DATA   = 3'b011,
    STATE_WB_WRITE    = 3'b100,
    STATE_WB_READ     = 3'b101,
    STATE_SEND_RESP   = 3'b110,
    STATE_SEND_STATUS = 3'b111
} state_t;

state_t current_state = STATE_IDLE;

// Регистры для сбора пакета
logic [7:0]  cmd_reg = 0;
logic [31:0] addr_reg = 0;
logic [31:0] data_reg = 0;
logic [4:0]  byte_counter = 0;
logic [7:0]  data_size = 0;

// Регистры управления системой
logic [7:0] global_control_reg = 8'h80;  // R0 - Global Control
logic [7:0] global_status_reg = 8'h00;   // Глобальный статус

// Бит эхо-режима из global_control_reg
logic echo_mode;
assign echo_mode = global_control_reg[7];

// Расчет размера данных из команды
function [7:0] get_data_size;
    input [7:0] cmd;
    begin
        case (cmd[3:0])
            4'b0000: get_data_size = 8'd1;
            4'b0001: get_data_size = 8'd2;
            4'b0010: get_data_size = 8'd4;
            4'b0011: get_data_size = 8'd8;
            4'b0100: get_data_size = 8'd16;
            4'b0101: get_data_size = 8'd32;
            4'b0110: get_data_size = 8'd64;
            4'b0111: get_data_size = 8'd128;
            default: get_data_size = 8'd1;
        endcase
    end
endfunction

// Определение типа команды
function [2:0] get_cmd_type;
    input [7:0] cmd;
    begin
        get_cmd_type = cmd[6:4];
    end
endfunction

// Обновление глобального статуса
always_comb begin
    global_status_reg[0] = cpu_halted_i;
    global_status_reg[1] = system_reset_i;
    global_status_reg[2] = hdmi_vsync_i;
    global_status_reg[3] = sd_card_inserted_i;
    global_status_reg[4] = reset_button_i;
    global_status_reg[5] = pll_locked_i;
    global_status_reg[6] = sdram_calibrated_i;
    global_status_reg[7] = fpga_overload_i;
end

// Регистр ответа
logic [7:0] response_data = 0;

// Регистры для выходов Wishbone
logic [31:0] wb_adr_reg = 0;
logic [31:0] wb_dat_reg = 0;
logic [1:0]  wb_sel_reg = 0;

// Основной конечный автомат
always_ff @(posedge clk_54m) begin
    if (rst) begin
        current_state <= STATE_IDLE;
        cmd_reg <= '0;
        addr_reg <= '0;
        data_reg <= '0;
        byte_counter <= '0;
        data_size <= '0;
        uart_rx_ready_clr <= '0;
        uart_wr <= '0;
        uart_din <= '0;
        wb_cyc_o <= '0;
        wb_stb_o <= '0;
        wb_we_o <= '0;
        response_data <= '0;
        global_control_reg <= 8'h80;
        wb_adr_reg <= '0;
        wb_dat_reg <= '0;
        wb_sel_reg <= '0;
    end else begin
        // Сброс сигналов по умолчанию
        uart_rx_ready_clr <= '0;
        uart_wr <= '0;
        wb_cyc_o <= '0;
        wb_stb_o <= '0;
        wb_we_o <= '0;

        case (current_state)
            STATE_IDLE: begin
                if (uart_rx_ready) begin
                    // Эхо-режим: отправляем обратно принятые байты
                    if (echo_mode) begin
                        if (!uart_tx_busy && !uart_wr) begin
                            uart_rx_ready_clr <= 1'b1;
                            uart_wr <= 1'b1;
                            uart_din <= uart_dout;
                            // Отключаем эхо при получении ENTER (0x0A - LF)
                            if (uart_dout == 8'h0D || uart_dout == 8'h0A) begin  // CR или LF
                                global_control_reg[7] <= 1'b0;  // Также сбрасываем бит в регистре
                            end
                        end
                    end else begin
                        uart_rx_ready_clr <= 1'b1;
                        cmd_reg <= uart_dout;
                        byte_counter <= '0;
                        addr_reg <= '0;
                        data_reg <= '0;
                        current_state <= STATE_READ_CMD;
                        data_size <= get_data_size(uart_dout);
                    end
                end
            end
            
            STATE_READ_CMD: begin
                uart_rx_ready_clr <= 1'b0;
                
                case (get_cmd_type(cmd_reg))
                    // Чтение памяти - требуется адрес
                    3'b000: begin
                        if (byte_counter < 4) begin
                            if (uart_rx_ready) begin
                                uart_rx_ready_clr <= 1'b1;
                                addr_reg <= {addr_reg[23:0], uart_dout};
                                byte_counter <= byte_counter + 1;
                            end
                        end else begin
                            wb_adr_reg <= addr_reg;
                            current_state <= STATE_WB_READ;
                        end
                    end
                    
                    // Запись памяти - требуется адрес + данные
                    3'b001: begin
                        if (byte_counter < 4) begin
                            if (uart_rx_ready) begin
                                uart_rx_ready_clr <= 1'b1;
                                addr_reg <= {addr_reg[23:0], uart_dout};
                                byte_counter <= byte_counter + 1;
                            end
                        end else if (byte_counter < (4 + data_size)) begin
                            if (uart_rx_ready) begin
                                uart_rx_ready_clr <= 1'b1;
                                data_reg <= {data_reg[23:0], uart_dout};
                                byte_counter <= byte_counter + 1;
                            end
                        end else begin
                            wb_adr_reg <= addr_reg;
                            wb_dat_reg <= data_reg;
                            wb_sel_reg <= 2'b11;
                            current_state <= STATE_WB_WRITE;
                        end
                    end
                    
                    // Чтение регистра - требуется адрес регистра
                    3'b010: begin
                        if (uart_rx_ready) begin
                            uart_rx_ready_clr <= 1'b1;
                            addr_reg[7:0] <= uart_dout;
                            current_state <= STATE_SEND_RESP;
                            
                            // Чтение из внутренних регистров
                            case (uart_dout)
                                8'h00: response_data <= global_control_reg;  // R0
                                8'h01: response_data <= global_status_reg;   // R1
                                default: response_data <= 8'hFF; // Неизвестный регистр
                            endcase
                        end
                    end
                    
                    // Запись регистра - требуется адрес + данные
                    3'b011: begin
                        if (byte_counter < 1) begin
                            if (uart_rx_ready) begin
                                uart_rx_ready_clr <= 1'b1;
                                addr_reg[7:0] <= uart_dout;
                                byte_counter <= byte_counter + 1;
                            end
                        end else begin
                            if (uart_rx_ready) begin
                                uart_rx_ready_clr <= 1'b1;
                                
                                // Запись во внутренние регистры
                                case (addr_reg[7:0])
                                    8'h00: global_control_reg <= uart_dout;  // R0
                                    // 8'h01: global_status_reg read-only
                                endcase
                                
                                response_data <= 8'h00; // Успех
                                current_state <= STATE_SEND_RESP;
                            end
                        end
                    end
                    
                    // Ивенты - требуется ID ивента + параметр
                    3'b100: begin
                        if (byte_counter < 2) begin
                            if (uart_rx_ready) begin
                                uart_rx_ready_clr <= 1'b1;
                                if (byte_counter == 0) begin
                                    addr_reg[7:0] <= uart_dout; // Event ID
                                end else begin
                                    data_reg[7:0] <= uart_dout; // Event parameter
                                end
                                byte_counter <= byte_counter + 1;
                            end
                        end else begin
                            // Обработка ивентов
                            response_data <= 8'h00; // Успех
                            current_state <= STATE_SEND_RESP;
                        end
                    end
                    
                    // Глобальный статус - немедленный ответ
                    3'b101: begin
                        response_data <= global_status_reg;
                        current_state <= STATE_SEND_RESP;
                    end
                    
                    default: begin
                        // Неизвестная команда
                        response_data <= 8'hFF;
                        current_state <= STATE_SEND_RESP;
                    end
                endcase
            end
            
            STATE_WB_READ: begin
                wb_cyc_o <= 1'b1;
                wb_stb_o <= 1'b1;
                wb_we_o <= 1'b0;
                
                if (wb_ack_i) begin
                    response_data <= wb_dat_i[7:0]; // Первый байт данных
                    current_state <= STATE_SEND_RESP;
                end
            end
            
            STATE_WB_WRITE: begin
                wb_cyc_o <= 1'b1;
                wb_stb_o <= 1'b1;
                wb_we_o <= 1'b1;
                
                if (wb_ack_i) begin
                    response_data <= 8'h00; // Успех
                    current_state <= STATE_SEND_RESP;
                end
            end
            
            STATE_SEND_RESP: begin
                if (!uart_tx_busy && !uart_wr) begin
                    uart_wr <= 1'b1;
                    uart_din <= response_data;
                    current_state <= STATE_IDLE;
                end
            end
            
            default: begin
                current_state <= STATE_IDLE;
            end
        endcase
        

    end
end

// Непрерывные присвоения для выходов Wishbone
assign wb_adr_o = wb_adr_reg;
assign wb_dat_o = wb_dat_reg;
assign wb_sel_o = wb_sel_reg;
assign state_o = current_state;

endmodule
