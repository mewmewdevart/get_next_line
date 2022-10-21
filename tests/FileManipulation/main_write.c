#include <unistd.h>
#include <fcntl.h>

/*
 man 2 write

 int write(int fd, char *buf, int count);

 fd = Descritor de arquivo para gravar
 buf = Buffer de origem
 count = numero de bites para ser escrito

 Valor de retorno? Numero de bytes escritos ou -1 em caso de erro
*/

void ft_putstr(char *str);
void ft_putnbr(int nb);
void ft_putchar(char c);
int ft_strlen(char *str);

void ft_putstr_fd(int fd, char *str)
{
	write(fd, str,ft_strlen(str));
}

int main (void)
{
	int fd;

	fd = open("42", O_WRONLY | O_CREAT | O_APPEND , S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		ft_putstr("open() error\n");
		return (1);
	}

	ft_putnbr(fd);
	ft_putstr_fd(fd,"Hello World! \n"); //Escreve o caractere/letra após o ultimo byte a cada recompilação

	if (close(fd) == -1)
	{
		ft_putstr("close() error\n");
		return (1);
	}
	return (0);
}
