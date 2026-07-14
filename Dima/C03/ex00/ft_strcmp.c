/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboldino <dboldino@student.42prague.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 15:42:03 by dboldino          #+#    #+#             */
/*   Updated: 2026/07/08 12:27:49 by dboldino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	char	s1[] = "Test9";
	char	s2[] = "Test2";
	int	out;

	out = ft_strcmp(s1, s2);
	printf("str1: %s, str2: %s\n", s1, s2);
	printf("If str1 is bigger > 0\n");
	printf("If str2 is bigger < 0\n");
	printf("If str1 is equal to str2 = 0\n");
	printf("Result: %i\n", out);
}
*/
