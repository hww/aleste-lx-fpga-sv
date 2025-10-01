// Configuration for 27MHz base clock  
`define BASE_CLOCK       27000000

// 16 MHz pixel speed 64us line
`define SRC_H_VISIBLE         720
`define SRC_H_FRONT_PORCH     16
`define SRC_H_SYNC_PULSE      62
`define SRC_H_BACK_PORCH      60

// 64us line progessive
`define SRC_V_VISIBLE         240
`define SRC_V_FRONT_PORCH     9
`define SRC_V_SYNC_PULSE      6
`define SRC_V_BACK_PORCH      30

`define HDMI_H_VISIBLE        720
`define HDMI_H_FRONT_PORCH    16
`define HDMI_H_SYNC_PULSE     62
`define HDMI_H_BACK_PORCH     60

`define HDMI_V_VISIBLE        288
`define HDMI_V_FRONT_PORCH    9
`define HDMI_V_SYNC_PULSE     6
`define HDMI_V_BACK_PORCH     30

`define PLL_CONFIG       "27MHz_to_270MHz"