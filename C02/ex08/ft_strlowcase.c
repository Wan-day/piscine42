/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboldino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 17:39:59 by dboldino          #+#    #+#             */
/*   Updated: 2026/07/07 13:31:11 by dboldino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/

char	to_lower(char letter)
{
	letter = letter + 32;
	return (letter);
}

char	check(char test)
{
	if (test >= 65 && test <= 90)
	{
		test = to_lower(test);
	}
	return (test);
}

char	ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		str[i] = check(str[i]);
		i++;
	}
	return (*str);
}
/*
int main(void)
{
	char word[] = "HELL YEAH ITS LOWER CASE123";

	printf("Before: %s\n", word);
	ft_strlowcase(word);
	printf("After: %s\n", word);
}
*/
