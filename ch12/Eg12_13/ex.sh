#!/bin/bash

g++ -fsearch-include-path bits/std.cc -std=c++23 -fmodules -c 

g++ -std=c++23 -fmodules Box.cppm Box.cpp Eg12_13.cpp -o Eg12_13
