`default_nettype none

module llhdmi #(
  // Timing parameters for 640x480 @ 60Hz
  parameter H_VISIBLE     = 640,
  parameter H_FRONT_PORCH = 16,
  parameter H_SYNC_PULSE  = 96,
  parameter H_BACK_PORCH  = 48,

  
  parameter V_VISIBLE     = 480,
  parameter V_FRONT_PORCH = 10,
  parameter V_SYNC_PULSE  = 2,
  parameter V_BACK_PORCH  = 33,
  
  // TMDS parameters
  parameter TMDS_WIDTH    = 10,
  parameter PIXEL_RATIO   = 10  // i_tmdsclk : i_pixclk ratio
)(
  // Clock inputs
  input  wire i_tmdsclk,        // TMDS clock (10x pixel clock)
  input  wire i_pixclk,         // Pixel clock
  
  // Control inputs
  input  wire i_reset,          // Active high reset
  
  // Pixel data inputs
  input  wire [7:0] i_red,      // Red color component
  input  wire [7:0] i_grn,      // Green color component  
  input  wire [7:0] i_blu,      // Blue color component
  
  // Status outputs
  output wire o_rd,             // Ready to accept pixel data
  output reg  o_newline,        // Last pixel of line pulse
  output reg  o_newframe,       // Last pixel of frame pulse
  
  // TMDS outputs
  output wire o_red,            // Red TMDS data stream
  output wire o_grn,            // Green TMDS data stream
  output wire o_blu             // Blue TMDS data stream
  
  // Debug outputs (Verilator only)
`ifdef VERILATOR
  ,                             // Blue TMDS data stream
  output wire [TMDS_WIDTH-1:0] o_TMDS_red,
  output wire [TMDS_WIDTH-1:0] o_TMDS_grn, 
  output wire [TMDS_WIDTH-1:0] o_TMDS_blu
`endif
);
  localparam H_TOTAL       = H_VISIBLE + H_FRONT_PORCH + H_SYNC_PULSE + H_BACK_PORCH;
  localparam V_TOTAL       = V_VISIBLE + V_FRONT_PORCH + V_SYNC_PULSE + V_BACK_PORCH;
  
  // Sync pulse positions
  localparam H_SYNC_START  = H_VISIBLE + H_FRONT_PORCH;
  localparam H_SYNC_END    = H_SYNC_START + H_SYNC_PULSE;
  localparam V_SYNC_START  = V_VISIBLE + V_FRONT_PORCH;
  localparam V_SYNC_END    = V_SYNC_START + V_SYNC_PULSE;


  // Pixel position counters
  reg [10:0] CounterX;  // Needs to count up to 799
  reg [9:0]  CounterY;  // Needs to count up to 524

  // Sync and control signals
  reg hSync;
  reg vSync;
  reg DrawArea;

  // Horizontal counter
  always @(posedge i_pixclk) begin
    if (i_reset) begin
      CounterX <= 0;
    end else begin
      if (CounterX == H_TOTAL - 1) begin
        CounterX <= 0;
      end else begin
        CounterX <= CounterX + 1;
      end
    end
  end

  // Vertical counter (increments at end of each line)
  always @(posedge i_pixclk) begin
    if (i_reset) begin
      CounterY <= 0;
    end else if (CounterX == H_TOTAL - 1) begin
      if (CounterY == V_TOTAL - 1) begin
        CounterY <= 0;
      end else begin
        CounterY <= CounterY + 1;
      end
    end
  end

  // New line/frame detection
  always @(posedge i_pixclk) begin
    o_newline  <= (CounterX == H_VISIBLE - 1) ? 1'b1 : 1'b0;
    o_newframe <= (CounterX == H_VISIBLE - 1) && (CounterY == V_VISIBLE - 1) ? 1'b1 : 1'b0;
  end

  // Draw area detection
  always @(posedge i_pixclk) begin
    DrawArea <= (CounterX < H_VISIBLE) && (CounterY < V_VISIBLE);
  end

  // Ready signal - can accept pixel data when in draw area and not reset
  assign o_rd = ~i_reset & DrawArea;

  // Sync pulse generation
  always @(posedge i_pixclk) begin
    hSync <= (CounterX >= H_SYNC_START) && (CounterX < H_SYNC_END);
    vSync <= (CounterY >= V_SYNC_START) && (CounterY < V_SYNC_END);
  end

  // TMDS encoding
  wire [TMDS_WIDTH-1:0] TMDS_red, TMDS_grn, TMDS_blu;
  
  tmds_encoder #(
  ) encode_R (
    .clk(i_pixclk),
    .VD(i_red),
    .CD(2'b00),           // Control data for red channel
    .VDE(DrawArea),
    .TMDS(TMDS_red)
  );
  
  tmds_encoder #(
  ) encode_G (
    .clk(i_pixclk),
    .VD(i_grn),
    .CD(2'b00),           // Control data for green channel
    .VDE(DrawArea),
    .TMDS(TMDS_grn)
  );
  
  tmds_encoder #(
  ) encode_B (
    .clk(i_pixclk), 
    .VD(i_blu),
    .CD({vSync, hSync}),  // Sync signals on blue channel
    .VDE(DrawArea),
    .TMDS(TMDS_blu)
  );

  // TMDS clock domain crossing and serialization
  reg [3:0] TMDS_mod10 = 0;
  reg TMDS_shift_load = 0;
  
  // Generate load pulse every 10 TMDS clocks
  always @(posedge i_tmdsclk) begin
    if (i_reset) begin
      TMDS_mod10 <= 0;
      TMDS_shift_load <= 0;
    end else begin
      if (TMDS_mod10 == PIXEL_RATIO - 1) begin
        TMDS_mod10 <= 0;
        TMDS_shift_load <= 1'b1;
      end else begin
        TMDS_mod10 <= TMDS_mod10 + 1;
        TMDS_shift_load <= 1'b0;
      end
    end
  end

  // TMDS shift registers
  reg [TMDS_WIDTH-1:0] TMDS_shift_red = 0;
  reg [TMDS_WIDTH-1:0] TMDS_shift_grn = 0; 
  reg [TMDS_WIDTH-1:0] TMDS_shift_blu = 0;
  
  always @(posedge i_tmdsclk) begin
    if (i_reset) begin
      TMDS_shift_red <= 0;
      TMDS_shift_grn <= 0;
      TMDS_shift_blu <= 0;
    end else begin
      if (TMDS_shift_load) begin
        // Load new TMDS word
        TMDS_shift_red <= TMDS_red;
        TMDS_shift_grn <= TMDS_grn;
        TMDS_shift_blu <= TMDS_blu;
      end else begin
        // Shift out bits
        TMDS_shift_red <= {1'b0, TMDS_shift_red[TMDS_WIDTH-1:1]};
        TMDS_shift_grn <= {1'b0, TMDS_shift_grn[TMDS_WIDTH-1:1]};
        TMDS_shift_blu <= {1'b0, TMDS_shift_blu[TMDS_WIDTH-1:1]};
      end
    end
  end

  // Serial TMDS outputs
  assign o_red = TMDS_shift_red[0];
  assign o_grn = TMDS_shift_grn[0];
  assign o_blu = TMDS_shift_blu[0];

  // Debug outputs for Verilator
`ifdef VERILATOR
  assign o_TMDS_red = TMDS_red;
  assign o_TMDS_grn = TMDS_grn;
  assign o_TMDS_blu = TMDS_blu;
`endif

endmodule