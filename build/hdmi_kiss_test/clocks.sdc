# Timing constraints for HDMI project
#create_clock -name clk_25mhz -period 40.0 [get_ports clk_25mhz]
#create_clock -name clk_100m -period 10.0 [get_nets clk_100m]
create_clock -name clk_270m -period 3.7 [get_nets clk_270m]
#create_clock -name clk_27m -period 37.0 [get_nets clk_27m]
#
## Derived clocks
#create_clock -name clk_16m -source [get_nets clk_100m] -divide_by 6.25 [get_nets clk_16m]
#
## False paths между асинхронными доменами
#set_false_path -from [get_clocks clk_25mhz] -to [get_clocks clk_100m]
#set_false_path -from [get_clocks clk_100m] -to [get_clocks clk_270m]