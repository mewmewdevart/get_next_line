#!/bin/bash
cc main.c get_next_line.c get_next_line_utils.c -Wall -Wextra -Werror -D BUFFER_SIZE=<size> -o get_next_line
valgrind --track-origins=yes ./get_next_line > result.txt 2> leaks
diff teste.txt result.txt > result.diff