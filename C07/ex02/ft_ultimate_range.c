/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboldino <dboldino@student.42prague.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 17:46:20 by dboldino          #+#    #+#             */
/*   Updated: 2026/07/15 16:35:44 by dboldino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max);

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*result;
	int	i;

	i = 0;
	result = malloc(((max - min) + 1) * sizeof(int));
	if (min >= max)
	{
		result = NULL;
		*range = result;
		return (0);
	}
	if (result != NULL)
	{
		while (min < max)
		{
			result[i] = min;
			i++;
			min++;
		}
		*range = result;
		return (i);
	}
	else
		return (-1);
}
