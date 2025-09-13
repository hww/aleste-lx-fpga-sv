module mmu_legacy 
(
    input  logic        clk,
    input  logic        reset,
    input  logic        enable,    // Legacy mode active

    // Slave Wishbone Interface (для конфигурации)
    input  logic        s_wb_cyc_i,
    input  logic        s_wb_stb_i,
    input  logic        s_wb_we_i,
    input  logic [23:0] s_wb_adr_i,
    input  logic [7:0]  s_wb_dat_i,
    output logic [7:0]  s_wb_dat_o,
    output logic        s_wb_ack_o,

    // Master Wishbone Interface (для доступа к памяти и IO)
    output logic        m_wb_cyc_o,
    output logic        m_wb_stb_o,
    output logic        m_wb_we_o,
    output logic        m_wb_tga_o,  // 0=MEM, 1=IO
    output logic [23:0] m_wb_adr_o,
    output logic [7:0]  m_wb_dat_o,
    input  logic [7:0]  m_wb_dat_i,
    input  logic        m_wb_ack_i,
    
    // Z80 Bus Interface
    input  logic [15:0] cpu_a,
    input  logic        cpu_mreq_n,
    input  logic        cpu_iorq_n,
    input  logic        cpu_rd_n,
    input  logic        cpu_wr_n,
    input  logic [7:0]  cpu_dout,

    // Control outputs
    output logic [1:0]  graphic_mode,
    output logic        irq_control
);

    // Internal registers
    logic [7:0] reg_rmr;
    logic [7:0] reg_mmr;
    logic [7:0] reg_upper_rom;

    // Decoding
    logic is_7fxx_write;
    logic is_dfxx_write;
    logic is_mem_access;
    logic is_mem_write;
    logic is_mem_read;
    logic is_io_access;
    logic is_internal_io;

    // Gate Array decoding
    logic gate_array_select;
    logic [1:0] gate_array_reg;

    // Memory configuration
    logic [2:0] memory_config;
    logic [4:0] memory_bank;

    // Address calculation
    logic [23:0] physical_address;
    logic rom_access;
    logic ram_access;

    // Wishbone handling
    logic wb_busy;

    // Decode control signals
    assign is_7fxx_write = ~cpu_iorq_n & ~cpu_wr_n & (cpu_a[15:8] == 8'h7F);
    assign is_dfxx_write = ~cpu_iorq_n & ~cpu_wr_n & (cpu_a[15:8] == 8'hDF);
    assign is_mem_access = ~cpu_mreq_n;
    assign is_io_access = ~cpu_iorq_n;
    assign is_mem_write = is_mem_access & ~cpu_wr_n;
    assign is_mem_read = is_mem_access & ~cpu_rd_n;

    // Internal IO регистры (7F, DF) - обрабатываются внутри, не идут в Wishbone
    assign is_internal_io = is_7fxx_write | is_dfxx_write;

    assign gate_array_select = is_7fxx_write & enable;
    assign gate_array_reg = cpu_dout[7:6];

    // Update registers from Z80
    always_ff @(posedge clk) begin
        if (reset) begin
            reg_rmr <= 8'b10000000;
            reg_mmr <= 8'b11000000;
            reg_upper_rom <= 8'h00;
        end else if (enable) begin
            if (gate_array_select) begin
                case (gate_array_reg)
                    2'b10: reg_rmr <= cpu_dout;      // RMR write
                    2'b11: reg_mmr <= cpu_dout;      // MMR write
                endcase
            end

            if (is_dfxx_write) begin
                reg_upper_rom <= cpu_dout;           // Upper ROM select
            end
        end
    end

    // Update registers from Wishbone (Supervisor access)
    always_ff @(posedge clk) begin
        if (reset) begin
            s_wb_ack_o <= 1'b0;
            s_wb_dat_o <= 8'h00;
        end else begin
            s_wb_ack_o <= 1'b0;
            
            if (s_wb_cyc_i & s_wb_stb_i & ~s_wb_ack_o) begin
                s_wb_ack_o <= 1'b1;
                
                if (s_wb_we_i) begin
                    // Write from Supervisor
                    case (s_wb_adr_i)
                        24'hFC0100: reg_rmr <= s_wb_dat_i;
                        24'hFC0101: reg_mmr <= s_wb_dat_i;
                        24'hFC0140: reg_upper_rom <= s_wb_dat_i;
                    endcase
                end else begin
                    // Read from Supervisor
                    case (s_wb_adr_i)
                        24'hFC0100: s_wb_dat_o <= reg_rmr;
                        24'hFC0101: s_wb_dat_o <= reg_mmr;
                        24'hFC0140: s_wb_dat_o <= reg_upper_rom;
                        default: s_wb_dat_o <= 8'hFF;
                    endcase
                end
            end
        end
    end

    // Memory configuration decoding
    assign memory_config = reg_mmr[2:0];
    assign memory_bank = {reg_mmr[5:3], 2'b00}; // 64KB blocks

    // Complex memory address calculation (CPC 6128 compatible)
    always_comb begin
        physical_address = 24'h000000;
        rom_access = 1'b0;
        ram_access = 1'b1;

        if (is_mem_access) begin
            case (memory_config)
                // Config 0: Standard 64K
                3'b000: physical_address = {8'h00, cpu_a};
                
                // Config 1: RAM 0,1,2,3
                3'b001: begin
                    case (cpu_a[15:14])
                        2'b00: physical_address = {memory_bank + 3'd0, cpu_a[13:0]};
                        2'b01: physical_address = {memory_bank + 3'd1, cpu_a[13:0]};
                        2'b10: physical_address = {memory_bank + 3'd2, cpu_a[13:0]};
                        2'b11: physical_address = {memory_bank + 3'd3, cpu_a[13:0]};
                    endcase
                end
                
                // Config 2: RAM 0,1,2,7
                3'b010: begin
                    case (cpu_a[15:14])
                        2'b00: physical_address = {memory_bank + 3'd0, cpu_a[13:0]};
                        2'b01: physical_address = {memory_bank + 3'd1, cpu_a[13:0]};
                        2'b10: physical_address = {memory_bank + 3'd2, cpu_a[13:0]};
                        2'b11: physical_address = {memory_bank + 3'd7, cpu_a[13:0]};
                    endcase
                end
                
                // Add other configurations here...
                default: physical_address = {memory_bank, cpu_a[15:0]};
            endcase

            // ROM overrides
            if (cpu_a[15:14] == 2'b00 && ~reg_rmr[2]) begin // Lower ROM
                physical_address = {16'h0000, cpu_a[13:0]};
                rom_access = 1'b1;
                ram_access = 1'b0;
            end
            else if (cpu_a[15:14] == 2'b11 && ~reg_rmr[3]) begin // Upper ROM
                physical_address = {8'h01, reg_upper_rom, cpu_a[13:0]};
                rom_access = 1'b1;
                ram_access = 1'b0;
            end
        end
        else if (is_io_access & ~is_internal_io) begin
            // Все внешние IO доступы транслируются в Wishbone
            // Адрес расширяется до 24 бит (FFxxxx для IO пространства)
            physical_address = {8'hFF, cpu_a};
        end
    end

    // Control outputs
    assign graphic_mode = reg_rmr[1:0];
    assign irq_control = reg_rmr[4];

    // Wishbone master interface
    always_ff @(posedge clk) begin
        if (reset) begin
            m_wb_cyc_o <= 1'b0;
            m_wb_stb_o <= 1'b0;
            m_wb_we_o <= 1'b0;
            m_wb_tga_o <= 1'b0;
            wb_busy <= 1'b0;
        end else begin
            if (m_wb_ack_i) begin
                m_wb_stb_o <= 1'b0;
                wb_busy <= 1'b0;
            end
            
            if ((is_mem_access | (is_io_access & ~is_internal_io)) && ~wb_busy) begin
                m_wb_cyc_o <= 1'b1;
                m_wb_stb_o <= 1'b1;
                m_wb_we_o <= ~cpu_wr_n;  // Write для IO или memory
                m_wb_tga_o <= is_io_access; // 1 для IO, 0 для memory
                m_wb_adr_o <= physical_address;
                m_wb_dat_o <= cpu_dout;
                wb_busy <= 1'b1;
            end else if (~is_mem_access && ~is_io_access && ~wb_busy) begin
                m_wb_cyc_o <= 1'b0;
                m_wb_tga_o <= 1'b0;
            end
        end
    end

endmodule
