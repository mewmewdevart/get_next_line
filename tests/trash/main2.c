#include <fcntl.h>
#include <unistd.h>

void    ft_putchar(int fd, char c)
{
    write(fd, &c, 1);
}

void	ft_putnbr(int nb);
void	ft_putstr(char *str);
char ft_putchar1(char c);

int main (void)
{
    int fd;

    fd = open("Jerimum", O_WRONLY | O_CREAT | O_APPEND);//| S_IRUSR | S_IWUSR 
    if (fd == -1)
    {
        ft_putstr("open () error");
        return (1);
    }

    ft_putnbr(fd);
    //ft_putchar(fd, 'z'); //Gravação : Estou criando um arquivo e colocando a palavra dentro dele
    ft_putstr_fd("unholy.txt", fd)
    if (close(fd) == -1)
    {
        ft_putstr("close() error");
        return (1);
    }
    return (0);
}