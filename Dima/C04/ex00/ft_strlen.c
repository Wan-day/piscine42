/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboldino <dboldino@student.42prague.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/08 12:59:25 by dboldino          #+#    #+#             */
/*   Updated: 2026/07/08 14:19:07 by dboldino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str++ != '\0')
	{
		i++;
	}
	return (i);
}
/*
int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		int	num;

		printf ("The string: %s\n", argv[1]);
		num = ft_strlen (argv[1]);
		printf ("Number of characters: %d\n", num);
	}
	else
	{
		printf("Invalid arguments");
	}
	printf("argc: %d\n", argc);
	printf("argv[1]: %s\n", argv[1]);
	return(0);
}
*/
