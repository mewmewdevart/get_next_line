#include <fcntl.h>
#include <unistd.h>

void	ft_putnbr(int nb);
void	ft_putstr(char *str);
int     ft_strlen(char *str);
char ft_putchar1(char c);

void    ft_putchar(int fd, char c)
{
    write(fd, &c, 1);
}

void    ft_putstr_fd(int fd, char *str);

int main (void)
{
    int fd;

    fd = open("Jerimum", O_WRONLY | O_CREAT | O_APPEND);//| S_IRUSR | S_IWUSR 
    if (fd == -1)
    {
        ft_putchar1("open () error");
        return (1);
    }

    ft_putnbr(fd);
    ft_putstr("larissa", fd); //Gravação : Estou criando um arquivo e colocando a palavra dentro dele

    if (close(fd) == -1)
    {
        ft_putchar1("close() error");
        return (1);
    }
    return (0);
}