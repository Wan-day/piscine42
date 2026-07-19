/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboldino <dboldino@student.42prague.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 18:08:55 by dboldino          #+#    #+#             */
/*   Updated: 2026/07/19 18:53:25 by dboldino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_POINT_H
# define FT_POINT_H

typedef struct
{
	int	x;
	int	y;
} t_point;

void	set_point(t_point *point);

#endif
