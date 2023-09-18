#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -IPIC -c *.c
gcc -shared -o  liball.so *.o
