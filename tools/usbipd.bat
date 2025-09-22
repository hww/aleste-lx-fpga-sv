# Установить usbipd если нет
# winget install usbipd

# Посмотреть устройства
usbipd list

# Найти ваш программатор (по VID 0403:PID 6010) и подключить к WSL
# usbipd bind --busid <BUSID>
# usbipd attach --wsl --busid <BUSID>
C:\Windows\system32> usbipd bind --busid 3-4
C:\Windows\system32> usbipd attach --wsl --busid 3-4

# PS C:\Windows\system32> usbipd list
# Connected:
# BUSID  VID:PID    DEVICE                                                        STATE
# 1-5    2f68:0082  USB Input Device                                              Not shared
# 1-10   0d8c:0012  USB Audio Device, USB Input Device                            Not shared
# 1-11   047d:1020  USB Input Device                                              Not shared
# 1-14   046d:c077  USB Input Device                                              Not shared
# 3-3    1235:800a  Scarlett 2i4 USB                                              Not shared
# 3-4    1d50:602b  USB Mass Storage Device, Устройство с последовательным ин...  Not shared
# 
# Persisted:
# GUID                                  DEVICE
# d048a0c0-98b4-4b06-a46b-3d7ab4103119  USB Mass Storage Device, Устройство с последовательным ин...ф
# e2f42dd3-f778-4c7e-913e-c46fd987b26b  Unknown USB Device (Device Descriptor Request Failed)
# 
# PS C:\Windows\system32> usbipd bind --busid 3-4
# PS C:\Windows\system32> usbipd attach --wsl --busid 3-4
# usbipd: info: Using WSL distribution 'Ubuntu' to attach; the device will be available in all WSL 2 distributions.
# usbipd: info: Detected networking mode 'nat'.
# usbipd: info: Using IP address 172.30.16.1 to reach the host.