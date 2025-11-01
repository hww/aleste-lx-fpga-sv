#!/bin/bash

# Анализ использования ресурсов FPGA по истории коммитов
# Использование: ./fpga_analyze.sh [КОЛИЧЕСТВО_КОММИТОВ] [ПАПКА_РЕЗУЛЬТАТОВ]

COMMITS_COUNT=${1:-10}
RESULTS_DIR=${2:-"/tmp/fpga_analysis_$(date +%s)"}
PROJECT_DIR=$(pwd)

echo "🔍 FPGA Resource Analysis"
echo "Коммитов: $COMMITS_COUNT"
echo "Папка результатов: $RESULTS_DIR"
echo "Проект: $PROJECT_DIR"
echo

# Создаем папку для результатов (вне проекта, чтобы reset не удалял)
mkdir -p "$RESULTS_DIR"
cd "$PROJECT_DIR"

# Запоминаем начальную ветку
START_BRANCH=$(git branch --show-current)

# Анализируем коммиты
echo "📊 Анализ коммитов..."
for commit in $(git log --oneline -$COMMITS_COUNT --reverse | awk '{print $1}'); do
    echo "=== Коммит: $commit ==="
    
    git checkout "$commit" > /dev/null 2>&1
    make clean > /dev/null 2>&1
    
    # Собираем проект
    if make > "$RESULTS_DIR/build_${commit}.log" 2>&1; then
        echo "✓ Сборка успешна"
        
        # Копируем статистику ЕСЛИ ФАЙЛЫ СУЩЕСТВУЮТ
        if [ -f "stats_pre.txt" ]; then
            cp "stats_pre.txt" "$RESULTS_DIR/stats_pre_${commit}.txt"
            echo "  ✓ Pre-synth stats"
        fi
        
        if [ -f "stats_synth.txt" ]; then
            cp "stats_synth.txt" "$RESULTS_DIR/stats_synth_${commit}.txt"
            echo "  ✓ Post-synth stats"
        fi
        
        # Если нет статистики - отмечаем это
        if [ ! -f "stats_pre.txt" ] && [ ! -f "stats_synth.txt" ]; then
            echo "  ⚠ Нет файлов статистики"
        fi
    else
        echo "✗ Ошибка сборки (см. $RESULTS_DIR/build_${commit}.log)"
    fi
    
    # Сбрасываем изменения БЕЗ удаления папки результатов
    git reset --hard HEAD > /dev/null 2>&1
    echo
done

# Возвращаемся на исходную ветку
git checkout "$START_BRANCH" > /dev/null 2>&1

# Генерируем отчет
echo "📈 Генерация отчета..."
echo "Коммит,Cells Pre,Wire Bits Pre,Memory Pre,Cells Post,Wire Bits Post,Memory Post,Build Status" > "$RESULTS_DIR/summary.csv"

for commit in $(git log --oneline -$COMMITS_COUNT --reverse | awk '{print $1}'); do
    build_log="$RESULTS_DIR/build_${commit}.log"
    pre_file="$RESULTS_DIR/stats_pre_${commit}.txt"
    synth_file="$RESULTS_DIR/stats_synth_${commit}.txt"
    
    # Определяем статус сборки
    if grep -q "ERROR\|Error\|error" "$build_log" 2>/dev/null; then
        status="FAILED"
    elif [ -f "$synth_file" ]; then
        status="SUCCESS"
    else
        status="NO_STATS"
    fi
    
    # Извлекаем данные
    cells_pre=$(get_stat "$pre_file" "cells")
    wires_pre=$(get_stat "$pre_file" "wire bits") 
    memory_pre=$(get_stat "$pre_file" "memory bits")
    
    cells_post=$(get_stat "$synth_file" "cells")
    wires_post=$(get_stat "$synth_file" "wire bits")
    memory_post=$(get_stat "$synth_file" "memory bits")
    
    echo "$commit,$cells_pre,$wires_pre,$memory_pre,$cells_post,$wires_post,$memory_post,$status" >> "$RESULTS_DIR/summary.csv"
done

# Функция для извлечения статистики
get_stat() {
    file="$1"
    stat_name="$2"
    if [ -f "$file" ]; then
        grep "Number of $stat_name" "$file" | awk '{print $4}' | head -1
    else
        echo "0"
    fi
}

echo "✅ Анализ завершен!"
echo "📁 Результаты в: $RESULTS_DIR"
echo "📊 Отчет: $RESULTS_DIR/summary.csv"
echo "📋 Логи сборки: $RESULTS_DIR/build_*.log"

# Показываем краткий отчет
echo
echo "🎯 КРАТКИЙ ОТЧЕТ:"
column -t -s, "$RESULTS_DIR/summary.csv"