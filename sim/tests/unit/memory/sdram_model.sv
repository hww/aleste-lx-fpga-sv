module sdram_model (
    input wire          clk,   // Clock   
    input wire          cke,   // Clock Enable
    input wire          cs_n,  // Chip Select
    input wire          ras_n, // Row Address Strobe
    input wire          cas_n, // Column Address Strobe
    input wire          we_n,  // Write Enable
    input wire [12:0]   a,     // Address bus
    input wire [1:0]    ba,    // Bank Address
    inout wire [15:0]   dq,    // Data bus
    input wire [1:0]    dqm    // Data Mask
);

    // Размер памяти: 4 банка × 8192 строк × 512 столбцов = 16M words (32MB)
    logic [15:0] memory [0:4*8192*512-1];
    logic [15:0] data_out;
    logic        drive_dq;

    // Управление шиной данных
    assign dq = drive_dq ? data_out : 16'hzzzz;

    // Декодирование команд (только когда CKE активно)
    wire command_active  = (cke & !cs_n & !ras_n &  cas_n &  we_n);
    wire command_read    = (cke & !cs_n &  ras_n & !cas_n &  we_n);
    wire command_write   = (cke & !cs_n &  ras_n & !cas_n & !we_n);
    wire command_precharge = (cke & !cs_n & !ras_n &  cas_n & !we_n);
    wire command_nop     = (cke & !cs_n &  ras_n &  cas_n &  we_n);

    // Латентности
    localparam LATENCY = 2;
    int read_counter;

    // Регистры для хранения состояния
    logic [12:0] active_row [4];
    logic [12:0] current_col;
    logic [1:0]  current_ba;
    logic        bank_active [4];

    // Инициализация через reset логику
    logic init_done = 1'b0;
    
    // Обработка команд
    always_ff @(posedge clk) begin
        // Инициализация при первом такте
        if (!init_done) begin
            foreach (active_row[i]) active_row[i] <= '0;
            foreach (bank_active[i]) bank_active[i] <= 1'b0;
            drive_dq <= 1'b0;
            read_counter <= 0;
            init_done <= 1'b1;
        end else begin
            drive_dq <= 1'b0;
            
            if (read_counter > 0) 
                read_counter <= read_counter - 1;

            if (cke) begin
                casez ({cs_n, ras_n, cas_n, we_n})
                    4'b0_0_1_1: begin // ACTIVE
                        $display("[SDRAM] ACTIVE bank=%0d row=0x%h", ba, a);
                        active_row[ba] <= a;
                        bank_active[ba] <= 1'b1;
                    end
                    
                    4'b0_1_0_1: begin // READ
                        if (bank_active[ba]) begin
                            $display("[SDRAM] READ bank=%0d col=0x%h", ba, a);
                            read_counter <= LATENCY;
                            current_ba <= ba;
                            current_col <= a;
                        end
                    end
                    
                    4'b0_1_0_0: begin // WRITE
                        if (bank_active[ba]) begin
                            automatic logic [15:0] masked_data = dq;
                            if (dqm[0]) masked_data[7:0] = 'x;
                            if (dqm[1]) masked_data[15:8] = 'x;
                            
                            $display("[SDRAM] WRITE bank=%0d col=0x%h data=0x%h (dqm=0b%2b)", 
                                    ba, a, masked_data, dqm);
                            memory[get_full_address(ba, active_row[ba], a)] <= masked_data;
                        end
                    end
                    
                    4'b0_0_1_0: begin // PRECHARGE
                        if (a[10]) begin
                            $display("[SDRAM] PRECHARGE ALL BANKS");
                            foreach (bank_active[i]) bank_active[i] <= 1'b0;
                        end else begin
                            $display("[SDRAM] PRECHARGE bank=%0d", ba);
                            bank_active[ba] <= 1'b0;
                        end
                    end
                    
                    4'b0_1_1_1: begin // NOP
                        // Nothing to do
                    end
                    
                    default: begin
                        $display("[SDRAM] UNKNOWN COMMAND: cs_n=%b, ras_n=%b, cas_n=%b, we_n=%b",
                                cs_n, ras_n, cas_n, we_n);
                    end
                endcase
            end

            // Выдача данных
            if (read_counter == 1 && bank_active[current_ba]) begin
                automatic logic [15:0] read_data = 
                    memory[get_full_address(current_ba, active_row[current_ba], current_col)];
                
                data_out <= read_data;
                drive_dq <= 1'b1;
                $display("[SDRAM] DATA OUT: 0x%h", read_data);
            end
        end
    end

    // Функция для формирования полного адреса
    function automatic int get_full_address(
        input logic [1:0] bank,
        input logic [12:0] row, 
        input logic [12:0] col
    );
        return (int'(bank) << 21) | (row << 9) | (col & 13'h01FF);
    endfunction

endmodule