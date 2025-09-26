## 🎯 **Архитектура Lattice PLL**

### **Основные сигналы:**
- **CLKI** - входная частота (25 MHz)
- **CLKOP, CLKOS, CLKOS2, CLKOS3** - выходные частоты
- **CLKFB** - обратная связь (с выбранного выхода)
- **VCO** - внутренняя высокая частота PLL

### **Ключевой принцип:**
```verilog
REFCLKI = CLKFB
где:
REFCLKI = CLKI / CLKI_DIV
CLKFB   = Selected_Output / CLKFB_DIV
```

### **Формулы расчета:**
1. **Основная выходная частота:**
   ```
   CLKOP = CLKI × (CLKFB_DIV / CLKI_DIV)
   ```

2. **Внутренняя VCO частота:**
   ```
   VCO = CLKOP × CLKOP_DIV
   ```

3. **Дополнительные выходы:**
   ```
   CLKOS  = VCO / CLKOS_DIV
   CLKOS2 = VCO / CLKOS2_DIV
   CLKOS3 = VCO / CLKOS3_DIV
   ```

### **Пример для 25 MHz → 100 MHz + 32 MHz + 16 MHz:**
```verilog
.CLKI_DIV(1)     // REFCLKI = 25 MHz / 1 = 25 MHz
.CLKFB_DIV(4)    // CLKFB = CLKOP / 4 = 25 MHz ⇒ CLKOP = 100 MHz
.CLKOP_DIV(8)    // VCO = 100 MHz × 8 = 800 MHz  
.CLKOS2_DIV(25)  // CLKOS2 = 800 MHz / 25 = 32 MHz
.CLKOS_DIV(50)   // CLKOS  = 800 MHz / 50 = 16 MHz
```

### **Важные моменты:**
- **FEEDBK_PATH** выбирает, с какого выхода берется обратная связь
- Все делители должны быть целыми числами
- VCO частота должна быть в допустимом диапазоне для конкретного чипа

