#!/bin/bash
# Aleste LX FPGA Development Environment Setup

export ALESTE_PROJECT_ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"

# Основные пути
export PATH="$ALESTE_PROJECT_ROOT/tools:$ALESTE_PROJECT_ROOT/scripts/python/commands:$ALESTE_PROJECT_ROOT/tools/commit_analyzer:$PATH"
export PYTHONPATH="$ALESTE_PROJECT_ROOT:$PYTHONPATH"

# Полезные aliases
# Memory tools
alias fpga-mem-read="python -m scripts.python.commands.memory.mem_read"
alias fpga-mem-write="python -m scripts.python.commands.memory.mem_write" 
alias fpga-mem-fill="python -m scripts.python.commands.memory.mem_fill" 
alias fpga-mem-dump="python -m scripts.python.commands.memory.mem_dump"
# Graphics tools
alias fpga-video-mode="python -m scripts.python.commands.graphics.video_mode"
alias fpga-video-fill="python -m scripts.python.commands.graphics.video_fill"
alias fpga-pix-load="python -m scripts.python.commands.graphics.pix_load"
# Registers
alias fpga-reg-tool="python -m scripts.python.commands.registers.reg_tool"
# C++ tools
alias fpga-pix-convert="$ALESTE_PROJECT_ROOT/tools/converter/pix_convert"
alias fpga-pix-info="$ALESTE_PROJECT_ROOT/tools/pix_info/build/pix_info"

# Быстрые команды
alias memr="fpga-mem-read"
alias memw="fpga-mem-write"
alias memd="fpga-mem-dump"
# Registers
alias regtool="fpga-reg-tool"
# Graphics tools
alias vidmode="fpga-video-mode"
alias vidfill="fpga-video-fill"
alias pixload="fpga-pix-load"
# C++ tools
alias pixconv="fpga-pix-convert"
alias pixinfo="fpga-pix-info"

echo "🎛️  Aleste LX Project Environment Ready!"
echo ""
echo "Доступные команды:"
echo "  fpga-mem-read    - Чтение памяти"
echo "  fpga-mem-write   - Запись памяти" 
echo "  fpga-mem-dump    - Дамп памяти"
echo "  fpga-pix-load    - Загрузка .PIX файлов"
echo "  fpga-pix-convert - Конвертация изображений"
echo "  fpga-pix-info    - Статистика изображений"
echo "Короткие формы"
echo "  memr/memw/memd   - Короткие алиасы"
echo "  pixconv          - Конвертер изображений"
echo ""
echo "📁 Работает из любой директории!"


