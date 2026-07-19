/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboldino <dboldino@student.42prague.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 19:08:51 by dboldino          #+#    #+#             */
/*   Updated: 2026/07/19 19:10:32 by dboldino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	size_of(char *str);
char	*ft_strdup(char *src);
struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

int	size_of(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	dest = malloc((size_of(src) + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int	i;
	struct	s_stock_str *result;

	result = malloc((ac + 1) * sizeof(struct s_stock_str));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		result[i].size = size_of(av[i]);
		result[i].str = av[i];
		result[i].copy = ft_strdup(av[i]);
		if (result[i].copy == NULL)
		{
			while (--i >= 0)
				free(result[i].copy);
			free(result);
			return (NULL);
		}
		i++;
	}
	result[ac].size = 0;
	result[ac].copy = 0;
	result[ac].str = 0;
	return (result);
}
