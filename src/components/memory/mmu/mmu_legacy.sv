// =============================================================================
// MMU Legacy Module for Aleste LX System
// =============================================================================
// Amstrad CPC 6128 Compatibility Mode Memory Management Unit
// Provides full hardware and software compatibility with Amstrad CPC 6128
// =============================================================================
`default_nettype none

module mmu_legacy (
    // -------------------------------------------------------------------------
    // Clock and Reset
    // -------------------------------------------------------------------------
    input  logic        clk,
    input  logic        clke,
    input  logic        reset,
    
    // -------------------------------------------------------------------------
    // Operation Mode Control
    // -------------------------------------------------------------------------
    input  logic        legacy_mode_i,            // Legacy mode active
    
    // -------------------------------------------------------------------------
    // MASTER Wishbone Interface (Memory and I/O Access ONLY)
    // -------------------------------------------------------------------------
    output logic        m_wb_cyc_o,               // Cycle valid
    output logic        m_wb_stb_o,               // Strobe
    output logic        m_wb_we_o,                // Write enable
    output logic [23:0] m_wb_adr_o,               // 24-bit physical address
    output logic [7:0]  m_wb_dat_o,               // Data out
    input  logic [7:0]  m_wb_dat_i,               // Data in
    input  logic        m_wb_ack_i,               // Transfer acknowledge

    // -------------------------------------------------------------------------
    // Z80 Bus Interface
    // -------------------------------------------------------------------------
    input  logic [15:0] cpu_a,                    // Z80 address bus
    input  logic        cpu_mreq_n,               // Memory request
    input  logic        cpu_iorq_n,               // I/O request
    input  logic        cpu_rd_n,                 // Read strobe
    input  logic        cpu_wr_n,                 // Write strobe
    input  logic [7:0]  cpu_din,                  // Z80 data out
    output logic [7:0]  cpu_dout,                 // Z80 data in  
    output logic        cpu_mmu_access_o,         // Access to mmu

    // -------------------------------------------------------------------------
    // CPC Control Outputs
    // -------------------------------------------------------------------------
    output logic [1:0]  cfg_graphic_mode,             // CPC graphics mode
    output logic        cfg_irq_control,              // Interrupt control
    
    // -------------------------------------------------------------------------
    // Debug Outputs (optional)
    // -------------------------------------------------------------------------
    output logic        debug_rom_access_o,
    output logic        debug_ram_access_o,
    output logic        debug_io_access_o

);

    // =========================================================================
    // Constants
    // =========================================================================
    localparam TOTAL_ROM_BANKS = 256;             // 256 unique ROM banks
    localparam LOWER_ROM_BANK = 8'hFC;            // Bank (FC) for Lower ROM, (FF) for CPM 
    localparam CPC_RAM_SLOT = 2'b00;              // Slot 0: 0xC00000-0xFFFFFF
    localparam CPC_ROM_SLOT = 2'b01;              // Slot 1: 0xC00000-0xFFFFFF

    // =========================================================================
    // Internal Registers (CPC 6128 Compatible)
    // =========================================================================
    logic [7:0] reg_rmr;                          // RMR: Control Interrupt counter, ROM mapping
    logic [7:0] reg_mmr;                          // MMR: RAM memory mapping  
    logic [7:0] reg_upper_rom;                    // Upper ROM selection registe           
    
    // =========================================================================
    // Memory Configuration
    // =========================================================================
    logic [2:0]  rmr_config;                   // Current memory configuration
    logic [2:0]  rmr_bank;                     // Current memory bank base
    logic cfg_lower_rom, cfg_upper_rom;

    assign rmr_config =  reg_mmr[2:0];          // Memory configuration bits
    assign rmr_bank   =  reg_mmr[5:3];          // 64KB memory bank base address
    
    assign cfg_graphic_mode = reg_rmr[1:0];           // CPC graphics mode (0-3)
    assign cfg_lower_rom    = reg_rmr[2];             // 1=Lower ROM area disable, 0=Lower ROM area enable 
    assign cfg_upper_rom    = reg_rmr[3];             // 1=Upper ROM area disable, 0=Upper ROM area enable 
    assign cfg_irq_control  = reg_rmr[4];             // Interrupt generation control

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

    // Memory and I/O access detection
    wire is_mem_access = legacy_mode_i & ~cpu_mreq_n;    // Memory access active
    wire is_mem_write  = is_mem_access & ~cpu_wr_n;      // Memory write operation
    wire is_mem_read   = is_mem_access & ~cpu_rd_n;      // Memory read operation
    wire is_io_access  = legacy_mode_i & ~cpu_iorq_n;    // I/O access active
    wire is_io_write   = is_io_access & ~cpu_wr_n;;      // I/O write
    wire is_io_read    = is_io_access &  cpu_wr_n;;      // I/O read

    // Gate Array access detection (7Fxxh write)
    wire is_7fxx_cs = (cpu_a[15:8] == 8'h7F);                   // Gate Array select (7Fxxh)
    wire is_7fxx_write = is_io_access & ~cpu_wr_n & is_7fxx_cs; // Gate Array select (7Fxxh)
    
    // Upper ROM select detection (DFxxh write)
    wire is_dfxx_cs = (cpu_a[15:8] == 8'hDF);                   // Upper ROM write (DFxxh)
    wire is_dfxx_write = is_io_access & ~cpu_wr_n & is_dfxx_cs; // Upper ROM write (DFxxh)
    

    // Internal I/O registers (handled internally, not forwarded to Wishbone)
    wire is_internal_cs = (is_7fxx_cs | is_dfxx_cs);            // Internal I/O register access
    wire is_internal_io_acc = is_io_access &  is_internal_cs;   // Internal I/O io
    wire is_external_io_acc = is_io_access & ~is_internal_cs;   // Internal I/O io

    wire [1:0] gate_array_reg_num = cpu_din[7:6];               // Gate Array register type

    // =========================================================================
    // CPC REGISTER UPDATE FROM Z80 BUS
    // =========================================================================
    always_ff @(posedge clk) begin
        if (reset) begin
            // Reset to CPC 6128 default values
            reg_rmr        <= 8'b10000000;        // Default RMR: Mode 0, ROMs enabled
            reg_mmr        <= 8'b11000000;        // Default MMR: Config 0, Bank 0
            reg_upper_rom  <= 8'h00;              // Default upper ROM bank 0
        end else if (clke && legacy_mode_i) begin
            // Gate Array register writes (7Fxxh)
            if (is_7fxx_write) begin
                case (gate_array_reg_num)
                    2'b10: reg_rmr <= cpu_din;   // RMR write (Configuration)
                    2'b11: reg_mmr <= cpu_din;   // MMR write (Memory mapping)
                    // Other values (2'b00, 2'b01) are for palette, ignored here
                    default: ;
                endcase
            end

            // Upper ROM selection write (DFxxh)
            if (is_dfxx_write) begin
                reg_upper_rom <= cpu_din;        // Upper ROM bank select
            end
        end
    end

    // =========================================================================
    // MEMORY CONFIGURATION DECODING
    // =========================================================================
    logic [2:0] ram_page_num;

    always_comb begin
        case (rmr_config)  // rmr_config = reg_mmr[2:0]
            // Config 0: RAM_0, RAM_1, RAM_2, RAM_3
            3'b000: begin
                case (cpu_a[15:14])
                    2'b00: ram_page_num = 3'd0;  // RAM_0
                    2'b01: ram_page_num = 3'd1;  // RAM_1
                    2'b10: ram_page_num = 3'd2;  // RAM_2
                    2'b11: ram_page_num = 3'd3;  // RAM_3
                endcase
            end
            
            // Config 1: RAM_0, RAM_1, RAM_2, RAM_7
            3'b001: begin
                case (cpu_a[15:14])
                    2'b00: ram_page_num = 3'd0;  // RAM_0
                    2'b01: ram_page_num = 3'd1;  // RAM_1
                    2'b10: ram_page_num = 3'd2;  // RAM_2
                    2'b11: ram_page_num = 3'd7;  // RAM_7
                endcase
            end
            
            // Config 2: RAM_4, RAM_5, RAM_6, RAM_7
            3'b010: begin
                case (cpu_a[15:14])
                    2'b00: ram_page_num = 3'd4;  // RAM_4
                    2'b01: ram_page_num = 3'd5;  // RAM_5
                    2'b10: ram_page_num = 3'd6;  // RAM_6
                    2'b11: ram_page_num = 3'd7;  // RAM_7
                endcase
            end
            
            // Config 3: RAM_0, RAM_3, RAM_2, RAM_7
            3'b011: begin
                case (cpu_a[15:14])
                    2'b00: ram_page_num = 3'd0;  // RAM_0
                    2'b01: ram_page_num = 3'd3;  // RAM_3
                    2'b10: ram_page_num = 3'd2;  // RAM_2
                    2'b11: ram_page_num = 3'd7;  // RAM_7
                endcase
            end
            
            // Config 4: RAM_0, RAM_4, RAM_2, RAM_3
            3'b100: begin
                case (cpu_a[15:14])
                    2'b00: ram_page_num = 3'd0;  // RAM_0
                    2'b01: ram_page_num = 3'd4;  // RAM_4
                    2'b10: ram_page_num = 3'd2;  // RAM_2
                    2'b11: ram_page_num = 3'd3;  // RAM_3
                endcase
            end
            
            // Config 5: RAM_0, RAM_5, RAM_2, RAM_3
            3'b101: begin
                case (cpu_a[15:14])
                    2'b00: ram_page_num = 3'd0;  // RAM_0
                    2'b01: ram_page_num = 3'd5;  // RAM_5
                    2'b10: ram_page_num = 3'd2;  // RAM_2
                    2'b11: ram_page_num = 3'd3;  // RAM_3
                endcase
            end
            
            // Config 6: RAM_0, RAM_6, RAM_2, RAM_3
            3'b110: begin
                case (cpu_a[15:14])
                    2'b00: ram_page_num = 3'd0;  // RAM_0
                    2'b01: ram_page_num = 3'd6;  // RAM_6
                    2'b10: ram_page_num = 3'd2;  // RAM_2
                    2'b11: ram_page_num = 3'd3;  // RAM_3
                endcase
            end
            
            // Config 7: RAM_0, RAM_7, RAM_2, RAM_3
            3'b111: begin
                case (cpu_a[15:14])
                    2'b00: ram_page_num = 3'd0;  // RAM_0
                    2'b01: ram_page_num = 3'd7;  // RAM_7
                    2'b10: ram_page_num = 3'd2;  // RAM_2
                    2'b11: ram_page_num = 3'd3;  // RAM_3
                endcase
            end

        endcase        
    end

    always_comb begin
        // Default values
        io_physical_address = 24'h000000;
        ram_physical_address = 24'h000000;
        rom_physical_address = 24'h000000;
        rom_access = 1'b0;
        ram_access = 1'b1;

        if (is_mem_access) begin

            if (ram_page_num[2] == 0) begin
                // standart
                //                         2bits      3bits    3bits       16bits
                ram_physical_address = {CPC_RAM_SLOT, 3'b000, 3'b000,   cpu_a[15:0]};
            end else begin
                // expanded
                //                         2bits      3bits    3bits        2bits           14bits
                ram_physical_address = {CPC_RAM_SLOT, 3'b010, rmr_bank, ram_page_num[1:0], cpu_a[13:0]};
            end

            // ROM access overrides (CPC ROM banking)
            if (cpu_a[15:14] == 2'b00 && ~cfg_lower_rom) begin
                // Lower ROM access (0000-3FFF) when enabled
                //                      2bits            8bits              16bits
                rom_physical_address = {CPC_ROM_SLOT, LOWER_ROM_BANK[7:2], cpu_a[15:0]}; // Fixed ROM address
                rom_access = 1'b1;
                ram_access = 1'b0;
            end
            else if (cpu_a[15:14] == 2'b11 && ~cfg_upper_rom) begin
                // Upper ROM access (C000-FFFF) when enabled
                //                        2bits         8bits           14bits
                rom_physical_address = {CPC_ROM_SLOT, reg_upper_rom, cpu_a[13:0]};
                rom_access = 1'b1;
                ram_access = 1'b0;
            end
        end
        // IO Address      
        else if (is_external_io_acc) begin
            // External I/O accesses go to Wishbone
            // Map to 3Fxxxxh IO space (24-bit address)
            io_physical_address = {8'hFF, cpu_a};
        end
    end

    // Final physical address selection
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

    // =========================================================================
    // DEBUG OUTPUTS
    // =========================================================================
    assign debug_rom_access_o = rom_access;
    assign debug_ram_access_o = ram_access;
    assign debug_io_access_o = is_io_access;

    // =========================================================================
    // WISHBONE MASTER INTERFACE CONTROL
    // =========================================================================
    always_ff @(posedge clk) begin
        if (reset) begin
            m_wb_cyc_o  <= 1'b0;
            m_wb_stb_o  <= 1'b0;
            m_wb_we_o   <= 1'b0;
            m_wb_adr_o  <= 24'h000000;
            m_wb_dat_o  <= 8'h00;
            wb_busy     <= 1'b0;
        end else if (clke) begin
            // Clear strobe on acknowledge
            if (m_wb_ack_i) begin
                m_wb_stb_o <= 1'b0;
                wb_busy    <= 1'b0;
            end
            
            // Start new Wishbone transaction
            if ((is_mem_access | (is_io_access & ~is_internal_io_acc)) && ~wb_busy) begin
                m_wb_cyc_o  <= 1'b1;
                m_wb_stb_o  <= 1'b1;
                m_wb_we_o   <= is_mem_write | (is_io_access & ~cpu_wr_n);
                m_wb_adr_o  <= physical_address;
                m_wb_dat_o  <= cpu_din;
                wb_busy     <= 1'b1;
            end 
            // Release bus when no activity
            else if (~is_mem_access && ~is_io_access && ~wb_busy) begin
                m_wb_cyc_o <= 1'b0;
            end
        end
    end

    // =========================================================================
    // CPU DATA READING
    // =========================================================================
    // Простое чтение данных от Wishbone
    assign cpu_dout = m_wb_dat_i;

    assign cpu_mmu_access_o = is_internal_io_acc;

endmodule
