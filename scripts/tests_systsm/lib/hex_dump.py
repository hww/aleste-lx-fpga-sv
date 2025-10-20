#!/usr/bin/env python3
"""
Hex dump module for memory visualization
"""

def hex_dump(address, data: bytes, bytes_per_line: int = 16, title: str = None):
    """
    Display hex dump of memory data
    
    Args:
        address: Starting address (int or hex string)
        data: Bytes to display
        bytes_per_line: Number of bytes per line
        title: Optional title
    """
    if not data:
        print("No data to dump")
        return
    
    # Convert address to int if needed
    if isinstance(address, str):
        if address.startswith('0x'):
            address = int(address, 16)
        else:
            address = int(address)
    address = int(address)
    
    bytes_per_line = int(bytes_per_line)
    
    if title:
        print(title)
    
    print(f"Address: 0x{address:06X} - 0x{address + len(data) - 1:06X} ({len(data)} bytes)")
    
    for i in range(0, len(data), bytes_per_line):
        chunk = data[i:i + bytes_per_line]
        current_addr = address + i
        
        # Format address
        line = f"0x{current_addr:06X}: "
        
        # Format hex bytes
        hex_bytes = []
        for j in range(bytes_per_line):
            if j < len(chunk):
                hex_bytes.append(f"{chunk[j]:02X}")
            else:
                hex_bytes.append("  ")
        
        # Group bytes by 8 for better readability
        if bytes_per_line >= 8:
            groups = []
            for k in range(0, len(hex_bytes), 8):
                groups.append(" ".join(hex_bytes[k:k+8]))
            hex_str = "  ".join(groups)
        else:
            hex_str = " ".join(hex_bytes)
        
        line += hex_str.ljust(bytes_per_line * 3 - 1)
        
        # Format ASCII representation
        line += "  |"
        ascii_part = ""
        for byte in chunk:
            if 32 <= byte <= 126:  # Printable ASCII
                ascii_part += chr(byte)
            else:
                ascii_part += "."
        line += ascii_part.ljust(bytes_per_line)
        line += "|"
        
        print(line)


class HexDump:
    """Hex dump class for more advanced usage"""
    
    def __init__(self, address_width: int = 6, bytes_per_line: int = 16, show_ascii: bool = True):
        self.address_width = int(address_width)
        self.bytes_per_line = int(bytes_per_line)
        self.show_ascii = bool(show_ascii)
    
    def dump(self, address, data: bytes, title: str = None) -> str:
        """Generate hex dump as string"""
        if not data:
            return "No data to dump"
        
        # Convert address to int
        address = int(address)
        
        lines = []
        if title:
            lines.append(title)
        
        lines.append(f"Address: 0x{address:06X} - 0x{address + len(data) - 1:06X} ({len(data)} bytes)")
        
        for i in range(0, len(data), self.bytes_per_line):
            chunk = data[i:i + self.bytes_per_line]
            lines.append(self._format_line(address + i, chunk))
        
        return '\n'.join(lines)
    
    def _format_line(self, address: int, data: bytes) -> str:
        """Format single line of hex dump"""
        address = int(address)
        
        # Address
        line = f"0x{address:0{self.address_width}X}: "
        
        # Hex bytes
        hex_part = []
        for i in range(self.bytes_per_line):
            if i < len(data):
                hex_part.append(f"{data[i]:02X}")
            else:
                hex_part.append("  ")
        
        # Group by 8 bytes
        if self.bytes_per_line >= 8:
            hex_groups = []
            for i in range(0, len(hex_part), 8):
                hex_groups.append(" ".join(hex_part[i:i+8]))
            hex_str = "  ".join(hex_groups)
        else:
            hex_str = " ".join(hex_part)
        
        line += hex_str.ljust(self.bytes_per_line * 3 - 1)
        
        # ASCII representation
        if self.show_ascii:
            line += "  |"
            ascii_part = ""
            for byte in data:
                if 32 <= byte <= 126:
                    ascii_part += chr(byte)
                else:
                    ascii_part += "."
            line += ascii_part.ljust(self.bytes_per_line)
            line += "|"
        
        return line
    
    def print_dump(self, address, data: bytes, title: str = None):
        """Print hex dump"""
        print(self.dump(address, data, title))