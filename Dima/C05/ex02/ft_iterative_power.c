/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboldino <dboldino@student.42prague.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 18:21:46 by dboldino          #+#    #+#             */
/*   Updated: 2026/07/13 19:14:15 by dboldino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power);

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power == 0 && nb == 0)
		return (1);
	else if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (power == 1)
		return(nb);
	while (power > 1)
	{
		result = result * nb;
		power--;
	}
	return (result);
}
/*
#include <stdio.h>
int	main(void)
{
	int	nb = -5;
	int	power = 3;

	printf("Number: %d\n", ft_iterative_power(nb, power));
	return (0);
}
*/
