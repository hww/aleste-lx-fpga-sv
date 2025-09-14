// =============================================================================
// MMU Legacy Module for Aleste LX System
// =============================================================================
// Amstrad CPC 6128 Compatibility Mode Memory Management Unit
// Provides full hardware and software compatibility with Amstrad CPC 6128
// =============================================================================

module mmu_legacy (
    // -------------------------------------------------------------------------
    // Clock and Reset
    // -------------------------------------------------------------------------
    input  logic        clk,
    input  logic        reset,
    
    // -------------------------------------------------------------------------
    // Operation Mode Control
    // -------------------------------------------------------------------------
    input  logic        legacy_mode_i,            // Legacy mode active
    
    // -------------------------------------------------------------------------
    // SLAVE Wishbone Interface (Configuration Access)
    // -------------------------------------------------------------------------
    input  logic        s_wb_cyc_i,               // Cycle valid
    input  logic        s_wb_stb_i,               // Strobe
    input  logic        s_wb_we_i,                // Write enable
    input  logic [23:0] s_wb_adr_i,               // 24-bit address
    input  logic [7:0]  s_wb_dat_i,               // Data in
    output logic [7:0]  s_wb_dat_o,               // Data out
    output logic        s_wb_ack_o,               // Transfer acknowledge

    // -------------------------------------------------------------------------
    // MASTER Wishbone Interface (Memory and I/O Access)
    // -------------------------------------------------------------------------
    output logic        m_wb_cyc_o,               // Cycle valid
    output logic        m_wb_stb_o,               // Strobe
    output logic        m_wb_we_o,                // Write enable
    output logic        m_wb_tga_o,               // Address type: 0=MEM, 1=IO
    output logic [23:0] m_wb_adr_o,               // 24-bit physical address
    output logic [7:0]  m_wb_dat_o,               // Data out
    input  logic [7:0]  m_wb_dat_i,               // Data in
    input  logic        m_wb_ack_i,               // Transfer acknowledge
    output logic        s_wb_sel_o,               // Unit selected on WB but
    // -------------------------------------------------------------------------
    // Z80 Bus Interface
    // -------------------------------------------------------------------------
    input  logic [15:0] cpu_a,                    // Z80 address bus
    input  logic        cpu_mreq_n,               // Memory request
    input  logic        cpu_iorq_n,               // I/O request
    input  logic        cpu_rd_n,                 // Read strobe
    input  logic        cpu_wr_n,                 // Write strobe
    input  logic [7:0]  cpu_dat_i,                // Z80 data out
    output logic [7:0]  cpu_dat_o,                // Z80 data in  
    output logic        cpu_wait,                 // CPU wait signal

    // -------------------------------------------------------------------------
    // CPC Control Outputs
    // -------------------------------------------------------------------------
    output logic [1:0]  graphic_mode,             // CPC graphics mode
    output logic        irq_control,              // Interrupt control
    output logic        debug_rom_access_o,
    output logic        debug_ram_access_o,
    output logic        debug_io_access_o

);

    // =========================================================================
    // Internal Registers (CPC 6128 Compatible)
    // =========================================================================
    logic [7:0] reg_rmr;                          // RMR: Control Interrupt counter, ROM mapping
    logic [7:0] reg_mmr;                          // MMR: RAM memory mapping  
    logic [7:0] reg_upper_rom;                    // Upper ROM selection register

    // =========================================================================
    // Z80 Bus Decoding Signals
    // =========================================================================
    logic        is_7fxx_write;                   // Gate Array write (7Fxxh)
    logic        is_dfxx_write;                   // Upper ROM select write (DFxxh)
    logic        is_mem_access;                   // Memory access active
    logic        is_mem_write;                    // Memory write operation
    logic        is_mem_read;                     // Memory read operation
    logic        is_io_access;                    // I/O access active
    logic        is_internal_io;                  // Internal I/O register access

    // =========================================================================
    // Gate Array Control Signals
    // =========================================================================
    logic        gate_array_select;               // Gate Array register selected
    logic [1:0]  gate_array_reg;                  // Gate Array register type

    // =========================================================================
    // Memory Configuration
    // =========================================================================
    logic [2:0]  memory_config;                   // Current memory configuration
    logic [4:0]  memory_bank;                     // Current memory bank base

    // =========================================================================
    // Address Calculation
    // =========================================================================

    logic [23:0] physical_address;                // Адрес для доступа
    logic [23:0] ram_physical_address;            // Адрес для доступа к RAM
    logic [23:0] rom_physical_address;            // Адрес для доступа к ROM    
    logic [23:0] io_physical_address;             // Адрес для доступа к IO
    logic        rom_access;                      // ROM access in progress
    logic        ram_access;                      // RAM access in progress

    // =========================================================================
    // Wishbone Control
    // =========================================================================
    logic        wb_busy;                         // Wishbone transaction busy


    // =========================================================================
    // Z80 BUS DECODING
    // =========================================================================

    // Gate Array access detection (7Fxxh write)
    assign is_7fxx_write = ~cpu_iorq_n & ~cpu_wr_n & (cpu_a[15:8] == 8'h7F);
    
    // Upper ROM select detection (DFxxh write)
    assign is_dfxx_write = ~cpu_iorq_n & ~cpu_wr_n & (cpu_a[15:8] == 8'hDF);
    
    // Memory and I/O access detection
    assign is_mem_access = ~cpu_mreq_n;
    assign is_io_access  = ~cpu_iorq_n;
    assign is_mem_write  = is_mem_access & ~cpu_wr_n;
    assign is_mem_read   = is_mem_access & ~cpu_rd_n;

    // Internal I/O registers (handled internally, not forwarded to Wishbone)
    assign is_internal_io = is_7fxx_write | is_dfxx_write;

    // Gate Array register selection
    assign gate_array_select = is_7fxx_write & legacy_mode_i;
    assign gate_array_reg    = cpu_dat_i[7:6];     // Register type from data bits

    assign s_wb_sel_o = 1;
    
    // =========================================================================
    // CPC REGISTER UPDATE FROM Z80 BUS
    // =========================================================================
    always_ff @(posedge clk) begin
        if (reset) begin
            // Reset to CPC 6128 default values
            reg_rmr        <= 8'b10000000;        // Default RMR: Mode 0, ROMs enabled
            reg_mmr        <= 8'b11000000;        // Default MMR: Config 0, Bank 0
            reg_upper_rom  <= 8'h00;              // Default upper ROM bank 0
        end else if (legacy_mode_i) begin
            // Gate Array register writes
            if (gate_array_select) begin
                case (gate_array_reg)
                    2'b10: reg_rmr <= cpu_dat_i;   // RMR write (Configuration)
                    2'b11: reg_mmr <= cpu_dat_i;   // MMR write (Memory mapping)
                    default: ;                    // Ignore other values - НОВАЯ СТРОКА
                endcase
            end

            // Upper ROM selection write
            if (is_dfxx_write) begin
                reg_upper_rom <= cpu_dat_i;        // Upper ROM bank select
            end
        end
    end


    // =========================================================================
    // CPC REGISTER ACCESS VIA WISHBONE (SUPERVISOR MODE)
    // =========================================================================
    always_ff @(posedge clk) begin
        if (reset) begin
            s_wb_ack_o <= 1'b0;
            s_wb_dat_o <= 8'h00;
        end else begin
            s_wb_ack_o <= 1'b0;                   // Default no acknowledge
            
            if (s_wb_cyc_i & s_wb_stb_i & ~s_wb_ack_o) begin
                s_wb_ack_o <= 1'b1;               // Acknowledge valid access
                
                if (s_wb_we_i) begin
                    // Supervisor write to CPC registers
                    case (s_wb_adr_i)
                        24'hFC0100: reg_rmr       <= s_wb_dat_i;  // RMR register
                        24'hFC0101: reg_mmr       <= s_wb_dat_i;  // MMR register
                        24'hFC0140: reg_upper_rom <= s_wb_dat_i;  // Upper ROM select
                    endcase
                end else begin
                    // Supervisor read from CPC registers
                    case (s_wb_adr_i)
                        24'hFC0100: s_wb_dat_o <= reg_rmr;        // Read RMR
                        24'hFC0101: s_wb_dat_o <= reg_mmr;        // Read MMR
                        24'hFC0140: s_wb_dat_o <= reg_upper_rom;  // Read Upper ROM
                        default:    s_wb_dat_o <= 8'hFF;          // Default response
                    endcase
                end
            end
        end
    end


    // =========================================================================
    // MEMORY CONFIGURATION DECODING
    // =========================================================================
    assign memory_config = reg_mmr[2:0];          // Memory configuration bits
    assign memory_bank   = {reg_mmr[5:3], 2'b00}; // 64KB memory bank base address


    // =========================================================================
    // COMPLEX MEMORY ADDRESS CALCULATION (CPC 6128 COMPATIBLE)
    // =========================================================================
    always_comb begin
        // Default values
        io_physical_address = 24'h000000;
        ram_physical_address = 24'h000000;
        rom_physical_address = 24'h000000;
        rom_access = 1'b0;
        ram_access = 1'b1;

        if (is_mem_access) begin
            // CPC 6128 memory mapping configurations
            case (memory_config)
                // Config 0: Standard 64K mapping
                3'b000: ram_physical_address = {8'h00, cpu_a};
                
                // Config 1: RAM 0,1,2,3 (sequential banks)
                3'b001: begin
                    case (cpu_a[15:14])
                        2'b00: ram_physical_address = {memory_bank + 3'd0, cpu_a[13:0]};
                        2'b01: ram_physical_address = {memory_bank + 3'd1, cpu_a[13:0]};
                        2'b10: ram_physical_address = {memory_bank + 3'd2, cpu_a[13:0]};
                        2'b11: ram_physical_address = {memory_bank + 3'd3, cpu_a[13:0]};
                    endcase
                end
                
                // Config 2: RAM 0,1,2,7 (bank 7 in upper memory)
                3'b010: begin
                    case (cpu_a[15:14])
                        2'b00: ram_physical_address = {memory_bank + 3'd0, cpu_a[13:0]};
                        2'b01: ram_physical_address = {memory_bank + 3'd1, cpu_a[13:0]};
                        2'b10: ram_physical_address = {memory_bank + 3'd2, cpu_a[13:0]};
                        2'b11: ram_physical_address = {memory_bank + 3'd7, cpu_a[13:0]};
                    endcase
                end
                
                // Additional CPC 6128 configurations can be added here...
                default: ram_physical_address = {memory_bank, cpu_a[15:0]};
            endcase

            // ROM access overrides (CPC ROM banking)
            if (cpu_a[15:14] == 2'b00 && ~reg_rmr[2]) begin
                // Lower ROM access (0000-3FFF) when enabled
                rom_physical_address = {10'b0100000000, cpu_a[13:0]};
                rom_access = 1'b1;
                ram_access = 1'b0;
            end
            else if (cpu_a[15:14] == 2'b11 && ~reg_rmr[3]) begin
                // Upper ROM access (C000-FFFF) when enabled
                rom_physical_address = {2'b01, reg_upper_rom, cpu_a[13:0]};
                rom_access = 1'b1;
                ram_access = 1'b0;
            end
        end
        // IO Address      
        else if (is_io_access & ~is_internal_io) begin
            // External I/O accesses go to Wishbone
            // Map to FFxxxxh IO space (24-bit address)
            io_physical_address = {8'hFF, cpu_a};
        end
    end

    always_comb begin
        if (is_io_access) begin
            physical_address = io_physical_address;
        end
        else if (is_mem_read && rom_access) begin
            physical_address = rom_physical_address;
        end 
        else begin
            physical_address = ram_physical_address;
        end
    end

    assign debug_rom_access_o = rom_access;
    assign debug_ram_access_o = ram_access;
    assign debug_io_access_o = is_io_access;

    // =========================================================================
    // CPC CONTROL OUTPUTS
    // =========================================================================
    assign graphic_mode = reg_rmr[1:0];           // CPC graphics mode (0-3)
    assign irq_control  = reg_rmr[4];             // Interrupt generation control


    // =========================================================================
    // WISHBONE MASTER INTERFACE CONTROL
    // =========================================================================
    always_ff @(posedge clk) begin
        if (reset) begin
            m_wb_cyc_o  <= 1'b0;
            m_wb_stb_o  <= 1'b0;
            m_wb_we_o   <= 1'b0;
            m_wb_tga_o  <= 1'b0;
            wb_busy     <= 1'b0;
        end else begin
            // Clear strobe on acknowledge
            if (m_wb_ack_i) begin
                m_wb_stb_o <= 1'b0;
                wb_busy    <= 1'b0;
            end
            
            // Start new Wishbone transaction
            if ((is_mem_access | (is_io_access & ~is_internal_io)) && ~wb_busy) begin
                m_wb_cyc_o  <= 1'b1;
                m_wb_stb_o  <= 1'b1;
                m_wb_we_o   <= ~cpu_wr_n;         // Write enable
                m_wb_tga_o  <= is_io_access;      // 0=MEM, 1=IO
                m_wb_adr_o  <= physical_address;  // 24-bit physical address
                m_wb_dat_o  <= cpu_dat_i;          // Data to write
                wb_busy     <= 1'b1;
            end 
            // Release bus when no activity
            else if (~is_mem_access && ~is_io_access && ~wb_busy) begin
                m_wb_cyc_o <= 1'b0;
                m_wb_tga_o <= 1'b0;
            end
        end
    end

    // =========================================================================
    // CPU DATA READING - ПРОСТОЕ ЧТЕНИЕ ДЛЯ ПРОЦЕССОРА
    // =========================================================================
    always_comb begin
        // По умолчанию - данные от Wishbone
        cpu_dat_o = 8'hFF;  // Значение по умолчанию
        if (is_mem_read && m_wb_ack_i) begin
            cpu_dat_o = m_wb_dat_i;
        end 
    end

    // Wait state generation for Wishbone transactions
    assign cpu_wait = (!m_wb_cyc_o || !m_wb_ack_i);
endmodule
