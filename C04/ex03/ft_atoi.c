/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboldino <dboldino@student.42prague.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 13:50:00 by dboldino          #+#    #+#             */
/*   Updated: 2026/07/13 14:47:32 by dboldino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	sign_calc(char *str);
int	ft_size(char *str);
int	ft_atoi(char *str);

int	sign_calc(char *str)
{
	int	sign;
	int	i;

	i = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			sign = -sign;
		}
		i++;
	}
	return (sign);
}

char	*find_num(char *str)
{
	while (str[0] != '\0')
	{
		if (str[0] == ' ' || str[0] == '+' || str[0] == '-')
		{
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
	return (0);
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
	int	sign;

	sign = sign_calc(str);
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
/*
#include <stdio.h>
int	main()
{
	char	string[] = "      ++--+--+++-1234ea567";

	printf("The number: %d\n", ft_atoi(string));
	return (0);
}
*/
