/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboldino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 17:39:59 by dboldino          #+#    #+#             */
/*   Updated: 2026/07/07 13:31:03 by dboldino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/

char	to_upper(char letter)
{
	letter = letter - 32;
	return (letter);
}

char	check(char test)
{
	if (test >= 97 && test <= 122)
	{
		test = to_upper(test);
	}
	return (test);
}

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		str[i] = check(str[i]);
		i++;
	}
	return (str);
}
/*
int main(void)
{
	char word[] = "hell yeah its uppercase123";

	printf("Before: %s\n", word);
	ft_strupcase(word);
	printf("After: %s\n", word);
}
*/
