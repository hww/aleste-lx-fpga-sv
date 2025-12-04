// Simple SDRAM controller for Tang 20k
// nand2mario
// 
// 2023.3: ported to use GW2AR-18's embedded 64Mbit SDRAM.
//         changed to byte-based access.
// 2022.9: iniital version.
//
// This is a byte-based, low-latency and non-bursting controller for the embedded SDRAM
// on Tang Nano 20K. The SDRAM module is 64Mbit 32bit. (2K rows x 256 columns x 4 banks x 32 bits).
//
// Under default settings (max 66.7Mhz):
// - Data read latency is 4 cycles. 
// - Read/write operations take 5 cycles to complete. There's no overlap between
//   reads/writes.
// - All reads/writes are done with auto-precharge. So user does not need to deal with
//   row activations and precharges.
// - SDRAMs need periodic refreshes or they lose data. So they provide an "auto-refresh"
//   function to do one row of refresh. This "auto-refresh" operation is controlled with
//   the 'refresh' input. 4096 or more refreshes should happen in any 64ms for the memory
//   to not lose data. So the main circuit should invoke auto-refresh at least once 
//   **every ~15us**.
//
// Finally you need a 180-degree phase-shifted clock signal (clk_sdram) for SDRAM. 
// This can be generated with PLL's clkoutp output.
//
`default_nettype none
module sdram_wishbone #(
    parameter CLK_FREQ        = 100_000_000,     // Hz

    // Wishbone
    parameter WB_ADDR_WIDTH   = 25,  // Для 32 МБ нужно 25 линий
    parameter WB_DATA_WIDTH   = 16,

    // for IS42S16160B 
    parameter SDRAM_DATA_WIDTH = 16,             // 16-bit SDRAM
    parameter SDRAM_DQM_WIDTH = SDRAM_DATA_WIDTH / 8,
    parameter ROW_WIDTH = 13,        // 8K rows (A0-A12)
    parameter COL_WIDTH = 9,         // 512 columns для 16-бит (A0-A8)  
    parameter BANK_WIDTH = 2,
    parameter FULL_WIDTH = ROW_WIDTH + COL_WIDTH + BANK_WIDTH,

    // Time delays for 66.7Mhz max clock (min clock cycle 15ns)
    // The SDRAM supports max 166.7Mhz (RP/RCD/RC need changes)
    parameter [4:0]   CAS  = 5'd2,     // 2/3 cycles, set in mode register
    parameter [4:0]   T_WR = 5'd2,     // 2 cycles, write recovery
    parameter [4:0]   T_MRD= 5'd2,     // 2 cycles, mode register set
    parameter [4:0]   T_RP = 5'd2,     // 18-20ns, precharge to active
    parameter [4:0]   T_RCD= 5'd2,     // 18-20ns, active to r/w
    parameter [4:0]   T_RC = 5'd6,     // 60ns, ref/active to ref/active

    // Burst mode settings
    parameter [2:0] BURST_LEN = 3'd2,  // burst length 1
    parameter BURST_MODE = 1'b1        // sequential
)
(
    // SDRAM Physical Interface
    input  logic [SDRAM_DATA_WIDTH-1:0] SDRAM_DQ_I,
    output logic [SDRAM_DATA_WIDTH-1:0] SDRAM_DQ_O,
    output logic [12:0]                 SDRAM_A,
    output logic [1:0]                  SDRAM_BA,
    output logic                        SDRAM_nCS,  // not strictly necessary, always 0
    output logic                        SDRAM_nWE,
    output logic                        SDRAM_nRAS,
    output logic                        SDRAM_nCAS,
    output logic                        SDRAM_CKE,  // not strictly necessary, always 1
    output logic [SDRAM_DQM_WIDTH-1:0]  SDRAM_DQM,
    output logic                        SDRAM_DQOEN,

    // Wishbone Interface
    input  logic                        wb_clk_i,
    input  logic                        wb_rst_i,
    input  logic                        wb_cyc_i, 
    input  logic                        wb_stb_i,
    output logic                        wb_ack0_o,   // first word
    output logic                        wb_ack1_o,   // readin - last word, writing - completition
    input  logic                        wb_we_i,
    input  logic [WB_ADDR_WIDTH-1:0]    wb_adr_i,
    input  logic [WB_DATA_WIDTH-1:0]    wb_dat_i,
    output logic [WB_DATA_WIDTH-1:0]    wb_dat_o,
    input  logic [WB_DATA_WIDTH/8-1:0]  wb_sel_i,
    output logic                        wb_busy_o,   // 0: ready for next command
    input  logic                        wb_refresh_i,
    
    // ========== DEBUG SIGNALS ==========
    output logic [2:0]                debug_state,
    output logic                      debug_init_complete,
    output logic                      debug_ready,
    output logic                      debug_initialized,
    output logic                      debug_configured,
    output logic [4:0]                debug_cycle,
    output logic                      debug_busy,
    output logic [14:0]               debug_rst_cnt,
    output logic                      debug_rst_done,
    output logic                      debug_cfg_busy
);

// States from original Tang controller
localparam INIT     = 3'd0;
localparam CONFIG   = 3'd1;
localparam IDLE     = 3'd2;
localparam READ     = 3'd3;
localparam WRITE    = 3'd4;
localparam REFRESH  = 3'd5;


// Commands from original (RAS# CAS# WE#)
localparam CMD_SetModeReg  = 3'b000;
localparam CMD_AutoRefresh = 3'b001;
localparam CMD_PreCharge   = 3'b010;
localparam CMD_BankActivate= 3'b011;
localparam CMD_Write       = 3'b100;
localparam CMD_Read        = 3'b101;
localparam CMD_NOP         = 3'b111;


// ==== MODE REGISTER ДЛЯ IS42S16160B =====
localparam BURST_WRITE_MODE_BURST = 1'b0;
localparam BURST_WRITE_MODE_SINGLE_LOCATION = 1'b1;
localparam [12:0] MODE_REG = {3'b000, BURST_WRITE_MODE_SINGLE_LOCATION, 2'b00, CAS[2:0], BURST_MODE, BURST_LEN}; // 13-бит

// ========== ВНУТРЕННИЕ СИГНАЛЫ ==========
logic cfg_now;
logic [4:0] cycle;
logic [2:0] state;

logic dq_oen; // 1 means output
logic [SDRAM_DATA_WIDTH-1:0] dq_out;
logic [SDRAM_DATA_WIDTH-1:0] dq_in;

logic rd, wr;
logic [FULL_WIDTH-1:0] addr;
logic wb_ack0, wb_ack1;
logic busy;  

// ========== АДАПТАЦИЯ ИНТЕРФЕЙСА ==========
assign rd = wb_cyc_i && wb_stb_i && !wb_we_i;
assign wr = wb_cyc_i && wb_stb_i &&  wb_we_i;
assign addr = wb_adr_i[WB_ADDR_WIDTH-1:1];

// ========== FSM  ДЛЯ IS42S16160B ==========
always @(posedge wb_clk_i) begin
    if (wb_rst_i) begin
        busy <= 1'b1;
        dq_oen <= 1'b0; // turn off DQ output
        SDRAM_DQM <= 2'b11;
        state <= INIT;
        wb_ack0 <= 0;
        wb_ack1 <= 0;
        cycle <= 0;
        SDRAM_A <= 0;
        SDRAM_BA <= 0;
        {SDRAM_nRAS, SDRAM_nCAS, SDRAM_nWE} <= CMD_NOP;
    end else begin
        cycle <= (cycle == 5'd31) ? 5'd31 : cycle + 5'd1;
        wb_ack0 <= 1'b0;
        wb_ack1 <= 1'b0;   
        // Defaults from original
        {SDRAM_nRAS, SDRAM_nCAS, SDRAM_nWE} <= CMD_NOP; 
        
        casez ({state, cycle})
            // wait 200 us on power-on
            {INIT, 5'b?????}: if (cfg_now) begin
                state <= CONFIG;
                cycle <= 0;
            end

            // configuration sequence
            //  cycle  / 0 \___/ 1 \___/ 2 \___/ ... __/ 6 \___/ ...___/10 \___/11 \___/ 12\___
            //  cmd            |PC_All |Refresh|       |Refresh|       |  MRD  |       | _next_
            //                 '-T_RP--`----  T_RC  ---'----  T_RC  ---'------T_MRD----'

            {CONFIG, 5'd0}: begin
                // precharge all
                {SDRAM_nRAS, SDRAM_nCAS, SDRAM_nWE} <= CMD_PreCharge;
                SDRAM_A[10] <= 1'b1;
            end
            {CONFIG, T_RP}: begin
                // 1st AutoRefresh
                {SDRAM_nRAS, SDRAM_nCAS, SDRAM_nWE} <= CMD_AutoRefresh;
            end
            {CONFIG, T_RP+T_RC}: begin
                // 2nd AutoRefresh            
                {SDRAM_nRAS, SDRAM_nCAS, SDRAM_nWE} <= CMD_AutoRefresh;
            end
            {CONFIG, T_RP+T_RC+T_RC}: begin
                // set register            
                {SDRAM_nRAS, SDRAM_nCAS, SDRAM_nWE} <= CMD_SetModeReg;
                SDRAM_A <= MODE_REG; 
            end
            {CONFIG, T_RP+T_RC+T_RC+T_MRD}: begin
                state <= IDLE;
                busy <= 1'b0;              // init&config is done
            end
            
            // read/write/refresh
            {IDLE, 5'b?????}: if (rd | wr) begin
                {SDRAM_nRAS, SDRAM_nCAS, SDRAM_nWE} <= CMD_BankActivate;
                SDRAM_BA <= addr[BANK_WIDTH+COL_WIDTH+ROW_WIDTH-1 : COL_WIDTH+ROW_WIDTH];
                SDRAM_A <= addr[COL_WIDTH+ROW_WIDTH-1 -: ROW_WIDTH]; // row address
                state <= rd ? READ : WRITE;
                cycle <= 5'd1;
                busy <= 1'b1;
            end else if (wb_refresh_i) begin
                // auto-refresh
                // no need for precharge-all b/c all our r/w are done with auto-precharge.
                {SDRAM_nRAS, SDRAM_nCAS, SDRAM_nWE} <= CMD_AutoRefresh;
                state <= REFRESH;
                cycle <= 5'd1;
                busy <= 1'b1;            
            end

            // read sequence
            //  cycle  / 0 \___/ 1 \___/ 2 \___/ 3 \___/ 4 \___/ 5 \___
            //  rd     /       \_______________________________
            //  cmd            |Active | Read  |  NOP  |  NOP  | _Next_
            //  DQ                                     |  Dout |
            //  data_ready ____________________________/       \_______   
            //  busy   ________/                               \_______
            //                 `-T_RCD-'------CAS------'
            {READ, T_RCD}: begin
                {SDRAM_nRAS, SDRAM_nCAS, SDRAM_nWE} <= CMD_Read;
                SDRAM_A[10]  <= 1'b1; // set auto precharge
                SDRAM_A[9:0] <= {1'b0, addr[COL_WIDTH-1 : 0]}; // 9-бит column address
                SDRAM_DQM <= 2'b00;  // Все байты активны для чтения
            end
            {READ, T_RCD+CAS}: begin
                wb_ack0 <= 1'b1;
            end
            {READ, T_RCD+CAS+5'd1}: begin
                if (BURST_MODE) begin
                    // Burst mode go to next word
                    wb_ack0 <= 1'b0;
                    wb_ack1 <= 1'b1;
                end else begin
                    // Standart mode go to IDLE
                    wb_ack1 <= 1'b0;
                    busy <= 1'b0;
                    state <= IDLE;
                end
            end
            {READ, T_RCD+CAS+5'd2}: begin
                busy <= 1'b0;
                state <= IDLE;
            end

            // write sequence
            //  cycle / 0 \___/ 1 \___/ 2 \___/ 3 \___/ 4 \___/ 5 \___
            //  wr    /       \_______________________________
            //  cmd           |Active | Write |  NOP  |  NOP  | _Next_
            //  DQ                    | Din   |
            //  busy   _______/                               \_______
            //                `-T_RCD-'-------T_WR+T_RP-------'
            {WRITE, T_RCD}: begin
                {SDRAM_nRAS, SDRAM_nCAS, SDRAM_nWE} <= CMD_Write;
                SDRAM_A[10] <= 1'b1; // set auto precharge
                SDRAM_A[9:0] <= {1'b0, addr[COL_WIDTH-1:0]}; // column address
                
                // Маскирование байтов для 16-битной SDRAM
                SDRAM_DQM <= ~wb_sel_i;
                
                dq_out <= wb_dat_i; // Прямое подключение для 16-бит
                dq_oen <= 1'b1;     // Enable outputs
            end
            {WRITE, T_RCD+5'd1}: begin
                dq_oen <= 1'b1;     // Keep outputs
                wb_ack0 <= 1'b1;
            end
            {WRITE, T_RCD+T_WR+T_RP}: begin
                wb_ack1 <= 1'b1;     // Tell completition
                dq_oen <= 1'b0;      // Disable outputs
                busy <= 1'b0;
                state <= IDLE;
            end


            // refresh sequence
            //  cycle   / 0 \___/ 1 \___/ 2 \___/ 3 \___/ 4 \___/ 5 \___
            //  refresh /       \_______________________________
            //  cmd             |Refresh|  NOP  |  NOP  |  NOP  | _Next_
            //  busy     _______/                               \_______
            //                  `------------- T_RC ------------'
            {REFRESH, T_RC}: begin
                state <= IDLE;
                busy <= 1'b0;
            end
            
            default: begin
                // Сохраняем текущее состояние
            end
        endcase
    end
end


//
// Generate cfg_now pulse after initialization delay (normally 200us)
//

// Configuration count to 200 us
localparam INIT_CYCLES = (CLK_FREQ / 1000) * 200 / 1000;

logic [14:0] rst_cnt;
logic rst_done, rst_done_p1, cfg_busy;

always @(posedge wb_clk_i) begin
    if (wb_rst_i) begin
        rst_cnt  <= '0;
        rst_done <= 1'b0;
        cfg_busy <= 1'b1;
        rst_done_p1 <= 1'b0;
    end else begin
        rst_done_p1 <= rst_done;
        cfg_now     <= rst_done & ~rst_done_p1;// Rising Edge Detect

        if (rst_cnt != INIT_CYCLES[14:0]) begin
            rst_cnt  <= rst_cnt + 1'b1;
            rst_done <= 1'b0;
            cfg_busy <= 1'b1;
        end else begin
            rst_done <= 1'b1;
            cfg_busy <= 1'b0;
        end
    end
end

// ========== УПРАВЛЕНИЕ ДАННЫМИ SDRAM ==========
assign dq_in = SDRAM_DQ_I;   // input data
assign SDRAM_DQ_O = dq_out;  // output data
assign SDRAM_DQOEN = dq_oen; // out direction   
assign SDRAM_CKE = 1'b1;
assign SDRAM_nCS = 1'b0;
assign wb_dat_o = dq_in;
assign wb_busy_o = busy;
assign wb_ack0_o = wb_ack0;
assign wb_ack1_o = wb_ack1;

// ========== DEBUG SIGNALS ASSIGNMENT ==========

assign debug_state = state;
assign debug_cycle = cycle;
assign debug_rst_cnt = rst_cnt;
assign debug_rst_done = rst_done;
assign debug_cfg_busy = cfg_busy;
    
// Инициализация завершена когда прошли все этапы
assign debug_init_complete = (state == IDLE) && rst_done && !cfg_busy;
    
// Контроллер готов к работе (может принимать команды)
assign debug_ready = (state == IDLE) && debug_init_complete;
    
// SDRAM проинициализирован (прошли precharge и refresh)
assign debug_initialized = (state >= CONFIG) && rst_done;
    
// Конфигурация завершена (загружен mode register)
assign debug_configured = (state >= IDLE);
    
// Контроллер занят (не в IDLE состоянии)
assign debug_busy = (state != IDLE);

endmodule
