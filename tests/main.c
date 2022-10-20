#include <stdio.h>
#include "../src/get_next_line.c"
int main (void)
{
	int fd;
	char *line;

	fd = open("oi.txt", o_rdonly);
	if (fd == -1)
	{
		return (error);
	}

	line = get_next_line(fd);
	free(line);

	return (0);
}
