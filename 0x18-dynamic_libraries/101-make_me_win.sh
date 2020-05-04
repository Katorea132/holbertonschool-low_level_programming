#!/bin/bash
wget -O /tmp/hackero0onies.so "https://github.com/Katorea132/holbertonschool-low_level_programming/blob/master/0x18-dynamic_libraries/hackero0onies.so?raw=true"
export LD_PRELOAD=/tmp/hackero0onies.so
