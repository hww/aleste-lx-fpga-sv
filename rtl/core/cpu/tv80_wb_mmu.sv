module tv80_lx_wb (
    input          nrst_i,
    input          clk_i,

    // WISHBONE master interface
    output [23:0]  wbm_adr_o,  // Extended to 24-bit for LX memory space
    output [1:0]   wbm_tga_o,
    input  [7:0]   wbm_dat_i,
    output [7:0]   wbm_dat_o,
    output         wbm_cyc_o,
    output         wbm_stb_o,
    output         wbm_we_o,
    input          wbm_ack_i,
    
    // Z80-specific interface
    input          nmi_req_i,
    input          int_req_i,
    input          busrq_i,
    output         busak_o,

    // LX-specific control
    output [1:0]   graphic_mode,
    output         irq_control,
    output         supervisor_mode
);

    // TV80 Interface
    wire           m1_n;
    wire           mreq_n;
    wire           iorq_n;
    wire           rd_n; 
    wire           wr_n;
    wire           rfsh_n;
    wire           halt_n;
    wire           busak_n;
    wire [15:0]    tv80_adr; 
    wire  [7:0]    tv80_dat_o;
    wire           wait_n;
    wire           int_n;
    wire           nmi_n;
    wire           busrq_n;
    wire  [7:0]    tv80_dat_i;

    // Internal signals
    wire           legacy_mmu_enable;
    wire           native_mmu_enable;
    wire           current_superuser;
    wire           trap_condition;

    // MMU interfaces
    wire           legacy_mmu_cyc;
    wire           legacy_mmu_stb;
    wire [23:0]    legacy_mmu_adr;
    wire [7:0]     legacy_mmu_dat;

    wire           native_mmu_cyc;
    wire           native_mmu_stb;
    wire [23:0]    native_mmu_adr;
    wire [7:0]     native_mmu_dat;

    // Control signals
    reg [7:0]      global_ctrl_reg;
    reg            supervisor_flag;
    wire           supervisor_hook_en;
    wire           trap_detected;

    // TV80 core instantiation
    tv80s z80_core (
        .m1_n(m1_n), 
        .mreq_n(mreq_n), 
        .iorq_n(iorq_n), 
        .rd_n(rd_n), 
        .wr_n(wr_n), 
        .rfsh_n(rfsh_n), 
        .halt_n(halt_n), 
        .busak_n(busak_n), 
        .A(tv80_adr), 
        .dout(tv80_dat_o), 
        .reset_n(nrst_i), 
        .clk(clk_i), 
        .wait_n(wait_n), 
        .int_n(int_n), 
        .nmi_n(nmi_n), 
        .busrq_n(busrq_n), 
        .di(tv80_dat_i)
    );

    // Control logic
    assign supervisor_hook_en = global_ctrl_reg[2];
    assign trap_detected = supervisor_hook_en & ~m1_n & 
                          (tv80_adr == 16'h0000 || tv80_adr == 16'h0038);

    always @(posedge clk_i or negedge nrst_i) begin
        if (!nrst_i) begin
            global_ctrl_reg <= 8'h02; // Supervisor mode on reset
            supervisor_flag <= 1'b1;
        end else begin
            // Handle trap conditions
            if (trap_detected)
                supervisor_flag <= 1'b1;
            
            // Handle register writes (simplified)
            if (~iorq_n & ~wr_n & tv80_adr[7:0] == 8'hD7)
                global_ctrl_reg <= tv80_dat_o;
        end
    end

    assign current_superuser = global_ctrl_reg[1] | supervisor_flag;
    assign supervisor_mode = current_superuser;

    // MMU enable logic
    assign legacy_mmu_enable = ~global_ctrl_reg[0] & ~current_superuser; // Legacy in user mode
    assign native_mmu_enable = global_ctrl_reg[0] | current_superuser;   // Native in supervisor or native user mode

    // Legacy MMU instantiation
    mmu_cpc_legacy legacy_mmu (
        .clk(clk_i),
        .reset(~nrst_i),
        .enable(legacy_mmu_enable),
        .s_wb_cyc_i(1'b0),
        .s_wb_stb_i(1'b0),
        .s_wb_we_i(1'b0),
        .s_wb_adr_i(24'h0),
        .s_wb_dat_i(8'h0),
        .s_wb_dat_o(),
        .s_wb_ack_o(),
        .m_wb_cyc_o(legacy_mmu_cyc),
        .m_wb_stb_o(legacy_mmu_stb),
        .m_wb_we_o(wbm_we_o),
        .m_wb_adr_o(legacy_mmu_adr),
        .m_wb_dat_o(legacy_mmu_dat),
        .m_wb_dat_i(wbm_dat_i),
        .cpu_a(tv80_adr),
        .cpu_mreq_n(mreq_n),
        .cpu_iorq_n(iorq_n),
        .cpu_rd_n(rd_n),
        .cpu_wr_n(wr_n),
        .graphic_mode(graphic_mode),
        .irq_control(irq_control)
    );

    // Native MMU instantiation
    mmu_lx_native native_mmu (
        .clk(clk_i),
        .reset(~nrst_i),
        .enable(native_mmu_enable),
        .superuser(current_superuser),
        .m_wb_cyc_o(native_mmu_cyc),
        .m_wb_stb_o(native_mmu_stb),
        .m_wb_we_o(wbm_we_o),
        .m_wb_adr_o(native_mmu_adr),
        .m_wb_dat_o(native_mmu_dat),
        .m_wb_dat_i(wbm_dat_i),
        .cpu_a(tv80_adr),
        .cpu_mreq_n(mreq_n),
        .cpu_iorq_n(iorq_n),
        .cpu_rd_n(rd_n),
        .cpu_wr_n(wr_n),
        .cpu_din(tv80_dat_o),
        .cpu_dout(tv80_dat_i)
    );

    // MMU output multiplexing
    assign wbm_cyc_o = legacy_mmu_enable ? legacy_mmu_cyc : native_mmu_cyc;
    assign wbm_stb_o = legacy_mmu_enable ? legacy_mmu_stb : native_mmu_stb;
    assign wbm_adr_o = legacy_mmu_enable ? legacy_mmu_adr : native_mmu_adr;
    assign wbm_dat_o = legacy_mmu_enable ? legacy_mmu_dat : native_mmu_dat;

    // Wait logic
    assign wait_n = wbm_stb_o ? wbm_ack_i : 1'b1;

    // Interrupt handling
    assign int_n = ~int_req_i;
    assign nmi_n = ~nmi_req_i;
    assign busrq_n = ~busrq_i;
    assign busak_o = ~busak_n;

    // Tag generation
    assign wbm_tga_o = (~iorq_n ? 2'b01 : 2'b00); // IO=01, MEM=00

endmodule

