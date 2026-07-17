/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboldino <dboldino@student.42prague.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 19:26:53 by dboldino          #+#    #+#             */
/*   Updated: 2026/07/08 12:30:17 by dboldino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_sum(unsigned int d, unsigned int s, unsigned int size)
{
	unsigned int	sum;

	if (size > d)
	{
		sum = d + s;
	}
	else
	{
		sum = s + size;
	}
	return (sum);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	d;
	unsigned int	s;
	unsigned int	sum;

	i = 0;
	sum = 0;
	d = ft_strlen (dest);
	s = ft_strlen (src);
	sum = ft_sum(d, s, size);
	if (d >= size)
	{
		return (sum);
	}
	while (src[i] != '\0' && size > (d + 1))
	{
		dest[d] = src[i];
		d++;
		i++;
	}
	dest[d] = '\0';
	return (sum);
}
/*
int main(void)
{
	char	src[] = "Test";
	char	dest[] = "Test";
	int	size = 10;
	unsigned int	d = ft_strlcat(dest, src, size);

	printf("Result: %d\n", d);
	printf("String: %s\n", dest);
}
*/
