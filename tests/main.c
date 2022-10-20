#include <fcntl.h>

void    ft_putnbr(int nb);
void    ft_putstr(char *str);
char    ft_putchar(char c);

int main (void)
{
    int fd;

    fd = open("Jerimum", O_WRONLY | O_CREAT);
    ft_putnbr(fd);
    return (0);
}