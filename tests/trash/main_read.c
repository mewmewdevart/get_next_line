#include <unistd.h>
#include <fcntl.h>

int     ft_strlen(char *str);


#define BUF_SIZE 4096

int main (void)
{
    int fd;
    int ret; //return
    char buf[BUF_SIZE + 1 ];

    fd = open("larissa", O_RDONLY);
    if (fd == -1 )
    {
        ft_putcharSTR_fd("open() error", fd);
        return (1);
    }

    ret = read(fd, buf, BUF_SIZE);
    buf[ret] = '\0';
    ft_putcharSTR_fd(buf, fd);
    ft_putnbr(buf);

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