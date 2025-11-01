#!/bin/bash
# Aleste LX FPGA Development Environment Setup

export ALESTE_PROJECT_ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"

# Основные пути
export PATH="$ALESTE_PROJECT_ROOT/tools:$ALESTE_PROJECT_ROOT/scripts/python/commands:$ALESTE_PROJECT_ROOT/tools/commit_analyzer:$PATH"
export PYTHONPATH="$ALESTE_PROJECT_ROOT:$PYTHONPATH"

# Полезные aliases
# Полезные aliases - БЕЗ СМЕНЫ ДИРЕКТОРИИ!
alias fpga-mem-read="python -m scripts.python.commands.memory.mem_read"
alias fpga-mem-write="python -m scripts.python.commands.memory.mem_write" 
alias fpga-mem-fill="python -m scripts.python.commands.memory.mem_fill" 
alias fpga-mem-dump="python -m scripts.python.commands.memory.mem_dump"
alias fpga-pix2mem="python -m scripts.python.commands.graphics.pix2mem"
alias fpga-pix-convert="$ALESTE_PROJECT_ROOT/tools/converter/pix_convert"

# Быстрые команды
alias memr="fpga-mem-read"
alias memw="fpga-mem-write"
alias memd="fpga-mem-dump"
alias pixload="fpga-pix2mem"
alias pixconv="fpga-pix-convert"

echo "🎛️  Aleste LX Project Environment Ready!"
echo ""
echo "Доступные команды:"
echo "  fpga-mem-read    - Чтение памяти"
echo "  fpga-mem-write   - Запись памяти" 
echo "  fpga-mem-dump    - Дамп памяти"
echo "  fpga-pix2mem     - Загрузка .PIX файлов"
echo "  fpga-pix-convert - Конвертация изображений"
echo "  memr/memw/memd   - Короткие алиасы"
echo "  pixconv          - Конвертер изображений"
echo ""
echo "📁 Работает из любой директории!"


