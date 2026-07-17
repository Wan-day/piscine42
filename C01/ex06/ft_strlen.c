/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboldino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 13:58:43 by dboldino          #+#    #+#             */
/*   Updated: 2026/07/05 13:58:45 by dboldino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/* 
#include <stdio.h>
*/

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

/*
int	main(void)
{
	int	text;

	text = ft_strlen("HELLO world");
	printf ("%d", text);
	return(0);
}
*/
