/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboldino <dboldino@student.42prague.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 18:27:58 by dboldino          #+#    #+#             */
/*   Updated: 2026/07/13 19:15:45 by dboldino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power);

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	return (nb * ft_recursive_power (nb, power - 1));
}
/*
#include <stdio.h>

int	main(void)
{
	int	nb = 5;
	int	power = 3;

	printf("Result: %d\n", ft_recursive_power(nb, power));
	return (0);
}
*/
