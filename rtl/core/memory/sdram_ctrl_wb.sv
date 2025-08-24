// sdram_wb_controller.v
// Based on proven MiST SDRAM controller, adapted for Wishbone Classic

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

// Local parameters
localparam NUM_BANKS = 2**SDRAM_BANK_WIDTH;
localparam BYTE_SEL_WIDTH = WB_DATA_WIDTH / 8;

// SDRAM commands (correct from MiST)
localparam CMD_NOP          = 4'b0111;
localparam CMD_ACTIVE       = 4'b0011;
localparam CMD_READ         = 4'b0101;
localparam CMD_WRITE        = 4'b0100;
localparam CMD_PRECHARGE    = 4'b0010;
localparam CMD_AUTO_REFRESH = 4'b0001;
localparam CMD_LOAD_MODE    = 4'b0000;

// Controller states
localparam STATE_IDLE       = 0;
localparam STATE_ACTIVATE   = 1;
localparam STATE_READ       = 2;
localparam STATE_READ2      = 3;
localparam STATE_READ3      = 4;
localparam STATE_WRITE      = 5;
localparam STATE_PRECHARGE  = 6;
localparam STATE_REFRESH    = 7;
localparam STATE_INIT       = 8;
localparam STATE_REFRESH_WAIT = 9; 

reg [3:0] state = STATE_INIT;

// Timing counters
reg [15:0] init_counter = 0;
reg [15:0] refresh_counter = 0;
reg [3:0]  delay_counter = 0;

// Address decoding - параметризированное
wire [SDRAM_BANK_WIDTH-1:0] bank = wb_adr_i[WB_ADDR_WIDTH-1 -: SDRAM_BANK_WIDTH];
wire [SDRAM_ROW_WIDTH-1:0] row = wb_adr_i[WB_ADDR_WIDTH-SDRAM_BANK_WIDTH-1 -: SDRAM_ROW_WIDTH];
wire [SDRAM_COL_WIDTH-1:0] col = wb_adr_i[SDRAM_COL_WIDTH-1:0];

// Internal registers
reg [WB_DATA_WIDTH-1:0] data_in;
reg                     pending = 0;
reg                     we_pending = 0;
reg [WB_ADDR_WIDTH-1:0] addr_pending;

// Mode register - параметризированный
localparam MODE_REGISTER = {3'b000, 1'b0, 2'b00, CAS_LATENCY[2:0], 1'b0, 3'b000};

assign sdram_cke = 1'b1;
assign debug_state = state;

// Data bus control
reg [WB_DATA_WIDTH-1:0] sdram_dq_out;
reg                     sdram_dq_oe;
assign sdram_dq = sdram_dq_oe ? sdram_dq_out : {WB_DATA_WIDTH{1'bz}};


// Main state machine - параметризированная версия
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
        pending <= 0;
        we_pending <= 0;
        data_in <= 0;
        addr_pending <= 0;
        
    end else begin
        // Default values
        wb_ack_o <= 0;
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
                
                if (init_counter == 100) begin
                    // Precharge all
                    {sdram_cs_n, sdram_ras_n, sdram_cas_n, sdram_we_n} <= CMD_PRECHARGE;
                    sdram_addr[SDRAM_ADDR_WIDTH-1] <= 1'b1;
                end
                else if (init_counter == 110) begin
                    // Auto refresh
                    {sdram_cs_n, sdram_ras_n, sdram_cas_n, sdram_we_n} <= CMD_AUTO_REFRESH;
                end
                else if (init_counter == 120) begin
                    // Auto refresh
                    {sdram_cs_n, sdram_ras_n, sdram_cas_n, sdram_we_n} <= CMD_AUTO_REFRESH;
                end
                else if (init_counter == 130) begin
                    // Load mode register
                    {sdram_cs_n, sdram_ras_n, sdram_cas_n, sdram_we_n} <= CMD_LOAD_MODE;
                    sdram_addr <= MODE_REGISTER[SDRAM_ADDR_WIDTH-1:0];
                end
                else if (init_counter > 140) begin
                    state <= STATE_IDLE;
                end
            end
            
            STATE_IDLE: begin
                $display("[SDRAMCTRL] STATE_IDLE");                       
                sdram_dqm <= {BYTE_SEL_WIDTH{1'b1}};
                
                // Accept new Wishbone commands
                if (wb_cyc_i && wb_stb_i && !pending) begin
                    pending <= 1;
                    we_pending <= wb_we_i;
                    data_in <= wb_dat_i;
                    addr_pending <= wb_adr_i;
                    state <= STATE_ACTIVATE;
                    
                    sdram_ba <= wb_adr_i[WB_ADDR_WIDTH-1 -: SDRAM_BANK_WIDTH];
                    sdram_addr <= wb_adr_i[WB_ADDR_WIDTH-SDRAM_BANK_WIDTH-1 -: SDRAM_ROW_WIDTH];
                    delay_counter <= 2; // tRCD
                end
            end
            
            STATE_ACTIVATE: begin
                $display("[SDRAMCTRL] STATE_ACTIVATE");                    
                {sdram_cs_n, sdram_ras_n, sdram_cas_n, sdram_we_n} <= CMD_ACTIVE;
                
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
                // Контроллер выдает команду READ и адрес столбца на SDRAM
                $display("[SDRAMCTRL] STATE_READ");                     
                {sdram_cs_n, sdram_ras_n, sdram_cas_n, sdram_we_n} <= CMD_READ;
                sdram_addr <= {{(SDRAM_ADDR_WIDTH-SDRAM_COL_WIDTH){1'b0}}, 
                            addr_pending[SDRAM_COL_WIDTH-1:0]};
                sdram_dqm <= {BYTE_SEL_WIDTH{1'b0}};
                delay_counter <= CAS_LATENCY;
                state <= STATE_READ2;
            end
            
            STATE_READ2: begin
                // В этом состоянии SDRAM ТОЛЬКО НАЧИНАЕТ выставлять данные на шину
                // Данные еще не стабильны - фиксировать их РАНЬШЕ СЛЕДУЮЩЕГО ТАКТА НЕЛЬЗЯ
                $display("[SDRAMCTRL] STATE_READ2 delay_counter=%d", delay_counter);
                if (delay_counter == 0) begin
                    // Переходим в состояние фиксации
                    state <= STATE_READ3;
                end else begin
                    delay_counter <= delay_counter - 1;
                end
            end

            STATE_READ3: begin
                $display("[SDRAMCTRL] STATE_READ3 - фиксация и подтверждение");
                // В НАЧАЛЕ этого такта данные на sdram_dq УЖЕ СТАБИЛЬНЫ (установились за предыдущий такт)
                // ФИКСИРУЕМ их в выходной регистр Wishbone
                wb_dat_o <= sdram_dq;  // ← ФИКСАЦИЯ ВЕРНА!

                // ОДНОВРЕМЕННО выдаемACK - данные УЖЕ валидны в регистре wb_dat_o
                wb_ack_o <= 1;
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
                
                // WRITE COMPLETE - acknowledge immediately!
                wb_ack_o <= 1;
                pending <= 0;
                
                state <= STATE_PRECHARGE;
                delay_counter <= 2; // tRP
            end
            
            STATE_PRECHARGE: begin
                $display("[SDRAMCTRL] STATE_PRECHARGE");
                {sdram_cs_n, sdram_ras_n, sdram_cas_n, sdram_we_n} <= CMD_PRECHARGE;
                sdram_addr[SDRAM_ADDR_WIDTH-1] <= 1'b1;
                
                if (delay_counter == 0) begin
                    state <= STATE_IDLE;
                end else begin
                    delay_counter <= delay_counter - 1;
                end
            end
            
            STATE_REFRESH: begin
                $display("[SDRAMCTRL] STATE_REFRESH");
                {sdram_cs_n, sdram_ras_n, sdram_cas_n, sdram_we_n} <= CMD_AUTO_REFRESH;
                state <= STATE_REFRESH_WAIT;
                delay_counter <= 7; // tRFC
            end

            STATE_REFRESH_WAIT: begin
                $display("[SDRAMCTRL] STATE_REFRESH_WAIT");                
                if (delay_counter == 0) begin
                    state <= STATE_IDLE;
                end else begin
                    delay_counter <= delay_counter - 1;
                end
            end
        endcase
    end
end

// ОТЛАДОЧНАЯ ИНФОРМАЦИЯ =======================

logic [2:0] sdram_cmd_code;
assign sdram_cmd_code = {sdram_ras_n, sdram_cas_n, sdram_we_n};

endmodule

