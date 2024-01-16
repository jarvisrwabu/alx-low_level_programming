#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -fpIC -c *.c
gcc -shared -o liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
