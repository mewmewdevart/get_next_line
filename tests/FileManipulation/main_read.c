#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>


/*
	man 2 read

	int read(int fd, char *buf, int count);

	fd = Descritor de arquivo para ler
	buf = Buffer de origem
	count = Numero de bites para ler

	Valor de retorno: NUmero de bytes escritos ou -1 em caso de erro
 */

void ft_putstr(char *str);
void ft_putnbr(int nb);
void ft_putchar(char c);

//#define BUFFER_SIZE 4096
#define BUFFER_SIZE 5 //Quantidade que o buffer ira ler

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

	//Quando nao se sabe quantos bytes ira receber, cria-se o loop
	while(ret = read(fd, buf, BUFFER_SIZE)) //Em cada loop retornará a quantidade de caracteres solicitada no buffer size
	{
		buf[ret] = '\0';
		ft_putnbr(ret);
		ft_putstr(buf);
	}
	//buf[ret] = '\0';
	ft_putnbr(ret); //Conta quantos caracteres tem
	//ft_putstr(buf); //Printa apenas oque o buf leu

	if (close(fd) == -1)
	{
		ft_putstr("close() error\n");
		return (1);
	}
	return (0);
}
