/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboldino <dboldino@student.42prague.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 15:42:03 by dboldino          #+#    #+#             */
/*   Updated: 2026/07/08 12:27:56 by dboldino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i] || s1[i] == '\0')
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	s1[] = "Tes123";
	char	s2[] = "Test";
	int	out;
	int	n;

	n = 4;
	out = ft_strncmp(s1, s2, n);
	printf("str1: %s, str2: %s\n", s1, s2);
	printf("If str1 is bigger > 0\n");
	printf("If str2 is bigger < 0\n");
	printf("If str1 is equal to str2 = 0\n");
	printf("Number or characters compared: %i\n", n);
	printf("Result: %i\n", out);
}
*/
