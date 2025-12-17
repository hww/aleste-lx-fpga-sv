#!/usr/bin/env python3
"""
mem_fill_stamps.py - Быстрая запись тегов в память Aleste LX
Простая версия без параметра verify
"""

import sys
import os
import time
import argparse
from concurrent.futures import ThreadPoolExecutor, as_completed

sys.path.append(os.path.join(os.path.dirname(__file__), '../..'))

from core.memory import FPGAMemory
from core.hex_utils import HexUtils

class MemoryStamper:
    def __init__(self, verbose=False, batch_size=64):
        self.fpga = FPGAMemory()
        self.verbose = verbose
        self.batch_size = batch_size
        
    def write_stamp(self, slot, page):
        """Записать один тег в конец страницы"""
        base_addr = (slot << 22) | (page << 14)
        stamp_addr = base_addr + 0x3FFE  # Последние 2 байта страницы
        
        # Данные тега: [slot][page]
        stamp_data = bytes([slot & 0xFF, page & 0xFF])
        
        try:
            # ПРОСТОЙ ВЫЗОВ БЕЗ ПАРАМЕТРА verify
            success = self.fpga.write_memory(stamp_addr, stamp_data)
            
            # В зависимости от реализации, success может быть bool или int
            if success is True or (isinstance(success, int) and success > 0):
                return True, stamp_addr, stamp_data
            else:
                return False, stamp_addr, f"Write returned: {success}"
                
        except Exception as e:
            return False, stamp_addr, str(e)
    
    def write_all_stamps_simple(self):
        """Простейший последовательный вариант"""
        total = 4 * 256
        success_count = 0
        failed = []
        
        print(f"📝 Writing {total} memory stamps (simple mode)...")
        
        start_time = time.time()
        
        for slot in range(4):
            print(f"Slot {slot}: ", end='', flush=True)
            
            for page in range(256):
                success, addr, data = self.write_stamp(slot, page)
                time.sleep(0.001)

                if success:
                    success_count += 1
                    if page % 64 == 0:
                        print('.', end='', flush=True)
                else:
                    failed.append((addr, data))
                    print('X', end='', flush=True)
            
            print()  # Новая строка после слота
        
        elapsed = time.time() - start_time
        
        print(f"\n{'='*60}")
        print(f"RESULTS:")
        print(f"  Total stamps: {total}")
        print(f"  Successful:   {success_count}")
        print(f"  Failed:       {len(failed)}")
        print(f"  Time:         {elapsed:.2f} seconds")
        print(f"  Speed:        {total/elapsed:.1f} stamps/sec")
        
        if failed:
            print(f"\n❌ FAILED STAMPS (first 5):")
            for addr, error in failed[:5]:
                print(f"  0x{addr:06X}: {error}")
            return False
        
        print(f"\n✅ ALL STAMPS WRITTEN SUCCESSFULLY!")
        return True
    
    def verify_stamp(self, slot, page):
        """Проверить один тег"""
        base_addr = (slot << 22) | (page << 14)
        stamp_addr = base_addr + 0x3FFE
        
        try:
            time.sleep(0.001)
            data = self.fpga.read_memory(stamp_addr, 2)
            if data and len(data) == 2:
                read_slot, read_page = data[0], data[1]
                return read_slot == slot and read_page == page, data
            return False, None
        except Exception as e:
            return False, str(e)
    
    def verify_all_stamps(self):
        """Проверить все теги"""
        print("🔍 Verifying all stamps...")
        errors = []
        total = 4 * 256
        checked = 0
        
        for slot in range(4):
            for page in range(256):
                success, data = self.verify_stamp(slot, page)
                checked += 1
                
                if not success:
                    base_addr = (slot << 22) | (page << 14)
                    stamp_addr = base_addr + 0x3FFE
                    errors.append((stamp_addr, (slot, page), data))
                
                # Прогресс
                if checked % 256 == 0:
                    percent = (checked * 100) // total
                    print(f"\rProgress: {percent}%", end='', flush=True)
        
        print()
        
        if errors:
            print(f"❌ VERIFICATION FAILED: {len(errors)} errors")
            for addr, expected, actual in errors[:10]:
                print(f"  0x{addr:06X}: Expected {expected}, Got {actual}")
            return False
        
        print(f"✅ VERIFICATION PASSED: All {total} stamps correct")
        return True
    
    def close(self):
        self.fpga.close()

def main():
    parser = argparse.ArgumentParser(
        description='Fill memory pages with [slot][page] stamps',
        formatter_class=argparse.RawDescriptionHelpFormatter,
        epilog="""
Examples:
  %(prog)s                    # Write all 1024 stamps
  %(prog)s --verify           # Write and verify
  %(prog)s --verify-only      # Only verify existing stamps
  %(prog)s --slot=1           # Write only slot 1
  %(prog)s --slot=1 --page=10 # Write only specific page
        """
    )
    
    parser.add_argument('--verify', action='store_true', 
                       help='Verify after writing')
    parser.add_argument('--verify-only', action='store_true',
                       help='Only verify, do not write')
    parser.add_argument('--slot', type=int, choices=[0,1,2,3],
                       help='Write only specific slot (0-3)')
    parser.add_argument('--page', type=int, choices=range(256),
                       help='Write only specific page (0-255)')
    parser.add_argument('-v', '--verbose', action='store_true',
                       help='Verbose output')
    
    args = parser.parse_args()
    
    stamper = MemoryStamper(verbose=args.verbose)
    
    try:
        if args.verify_only:
            # Только проверка
            success = stamper.verify_all_stamps()
            return 0 if success else 1
        
        if args.slot is not None:
            # Запись только одного слота или конкретной страницы
            if args.page is not None:
                print(f"📝 Writing stamp for slot={args.slot}, page={args.page}")
                success, addr, data = stamper.write_stamp(args.slot, args.page)
                if success:
                    print(f"✅ Written to 0x{addr:06X}: {data.hex()}")
                else:
                    print(f"❌ Failed: {data}")
                    return 1
            else:
                print(f"📝 Writing stamps for slot {args.slot} (256 pages)")
                success = True
                for page in range(256):
                    success_i, addr, data = stamper.write_stamp(args.slot, page)
                    if not success_i:
                        print(f"\n❌ Failed at page {page}: {data}")
                        success = False
                if success:
                    print(f"\n✅ Slot {args.slot} complete")
                else:
                    return 1
        else:
            # Запись всех тегов
            if not stamper.write_all_stamps_simple():
                return 1
        
        # Верификация если нужно
        if args.verify:
            if not stamper.verify_all_stamps():
                return 1
        
        return 0
        
    except KeyboardInterrupt:
        print("\n⚠️ Interrupted by user")
        return 130
    except Exception as e:
        print(f"❌ Error: {e}")
        return 1
    finally:
        stamper.close()

if __name__ == "__main__":
    sys.exit(main())