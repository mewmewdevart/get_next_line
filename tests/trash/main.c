#include <fcntl.h>

void    ft_putnbr(int nb);
void    ft_putstr(char *str);
char    ft_putchar(char c);

int main (void)
{
    int fd;

    fd = open("Jerimum", O_WRONLY | O_CREAT); //OPEN
    if (fd == -1)
    {
        ft_putstr("open () error");
        return (1);
    }
    ft_putnbr(fd);
    if (close(fd) == -1)
    {
        ft_putstr("close() error")
        return (1);
    }
    return (0);
}