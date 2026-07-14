/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboldino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 16:32:37 by dboldino          #+#    #+#             */
/*   Updated: 2026/07/07 13:30:20 by dboldino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
char	*ft_strcpy(char *dest, char *src)
{
	int	len;

	len = 0;
	while (src[len] != '\0')
	{
		dest[len] = src[len];
		len++;
	}
	dest[len] = src[len];
	return (dest);
}
/*
int	main(void)
{
	char	dest[] = "Destination2";
	char	src[] = "Test1";
	
	printf("dest before: %s\n", dest);
	ft_strcpy(dest, src);
	printf("dest after: %s\n", dest); 
	
}
*/
