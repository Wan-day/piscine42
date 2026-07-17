/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboldino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 17:39:59 by dboldino          #+#    #+#             */
/*   Updated: 2026/07/07 13:30:40 by dboldino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	check(char test)
{
	int	tester;

	tester = 0;
	if (test >= 97 && test <= 122)
	{
		return (0);
	}
	else
	{
		tester++;
	}
	return (tester);
}

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	result;
	int	out;

	result = 0;
	i = 0;
	while (str[i])
	{
		check(str[i]);
		result = result + check(str[i]);
		i++;
	}
	if (result == 0)
	{
		out = 1;
	}
	else
	{
		out = 0;
	}
	return (out);
}
/*
int main(void)
{
	printf("should be 0: %d\n", ft_str_is_lowercase("hi there world"));
	printf("should be 1: %d\n", ft_str_is_lowercase("asdafdgadgagga"));
}
*/
