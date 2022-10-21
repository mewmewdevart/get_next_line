#include <fcntl.h>
#include <unistd.h>

/*
	man 2 open
	int open(char *path, int flags, [mode_t perm]);
	
	path = arquivos
	flags = modo de abertura
	perm = permissoes

	Valor de retorno: File descriptor(int) ou -1 em caso de erro
*/

void ft_putchar(char c);
void ft_putnbr(int nb);
void ft_putstr(char *str);

int main (void)
{
	int fd;

	//fd = open("mew", O_RDONLY); //Abre um arquivo (o arquivo precisa já estar criado)
	fd = open("Arquivo", O_WRONLY | O_CREAT | S_IRUSR | S_IWUSR ); //Caso o arquivo 42 nao exista, crie-o e me de permissoes de leitura e escrita
	//Tratamento de erro
	if (fd == -1)
	{
		ft_putstr("open() failed\n");
		return (1);
	}

	ft_putnbr(fd);

	if(close(fd) == -1)
	{
		ft_putstr("close() failed\n");
		return (1);
	}
	return(0);
}
