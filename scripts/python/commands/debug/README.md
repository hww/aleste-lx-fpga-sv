### 1. Управление CPU:
```bash
./dbg.py reset      # toggle
./dbg.py reseton    # включить
./dbg.py resetoff   # выключить
./dbg.py nmi        # послать NMI
./dbg.py int        # послать INT
./dbg.py stepon     # включить пошаговый
./dbg.py stepoff    # выключить пошаговый
./dbg.py step -n 5  # 5 шагов
./dbg.py run        # запустить
./dbg.py status     # статус
```

### 2. Точки останова:
```bash
./dbg.py bp-set 0x0100
./dbg.py bp-clear
```

### 3. Память:
```bash
./dbg.py mem 0xC00000 32
```

### 4. Загрузка:
```bash
./dbg.py load -a 0xC00000 program.bin
./dbg.py load -a 0xC00000 -j 0x0100 program.bin
```

### 5. Отладка:
```bash
./dbg.py debug -a 0xC00000 program.bin
./dbg.py enter -a 0xC00000 program.bin
```

### 6. Трассировка (главная):
```bash
./dbg.py trace -a 0xC00000 program.bin
./dbg.py trace -a 0xC00000 -j 0x0100 -n 50 program.bin
./dbg.py trace -a 0xC00000 --stop "mwr" program.bin
./dbg.py trace -a 0xC00000 --no-bus --no-type program.bin
```

