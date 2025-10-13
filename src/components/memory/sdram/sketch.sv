// sdram_wb_controller.v
// Based on proven MiST SDRAM controller, adapted for Wishbone Classic

`include "sdram_config.vh"

module sdram_ctrl_wb #(
    parameter CLK_FREQ = 100_000_000,          // Frequency of the clock input
    parameter SDRAM_FREQ = 100_000_000,        // Frequency of SDRAM operation
    parameter SDRAM_ADDR_WIDTH = 13,           // SDRAM address bus width
    parameter SDRAM_COL_WIDTH = 9,             // SDRAM column address width
    parameter SDRAM_ROW_WIDTH = 13,            // SDRAM row address width
    parameter SDRAM_BANK_WIDTH = 2,            // SDRAM bank address width
    parameter WB_ADDR_WIDTH = 24,              // Wishbone address width
    parameter WB_DATA_WIDTH = 16,              // Wishbone data width
    parameter CAS_LATENCY = 2,                 // CAS latency (2 or 3)
    parameter REFRESH_CYCLES = 7800            // Refresh cycles (64ms @ 100MHz)
)(
    // Wishbone Classic Interface
    input                           wb_clk_i,        // Wishbone clock
    input                           wb_rst_i,        // Wishbone reset (active high)
    input                           wb_cyc_i,        // Cycle valid
    input                           wb_stb_i,        // Transfer request
    output reg                      wb_ack_o,        // Transfer acknowledge
    input                           wb_we_i,         // Write enable
    input       [WB_ADDR_WIDTH-1:0] wb_adr_i,        // Address
    input       [WB_DATA_WIDTH-1:0] wb_dat_i,        // Data input
    output reg  [WB_DATA_WIDTH-1:0] wb_dat_o,        // Data output
    input       [WB_DATA_WIDTH/8-1:0] wb_sel_i,      // Byte select (auto-calculated)
    
    // ДОБАВЛЕНО: Теги и сигнал выбора устройства
    input        [1:0]              wb_tag_i,        // Address tags
    output reg                      wb_sel_o,        // Device selected
    
    // SDRAM Physical Interface
    inout       [WB_DATA_WIDTH-1:0] sdram_dq,        // Data bus
    output reg  [SDRAM_ADDR_WIDTH-1:0] sdram_addr,   // Address bus
    output reg  [WB_DATA_WIDTH/8-1:0] sdram_dqm,     // Data mask (auto-calculated)
    output reg  [SDRAM_BANK_WIDTH-1:0] sdram_ba,     // Bank address
    output reg                      sdram_cs_n,      // Chip select
    output reg                      sdram_we_n,      // Write enable
    output reg                      sdram_ras_n,     // Row address strobe
    output reg                      sdram_cas_n,     // Column address strobe
    output                          sdram_cke,       // Clock enable
    
    // Debug
    output       [3:0] debug_state
);

// ... существующие localparam и объявления ...

// Main state machine with integrated Wishbone interface
always @(posedge wb_clk_i) begin
    if (wb_rst_i) begin
        state <= STATE_INIT;
        init_counter <= 0;
        refresh_counter <= 0;
        {sdram_cs_n, sdram_ras_n, sdram_cas_n, sdram_we_n} <= CMD_NOP;
        sdram_addr <= 0;
        sdram_ba <= 0;
        sdram_dqm <= {BYTE_SEL_WIDTH{1'b1}};
        sdram_dq_oe <= 0;
        
        // Wishbone signals
        wb_ack_o <= 0;
        wb_dat_o <= 0;
        wb_sel_o <= 0;  // ДОБАВЛЕНО: сброс sel_o
        pending <= 0;
        we_pending <= 0;
        data_in <= 0;
        addr_pending <= 0;
        
    end else begin
        // Default values
        wb_ack_o <= 0;
        wb_sel_o <= 0;  // ДОБАВЛЕНО: по умолчанию не выбран
        {sdram_cs_n, sdram_ras_n, sdram_cas_n, sdram_we_n} <= CMD_NOP;
        sdram_dq_oe <= 0;
        
        // Refresh counter
        refresh_counter <= refresh_counter + 1;
        if (refresh_counter >= REFRESH_CYCLES) begin
            refresh_counter <= 0;
            if (state == STATE_IDLE) begin
                state <= STATE_REFRESH;
            end
        end
        
        case (state)
            STATE_INIT: begin
                $display("[SDRAMCTRL] STATE_INIT %d", init_counter);                  
                init_counter <= init_counter + 1;
                wb_sel_o <= 0;  // ДОБАВЛЕНО: в инициализации не выбран
                
                // ... существующая логика инициализации ...
            end
            
            STATE_IDLE: begin
                $display("[SDRAMCTRL] STATE_IDLE");                       
                sdram_dqm <= {BYTE_SEL_WIDTH{1'b1}};
                wb_sel_o <= 0;  // ДОБАВЛЕНО: в idle не выбран
                
                // Accept new Wishbone commands ТОЛЬКО для тега 00 (память)
                if (wb_cyc_i && wb_stb_i && !pending && (wb_tag_i == 2'b00)) begin
                    pending <= 1;
                    we_pending <= wb_we_i;
                    data_in <= wb_dat_i;
                    addr_pending <= wb_adr_i;
                    state <= STATE_ACTIVATE;
                    wb_sel_o <= 1; 
                    sdram_ba <= wb_adr_i[WB_ADDR_WIDTH-1 -: SDRAM_BANK_WIDTH];
                    sdram_addr <= wb_adr_i[WB_ADDR_WIDTH-SDRAM_BANK_WIDTH-1 -: SDRAM_ROW_WIDTH];
                    delay_counter <= 2; // tRCD
                    
                   $display("[SDRAMCTRL] Access granted for tag=00, addr=%h", wb_adr_i);
                end else if (wb_cyc_i && wb_stb_i && (wb_tag_i != 2'b00)) begin
                    $display("[SDRAMCTRL] Access ignored - wrong tag=%b, addr=%h", wb_tag_i, wb_adr_i);
                    // Для не-памяти игнорируем, sel_o остается 0
                end
            end
            
            STATE_ACTIVATE: begin
                $display("[SDRAMCTRL] STATE_ACTIVATE");                    
                {sdram_cs_n, sdram_ras_n, sdram_cas_n, sdram_we_n} <= CMD_ACTIVE;
                wb_sel_o <= 1;
                
                if (delay_counter == 0) begin
                    if (we_pending) begin
                        state <= STATE_WRITE;
                    end else begin
                        state <= STATE_READ;
                    end
                end else begin
                    delay_counter <= delay_counter - 1;
                end
            end
            
            STATE_READ: begin
                $display("[SDRAMCTRL] STATE_READ");                     
                {sdram_cs_n, sdram_ras_n, sdram_cas_n, sdram_we_n} <= CMD_READ;
                sdram_addr <= {{(SDRAM_ADDR_WIDTH-SDRAM_COL_WIDTH){1'b0}}, 
                            addr_pending[SDRAM_COL_WIDTH-1:0]};
                sdram_dqm <= {BYTE_SEL_WIDTH{1'b0}};
                wb_sel_o <= 1;
                delay_counter <= CAS_LATENCY;
                state <= STATE_READ2;
            end
            
            STATE_READ2: begin
                $display("[SDRAMCTRL] STATE_READ2 delay_counter=%d", delay_counter);
                wb_sel_o <= 1;
                if (delay_counter == 0) begin
                    state <= STATE_READ3;
                end else begin
                    delay_counter <= delay_counter - 1;
                end
            end

            STATE_READ3: begin
                $display("[SDRAMCTRL] STATE_READ3 - фиксация и подтверждение");
                wb_dat_o <= sdram_dq;
                wb_ack_o <= 1;
                wb_sel_o <= 1; 
                pending <= 0;

                state <= STATE_PRECHARGE;
                delay_counter <= 2; // tRP
            end
            
            STATE_WRITE: begin
                $display("[SDRAMCTRL] STATE_WRITE");                
                {sdram_cs_n, sdram_ras_n, sdram_cas_n, sdram_we_n} <= CMD_WRITE;
                sdram_addr <= {{(SDRAM_ADDR_WIDTH-SDRAM_COL_WIDTH){1'b0}}, 
                              addr_pending[SDRAM_COL_WIDTH-1:0]};
                sdram_dq_out <= data_in;
                sdram_dq_oe <= 1;
                sdram_dqm <= ~wb_sel_i;
                wb_sel_o <= 1; 
                
                wb_ack_o <= 1;
                pending <= 0;
                
                state <= STATE_PRECHARGE;
                delay_counter <= 2; // tRP
            end
            
            STATE_PRECHARGE: begin
                $display("[SDRAMCTRL] STATE_PRECHARGE");
                {sdram_cs_n, sdram_ras_n, sdram_cas_n, sdram_we_n} <= CMD_PRECHARGE;
                sdram_addr[SDRAM_ADDR_WIDTH-1] <= 1'b1;
                wb_sel_o <= 0; 
                
                if (delay_counter == 0) begin
                    state <= STATE_IDLE;
                end else begin
                    delay_counter <= delay_counter - 1;
                end
            end
            
            STATE_REFRESH: begin
                $display("[SDRAMCTRL] STATE_REFRESH");
                {sdram_cs_n, sdram_ras_n, sdram_cas_n, sdram_we_n} <= CMD_AUTO_REFRESH;
                wb_sel_o <= 0; 
                state <= STATE_REFRESH_WAIT;
                delay_counter <= 7; // tRFC
            end

            STATE_REFRESH_WAIT: begin
                $display("[SDRAMCTRL] STATE_REFRESH_WAIT");
                wb_sel_o <= 0; 
                if (delay_counter == 0) begin
                    state <= STATE_IDLE;
                end else begin
                    delay_counter <= delay_counter - 1;
                end
            end
        endcase
    end
end

// ... остальной код без изменений ...

endmodule