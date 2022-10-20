#include <unistd.h>

char ft_putchar1(char c)
{
    write(1, &c, 1);
}