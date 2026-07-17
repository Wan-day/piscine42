/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboldino <dboldino@student.42prague.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 17:11:28 by dboldino          #+#    #+#             */
/*   Updated: 2026/07/14 17:45:16 by dboldino         ###   ########.fr       */
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
		return(NULL);

	size = max - min;
	result = malloc(size * sizeof(int));
	if (!result)
		return(NULL);
	i = 0;
	while (i < size)
	{
		result[i] = min + i;
		i++;
	}
	return(result);
}
