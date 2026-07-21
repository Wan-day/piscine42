/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboldino <dboldino@student.42prague.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 16:26:06 by dboldino          #+#    #+#             */
/*   Updated: 2026/07/21 16:31:20 by dboldino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

int	is_separator(char str, char *sep);
char **ft_split(char *str, char *charset);\

int	is_separator(char str, char *sep)
{
	int	i;
	
	i = 0;
	while	(sep[i] != '\0')
	{
		if (str == sep[i])
			return (i);
		i++;
	}
	return (0);
}

char **ft_split(char *str, char *charset)
{
	char	**result;
	
	
}
