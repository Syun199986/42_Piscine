/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_map_square.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shusakai <shusakai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 14:39:10 by shusakai          #+#    #+#             */
/*   Updated: 2022/08/31 10:33:42 by shusakai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// TODO: makefile

#include "map.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

void	change_point(int *x_point, int *y_point, int *x_init_flag, t_file file);

void	put_map_square(t_map *map, t_file	file)
{
	int		i;
	int		j;
	int		x_init_flag;
	int		x_point;
	int		y_point;

	i = 0;
	x_point = g_sx;
	y_point = g_sy;
	while (i < file.y_len)
	{	
		j = 0;
		while (j < file.x_len)
		{
			x_init_flag = 0;
			if (j == x_point && i == y_point)
				change_point(&x_point, &y_point, &x_init_flag, file);
			else
				write(1, &map[i].line[j], 1);
			j++;
		}
		i++;
		write(1, "\n", 1);
	}
}

void	change_point(int *x_point, int *y_point, int *x_init_flag, t_file file)
{
	write(1, &file.full, 1);
	if (*x_point < g_sx + g_sw - 1)
		*x_point += 1;
	else
	{
		*x_init_flag = 1;
		*x_point = g_sx;
	}
	if (*y_point < g_sy + g_sw - 1 && *x_init_flag == 1)
		*y_point += 1;
}
