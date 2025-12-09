`default_nettype none

module address_decoder (
    input  logic        cfg_legacy_i,

    input  logic [23:0] wb_adr_i,
    output logic [2:0]  wb_tag_o,           // ← output

    output logic [7:0]  cs_native_o,        // 8 устройств в native space
    output logic [7:0]  cs_system_o,        // system devices  
    output logic [7:0]  cs_legacy_o         // legacy devices
);


// Address regions
logic mmio_space,mmio_4000_FFFF,mmio_native,mmio_legacy;
assign mmio_space     = (wb_adr_i[23:16] == 8'hFF);
assign mmio_4000_FFFF = (wb_adr_i[15] || wb_adr_i[14]);   // 0x4000-0xFFFF
assign mmio_native    = mmio_space && !mmio_4000_FFFF;    // 0xFF0000-0xFF3FFF
assign mmio_legacy    = mmio_space &&  mmio_4000_FFFF;    // 0xFF4000-0xFFFFFF

// TAG encoding - mutually exclusive
always_comb begin
    wb_tag_o = 3'b000;
    if (mmio_native)       wb_tag_o = 3'b010;  // Native IO
    else if (mmio_legacy)  wb_tag_o = 3'b100;  // Legacy IO  
    else                   wb_tag_o = 3'b001;  // Memory space
end

// Native devices (8 units, 4KB each)
assign cs_native_o[0] = mmio_native && (wb_adr_i[10:7] == 4'b0000); // 0xFF0000 system devices live here
assign cs_native_o[1] = mmio_native && (wb_adr_i[10:7] == 4'b0001); // 0xFF0080
assign cs_native_o[2] = mmio_native && (wb_adr_i[10:7] == 4'b0010); // 0xFF0100 legacy devices live here  
assign cs_native_o[3] = mmio_native && (wb_adr_i[10:7] == 4'b0011); // 0xFF0180
assign cs_native_o[4] = mmio_native && (wb_adr_i[10:7] == 4'b0100); // 0xFF0200 large defices live here
assign cs_native_o[5] = mmio_native && (wb_adr_i[10:7] == 4'b0101); // 0xFF0280
assign cs_native_o[6] = mmio_native && (wb_adr_i[10:7] == 4'b0110); // 0xFF0300
assign cs_native_o[7] = mmio_native && (wb_adr_i[10:7] == 4'b0111); // 0xFF0380

// System devices (8 devices, 32 bytes each) - в первом native блоке
assign cs_system_o[0] = cs_native_o[0] && (wb_adr_i[6:5] == 2'b00); 
assign cs_system_o[1] = cs_native_o[0] && (wb_adr_i[6:5] == 2'b01);
assign cs_system_o[2] = cs_native_o[0] && (wb_adr_i[6:5] == 2'b10);
assign cs_system_o[3] = cs_native_o[0] && (wb_adr_i[6:5] == 2'b11);
assign cs_system_o[4] = cs_native_o[1] && (wb_adr_i[6:5] == 2'b00);
assign cs_system_o[5] = cs_native_o[1] && (wb_adr_i[6:5] == 2'b01);
assign cs_system_o[6] = cs_native_o[1] && (wb_adr_i[6:5] == 2'b10);
assign cs_system_o[7] = cs_native_o[1] && (wb_adr_i[6:5] == 2'b11);

// Legacy devices (8 devices, 32 bytes each) - во втором native блоке  
assign cs_legacy_o[0] = cs_native_o[2] && (wb_adr_i[6:5] == 2'b00);
assign cs_legacy_o[1] = cs_native_o[2] && (wb_adr_i[6:5] == 2'b01);
assign cs_legacy_o[2] = cs_native_o[2] && (wb_adr_i[6:5] == 2'b10);
assign cs_legacy_o[3] = cs_native_o[2] && (wb_adr_i[6:5] == 2'b11);
assign cs_legacy_o[4] = cs_native_o[1] && (wb_adr_i[6:5] == 2'b00);
assign cs_legacy_o[5] = cs_native_o[1] && (wb_adr_i[6:5] == 2'b01);
assign cs_legacy_o[6] = cs_native_o[1] && (wb_adr_i[6:5] == 2'b10);
assign cs_legacy_o[7] = cs_native_o[1] && (wb_adr_i[6:5] == 2'b11);

endmodule
