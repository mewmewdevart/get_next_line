#include <unistd.h>

char ft_putchar(char c)
{
    write(1, &c, 1);
}