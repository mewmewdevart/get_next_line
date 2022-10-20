#include <unistd.h>

//Convert int em char
char ft_putchar1(char c);

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar1('-');
		ft_putchar1('2');
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		ft_putchar1('-');
		nb = -nb;
		ft_putnbr(nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar1(nb + 48);
}