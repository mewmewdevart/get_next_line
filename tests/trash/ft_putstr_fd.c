void	ft_putchar_fd(char c, int fd);

void	ft_putstr_fd(char *str, int fd)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar_fd(str[index], fd);
		index++;
	}
}