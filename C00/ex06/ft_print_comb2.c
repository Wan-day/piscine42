#include <unistd.h>

void ft_print_comb2(void);
void write_num(int num);
void print_num(int first, int second);

void write_num(int num)
{
	char	c;

	c = num + '0';
	if (num < 10)
	{
		write(1, "0", 1);
		write(1, &c, 1);
	}
	else
	{
		c = (num / 10) + '0';
		write(1, &c, 1);
		c = (num % 10) + '0';
		write(1, &c, 1);
	}
}

void print_num(int first, int second)
{
	write_num(first);
	write(1, " ", 1);
	write_num(second);
	if (first == 98 && second == 99)
	{
		write(1, "\n", 1);
	}
	else
		write(1, ", ", 2);
}

void ft_print_comb2(void)
{
	int	first;
	int	second;

	first = 0;
	while (first < 99)
	{
		second = first + 1;
		while (second < 100)
		{
			print_num(first, second);
			second++;
		}
		first++;
	}
}

int main(void)
{
	ft_print_comb2();
	return 0;
}
