/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboldino <dboldino@student.42prague.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 17:11:28 by dboldino          #+#    #+#             */
/*   Updated: 2026/07/22 18:12:22 by dboldino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max);

int	*ft_range(int min, int max)
{
	int	*result;
	int	size;
	int	i;

	if (min >= max)
		return (NULL);
	size = max - min;
	result = malloc(size * sizeof(int));
	if (!result)
		return (NULL);
	i = 0;
	while (i < size)
	{
		result[i] = min + i;
		i++;
	}
	return (result);
}

#include <stdio.h>
int	main(void)
{
	int i = 0;
	int min = -214748;
	int max = 214748363;
	int *str = ft_range(min, max);

	while (min < max-1)
	{
		printf("%d\n", str[i]);
		i++;
		min++;
	}
	return(0);
}
