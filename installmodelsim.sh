#!/bin/bash
sudo dpkg --add-architecture i386
sudo apt-get update
sudo apt-get install libc6:i386 libncurses5:i386 libstdc++6:i386 lib32ncurses6 libxft2 libxft2:i386 libxext6 libxext6:i386
chmod +x ModelSimSetup-20.1.1.720-linux.run
./ModelSimSetup-20.1.1.720-linux.run
