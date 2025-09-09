module mmu_cpc_legacy (
    input  logic        clk,       // Тактовый сигнал
    input  logic        reset,     // Синхронный сброс
    input  logic        enable,    // Разрешение работы модуля

    // Slave Wishbone Interface (для конфигурации)
    input  logic        s_wb_cyc_i,
    input  logic        s_wb_stb_i,
    input  logic        s_wb_we_i,
    input  logic [23:0] s_wb_adr_i,
    input  logic [7:0]  s_wb_dat_i,
    output logic [7:0]  s_wb_dat_o,
    output logic        s_wb_ack_o,

    // Master Wishbone Interface (для доступа к памяти)
    output logic        m_wb_cyc_o,
    output logic        m_wb_stb_o,
    output logic        m_wb_we_o,
    output logic [23:0] m_wb_adr_o,
    output logic [7:0]  m_wb_dat_o,
    input  logic [7:0]  m_wb_dat_i,

    // Z80 Bus Interface
    input  logic [15:0] cpu_a,     // Шина адреса Z80
    input  logic        cpu_mreq_n,// Сигнал обращения к памяти
    input  logic        cpu_iorq_n,// Сигнал обращения к портам
    input  logic        cpu_rd_n,  // Сигнал чтения
    input  logic        cpu_wr_n,  // Сигнал записи

    // Output control signals
    output logic [1:0]  graphic_mode, // Режим графики
    output logic        irq_control   // Контроль прерываний
);

    // Internal registers
    logic [7:0] reg_rmr;           // RMR register
    logic [7:0] reg_mmr;           // MMR register  
    logic [7:0] reg_upper_rom;     // Upper ROM select
    logic [7:0] reg_mmio_page;     // MMIO page register

    // Wire definitions
    logic        is_mem_access;
    logic        is_io_access;
    logic        is_write;
    logic        is_read;
    logic        is_7fxx_io;
    logic        is_dfxx_io;
    logic        is_d300_io;
    logic        is_d0xx_io;

    logic [23:0] ram_address;      // Вычисленный адрес RAM
    logic [23:0] rom_address;      // Вычисленный адрес ROM
    logic        rom_selected;     // ROM область выбрана
    logic        rom_enabled;      // ROM разрешена для этой области

    // Decode internal control signals from RMR
    assign graphic_mode = reg_rmr[1:0];
    assign irq_control  = reg_rmr[4];

    // Z80 bus decoding
    assign is_mem_access = ~cpu_mreq_n & enable;
    assign is_io_access  = ~cpu_iorq_n & enable;
    assign is_write      = ~cpu_wr_n;
    assign is_read       = ~cpu_rd_n;

    // IO port decoding
    assign is_7fxx_io = is_io_access & (cpu_a[7:0] == 8'h7F);
    assign is_dfxx_io = is_io_access & (cpu_a[7:0] == 8'hDF);
    assign is_d300_io = is_io_access & (cpu_a[15:0] == 16'hD300);
    assign is_d0xx_io = is_io_access & (cpu_a[15:4] == 12'hD0);

    // Slave Wishbone handling (register writes)
    always_ff @(posedge clk) begin
        if (reset) begin
            reg_rmr        <= 8'b10000000; // Default state
            reg_mmr        <= 8'b11000000;
            reg_upper_rom  <= 8'h00;
            reg_mmio_page  <= 8'h00;
            s_wb_ack_o     <= 1'b0;
        end else begin
            s_wb_ack_o <= 1'b0;
            
            if (s_wb_cyc_i & s_wb_stb_i) begin
                s_wb_ack_o <= 1'b1;
                
                if (s_wb_we_i) begin
                    casez (s_wb_adr_i[23:0])
                        24'hFF7F??: begin
                            case (s_wb_dat_i[7:6])
                                2'b10: reg_rmr <= s_wb_dat_i;
                                2'b11: reg_mmr <= s_wb_dat_i;
                            endcase
                        end
                        24'hFFDF??: reg_upper_rom <= s_wb_dat_i;
                        24'hFFD300: reg_mmio_page <= s_wb_dat_i;
                    endcase
                end
            end
        end
    end

    // RAM address calculation based on MMR
    always_comb begin
        casez ({reg_mmr[5:3], reg_mmr[2:0], cpu_a[15:14]})
            // 128K mode patterns
            default: ram_address = {5'b00000, 3'b000, cpu_a[13:0]}; // Default mapping
        endcase
    end

    // ROM address calculation
    always_comb begin
        rom_selected = 1'b0;
        rom_enabled = 1'b0;
        rom_address = 24'h000000;
        
        case (cpu_a[15:14])
            2'b00: begin // Lower ROM (0000-3FFF)
                rom_selected = 1'b1;
                rom_enabled = ~reg_rmr[2]; // lower_rom bit
                rom_address = {16'h0000, cpu_a[13:0]};
            end
            2'b11: begin // Upper ROM (C000-FFFF) 
                rom_selected = 1'b1;
                rom_enabled = ~reg_rmr[3]; // upper_rom bit
                rom_address = {8'h01, reg_upper_rom, cpu_a[13:0]};
            end
        endcase
    end

    // Master Wishbone address generation
    always_comb begin
        m_wb_cyc_o = 1'b0;
        m_wb_stb_o = 1'b0;
        m_wb_we_o = is_write;
        m_wb_adr_o = 24'h000000;
        m_wb_dat_o = 8'h00;

        if (is_mem_access) begin
            m_wb_cyc_o = 1'b1;
            m_wb_stb_o = 1'b1;
            
            if (is_write) begin
                m_wb_adr_o = ram_address; // Write always goes to RAM
            end else if (is_read) begin
                // Read from ROM if selected and enabled, else from RAM
                m_wb_adr_o = (rom_selected & rom_enabled) ? rom_address : ram_address;
            end
        end
        else if (is_d0xx_io) begin
            // MMIO Data Window access
            m_wb_cyc_o = 1'b1;
            m_wb_stb_o = 1'b1;
            m_wb_adr_o = 24'hFC0000 + {reg_mmio_page, cpu_a[7:0]};
        end
    end

endmodule
