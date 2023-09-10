#!/bin/bash
gcc -Wall -Wextra -Werror -std=gnu89 -pedantic -c *.c
ar -rcs liball.a *.o
ranlib liball.a
