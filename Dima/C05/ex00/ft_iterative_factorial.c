/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboldino <dboldino@student.42prague.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 15:50:12 by dboldino          #+#    #+#             */
/*   Updated: 2026/07/13 15:59:41 by dboldino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb);

int	ft_iterative_factorial(int nb)
{
	int	number;

	number = nb;
	if (nb < 1)
	{
		return(0);
	}
	while (number != 1)
	{
		number--;
		nb = nb * number;
	}
	return (nb);
}

#include <stdio.h>
int main(void)
{
	printf("factorial: %d\n", ft_iterative_factorial(0));
	return(0);
}

