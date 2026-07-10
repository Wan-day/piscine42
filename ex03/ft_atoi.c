#include <stdio.h>

int	sign;
char	*find_num(char *str);
int	ft_size(char *str);
int	ft_atoi(char *str);

char	*find_num (char *str)
{
	sign = 1;
	while (str[0] != '\0')
	{
		if (str[0] == ' ' || str[0] == '+')
		{
			str++;
		}
		else if (str[0] == '-')
		{
			sign = -sign;
			str++;
		}
		else if (str[0] >= '0' && str[0] <= '9')
		{
			return (str);
		}
		else
		{
			return (0);
		}
	}
	return(0);
}

int	ft_size(char *str)
{
	int	size;
	
	size = 0;
	while (str[size] >= '0' && str[size] <= '9')
	{
		size++;
	}
	return (size);
}

int	ft_atoi(char *str)
{
	int	result;

	result = 0;
	str = find_num(str);
	if (str == 0)
		return (0);
	while (str[0] >= '0' && str[0] <= '9')
	{
		if (result != 0)
		{
			result = result * 10;
		}
		result = result + (*str - '0');
		str++;
	}
	result = result * sign;
	return (result);
}

int	main()
{
	char	string[] = "      ++--+--+++-1234ea567";

	printf("The number: %d\n", ft_atoi(string));
	return (0);
}
