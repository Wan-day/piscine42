#include <unistd.h>

void ft_print(long n);
void ft_putnbr(int nb);

void ft_print(long n)
{
	char	c;

	c = n + '0';
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
	long	n;

	n = nb;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n < 10)
	{
		ft_print(n);
	}
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}

int	main(void)
{
	ft_putnbr(-1234678);
	return 0;
}
