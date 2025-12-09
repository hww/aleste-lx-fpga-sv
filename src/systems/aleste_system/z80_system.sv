`default_nettype none

module z80_system (
    // Clock and Reset
    input  logic        clk_i,
    input  logic        res_i,
    input  logic        res_short_i,

    // Wishbone Master Interface
    output logic [23:0] wbm_adr_o,
    input  logic [7:0]  wbm_dat_i,
    output logic [7:0]  wbm_dat_o,
    output logic        wbm_cyc_o,
    output logic        wbm_stb_o,
    output logic        wbm_we_o,
    input  logic        wbm_ack_i,
    
    // Debug Interface
    input  logic [7:0]  dbg_adr_i,
    output logic [7:0]  dbg_dat_o,
    input  logic [7:0]  dbg_dat_i,
    input  logic        dbg_we_i,
    input  logic        dbg_stb_i,
    input  logic        dbg_cs_i,
    output logic        dbg_ack_o,
    
    // Z80 Interface
    input  logic        nmi_req_i,
    input  logic        int_req_i,
    input  logic        busrq_i,
    output logic        busak_o,

    // System Outputs
    output logic [1:0]  graphic_mode,
    output logic        irq_control,
    output logic        supervisor_mode_o,
    output logic        legacy_mode_o,
    output logic        native_mode_o,

    // Debug Outputs
    output logic        debug_halt_status,
    output logic [7:0]  debug_control_o
);

    // =========================================================================
    // Z80 CPU Signals
    // =========================================================================
    logic [15:0]    z80_a;
    logic [7:0]     z80_do, z80_di;
    logic           z80_m1_n, z80_mreq_n, z80_iorq_n, z80_rd_n, z80_wr_n;
    logic           z80_rfsh_n, z80_halt_n, z80_busak_n;
    logic           z80_wait_n, z80_int_n, z80_nmi_n, z80_busrq_n, z80_reset_n;

    // =========================================================================
    // MMU Signals
    // =========================================================================
    logic           legacy_mode, native_mode;
    
    // Legacy MMU - УБИРАЕМ wait выход!
    logic           legacy_mmu_cyc, legacy_mmu_stb, legacy_mmu_we, legacy_mmu_access;
    logic [23:0]    legacy_mmu_adr;
    logic [7:0]     legacy_mmu_dat_o, legacy_mmu_cpu_dout;
    // logic legacy_mmu_wait; // УБРАТЬ!
    
    // Native MMU - УБИРАЕМ wait выход!
    logic           native_mmu_cyc, native_mmu_stb, native_mmu_we, native_mmu_access;
    logic [23:0]    native_mmu_adr;
    logic [7:0]     native_mmu_dat_o, native_mmu_cpu_dout;
    // logic native_mmu_wait; // УБРАТЬ!
    
    // Native MMU Control
    logic           native_supervisor_mode;

    // =========================================================================
    // Debug Signals
    // =========================================================================
    logic           debug_z80_wait_n, debug_halt;

    // =========================================================================
    // Wishbone Controller
    // =========================================================================
    logic [7:0]     wb_dat_in_reg;
    logic           wb_data_valid;
    
    // Состояния FSM
    typedef enum logic [1:0] {
        WB_IDLE        = 2'b00,  // Ожидание, нет цикла
        WB_STB_ACTIVE  = 2'b01,  // STB=1, ждём ACK
        WB_CYC_ACTIVE  = 2'b10   // STB=0, CYC=1 (данные готовы, CPU может забрать)
    } wb_state_t;
    
    wb_state_t wb_state;

    // =========================================================================
    // TV80 CLOCK
    // =========================================================================

    logic [3:0] z80_clock_conf;
    logic [3:0] z80_clock_divider;
    logic z80_cke;

    always_ff @(posedge clk_i or posedge res_short_i) begin
        if (res_short_i) begin 
            z80_clock_divider <= '0;
            z80_cke <= '0;
        end
        else begin
            z80_cke <= 0;
            if (z80_clock_divider == '0) begin
                z80_clock_divider <= z80_clock_conf;
                z80_cke <= 1'b1;
            end else begin 
                z80_clock_divider <= z80_clock_divider - 1;
            end
        end
    end

    // =========================================================================
    // TV80 CORE
    // =========================================================================
    tv80s z80_inst (
        .reset_n(z80_reset_n),
        .clk(clk_i),
        .cen(z80_cke),
        .wait_n(z80_wait_n),
        .int_n(z80_int_n),
        .nmi_n(z80_nmi_n),
        .busrq_n(z80_busrq_n),
        .m1_n(z80_m1_n),
        .mreq_n(z80_mreq_n),
        .iorq_n(z80_iorq_n),
        .rd_n(z80_rd_n),
        .wr_n(z80_wr_n),
        .rfsh_n(z80_rfsh_n),
        .halt_n(z80_halt_n),
        .busak_n(z80_busak_n),
        .A(z80_a),
        .di(z80_di),
        .dout(z80_do)
    );

    assign z80_reset_n = ~res_i;
    assign z80_int_n = ~int_req_i;
    assign z80_nmi_n = ~nmi_req_i;
    assign z80_busrq_n = ~busrq_i;
    assign z80_wait_n = debug_z80_wait_n;

    // =========================================================================
    // WISHBONE CONTROLLER - ПРАВИЛЬНАЯ ВЕРСИЯ
    // =========================================================================
    
    // Select active MMU
    logic active_cyc, active_stb, active_we;
    logic [23:0] active_adr;
    logic [7:0] active_dat, wb_dat_out_reg;
    logic z80_wait;
    
    // Или более компактно:
    assign debug_z80_wait_n = ~z80_wait;
    assign active_cyc = native_mode ? native_mmu_cyc : legacy_mmu_cyc;
    assign active_stb = native_mode ? native_mmu_stb : legacy_mmu_stb;
    assign active_we  = native_mode ? native_mmu_we  : legacy_mmu_we;
    assign active_adr = native_mode ? native_mmu_adr : legacy_mmu_adr;
    assign active_dat = native_mode ? native_mmu_dat_o : legacy_mmu_dat_o;
    assign wbm_dat_o = wb_dat_out_reg;

    // Wishbone FSM
    always_ff @(posedge clk_i or posedge res_i) begin
        if (res_i) begin
            wb_state <= WB_IDLE;
            wbm_cyc_o <= 1'b0;
            wbm_stb_o <= 1'b0;
            wb_dat_in_reg <= 8'h00;
            wb_data_valid <= 1'b0;
            z80_wait <= 2'b00;
            wb_dat_out_reg <= 8'h00;
        end else begin
            if (!z80_cke) begin
                // По умолчанию сбрасываем data_valid
                wb_data_valid <= 1'b0;
                
                case (wb_state)
                    WB_IDLE: begin
                        if (active_cyc && active_stb) begin
                            // Начинаем новый цикл Wishbone
                            wb_state <= WB_STB_ACTIVE;
                            wbm_cyc_o <= 1'b1;
                            wbm_stb_o <= 1'b1;
                            wbm_we_o <= active_we;
                            wbm_adr_o <= active_adr;
                            wb_dat_out_reg <= active_dat;
                            z80_wait <= 1'b1;
                        end else begin
                            wbm_cyc_o <= 1'b0;
                            wbm_stb_o <= 1'b0;
                            wb_dat_in_reg <= 8'h00;                        
                            z80_wait <= 1'b0;
                        end
                    end
                    
                    WB_STB_ACTIVE: begin
                        if (wbm_ack_i) begin
                            // ACK получен
                            wbm_stb_o <= 1'b0;  // Снимаем STB
                            
                            if (!wbm_we_o) begin
                                // Чтение: защёлкиваем данные
                                wb_dat_in_reg <= wbm_dat_i;
                                wb_data_valid <= 1'b1;  // Данные готовы!
                            end else begin
                                // Запись: данные не нужны, просто ждём
    
                            end
                            
                            // Переходим в состояние с CYC=1, STB=0
                            wb_state <= WB_CYC_ACTIVE;
                            z80_wait <= 1'b1;
                        end
                    end
                    
                    WB_CYC_ACTIVE: begin
                        // CYC=1, STB=0 - данные готовы для CPU
                        // Ждём пока CPU снимет запрос (MREQ/IORQ)
                        z80_wait <= 1'b0;
                        if (!active_cyc) begin
                            // CPU завершил цикл
                            wbm_cyc_o <= 1'b0;
                            wb_state <= WB_IDLE;
                            wb_dat_in_reg <= 8'h00;
                            wb_dat_out_reg <= 8'h00;
                        end
                    end
                endcase
            end
        end
    end

    // =========================================================================
    // DEBUG MODULE
    // =========================================================================
    z80_debug debug_module (
        .clk(clk_i),
        .reset(res_i),
        .dbus_addr_i(dbg_adr_i),
        .dbus_data_o(dbg_dat_o),
        .dbus_data_i(dbg_dat_i),
        .dbus_we_i(dbg_we_i),
        .dbus_stb_i(dbg_stb_i),
        .dbus_cs_i(dbg_cs_i),
        .dbus_ack_o(dbg_ack_o),
        .z80_a(z80_a),
        .z80_do(z80_do),
        .z80_di(z80_di),
        .z80_mreq_n(z80_mreq_n),
        .z80_iorq_n(z80_iorq_n),
        .z80_rd_n(z80_rd_n),
        .z80_wr_n(z80_wr_n),
        .z80_m1_n(z80_m1_n),
        .z80_rfsh_n(z80_rfsh_n),
        .z80_halt_n(z80_halt_n),
        .z80_busak_n(z80_busak_n),
        .z80_wait_n(debug_z80_wait_n),
        .debug_halt_o(debug_halt)
    );

    // =========================================================================
    // MMU INSTANCES - УБИРАЕМ wait ВЫХОДЫ!
    // =========================================================================

    mmu_legacy mmu_legacy_inst (
        .clk(clk_i),
        .reset(res_i),
        .legacy_mode_i(legacy_mode),
        .m_wb_cyc_o(legacy_mmu_cyc),
        .m_wb_stb_o(legacy_mmu_stb),
        .m_wb_we_o(legacy_mmu_we),
        .m_wb_adr_o(legacy_mmu_adr),
        .m_wb_dat_o(legacy_mmu_dat_o),
        .m_wb_dat_i(wbm_dat_i),
        .m_wb_ack_i(wbm_ack_i),
        .cpu_a(z80_a),
        .cpu_mreq_n(z80_mreq_n),
        .cpu_iorq_n(z80_iorq_n),
        .cpu_rd_n(z80_rd_n),
        .cpu_wr_n(z80_wr_n),
        .cpu_din(z80_do),
        .cpu_dout(legacy_mmu_cpu_dout),
        // .cpu_wait(legacy_mmu_wait), // УБРАТЬ - генерация wait здесь!
        .graphic_mode(graphic_mode),
        .irq_control(irq_control),
        .mmu_access_o(legacy_mmu_access),
        .debug_rom_access_o(),
        .debug_ram_access_o(),
        .debug_io_access_o()
    );

    mmu_native mmu_native_inst (
        .clk(clk_i),
        .reset(res_i),
        .legacy_mode_o(legacy_mode),
        .native_mode_o(native_mode),
        .mmu_access_o(native_mmu_access),

        .cpu_a(z80_a),
        .cpu_mreq_n(z80_mreq_n),
        .cpu_iorq_n(z80_iorq_n),
        .cpu_rd_n(z80_rd_n),
        .cpu_wr_n(z80_wr_n),
        .cpu_m1_n(z80_m1_n),
        .cpu_din(z80_do),
        .cpu_dout(native_mmu_cpu_dout),
        .cpu_clock_conf(z80_clock_conf),
 
        .m_wb_cyc_o(native_mmu_cyc),
        .m_wb_stb_o(native_mmu_stb),
        .m_wb_we_o(native_mmu_we),
        .m_wb_adr_o(native_mmu_adr),
        .m_wb_dat_o(native_mmu_dat_o),
        .m_wb_dat_i(wbm_dat_i),
        .m_wb_ack_i(wbm_ack_i),

        .debug_supervisor_mode_i(1'b0),
        .debug_supervisor_mode_o(native_supervisor_mode),
        .debug_mmio_userlock_o(),
        .debug_syscall_function_o(),
        .debug_syscall_trigger_o(),
        .debug_control_o(debug_control_o),
        .debug_mmio_page_o(),
        .debug_super_slot_o(),
        .debug_user_slot_o(),
        .debug_selected_bank_o(),
        .debug_current_slot_o(),
        .debug_bank_index_o()
    );

    // =========================================================================
    // Z80 DATA INPUT
    // =========================================================================
    // Даём данные CPU когда они защёлканы и валидны
    always_comb begin
        if (native_mmu_access) begin
            // Данные от MMU (для внутренних регистров MMU)
            z80_di = native_mmu_cpu_dout;
        end else if (legacy_mmu_access) begin
            // Данные от MMU (для внутренних регистров MMU)
            z80_di = legacy_mmu_cpu_dout;        
        end else begin
            // По умолчанию 0xFF
            z80_di = wb_dat_in_reg;        
        end
    end


 
    // =========================================================================
    // OUTPUT SIGNALS
    // =========================================================================
    assign busak_o = ~z80_busak_n;
    assign legacy_mode_o = legacy_mode;
    assign native_mode_o = native_mode;
    assign supervisor_mode_o = native_supervisor_mode;
    assign debug_halt_status = debug_halt;

endmodule

`default_nettype wire