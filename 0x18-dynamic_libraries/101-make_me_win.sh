#!/bin/bash
wget -O /tmp/hackero0onies.so "https://raw.githubusercontent.com/Katorea132/holbertonschool-low_level_programming/master/0x18-dynamic_libraries/hackero0onies.so"
export LD_PRELOAD=/tmp/hackero0onies.so
