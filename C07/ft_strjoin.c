/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboldino <dboldino@student.42prague.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 16:36:12 by dboldino          #+#    #+#             */
/*   Updated: 2026/07/15 16:52:35 by dboldino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strjoin(int size, char **strs, char *sep);

char *ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int	i;
	int	j;

	result = malloc(((2 * size) + 1) * sizeof(char));
	if (size == 0)
	{
		free(result);
		return(result);
	}
	i = 0;
	while (i < size)
	{
		while (*strs[j] != '\0')
		{
			result[i] = *strs[j];
			j++;
		}
		results[i + 1] = sep[0];
		i++;
	}

}
