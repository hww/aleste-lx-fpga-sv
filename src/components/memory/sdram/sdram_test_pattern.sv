module sdram_test_pattern #(
    parameter TEST_SIZE = 8
)(
    input clk, rst,
    
    // Wishbone Master Interface
    output logic        wb_cyc_o,
    output logic        wb_stb_o,
    input               wb_ack_i,
    output logic        wb_we_o,
    output logic [23:0] wb_adr_o,
    output logic [15:0] wb_dat_o,
    input        [15:0] wb_dat_i,
    output logic [1:0]  wb_sel_o,    // Убрать - нет в модуле
    output logic [1:0]  wb_tag_o,    // Убрать - нет в модуле
    // Control
    input  logic        start_i,

    // Results
    output logic        done_o,   
    output logic        test_passed_o,
    output logic        test_end_o,
    output logic [15:0] error_count_o  // Убрал лишнюю запятую
);

// States
typedef enum logic [2:0] {
    IDLE,
    WRITE_A,
    VERIFY_A, 
    WRITE_B,
    VERIFY_B,
    DONE
} state_t;

state_t state;

// Only essential registers
logic [23:0] addr;
logic [15:0] errors;
logic [15:0] data;  // Для хранения ожидаемых данных

// Direct assignments
assign wb_adr_o = addr;
assign wb_dat_o = data;
assign wb_tag_o = 2'b00;
assign wb_sel_o = 2'b11;

// Test pattern functions
wire [15:0] pattern_a = {8'hA5, addr[7:0]} ^ {addr[7:0], 8'h5A};
wire [15:0] pattern_b = ~pattern_a;

always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
        state <= IDLE;
        wb_cyc_o <= 0;
        wb_stb_o <= 0;
        wb_we_o <= 0;
        done_o <= 0;
        test_passed_o <= 0;
        test_end_o <= 0;
        error_count_o <= 0;
        addr <= 0;
        errors <= 0;
        data <= 0;
    end else begin
        // Defaults
        wb_stb_o <= 0;

        test_end_o <= 0;

        case (state)
            IDLE: begin
                wb_cyc_o <= 0;
                wb_we_o <= 0;
                addr <= 0;
                errors <= 0;
                if (start_i) begin
                    state <= WRITE_A;
                end
            end

            WRITE_A: begin
                if (wb_ack_i) begin
                    wb_stb_o <= 0;            
                    
                    if (addr >= (TEST_SIZE-1)*2) begin
                        state <= VERIFY_A;
                        addr <= 0;
                        wb_cyc_o <= 0;
                        wb_we_o <= 0;
                    end else begin
                        addr <= addr + 2;
                    end
                end else begin
                    wb_cyc_o <= 1;
                    wb_stb_o <= 1;                    
                    wb_we_o <= 1;
                    data <= pattern_a;
                end
            end

            VERIFY_A: begin
                if (wb_ack_i) begin
                    if (wb_dat_i != data) begin
                        errors <= errors + 1;
                    end
                    wb_stb_o <= 0;      
                    
                    if (addr >= (TEST_SIZE-1)*2) begin
                        state <= WRITE_B;
                        addr <= 0;
                        wb_cyc_o <= 0;
                        wb_we_o <= 0;
                    end else begin
                        addr <= addr + 2;
                    end
                end else begin
                    wb_cyc_o <= 1;
                    wb_stb_o <= 1;                    
                    wb_we_o <= 0;
                    data <= pattern_a;
                end
            end

            WRITE_B: begin
                if (wb_ack_i) begin
                    wb_stb_o <= 0;            
                    
                    if (addr >= (TEST_SIZE-1)*2) begin
                        state <= VERIFY_B;  // Исправлено: было VERIFY_A
                        addr <= 0;
                        wb_cyc_o <= 0;
                        wb_we_o <= 0;
                    end else begin
                        addr <= addr + 2;
                    end
                end else begin
                    wb_cyc_o <= 1;
                    wb_stb_o <= 1;                    
                    wb_we_o <= 1;
                    data <= pattern_b;
                end
            end

            VERIFY_B: begin
                if (wb_ack_i) begin
                    if (wb_dat_i != data) begin
                        errors <= errors + 1;
                    end
                    wb_stb_o <= 0;      
                    
                    if (addr >= (TEST_SIZE-1)*2) begin
                        state <= DONE;  // Исправлено: было WRITE_B
                        addr <= 0;
                        wb_cyc_o <= 0;
                        wb_we_o <= 0;
                    end else begin
                        addr <= addr + 2;
                    end
                end else begin
                    wb_cyc_o <= 1;
                    wb_stb_o <= 1;                    
                    wb_we_o <= 0;
                    data <= pattern_b;
                end
            end

            DONE: begin
                done_o <= 1;
                test_end_o <= 1; // Маркер цикла - устанавливаем в 1
                test_passed_o <= (errors == 0);
                error_count_o <= errors;
                
                // На следующий такт автоматически в IDLE
                state <= IDLE;
                wb_cyc_o <= 0;
                wb_we_o <= 0;
                addr <= 0;
                errors <= 0;
            end
        endcase
    end
end

endmodule
