/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboldino <dboldino@student.42prague.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 15:55:41 by dboldino          #+#    #+#             */
/*   Updated: 2026/07/13 19:15:23 by dboldino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb);

int	ft_recursive_factorial(int nb)
{
	if (nb > 1)
		return (nb * ft_recursive_factorial(nb - 1));
	else
		return (nb);
}
/*
#include <stdio.h>
int main(void)
{
	int	num = 10;
	printf("Factorial: %d\n", ft_recursive_factorial(num));
	return (0);
}
*/
