prj_project new -name hdmi_test -dev LFE5U-25F-8BG256C
prj_src add "../../rtl/core/hdmi_kiss/ecp5_pll.v"
prj_src add "../../rtl/core/hdmi_kiss/ecp5_cells.v"
prj_src add "../../rtl/core/hdmi_kiss/sys_pll.sv"
prj_src add "../../rtl/core/hdmi_kiss/video_pll.sv"
prj_src add "../../rtl/core/hdmi_kiss/hdmi_scaler_core.sv"
prj_src add "../../rtl/core/hdmi_kiss/hdmi_scaler_wrapper.sv"
prj_src add "../../rtl/core/hdmi_kiss/tmds_encoder.sv"
prj_src add "../../rtl/top/hdmi_kiss/test_pattern_generator.sv"
prj_src add "../../rtl/top/hdmi_kiss/top_hdmi_test.sv"
prj_src add "../../constr/ice_sugar_pro_bg256_hdmi.lpf"
prj_impl option "top" "top_hdmi_test"
prj_run all