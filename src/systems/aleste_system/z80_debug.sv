// z80_debug.sv - обновленный без cen_p
`default_nettype none

module z80_debug (
    input  logic        clk,
    input  logic        reset,
    
    // Debug Bus Interface
    input  logic [7:0]  dbus_addr_i,
    output logic [7:0]  dbus_data_o,
    input  logic [7:0]  dbus_data_i,
    input  logic        dbus_we_i,
    input  logic        dbus_stb_i,
    input  logic        dbus_cs_i,
    output logic        dbus_ack_o,
    
    // Z80 CPU Interface
    input  logic [15:0] z80_a,
    input  logic [7:0]  z80_do,
    output logic [7:0]  z80_di,
    input  logic        z80_mreq_n,
    input  logic        z80_iorq_n,
    input  logic        z80_rd_n,
    input  logic        z80_wr_n,
    input  logic        z80_m1_n,
    input  logic        z80_rfsh_n,
    input  logic        z80_halt_n,
    input  logic        z80_busak_n,
    
    // CPU Control Outputs - УДАЛЕН cen_p!
    output logic        z80_wait_n,
    output logic        debug_halt_o
);

    // Простая реализация для тестирования
    assign z80_wait_n = 1'b1;  // Всегда готов
    assign debug_halt_o = ~z80_halt_n;
    
    // Простой debug interface
    logic [7:0] debug_reg;
    logic ack;
    
    always_ff @(posedge clk or posedge reset) begin
        if (reset) begin
            debug_reg <= 8'h00;
            ack <= 1'b0;
        end else begin
            ack <= 1'b0;
            if (dbus_stb_i && dbus_cs_i && !ack) begin
                ack <= 1'b1;
                if (dbus_we_i) begin
                    debug_reg <= dbus_data_i;
                end
            end
        end
    end
    
    assign dbus_data_o = debug_reg;
    assign dbus_ack_o = ack;
    assign z80_di = 8'h00;  // Пока не используется

endmodule

