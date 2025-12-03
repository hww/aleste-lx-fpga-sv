#!/usr/bin/env python3
"""
VCD Parser and Signal Trace Analyzer for aleste_system
Helps diagnose Z80 wait_n, wb_grant vs wb_ack, and signal flow issues
"""

import sys
import re
from collections import defaultdict
from typing import Dict, List, Tuple, Optional

class VCDParser:
    """Parse VCD file and extract signal traces"""
    
    def __init__(self, vcd_file: str):
        self.vcd_file = vcd_file
        self.signals = {}  # {signal_name: [(timestamp, value), ...]}
        self.signal_ids = {}  # {signal_id: signal_name}
        self.timescale = 1  # ns
        self.parse()
    
    def parse(self):
        """Parse VCD file"""
        try:
            with open(self.vcd_file, 'r') as f:
                content = f.read()
        except FileNotFoundError:
            print(f"Error: VCD file not found: {self.vcd_file}")
            sys.exit(1)
        
        # Split header and data
        header_end = content.find('$enddefinitions')
        if header_end == -1:
            print("Error: Invalid VCD file format")
            sys.exit(1)
        
        header = content[:header_end]
        data = content[header_end + len('$enddefinitions'):]
        
        # Parse header for signal definitions
        var_pattern = r'\$var\s+(\w+)\s+(\d+)\s+(\S+)\s+([\w\[\]\.\:\-]+)\s+\$end'
        for match in re.finditer(var_pattern, header):
            var_type, size, var_id, var_name = match.groups()
            # Keep first occurrence of signal (avoid duplicates)
            if var_id not in self.signal_ids:
                self.signal_ids[var_id] = var_name
            if var_name not in self.signals:
                self.signals[var_name] = []
        
        # Parse timescale
        timescale_match = re.search(r'\$timescale\s+(\d+)([a-z]+)', header)
        if timescale_match:
            value, unit = timescale_match.groups()
            scale_map = {'s': 1e9, 'ms': 1e6, 'us': 1e3, 'ns': 1}
            self.timescale = int(value) * scale_map.get(unit, 1)
        
        # Parse data section
        current_time = 0
        for line in data.split('\n'):
            line = line.strip()
            if not line:
                continue
            
            if line.startswith('#'):
                current_time = int(line[1:])
            elif line.startswith('b'):
                # Binary value: bXXXXX signal_id
                match = re.match(r'b(\S+)\s+(\S+)', line)
                if match:
                    value, signal_id = match.groups()
                    if signal_id in self.signal_ids:
                        signal_name = self.signal_ids[signal_id]
                        self.signals[signal_name].append((current_time, value))
            elif len(line) == 2 and line[0] in '01xz':
                # Single bit: 0/1/x/z signal_id
                value = line[0]
                signal_id = line[1]
                if signal_id in self.signal_ids:
                    signal_name = self.signal_ids[signal_id]
                    self.signals[signal_name].append((current_time, value))
    
    def get_signal(self, name: str) -> List[Tuple[int, str]]:
        """Get signal trace by name (exact match or partial or last component)"""
        if name in self.signals:
            return self.signals[name]
        
        # Partial match (contains)
        matches = [k for k in self.signals.keys() if name in k]
        if matches:
            if len(matches) == 1:
                return self.signals[matches[0]]
            # Try to find exact match by last component
            for sig in matches:
                if sig.split('.')[-1] == name or sig.split('.')[-1] == name.split('.')[-1]:
                    return self.signals[sig]
            return self.signals[matches[-1]]  # Return last match as fallback
        
        # Try matching by last component (after last .)
        name_component = name.split('.')[-1]
        matches = [k for k in self.signals.keys() if k.endswith(name_component) or k.endswith('.' + name_component)]
        if matches:
            if len(matches) == 1:
                return self.signals[matches[0]]
            # Return first match if multiple
            return self.signals[matches[0]]
        
        return []
    
    def list_signals(self, pattern: str = "") -> List[str]:
        """List all signals matching pattern"""
        if not pattern:
            return sorted(self.signals.keys())
        return sorted([k for k in self.signals.keys() if pattern.lower() in k.lower()])


class SignalTracer:
    """Analyze signal sequences and detect anomalies"""
    
    def __init__(self, vcd: VCDParser):
        self.vcd = vcd
    
    def trace_signal_pair(self, req_sig: str, ack_sig: str, max_cycles: int = 100) -> None:
        """Trace request-acknowledge pattern"""
        req_trace = self.vcd.get_signal(req_sig)
        ack_trace = self.vcd.get_signal(ack_sig)
        
        if not req_trace:
            print(f"ERROR: Signal '{req_sig}' not found")
            return
        if not ack_trace:
            print(f"ERROR: Signal '{ack_sig}' not found")
            return
        
        print(f"\n=== Tracing {req_sig} -> {ack_sig} ===")
        print(f"{'Time':<10} {req_sig:<20} {ack_sig:<20} {'Status':<20}")
        print("-" * 70)
        
        # Build merged timeline
        events = {}
        for ts, val in req_trace:
            if ts not in events:
                events[ts] = {}
            events[ts][req_sig] = val
        for ts, val in ack_trace:
            if ts not in events:
                events[ts] = {}
            events[ts][ack_sig] = val
        
        sorted_times = sorted(events.keys())[:max_cycles]
        
        req_active = False
        pending_start = None
        
        for ts in sorted_times:
            req_val = events[ts].get(req_sig, '?')
            ack_val = events[ts].get(ack_sig, '?')
            
            # Detect request rising edge
            if req_val in ['1', '1'*len(req_val if isinstance(req_val, str) else '')] and not req_active:
                req_active = True
                pending_start = ts
                status = "REQUEST"
            # Detect ack response
            elif req_active and ack_val in ['1', '1'*len(ack_val if isinstance(ack_val, str) else '')]:
                latency = ts - pending_start if pending_start else 0
                status = f"ACK (latency: {latency})"
                req_active = False
            elif not req_active and req_val in ['0', 'x']:
                status = "idle"
            else:
                status = ""
            
            if status:
                print(f"{ts:<10} {str(req_val):<20} {str(ack_val):<20} {status:<20}")
    
    def analyze_z80_bus(self, start_time: int = 0, end_time: Optional[int] = None) -> None:
        """Analyze Z80 Wishbone bus activity"""
        print("\n=== Z80 Wishbone Bus Activity ===")
        
        sigs = {
            'z80_cyc': self.vcd.get_signal('z80_cyc'),
            'z80_stb': self.vcd.get_signal('z80_stb'),
            'z80_we': self.vcd.get_signal('z80_we'),
            'z80_ack': self.vcd.get_signal('z80_ack'),
            'z80_grant': self.vcd.get_signal('z80_grant'),
            'z80_adr': self.vcd.get_signal('z80_adr'),
            'sys_ack': self.vcd.get_signal('sys_ack'),
            'video_slave_ack': self.vcd.get_signal('video_slave_ack'),
        }
        
        # Merge all events
        events = defaultdict(dict)
        for sig_name, trace in sigs.items():
            if trace:
                for ts, val in trace:
                    if end_time is None or ts <= end_time:
                        if ts >= start_time:
                            events[ts][sig_name] = val
        
        if not events:
            print("No events found in time range")
            return
        
        sorted_times = sorted(events.keys())[:200]
        
        print(f"{'Time':<10} {'cyc':<5} {'stb':<5} {'we':<5} {'ack':<5} {'grant':<5} {'sys_ack':<8} {'vid_ack':<8} {'adr (hex)':<12}")
        print("-" * 90)
        
        for ts in sorted_times:
            evt = events[ts]
            cyc = evt.get('z80_cyc', '-')[0]
            stb = evt.get('z80_stb', '-')[0]
            we = evt.get('z80_we', '-')[0]
            ack = evt.get('z80_ack', '-')[0]
            grant = evt.get('z80_grant', '-')[0]
            sys_ack = evt.get('sys_ack', '-')[0]
            vid_ack = evt.get('video_slave_ack', '-')[0]
            adr = evt.get('z80_adr', 'xxxxx')
            adr_hex = 'XXXXX'
            if adr != 'xxxxx' and adr not in ['x', 'z']:
                try:
                    adr_hex = f"0x{int(adr, 2):06x}"
                except:
                    adr_hex = adr[:6]
            
            print(f"{ts:<10} {cyc:<5} {stb:<5} {we:<5} {ack:<5} {grant:<5} {sys_ack:<8} {vid_ack:<8} {adr_hex:<12}")
    
    def check_ack_chain(self) -> None:
        """Check if acknowledge chain is complete"""
        print("\n=== Checking Acknowledge Chain ===")
        
        chains = [
            ('video_slave_ack', 'sys_ack', 'z80_ack'),
            ('video2mem_ack0', 'video_slave_ack', 'sys_ack'),
        ]
        
        for src, mid, dst in chains:
            src_trace = self.vcd.get_signal(src)
            mid_trace = self.vcd.get_signal(mid)
            dst_trace = self.vcd.get_signal(dst)
            
            status = "?" if src_trace and mid_trace and dst_trace else "?"
            print(f"{status} {src} -> {mid} -> {dst}")
            
            if not src_trace:
                print(f"  WARNING: {src} not found")
            if not mid_trace:
                print(f"  WARNING: {mid} not found")
            if not dst_trace:
                print(f"  WARNING: {dst} not found")
    
    def find_signal_transitions(self, signal_name: str, value: str = '1') -> List[int]:
        """Find all times when signal transitions to given value"""
        trace = self.vcd.get_signal(signal_name)
        if not trace:
            print(f"Signal '{signal_name}' not found")
            return []
        
        transitions = []
        for i in range(1, len(trace)):
            prev_val = trace[i-1][1]
            curr_val = trace[i][1]
            if curr_val == value and prev_val != value:
                transitions.append(trace[i][0])
        
        return transitions


def main():
    """Command-line interface"""
    if len(sys.argv) < 2:
        print("Usage: vcdparser.py <vcd_file> [command] [args...]")
        print("\nCommands:")
        print("  list [pattern]           - List signals matching pattern")
        print("  z80_bus [start] [end]    - Analyze Z80 bus activity")
        print("  trace <req_sig> <ack_sig> - Trace request-acknowledge pair")
        print("  check_ack                - Verify acknowledge chain")
        print("  find <signal> [value]    - Find transitions (default value=1)")
        print("\nExamples:")
        print("  vcdparser.py waveform.vcd list z80")
        print("  vcdparser.py waveform.vcd z80_bus")
        print("  vcdparser.py waveform.vcd trace z80_stb z80_ack")
        sys.exit(1)
    
    vcd_file = sys.argv[1]
    print(f"Parsing VCD: {vcd_file}")
    vcd = VCDParser(vcd_file)
    print(f"Found {len(vcd.signals)} signals\n")
    
    tracer = SignalTracer(vcd)
    
    if len(sys.argv) < 3:
        # Default: show Z80 bus activity
        tracer.analyze_z80_bus()
        tracer.check_ack_chain()
    else:
        cmd = sys.argv[2]
        
        if cmd == 'list':
            pattern = sys.argv[3] if len(sys.argv) > 3 else ""
            signals = vcd.list_signals(pattern)
            print(f"Signals matching '{pattern}':")
            for sig in signals:
                print(f"  {sig}")
        
        elif cmd == 'z80_bus':
            start = int(sys.argv[3]) if len(sys.argv) > 3 else 0
            end = int(sys.argv[4]) if len(sys.argv) > 4 else None
            tracer.analyze_z80_bus(start, end)
        
        elif cmd == 'trace':
            if len(sys.argv) < 5:
                print("Usage: trace <req_signal> <ack_signal>")
                sys.exit(1)
            tracer.trace_signal_pair(sys.argv[3], sys.argv[4])
        
        elif cmd == 'check_ack':
            tracer.check_ack_chain()
        
        elif cmd == 'find':
            if len(sys.argv) < 4:
                print("Usage: find <signal> [value]")
                sys.exit(1)
            value = sys.argv[4] if len(sys.argv) > 4 else '1'
            transitions = tracer.find_signal_transitions(sys.argv[3], value)
            print(f"Transitions of '{sys.argv[3]}' to '{value}':")
            for ts in transitions[:50]:
                print(f"  {ts}")
        
        else:
            print(f"Unknown command: {cmd}")
            sys.exit(1)


if __name__ == '__main__':
    main()
