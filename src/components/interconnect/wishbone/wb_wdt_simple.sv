`default_nettype none

module wb_wdt_simple #(
    parameter TIMEOUT_CYCLES = 8
)(
    input  logic clk_i,
    input  logic rst_i,
    input  logic stb_i,
    input  logic cyc_i, 
    input  logic ack_i,
    output logic err_o
);

    logic [$clog2(TIMEOUT_CYCLES)-1:0] timeout_counter = 0;
    logic wdt_active = 0;

    always_ff @(posedge clk_i) begin
        if (rst_i) begin
            wdt_active <= 1'b1;
            timeout_counter <= '0;
            err_o <= 1'b0;
        end else begin
            // По умолчанию нет ошибки
            err_o <= 1'b0;
            
            if (cyc_i && stb_i) begin
                // Транзакция активна
                if (ack_i) begin
                    // ACK получен - сброс
                    timeout_counter <= 0;
                    wdt_active <= 1'b0;
                end else if (wdt_active) begin
                    // ACK не получен - счетчик
                    if (timeout_counter == TIMEOUT_CYCLES-1) begin
                        err_o <= 1'b1;  // Таймаут!
                        wdt_active <= '0;
                    end else begin
                        timeout_counter <= timeout_counter + 1;
                    end
                end
            end else begin
                // Нет транзакции - сброс
                timeout_counter <= 0;
                wdt_active <= 1'b1; // активируем wdt для следующей транзакции
            end
        end
    end

endmodule

