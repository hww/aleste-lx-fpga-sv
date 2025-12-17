#!/usr/bin/env bash
# Универсальный setup.sh для bash, zsh и fish

# Определяем текущую оболочку
SHELL_NAME=$(basename "$SHELL")
CURRENT_SHELL=""

if [[ -n "$BASH_VERSION" ]]; then
    CURRENT_SHELL="bash"
elif [[ -n "$ZSH_VERSION" ]]; then
    CURRENT_SHELL="zsh"
elif [[ -n "$FISH_VERSION" ]]; then
    CURRENT_SHELL="fish"
else
    # Пытаемся определить по имени процесса
    CURRENT_SHELL=$(ps -p $$ -o comm= | sed 's/^-//')
fi

echo "Обнаружена оболочка: $CURRENT_SHELL"

# Устанавливаем корневую директорию проекта
ALESTE_PROJECT_ROOT="$(cd "$(dirname "${BASH_SOURCE[0]:-${(%):-%x}}")" && pwd)"
echo "ALESTE_PROJECT_ROOT: $ALESTE_PROJECT_ROOT"

# Функция для экспорта переменных в разных оболочках
setup_environment() {
    local root="$1"
    
    case "$CURRENT_SHELL" in
        bash|zsh)
            # Для bash и zsh
            export ALESTE_PROJECT_ROOT="$root"
            export PATH="$root/tools:$root/scripts/python/commands:$root/tools/commit_analyzer:$PATH"
            export PYTHONPATH="$root/scripts/python:$PYTHONPATH"
            
            # Создаем алиасы
            alias mem_read="$root/scripts/python/commands/memory/mem_read.py"
            alias mem_write="$root/scripts/python/commands/memory/mem_write.py"
            alias mem_fill="$root/scripts/python/commands/memory/mem_fill.py"
            alias mem_dump="$root/scripts/python/commands/memory/mem_dump.py"
            alias video_mode="$root/scripts/python/commands/graphics/video_mode.py"
            alias video_fill="$root/scripts/python/commands/graphics/video_fill.py"
            alias pix_load="$root/scripts/python/commands/graphics/pix_load.py"
            alias reg_tool="$root/scripts/python/commands/registers/reg_tool.py"
            alias uart_state="$root/scripts/python/commands/uart/uart_state.py"
            alias dbg="$root/scripts/python/commands/debug/dbg.py"
            alias pix_convert="$root/tools/converter/pix_convert"
            alias pix_info="$root/tools/pix_info/build/pix_info"
            ;;
            
        fish)
            # Для Fish shell
            set -gx ALESTE_PROJECT_ROOT "$root"
            set -gx PATH "$root/tools" "$root/scripts/python/commands" "$root/tools/commit_analyzer" $PATH
            set -gx PYTHONPATH "$root/scripts/python" $PYTHONPATH
            
            # Создаем алиасы
            alias mem_read="$root/scripts/python/commands/memory/mem_read.py"
            alias mem_write="$root/scripts/python/commands/memory/mem_write.py"
            alias mem_fill="$root/scripts/python/commands/memory/mem_fill.py"
            alias mem_dump="$root/scripts/python/commands/memory/mem_dump.py"
            alias video_mode="$root/scripts/python/commands/graphics/video_mode.py"
            alias video_fill="$root/scripts/python/commands/graphics/video_fill.py"
            alias pix_load="$root/scripts/python/commands/graphics/pix_load.py"
            alias reg_tool="$root/scripts/python/commands/registers/reg_tool.py"
            alias uart_state="$root/scripts/python/commands/uart/uart_state.py"
            alias dbg="$root/scripts/python/commands/debug/dbg.py"
            alias pix_convert="$root/tools/converter/pix_convert"
            alias pix_info="$root/tools/pix_info/build/pix_info"
            ;;
            
        *)
            echo "⚠️  Неподдерживаемая оболочка: $CURRENT_SHELL"
            echo "Установка переменных окружения может не работать корректно."
            ;;
    esac
    
    echo "✅ Окружение Aleste LX настроено для $CURRENT_SHELL"
}

# Вызываем функцию настройки
setup_environment "$ALESTE_PROJECT_ROOT"

# Тестовая команда
echo ""
echo "Проверка настроек:"
echo "ALESTE_PROJECT_ROOT = $ALESTE_PROJECT_ROOT"
echo "Доступные команды: mem_read, mem_write, video_mode и др."