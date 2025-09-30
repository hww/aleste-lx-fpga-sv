// Configuration for 27MHz base clock  
`define BASE_CLOCK       27000000


// Горизонталь (1024 пикселя на строку)
`define SRC_H_VISIBLE         720
`define SRC_H_FRONT_PORCH     12  
`define SRC_H_SYNC_PULSE      64
`define SRC_H_BACK_PORCH      228  // 1024 - 720 - 12 - 64 = 228

// Вертикаль (312 строк для 50Hz)  
`define SRC_V_VISIBLE         240
`define SRC_V_FRONT_PORCH     2
`define SRC_V_SYNC_PULSE      3
`define SRC_V_BACK_PORCH      67   // 312 - 240 - 2 - 3 = 67


`define HDMI_H_VISIBLE        720
`define HDMI_H_FRONT_PORCH    16
`define HDMI_H_SYNC_PULSE     62
`define HDMI_H_BACK_PORCH     60

`define HDMI_V_VISIBLE        480
`define HDMI_V_FRONT_PORCH    9
`define HDMI_V_SYNC_PULSE     6
`define HDMI_V_BACK_PORCH     30

`define PLL_CONFIG       "27MHz_to_270MHz"