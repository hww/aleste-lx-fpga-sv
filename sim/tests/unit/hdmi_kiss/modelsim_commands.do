# ModelSim commands
onbreak {resume}
onerror {exit -code 1}

# Add signals to wave
add wave -noupdate -divider {Testbench}
add wave -noupdate -color yellow /tb_hdmi_scaler/*
add wave -noupdate -divider {Scaler Core}
add wave -noupdate -color cyan /tb_hdmi_scaler/uut/*
add wave -noupdate -divider {RAM}
add wave -noupdate -color pink /tb_hdmi_scaler/uut/ram_inst/*

# Run simulation
run 100us
wave zoom full
quit
