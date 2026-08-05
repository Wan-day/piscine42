#include "utils.h"

void print_error(int err)
{
	char	*str;
	int		i;

	if (err == ERR_MISSING_C_ARG)
	{
		(void)str;
		(void)i;
		write(1, "ft_tail: option requires an argument -- 'c'\n", 44);
	}
	else
	{
		str = strerror(err);
		i = 0;
		while (str[i] != '\0')
		{
			write(1, &str[i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
}

void print_file(int fd, char *buf, int size)
{
	while (buf[size] != '\0')
	{
		write(1, &buf[size], 1);
		size++;
	}
	close(fd);
}

int	ft_strcmp(char *st1, char *st2)
{
	int	i;

	i = 0;
	while (st1[i] && st2[i])
	{
		if (st1[i] != st2[i])
			return (st1[i] - st2[i]);
		i++;
	}
	return (st1[i] - st2[i]);
}

char	*find_num(char *str)
{
	while (str[0] != '\0')
	{
		if (str[0] == ' ' || (str[0] >= 9 && str[0] <= 13))
			str++;
		else if (str[0] == '-' || str[0] == '+')
			break ;
		else if (str[0] >= '0' && str[0] <= '9')
			return (str);
		else
			return (0);
	}
	while (str[0] != '\0')
	{
		if (str[0] == '-' || str[0] == '+')
			str++;
		else if (str[0] >= '0' && str[0] <= '9')
			return (str);
		else
			return (0);
	}
	return (0);
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
	return (result);
}
