// =============================================================================
// CENTRALIZED ADDRESS DECODER
// =============================================================================

module address_decoder (
    input  logic [23:0] wb_adr_i,
    input  logic [1:0]  wb_tag_o,
    output logic        wb_palette_cs_o,
    output logic        wb_palette_cs_o,

);

// Регионы памяти (абстрактные)
parameter NATIVE_PALETTE_BASE  = 24'hFF_0100;
parameter NATIVE_CRTC_BASE     = 24'hFF_0110; 

parameter LEGACY_PALETTE_BASE  = 16'h7F00;   // Gate Array адрес (detection only a[15:14])
// Address decoding for native mode
assign native_access = (wb_tag_i == 2'b01) && (wb_adr_i[15:8] == NATIVE_BASE[15:8]);
// Detect only legacy access with address and data decoding                       
assign legacy_access = (wb_tag_i == 2'b11) && (wb_adr_i[15:14] == LEGACY_GA[15:14]) && !wb_dat_in[7];
assign logic_address = wb_adr_i[4:0];
assign access_valid = cfg_legacy_mode_i ? legacy_access : native_access;
assign wb_grant_o = access_valid;
// Декодирование по регионам (группами)
always_comb begin
    device_select_o = 16'b0;
    
    // Palette 
    if (wb_adr_i[23:8] == PALETTE_BASE[23:8]) begin
        device_select_o[0] = 1'b1;  // Palette device
        
    // CRTC
    end else if (wb_adr_i[23:8] == CRTC_BASE[23:8]) begin
        device_select_o[3] = 1'b1;  // UART device
    end
    
    // TAG-based фильтрация
    if (wb_tag_i != 2'b01) begin  // Только для CPU accesses
        device_select_o = 16'b0;
    end
end

endmodule