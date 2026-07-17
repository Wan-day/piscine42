/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboldino <dboldino@student.42prague.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 19:05:03 by dboldino          #+#    #+#             */
/*   Updated: 2026/07/13 19:16:15 by dboldino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb);

int	ft_sqrt(int nb)
{
	int	i;
	int	result;

	i = 1;
	result = 0;
	while (result <= nb)
	{
		if (result < nb)
		{
			result = i * i;
			i++;
		}
		else if (result == nb)
			return (i - 1);
		else
			return (0);
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("Result of 16: %d\n", ft_sqrt(16));
	printf("Result of 15: %d\n", ft_sqrt(15));
	return (0);
}
*/
