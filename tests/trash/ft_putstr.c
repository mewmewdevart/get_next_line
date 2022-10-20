#include <unistd.h>

char ft_putchar1(char c);

void	ft_putstr(char *str)
{
    int index;

    index = 0;
    while(str[index] != '\0')
    {
        ft_putchar1(str[index]);
        index++;
    }
}