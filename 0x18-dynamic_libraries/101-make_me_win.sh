#!/bin/bash

wget -P /tmp https://github.com/Maxidonx/alx-low_level_programing/raw/master/0x18-dynamic_libraries/nrandom.so
export LD_PRELOAD=/tmp/nrandom.so
