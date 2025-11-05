#!/usr/bin/env python3
"""
Aleste Graphics - Умное управление графическими режимами
"""

import sys
import os
current_dir = os.path.dirname(os.path.abspath(__file__))
root_dir = os.path.join(current_dir, '../..')
sys.path.insert(0, root_dir)

from core.preset_loader import PresetLoader

def main():
    if len(sys.argv) < 2:
        print("🎮 Aleste Graphics Preset Loader")
        print("Usage:")
        print("  aleste_graphics.py <preset_name>    # Load graphics preset")
        print("  aleste_graphics.py list             # List all available presets")
        print("  aleste_graphics.py verify <preset>  # Verify preset (read back registers)")
        print("\nExamples:")
        print("  aleste_graphics.py cpc_mode0        # CPC Mode 0")
        print("  aleste_graphics.py test_hires       # Test high resolution mode")
        return 1

    command = sys.argv[1]
    loader = PresetLoader()

    try:
        if command == "list":
            loader.list_presets()
            return 0
            
        elif command == "verify" and len(sys.argv) > 2:
            preset_name = sys.argv[2]
            print(f"🔍 Verifying preset: {preset_name}")
            # TODO: Реализовать верификацию
            print("⚠️  Verification not implemented yet")
            return 0
            
        else:
            # Загрузка пресета
            preset_name = command
            success = loader.apply_preset(preset_name, verbose=True)
            return 0 if success else 1
            
    except KeyboardInterrupt:
        print("\n⏹️  Operation cancelled by user")
        return 1
    except Exception as e:
        print(f"❌ Error: {e}")
        return 1
    finally:
        loader.close()

if __name__ == "__main__":
    sys.exit(main())