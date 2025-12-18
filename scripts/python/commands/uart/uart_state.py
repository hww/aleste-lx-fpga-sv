#!/usr/bin/env python3
"""
Утилита чтения состояния FPGA
"""
import sys
import os
import argparse
sys.path.append(os.path.join(os.path.dirname(__file__), '../..'))

from core.memory import FPGAMemory
from core.state_parser import FPGAStateParser

def main():
    parser = argparse.ArgumentParser(description='Read FPGA State')
    parser.add_argument('-n', '--count', type=int, default=1,
                       help='Number of state reads')
    parser.add_argument('--detailed', action='store_true',
                       help='Show detailed state information')
    
    args = parser.parse_args()
    
    fpga = FPGAMemory()
    try:
        for i in range(args.count):
            # Используем метод read_state из core
            state_data = fpga.read_state()
            
            if state_data and len(state_data) == 1:
                # Парсим через core парсер
                state = FPGAStateParser.parse_hang_state(state_data)
                if state:
                    if args.detailed:
                        print(FPGAStateParser.format_detailed_hang_state(state))
                        if i < args.count - 1:
                            print("\n" + "="*50 + "\n")
                    else:
                        print(FPGAStateParser.format_hang_state_line(state))
                else:
                    print("❌ Invalid state response format")
            else:
                print(f"❌ No state response or invalid length: {len(state_data) if state_data else 0} bytes")
                
            if args.count > 1 and i < args.count - 1 and not args.detailed:
                import time
                time.sleep(0.1)
                
    except Exception as e:
        print(f"❌ Error: {e}")
        return 1
    finally:
        fpga.close()
    
    return 0

if __name__ == "__main__":
    sys.exit(main())