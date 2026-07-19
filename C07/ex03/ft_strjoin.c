/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboldino <dboldino@student.42prague.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 16:36:12 by dboldino          #+#    #+#             */
/*   Updated: 2026/07/19 16:52:51 by dboldino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_size(char *str);
int		size_all(char **str, char *sep, int size);
char	*ft_strjoin(int size, char **strs, char *sep);

int	ft_size(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	size_all(char **str, char *sep, int size)
{
	int	i;
	int	j;
	int	result;
	int	sep_size;

	i = 0;
	result = 0;
	sep_size = ft_size(sep);
	while (i < size)
	{
		j = 0;
		while (str[i][j] != '\0')
		{
			j++;
			result++;
		}
		result += sep_size;
		i++;
	}
	return (result);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		i;
	int		j;
	int		k;

	if (size == 0)
		return (malloc(1));
	result = malloc((size_all(strs, sep, size) + 1) * sizeof(char));
	k = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			result[k++] = strs[i][j++];
		j = 0;
		if (i < size - 1)
		{
			while (sep[j] != '\0')
				result[k++] = sep[j++];
		}
		i++;
	}
	result[k] = '\0';
	return (result);
}
