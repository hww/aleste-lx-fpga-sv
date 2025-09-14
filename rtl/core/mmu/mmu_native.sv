// =============================================================================
// MMU Native Module for Aleste LX System
// =============================================================================
// Memory Management Unit with bank switching, privilege modes, and MMIO support
// Supports: Z80 memory mapping, Supervisor/User modes, Native/Legacy compatibility
// =============================================================================

module mmu_native (
    // -------------------------------------------------------------------------
    // Clock and Reset
    // -------------------------------------------------------------------------
    input  logic        clk,
    input  logic        reset,
    
    // -------------------------------------------------------------------------
    // Operation Modes and Legacy MMU Interface
    // -------------------------------------------------------------------------
    output logic        legacy_mode_o,
    output logic        native_mode_o,
    input  logic        supervisor_mode_i,        // Test mode override
    
    // -------------------------------------------------------------------------
    // Z80 Bus Interface
    // -------------------------------------------------------------------------
    input  logic [15:0] cpu_a,                    // Z80 address bus
    input  logic        cpu_mreq_n,               // Memory request
    input  logic        cpu_iorq_n,               // I/O request  
    input  logic        cpu_rd_n,                 // Read strobe
    input  logic        cpu_wr_n,                 // Write strobe
    input  logic        cpu_m1_n,                 // Machine cycle 1
    input  logic [7:0]  cpu_din,                  // Z80 data in
    output logic [7:0]  cpu_dout,                 // Z80 data out
    output logic        cpu_wait,                 // Wait state control

    // -------------------------------------------------------------------------
    // MASTER Wishbone Interface (Memory/Device Access)
    // -------------------------------------------------------------------------
    output logic        m_wb_cyc_o,               // Cycle valid
    output logic        m_wb_stb_o,               // Strobe
    output logic        m_wb_we_o,                // Write enable
    output logic [23:0] m_wb_adr_o,               // 24-bit physical address
    output logic [7:0]  m_wb_dat_o,               // Data out
    input  logic [7:0]  m_wb_dat_i,               // Data in
    input  logic        m_wb_ack_i,               // Transfer acknowledge

    // -------------------------------------------------------------------------
    // SLAVE Wishbone Interface (MMU Register Access)
    // -------------------------------------------------------------------------
    input  logic        s_wb_cyc_i,               // Cycle valid
    input  logic        s_wb_stb_i,               // Strobe
    input  logic        s_wb_we_i,                // Write enable
    input  logic [23:0] s_wb_adr_i,               // 24-bit address
    input  logic [7:0]  s_wb_dat_i,               // Data in
    output logic        s_wb_sel_o,               // Device selected
    output logic [7:0]  s_wb_dat_o,               // Data out
    output logic        s_wb_ack_o,               // Transfer acknowledge

    // -------------------------------------------------------------------------
    // Output Control Signals
    // -------------------------------------------------------------------------
    output logic        supervisor_mode_o,        // Current privilege mode
    output logic        mmio_userlock_o,          // MMIO access lock
    
    // -------------------------------------------------------------------------
    // SysCall Interface
    // -------------------------------------------------------------------------
    output logic [7:0]  syscall_function_o,       // SysCall function code
    output logic        syscall_trigger_o,        // SysCall trigger pulse

    // -------------------------------------------------------------------------
    // Debugging Interface
    // -------------------------------------------------------------------------
    output logic [7:0]  debug_control_o,
    output logic [7:0]  debug_mmio_page_o,
    output logic [7:0]  debug_super_slot_o,
    output logic [7:0]  debug_user_slot_o,
    output logic [7:0]  debug_syscall_function_o,
    output logic [7:0]  debug_selected_bank_o,
    output logic [7:0]  debug_current_slot_o,
    output logic [7:0]  debug_bank_index_o,
    output logic        debug_mmio_sel_o, 
    output logic        debug_mmio_hi_sel_o,
    output logic        debug_mmio_lo_sel_o,
    output logic        debug_mmu_reg_sel_o,
    output logic        debug_syscall_sel_o
);

    // =========================================================================
    // Internal Registers
    // =========================================================================
    logic [7:0] reg_control;                      // Global control register
    logic [7:0] reg_mmio_page;                    // MMIO page register
    logic [7:0] reg_super_slot;                   // Supervisor slot config
    logic [7:0] reg_user_slot;                    // User slot config
    logic [7:0] reg_bank[0:15];                   // 4 slots × 4 banks each

    // =========================================================================
    // Internal Control Signals
    // =========================================================================
    logic        is_io_access;                    // Z80 I/O access detected
    logic        is_mem_access;                   // Z80 memory access detected
    logic        is_write;                        // Write operation
    logic        is_read;                         // Read operation
    logic [1:0]  current_slot;                    // Currently active slot
    logic [7:0]  selected_bank;                   // Currently selected bank
    logic [1:0]  cpu_page;                        // Current Z80 memory page
    logic        is_mmio_access;                  // MMIO access request
    logic        is_reg_access;                   // Register access request
    logic        access_granted;                  // Access permission granted
    logic        is_legacy_io;                    // Legacy CPC I/O access

    // =========================================================================
    // Supervisor Mode Control Logic
    // =========================================================================
    logic        supervisor_mode;                 // Internal supervisor mode
    logic        supervisor_delay;                // Delayed turn-off flag
    logic        m1_detected;                     // M1 cycle detected
    logic        delayed_supervisor_off;          // Supervisor exit pending
    logic        hardware_supervisor;             // Hardware trap activation
    logic        trap_condition;                  // Trap condition met

    // =========================================================================
    // SysCall Control Logic
    // =========================================================================
    logic        syscall_pending;                 // SysCall request pending
    logic [7:0]  syscall_function;                // SysCall function code

    // =========================================================================
    // Wishbone Slave Address Decoding
    // =========================================================================
    logic        mmio_sel;                        // FF0000-FFFFFF (64KB)
    logic        mmio_hi_sel;                     // FF8000-FFFFFF (32KB)
    logic        mmio_lo_sel;                     // FF0000-FF7FFF (32KB)
    logic        mmu_reg_sel;                     // FF00C0-FF00FF (Registers)
    logic        syscall_sel;                     // SysCall register access


    // =========================================================================
    // DEBUG SIGNALS ASSIGNMENT
    // =========================================================================
    assign debug_control_o           = reg_control;
    assign debug_mmio_page_o         = reg_mmio_page;
    assign debug_super_slot_o        = reg_super_slot;
    assign debug_user_slot_o         = reg_user_slot;
    assign debug_syscall_function_o  = syscall_function;
    assign debug_mmio_sel_o          = mmio_sel;
    assign debug_mmio_hi_sel_o       = mmio_hi_sel;
    assign debug_mmio_lo_sel_o       = mmio_lo_sel;
    assign debug_mmu_reg_sel_o       = mmu_reg_sel;
    assign debug_syscall_sel_o       = syscall_sel;


    // =========================================================================
    // WISHBONE SLAVE ADDRESS DECODING
    // =========================================================================

    // Main MMIO space detection (last 64KB of physical memory)
    assign mmio_sel = (s_wb_adr_i[23:16] == 8'hFF);

    // MMIO space partitioning
    assign mmio_hi_sel = mmio_sel && (s_wb_adr_i[15] == 1'b1);   // Upper 32KB
    assign mmio_lo_sel = mmio_sel && (s_wb_adr_i[15] == 1'b0);   // Lower 32KB

    // MMU registers within MMIO_LO space (FF00C0-FF00FF)
    assign mmu_reg_sel = mmio_lo_sel && 
                        (s_wb_adr_i[14:8] == 0) &&              // FF00xx
                        (s_wb_adr_i[7] == 1'b1) &&              // 80-FF range
                        (s_wb_adr_i[6] == 1'b1);                // C0-FF range

    // SysCall register access (both Native and Legacy modes)
    assign syscall_sel = mmio_sel && (
                        (s_wb_adr_i[15:0] == 16'h00D4) ||       // Native: FF00D4
                        (s_wb_adr_i[15:0] == 16'hD400)          // Legacy: FFD400
                        );

    // Device selection output for Wishbone interconnect
    assign s_wb_sel_o = mmu_reg_sel || syscall_sel;


    // =========================================================================
    // OPERATION MODES CONTROL
    // =========================================================================
    assign native_mode_o    = reg_control[0];     // Native mode enable
    assign legacy_mode_o    = ~reg_control[0];    // Legacy mode enable


    // =========================================================================
    // Z80 BUS STATE DETECTION
    // =========================================================================
    assign m1_detected      = ~cpu_m1_n & ~cpu_mreq_n;     // M1 cycle detection
    assign is_io_access     = ~cpu_iorq_n & ~is_legacy_io; // Valid I/O access
    assign is_mem_access    = ~cpu_mreq_n;                 // Memory access
    assign is_write         = ~cpu_wr_n;                   // Write operation
    assign is_read          = ~cpu_rd_n;                   // Read operation
    assign cpu_page         = cpu_a[15:14];                // Current 16KB page


    // =========================================================================
    // SUPERVISOR MODE CONTROL
    // =========================================================================

    // Hardware trap condition detection
    assign trap_condition = m1_detected & reg_control[2] & 
                          (cpu_a == 16'h0000 || cpu_a == 16'h0038 || cpu_a == 16'h0066);
    assign hardware_supervisor = trap_condition;

    // Legacy I/O access detection (CPC-style ports)
    assign is_legacy_io = ~cpu_iorq_n & (cpu_a > 16'h00FF);

    // Supervisor mode state machine with delayed exit
    always_ff @(posedge clk) begin
        if (reset) begin
            supervisor_mode         <= 1'b1;      // Start in supervisor mode
            supervisor_delay        <= 1'b0;
            delayed_supervisor_off  <= 1'b0;
        end else begin
            // Immediate entry on hardware trap or SysCall
            if (hardware_supervisor || syscall_pending) begin
                supervisor_mode         <= 1'b1;
                supervisor_delay        <= 1'b0;
                delayed_supervisor_off  <= 1'b0;
            end
            // Delayed exit synchronized with M1 cycle
            else if (supervisor_delay && m1_detected) begin
                supervisor_mode         <= 1'b0;
                supervisor_delay        <= 1'b0;
                delayed_supervisor_off  <= 1'b0;
            end
            // Request delayed exit procedure
            else if (delayed_supervisor_off) begin
                supervisor_delay <= 1'b1;
            end
        end
    end

    // Supervisor mode output (with test override)
    assign supervisor_mode_o = supervisor_mode || supervisor_mode_i;


    // =========================================================================
    // SECURITY AND ACCESS CONTROL
    // =========================================================================
    assign mmio_userlock_o  = reg_control[4];     // MMIO access lock flag
    assign access_granted   = supervisor_mode || !reg_control[4]; // Access permission


    // =========================================================================
    // MEMORY ACCESS DECODING
    // =========================================================================
    assign is_mmio_access = is_io_access & (cpu_a[7:0] <= 8'hBF) & 
                           access_granted & native_mode_o;
    assign is_reg_access  = is_io_access & (cpu_a[7:0] >= 8'hC0) & 
                           access_granted & native_mode_o;


    // =========================================================================
    // CURRENT SLOT SELECTION LOGIC
    // =========================================================================
    always_comb begin
        if (s_wb_cyc_i && s_wb_stb_i && mmu_reg_sel) begin
            // Wishbone register access - use address bits for slot selection
            if (supervisor_mode) begin
                case (s_wb_adr_i[1:0])
                    2'b00: current_slot = reg_super_slot[1:0];   // Page 0: bits 1-0
                    2'b01: current_slot = reg_super_slot[3:2];   // Page 1: bits 3-2  
                    2'b10: current_slot = reg_super_slot[5:4];   // Page 2: bits 5-4
                    2'b11: current_slot = reg_super_slot[7:6];   // Page 3: bits 7-6
                endcase
            end else begin
                case (s_wb_adr_i[1:0])
                    2'b00: current_slot = reg_user_slot[1:0];    // Page 0: bits 1-0
                    2'b01: current_slot = reg_user_slot[3:2];    // Page 1: bits 3-2
                    2'b10: current_slot = reg_user_slot[5:4];    // Page 2: bits 5-4
                    2'b11: current_slot = reg_user_slot[7:6];    // Page 3: bits 7-6
                endcase
            end
        end else begin
            // Normal memory access - use Z80 address page
            if (supervisor_mode) begin
                case (cpu_page)
                    2'b00: current_slot = reg_super_slot[1:0];   // Page 0: bits 1-0
                    2'b01: current_slot = reg_super_slot[3:2];   // Page 1: bits 3-2  
                    2'b10: current_slot = reg_super_slot[5:4];   // Page 2: bits 5-4
                    2'b11: current_slot = reg_super_slot[7:6];   // Page 3: bits 7-6
                endcase
            end else begin
                case (cpu_page)
                    2'b00: current_slot = reg_user_slot[1:0];    // Page 0: bits 1-0
                    2'b01: current_slot = reg_user_slot[3:2];    // Page 1: bits 3-2
                    2'b10: current_slot = reg_user_slot[5:4];    // Page 2: bits 5-4
                    2'b11: current_slot = reg_user_slot[7:6];    // Page 3: bits 7-6
                endcase
            end
        end
    end


    // =========================================================================
    // BANK SELECTION LOGIC
    // =========================================================================
    logic [3:0] debug_bank_index;
    
    always_comb begin
        if (is_reg_access) begin
            // Direct bank access via IO ports DC-DF
            debug_bank_index = {current_slot, s_wb_adr_i[1:0]};
        end else begin
            // Normal memory access: {current_slot, cpu_page}
            debug_bank_index = {current_slot, cpu_page};
        end
    end

    // Current bank selection for memory access
    assign selected_bank = reg_bank[{current_slot, cpu_page}];

    // Debug outputs
    assign debug_selected_bank_o = selected_bank;
    assign debug_current_slot_o  = current_slot;
    assign debug_bank_index_o    = debug_bank_index;


    // =========================================================================
    // SYSCALL TRIGGER GENERATION
    // =========================================================================
    assign syscall_trigger_o = syscall_sel && s_wb_we_i && 
                              s_wb_cyc_i && s_wb_stb_i;


    // =========================================================================
    // WISHBONE SLAVE INTERFACE HANDLING
    // =========================================================================
    always_ff @(posedge clk) begin
        if (reset) begin
            // Reset all registers and control signals
            s_wb_ack_o             <= 0;
            s_wb_dat_o             <= 0;
            reg_control            <= 8'b00010010; // Default: Supervisor, Native, MMIO locked
            reg_mmio_page          <= 8'h00;
            reg_super_slot         <= 8'h00;
            reg_user_slot          <= 8'h00;
            syscall_function       <= 8'h00;
            syscall_pending        <= 1'b0;
            delayed_supervisor_off <= 1'b0;
            
            // Clear all bank registers
            for (int i = 0; i < 16; i++) begin
                reg_bank[i] <= 8'h00;
            end
        end else begin
            // Default values for each cycle
            s_wb_ack_o             <= 0;
            s_wb_dat_o             <= 0;
            syscall_pending        <= 1'b0;
            delayed_supervisor_off <= 1'b0;

            // -----------------------------------------------------------------
            // SYSCALL REGISTER ACCESS
            // -----------------------------------------------------------------
            if (s_wb_cyc_i && s_wb_stb_i && syscall_sel) begin
                s_wb_ack_o <= 1;
                
                if (s_wb_we_i) begin
                    // SysCall invocation - capture function code
                    syscall_function <= s_wb_dat_i;
                    syscall_pending <= 1'b1;
                end else begin
                    // SysCall status read
                    s_wb_dat_o <= syscall_function;
                end
            end
            
            // -----------------------------------------------------------------
            // MMU REGISTERS ACCESS (FF00C0-FF00FF)
            // -----------------------------------------------------------------
            else if (s_wb_cyc_i && s_wb_stb_i && mmu_reg_sel) begin
                s_wb_ack_o <= 1;
                
                if (s_wb_we_i) begin
                    // Register write operations
                    case (s_wb_adr_i[7:0])
                        // Control registers
                        8'hD3: reg_mmio_page  <= s_wb_dat_i;     // MMIO page select
                        8'hD7: begin                            // Global control
                            reg_control <= s_wb_dat_i;
                            // Initiate supervisor exit if bit 1 cleared
                            if (s_wb_dat_i[1] == 1'b0 && supervisor_mode) begin
                                delayed_supervisor_off <= 1'b1;
                            end
                        end
                        8'hD9: reg_super_slot <= s_wb_dat_i;     // Supervisor slot
                        8'hDB: reg_user_slot  <= s_wb_dat_i;     // User slot
                        
                        // Bank registers for current slot
                        8'hDC: reg_bank[{current_slot, 2'b00}] <= s_wb_dat_i; // Bank 0
                        8'hDD: reg_bank[{current_slot, 2'b01}] <= s_wb_dat_i; // Bank 1
                        8'hDE: reg_bank[{current_slot, 2'b10}] <= s_wb_dat_i; // Bank 2
                        8'hDF: reg_bank[{current_slot, 2'b11}] <= s_wb_dat_i; // Bank 3
                        
                        // Extended bank registers (direct access)
                        8'hE0: reg_bank[0]  <= s_wb_dat_i;  // Slot 0, Bank 0
                        8'hE1: reg_bank[1]  <= s_wb_dat_i;  // Slot 0, Bank 1
                        8'hE2: reg_bank[2]  <= s_wb_dat_i;  // Slot 0, Bank 2
                        8'hE3: reg_bank[3]  <= s_wb_dat_i;  // Slot 0, Bank 3
                        8'hE4: reg_bank[4]  <= s_wb_dat_i;  // Slot 1, Bank 0
                        8'hE5: reg_bank[5]  <= s_wb_dat_i;  // Slot 1, Bank 1
                        8'hE6: reg_bank[6]  <= s_wb_dat_i;  // Slot 1, Bank 2
                        8'hE7: reg_bank[7]  <= s_wb_dat_i;  // Slot 1, Bank 3
                        8'hE8: reg_bank[8]  <= s_wb_dat_i;  // Slot 2, Bank 0
                        8'hE9: reg_bank[9]  <= s_wb_dat_i;  // Slot 2, Bank 1
                        8'hEA: reg_bank[10] <= s_wb_dat_i;  // Slot 2, Bank 2
                        8'hEB: reg_bank[11] <= s_wb_dat_i;  // Slot 2, Bank 3
                        8'hEC: reg_bank[12] <= s_wb_dat_i;  // Slot 3, Bank 0
                        8'hED: reg_bank[13] <= s_wb_dat_i;  // Slot 3, Bank 1
                        8'hEE: reg_bank[14] <= s_wb_dat_i;  // Slot 3, Bank 2
                        8'hEF: reg_bank[15] <= s_wb_dat_i;  // Slot 3, Bank 3
                        default: ;
                    endcase
                end else begin
                    // Register read operations
                    case (s_wb_adr_i[7:0])
                        // Control registers
                        8'hD3: s_wb_dat_o <= reg_mmio_page;
                        8'hD7: s_wb_dat_o <= reg_control;
                        8'hD9: s_wb_dat_o <= reg_super_slot;
                        8'hDB: s_wb_dat_o <= reg_user_slot;
                        
                        // Bank registers for current slot
                        8'hDC: s_wb_dat_o <= reg_bank[{current_slot, 2'b00}];
                        8'hDD: s_wb_dat_o <= reg_bank[{current_slot, 2'b01}];
                        8'hDE: s_wb_dat_o <= reg_bank[{current_slot, 2'b10}];
                        8'hDF: s_wb_dat_o <= reg_bank[{current_slot, 2'b11}];
                        
                        // Extended bank registers
                        8'hE0: s_wb_dat_o <= reg_bank[0];
                        8'hE1: s_wb_dat_o <= reg_bank[1];
                        8'hE2: s_wb_dat_o <= reg_bank[2];
                        8'hE3: s_wb_dat_o <= reg_bank[3];
                        8'hE4: s_wb_dat_o <= reg_bank[4];
                        8'hE5: s_wb_dat_o <= reg_bank[5];
                        8'hE6: s_wb_dat_o <= reg_bank[6];
                        8'hE7: s_wb_dat_o <= reg_bank[7];
                        8'hE8: s_wb_dat_o <= reg_bank[8];
                        8'hE9: s_wb_dat_o <= reg_bank[9];
                        8'hEA: s_wb_dat_o <= reg_bank[10];
                        8'hEB: s_wb_dat_o <= reg_bank[11];
                        8'hEC: s_wb_dat_o <= reg_bank[12];
                        8'hED: s_wb_dat_o <= reg_bank[13];
                        8'hEE: s_wb_dat_o <= reg_bank[14];
                        8'hEF: s_wb_dat_o <= reg_bank[15];
                        
                        default: s_wb_dat_o <= 8'hFF; // Default response
                    endcase
                end
            end
            
            // -----------------------------------------------------------------
            // GENERAL MMIO SPACE ACCESS (FF0000-FF7FFF)
            // -----------------------------------------------------------------
            else if (s_wb_cyc_i && s_wb_stb_i && mmio_lo_sel) begin
                s_wb_ack_o <= 1;
                
                if (s_wb_we_i) begin
                    // MMIO write operation
                    // Future expansion: Add specific MMIO device handling
                end else begin
                    // MMIO read operation - default response
                    s_wb_dat_o <= 8'h00;
                end
            end
        end
    end

    // SysCall function code output
    assign syscall_function_o = syscall_function;


    // =========================================================================
    // Z80 TO WISHBONE MASTER TRANSLATION
    // =========================================================================
    always_comb begin
        // Default values - no bus activity
        m_wb_cyc_o = 1'b0;
        m_wb_stb_o = 1'b0;
        m_wb_we_o  = is_write;
        m_wb_adr_o = 24'h000000;
        m_wb_dat_o = cpu_din;
        cpu_dout   = 8'hFF;

        // ---------------------------------------------------------------------
        // LEGACY I/O ACCESS (CPC COMPATIBILITY)
        // ---------------------------------------------------------------------
        if (is_legacy_io) begin
            // Legacy I/O handled by separate controller - no action here
        end
        
        // ---------------------------------------------------------------------
        // MEMORY ACCESS (MREQ) - BANK SWITCHING
        // ---------------------------------------------------------------------
        else if (is_mem_access && native_mode_o) begin
            m_wb_cyc_o = 1'b1;
            m_wb_stb_o = 1'b1;
            // Physical address: {slot, bank, offset}
            m_wb_adr_o = {current_slot, selected_bank, cpu_a[13:0]};
            
            if (is_read) begin
                cpu_dout = m_wb_dat_i; // Read data from Wishbone
            end
        end
        
        // ---------------------------------------------------------------------
        // MMIO ACCESS (I/O PORTS 00h-BFh) - MEMORY-MAPPED I/O
        // ---------------------------------------------------------------------
        else if (is_mmio_access) begin
            m_wb_cyc_o = 1'b1;
            m_wb_stb_o = 1'b1;
            // MMIO address: {FFh, page, port}
            m_wb_adr_o = {8'hFF, reg_mmio_page, cpu_a[7:0]};
            
            if (is_read) begin
                cpu_dout = m_wb_dat_i; // Read from MMIO device
            end
        end        
        
        // ---------------------------------------------------------------------
        // REGISTER ACCESS (I/O PORTS C0h-FFh) - MMU CONTROL
        // ---------------------------------------------------------------------
        else if (is_reg_access && access_granted) begin
            m_wb_cyc_o = 1'b1;
            m_wb_stb_o = 1'b1;
            // Register address in MMIO space
            m_wb_adr_o = {16'hFF00, cpu_a[7:0]};
            
            if (is_read) begin
                cpu_dout = m_wb_dat_i; // Read from MMU register
            end
        end
    end

    // Wait state generation for Wishbone transactions
    assign cpu_wait = (!m_wb_cyc_o || !m_wb_ack_i);

endmodule
