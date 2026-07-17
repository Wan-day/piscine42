/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboldino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 16:32:37 by dboldino          #+#    #+#             */
/*   Updated: 2026/07/07 13:30:26 by dboldino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	len;

	len = 0;
	while (src[len] != '\0' && len < n)
	{
		dest[len] = src[len];
		len++;
	}
	while (len < n)
	{
		dest[len] = '\0';
		len++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	dest[] = "Destination2";
	char	src[] = "Test1";
	int 	n = 3;
	
	printf("dest before: %s\n", dest);
	ft_strncpy(dest, src, n);
	printf("dest after: %s\n", dest); 	
}
*/
