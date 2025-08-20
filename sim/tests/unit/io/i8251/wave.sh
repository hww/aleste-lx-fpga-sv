#!/bin/bash
if [ -f waveform.fst ]; then
    if [ ! -f waveform.gtkw ]; then
        # Создаем базовый gtkw-файл
        cat > waveform.gtkw << EOF
[*]
[*] GTKWave dump file
[*]
[dumpfile] {"waveform.fst"}
[savefile] {"waveform.gtkw"}
[size] 1200 800
[pos] -1 -1
-6.500000 0.500000 0
[treeopen] tb_i8251.
[treeopen] tb_i8251.dut.
[signals] {
    tb_i8251.clk
    tb_i8251.reset_n
    tb_i8251.tx_clk_n
    tb_i8251.rx_clk_n
    tb_i8251.tx
    tb_i8251.rx
    tb_i8251.tx_ready
    tb_i8251.rx_ready
    tb_i8251.debug_TxEN
    tb_i8251.debug_TxRDYStatus
    tb_i8251.debug_mode
    tb_i8251.debug_RESET_Internal
}
[pattern_trace] 1
[pattern_trace] 0
EOF
    fi
    gtkwave waveform.fst waveform.gtkw
else
    echo "Error: waveform.fst not found"
    exit 1
fi
