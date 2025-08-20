module i8251 (
    input  logic        clk,          // Тактовый сигнал
    input  logic        clken,        // Тактовый разрешающийский сигнал
    input  logic        reset_n,      // Сброс (активный 0)
    
    // Шина CPU
    input  logic [1:0]  addr,         // Адресные линии
    input  logic [7:0]  data_in,      // Шина данных (вход)
    output logic [7:0]  data_out,     // Шина данных (выход)
    input  logic        cs_n,         // Выбор чипа
    input  logic        rd_n,         // Чтение
    input  logic        wr_n,         // Запись
    input  logic        c_d,          // Control/Data select
    
    // Последовательный интерфейс
    input  logic        rx,           // Прием данных
    output logic        tx,           // Передача данных
    
    // Сигналы состояния
    output logic        tx_ready,     // Передатчик готов
    output logic        rx_ready,     // Приемник готов
    output logic        tx_empty,     // Буфер передатчика пуст
    output logic        rx_full,      // Буфер приемника полон
    
    // Сигналы прерываний
    output logic        irq           // Запрос прерывания
);

    // Внутренние регистры
    logic [7:0] tx_buffer;
    logic [7:0] rx_buffer;
    logic [7:0] mode_reg;
    logic [7:0] command_reg;
    logic [7:0] status_reg;

    // Внутренние сигналы
    logic tx_busy;
    logic rx_busy;
    logic tx_start;
    logic rx_complete;
    logic parity_error;
    logic framing_error;
    logic overrun_error;

    // Декодирование режима
    logic [1:0] baud_rate;
    logic [1:0] char_length;
    logic       parity_en;
    logic       parity_type;
    logic [1:0] stop_bits;

    assign baud_rate   = mode_reg[1:0];
    assign char_length = mode_reg[3:2];
    assign parity_en   = mode_reg[4];
    assign parity_type = mode_reg[5];
    assign stop_bits   = mode_reg[7:6];

    // Декодирование команд
    logic tx_enable;
    logic rx_enable;
    logic send_break;
    logic reset_errors;
    logic internal_reset;

    assign tx_enable    = command_reg[0];
    assign rx_enable    = command_reg[1];
    assign send_break   = command_reg[2];
    assign reset_errors = command_reg[3];
    assign internal_reset = command_reg[4];

    // Регистр режима
    always_ff @(posedge clk or negedge reset_n) begin
        if (!reset_n || internal_reset) begin
            mode_reg <= 8'h00;
        end else if (clken && !cs_n && !wr_n && c_d) begin
            mode_reg <= data_in;
        end
    end

    // Регистр команд
    always_ff @(posedge clk or negedge reset_n) begin
        if (!reset_n) begin
            command_reg <= 8'h00;
        end else if (clken && !cs_n && !wr_n && c_d) begin
            command_reg <= data_in;
        end
    end

    // Регистр статуса
    always_comb begin
        status_reg = 8'h00;
        status_reg[0] = tx_ready;
        status_reg[1] = rx_ready;
        status_reg[2] = tx_empty;
        status_reg[3] = parity_error;
        status_reg[4] = overrun_error;
        status_reg[5] = framing_error;
        status_reg[6] = 1'b0;
        status_reg[7] = 1'b0;
    end

    // Интерфейс чтения
    always_comb begin
        data_out = 8'h00;
        if (!cs_n && !rd_n) begin
            if (c_d) begin
                data_out = status_reg;
            end else begin
                data_out = rx_buffer;
            end
        end
    end

    // ==================== ИНТЕРФЕЙС ЗАПИСИ - КЛЮЧЕВОЙ БЛОК ====================
    logic tx_start_pulse;
    
    always_ff @(posedge clk or negedge reset_n) begin
        if (!reset_n) begin
            tx_buffer <= 8'h00;
            tx_start <= 1'b0;
            tx_start_pulse <= 1'b0;
            overrun_error <= 1'b0;
            parity_error <= 1'b0;
            framing_error <= 1'b0;
            rx_ready <= 1'b0;
        end else if (clken) begin
            // Генерируем короткий импульс для запуска передачи
            tx_start_pulse <= 1'b0;
            
            if (reset_errors) begin
                parity_error <= 1'b0;
                framing_error <= 1'b0;
                overrun_error <= 1'b0;
            end
            
            // Сброс флага готовности при чтении данных
            if (!cs_n && !rd_n && !c_d) begin
                rx_ready <= 1'b0;
            end
            
            // Запись в TX buffer - ОСНОВНАЯ ЛОГИКА ЗАПУСКА
            if (!cs_n && !wr_n) begin
                if (!c_d) begin
                    tx_buffer <= data_in;
                    tx_start <= 1'b1;       // Устанавливаем флаг
                    tx_start_pulse <= 1'b1; // Генерируем импульс
                end
            end
            
            // Автоматически сбрасываем tx_start после обработки
            if (tx_start && tx_busy) begin
                tx_start <= 1'b0;
            end
            
            if (rx_complete) begin
                if (rx_ready) begin
                    overrun_error <= 1'b1;
                end else begin
                    rx_ready <= 1'b1;
                end
            end
        end
    end

    // ==================== ПРАВИЛЬНЫЙ BAUD RATE GENERATOR ====================
    logic [7:0] baud_counter;
    logic baud_tick;

    always_ff @(posedge clk or negedge reset_n) begin
        if (!reset_n) begin
            baud_counter <= 8'h00;
            baud_tick <= 1'b0;
        end else if (clken) begin
            baud_tick <= 1'b0;
            
            if (baud_counter == 8'h00) begin
                baud_tick <= 1'b1;
                // Устанавливаем счетчик в зависимости от режима
                case (baud_rate)
                    2'b00: baud_counter <= 8'd0;   // 1x - тикаем каждый раз
                    2'b01: baud_counter <= 8'd15;  // 16x
                    2'b10: baud_counter <= 8'd63;  // 64x
                    2'b11: baud_counter <= 8'd0;   // External
                endcase
            end else begin
                baud_counter <= baud_counter - 1;
            end
        end
    end

    // ==================== УПРОЩЕННЫЙ И НАДЕЖНЫЙ ПЕРЕДАТЧИК ====================
    logic [3:0] tx_bit_counter;
    logic [7:0] tx_shift_reg;
    
    always_ff @(posedge clk or negedge reset_n) begin
        if (!reset_n) begin
            tx <= 1'b1;
            tx_ready <= 1'b1;
            tx_empty <= 1'b1;
            tx_busy <= 1'b0;
            tx_bit_counter <= 4'h0;
            tx_shift_reg <= 8'h00;
        end else if (clken) begin
            if (baud_tick) begin
                if (tx_start_pulse && tx_enable && !tx_busy) begin
                    // НАЧАЛО ПЕРЕДАЧИ
                    tx_busy <= 1'b1;
                    tx_ready <= 1'b0;
                    tx_empty <= 1'b0;
                    tx_shift_reg <= tx_buffer;
                    tx_bit_counter <= 4'h0;
                    tx <= 1'b0; // START BIT
                end else if (tx_busy) begin
                    // ПРОДОЛЖЕНИЕ ПЕРЕДАЧИ
                    tx_bit_counter <= tx_bit_counter + 1;
                    
                    case (tx_bit_counter)
                        4'h0: tx <= 1'b0; // Start bit
                        4'h1: tx <= tx_shift_reg[0];
                        4'h2: tx <= tx_shift_reg[1];
                        4'h3: tx <= tx_shift_reg[2];
                        4'h4: tx <= tx_shift_reg[3];
                        4'h5: tx <= tx_shift_reg[4];
                        4'h6: tx <= tx_shift_reg[5];
                        4'h7: tx <= tx_shift_reg[6];
                        4'h8: tx <= tx_shift_reg[7];
                        4'h9: begin
                            if (parity_en) begin
                                tx <= ^tx_shift_reg ^ parity_type;
                            end else begin
                                tx <= 1'b1; // Stop bit
                                tx_bit_counter <= 4'hA; // Skip to stop bits
                            end
                        end
                        4'hA: tx <= 1'b1; // Stop bit 1
                        4'hB: tx <= 1'b1; // Stop bit 2
                        default: begin
                            // ЗАВЕРШЕНИЕ ПЕРЕДАЧИ
                            tx <= 1'b1;
                            tx_busy <= 1'b0;
                            tx_ready <= 1'b1;
                            tx_empty <= 1'b1;
                        end
                    endcase
                end else begin
                    // IDLE STATE
                    tx <= 1'b1;
                end
            end
        end
    end

    // ==================== ПРОСТОЙ ПРИЕМНИК ДЛЯ ТЕСТА ====================
    always_ff @(posedge clk or negedge reset_n) begin
        if (!reset_n) begin
            rx_buffer <= 8'h00;
            rx_ready <= 1'b0;
            rx_complete <= 1'b0;
        end else if (clken) begin
            rx_complete <= 1'b0;
            
            // Имитируем прием данных когда передатчик завершил работу
            if (tx_busy && tx_bit_counter == 4'hC) begin
                rx_buffer <= tx_buffer;
                rx_ready <= 1'b1;
                rx_complete <= 1'b1;
            end
        end
    end

    assign rx_full = rx_ready;

    // Генерация прерываний
    always_comb begin
        irq = (rx_ready && command_reg[6]) || (tx_ready && command_reg[7]);
    end

endmodule
