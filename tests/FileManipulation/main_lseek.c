#include <fcntl.h>
#include <stdio.h>

/*
	man 2 lseek

	int lseek(int fd, int offset, int mode);
	fd = File descriptor
	offset = resultado do deslocamento ou do calculo
	mode = Modo de claculo do novo offset

	Valor de retorno : Novo offset ou -1 em caso de erro
 */

void ft_putstr(char *str);
void ft_putnbr(int nb);
void ft_putchar(char c);

#define BUFFER_SIZE 10 

int main (void)
{
	int fd;
	int ret;
	char buf[BUFFER_SIZE + 1]; //+ '\0'

	fd = open("42", O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("open() error\n");
		return (1);
	}

	while((ret = read(fd, buf, BUFFER_SIZE)))
	{
		buf[ret] = '\0';
		ft_putnbr(ret);
		ft_putstr(buf);
		lseek(fd, -3, SEEK_END);
	}
	ft_putnbr(ret);
	if (close(fd) == -1)
	{
		ft_putstr("close() error\n");
		return (1);
	}
	return (0);
}

