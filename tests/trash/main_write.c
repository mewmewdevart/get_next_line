#include <unistd.h>
#include <fcntl.h>

void    ft_putcharSTR_fd(char *str, int fd);
int ft_strlen(char *str);

int main (void)
{
    int fd;

    fd = open("arquivo", O_WRONLY  | O_CREAT | O_APPEND);

    if (fd == -1)
    {
        ft_putcharSTR_fd("open() error", fd);
        return (1);
    }

    ft_putcharSTR_fd("Andar pulando", fd);
    
    if (close(fd) == -1)
    {
        ft_putcharSTR_fd("close() error", fd);
        return (1);
    }
    return (0);
}

void	ft_putcharSTR_fd(char *str, int fd)
{
	write(fd, str, ft_strlen(str));
}