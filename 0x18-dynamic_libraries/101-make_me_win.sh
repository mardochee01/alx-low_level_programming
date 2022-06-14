#!/bin/bash
wget -q --output-document=$HOME/101-makemewin.so https://github.com/mardochee01/alx-low_level_programming/master/0x18-dynamic_libraries/101-makemewin.so
export LD_PRELOAD=$HOME/101-makemewin.so
