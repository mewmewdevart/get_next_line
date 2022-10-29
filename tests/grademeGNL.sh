#!/bin/sh
cc -Wall -Wextra -Werror get_next_line_utils.c get_next_line.c main.c -D BUFFER_SIZE=99999 -o get_next_line $1 -g3
valgrind --track-origins=yes ./get_next_line ~/Github/get_next_line/tests/archive_gnl.txt > result.txt 2> leaks.txt
cat result.txt