adapter driver cmsis-dap
adapter speed 1000
transport select jtag

jtag newtap ecp5 tap -expected-id 0x41111043 -irlen 8

init
echo "Starting programming..."
flash write_image erase top_hdmi_test.bit 0x0
echo "Programming complete"
shutdown
