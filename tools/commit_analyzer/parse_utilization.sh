#!/bin/bash

# Простая консолидация с сортировкой по времени файлов
# Использование: ./parse_utilization_sorted.sh /path/to/logs

LOG_DIR="${1:-.}"

echo "=== FPGA UTILIZATION HISTORY (SORTED) ==="
echo "Generated: $(date)"
echo

# Сортируем файлы по времени модификации (от старых к новым)
for log_file in $(ls -tr "$LOG_DIR"/build_*.log 2>/dev/null); do
    commit=$(basename "$log_file" | sed 's/build_//' | sed 's/\.log//')
    
    echo "--- COMMIT: $commit ---"
    
    # Берем только блок utilization
    awk '/Info: Device utilisation:/{flag=1} /^$/{if(flag) exit} flag' "$log_file"
    
    echo
    echo
done