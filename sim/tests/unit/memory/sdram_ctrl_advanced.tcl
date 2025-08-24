# Проверка и загрузка VCD с обработкой ошибок
set vcd_file "./sdram_ctrl_advanced.vcd"
set wlf_file "./sdram_ctrl_advanced.wlf"

if {[file exists $vcd_file]} {
    echo "Converting VCD to WLF: $vcd_file"
    
    # Конвертируем VCD в WLF
    vcd2wlf $vcd_file $wlf_file
    
    # Проверяем, что конвертация прошла успешно
    if {[file exists $wlf_file]} {
        echo "Opening WLF file: $wlf_file"
        dataset open $wlf_file
        echo "VCD file successfully loaded as WLF"
    } else {
        echo "ERROR: WLF file was not created during conversion"
    }
} else {
    echo "ERROR: VCD file not found: $vcd_file"
    echo "Current directory: [pwd]"
    echo "Available files: [glob *]"
}