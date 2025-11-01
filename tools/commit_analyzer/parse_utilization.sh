#!/bin/bash

# Скрипт для извлечения utilization из логов nextpnr
# Использование: ./parse_utilization.sh /path/to/logs/folder

if [ $# -eq 0 ]; then
    echo "Usage: $0 <logs_folder>"
    echo "Example: $0 /tmp/fpga_analysis_123456"
    exit 1
fi

LOG_DIR="$1"

if [ ! -d "$LOG_DIR" ]; then
    echo "Error: Directory '$LOG_DIR' not found" >&2
    exit 1
fi

echo "=== FPGA UTILIZATION HISTORY ==="
echo "Generated: $(date)"
echo "Logs from: $LOG_DIR"
echo

# Обрабатываем каждый лог
for log_file in "$LOG_DIR"/build_*.log; do
    [ -f "$log_file" ] || continue
    
    # Извлекаем хэш коммита из имени файла
    commit=$(basename "$log_file" | sed 's/build_//' | sed 's/\.log//')
    
    echo "--- COMMIT: $commit ---"
    
    # Ищем блок utilization и выводим его
    awk '/Info: Device utilisation:/{flag=1} /^$/{if(flag) exit} flag' "$log_file"
    
    echo
    echo
done