#include <unistd.h>
#include "ft_stock_str.h"
void	ft_print(char c);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
void	ft_show_tab(struct s_stock_str *par);

void	ft_print(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_print(str[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	long int	num;

	num = nb;
	if (num < 0)
	{
		ft_print('-');
		num *= -1;
	}
	if (num >= 0 && num <= 9)
	{
		ft_print(num + '0');
	}
	else if (num > 9)
	{
		ft_putnbr(num / 10);
		ft_putnbr(num % 10);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != NULL)
	{
		ft_putstr(par[i].str);
		ft_print('\n');
		ft_putnbr(par[i].size);
		ft_print('\n');
		ft_putstr(par[i].copy);
		ft_print('\n');
		i++;
	}
}
