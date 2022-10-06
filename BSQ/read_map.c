/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shusakai <shusakai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 14:29:20 by knagase           #+#    #+#             */
/*   Updated: 2022/08/31 16:43:20 by shusakai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

t_map	*read_map(char *filepath, int y_len, int map_flag);
int		count_y_len(char *filepath);
int		count_x_len(char *filepath, int x_cnt, int cnt_begin_flag);

t_map	*read_map(char *filepath, int y_len, int map_flag)
{
	t_map	*map;
	t_file	file;
	int		ij[2];

	map = malloc(sizeof(t_map) * (y_len + 1));
	file.fd = open(filepath, O_RDONLY);
	ij[0] = 0;
	ij[1] = 0;
	while (read(file.fd, &file.c, 1))
	{
		if (file.c == '\n')
		{
			if (map_flag == 1)
			{
				map[ij[0]++].line[ij[1]] = '\0';
				ij[1] = 0;
			}
			map_flag = 1;
		}
		if ((file.c != '\n') && (map_flag == 1))
			map[ij[0]].line[ij[1]++] = file.c;
	}
	close(file.fd);
	return (map);
}

int	count_y_len(char *filepath)
{
	t_file	file;
	int		y_cnt;

	y_cnt = 0;
	file.fd = open(filepath, O_RDONLY);
	while (1)
	{
		file.done = read(file.fd, &file.c, 1);
		if (file.done == 0)
			break ;
		if (file.c == '\n')
			y_cnt++;
	}
	close(file.fd);
	return (y_cnt - 1);
}

int	count_x_len(char *filepath, int x_cnt, int cnt_begin_flag)
{
	t_file	file;

	file.fd = open(filepath, O_RDONLY);
	while (1)
	{
		file.done = read(file.fd, &file.c, 1);
		if (cnt_begin_flag == 1)
		{
			while (file.c != '\n')
			{
				file.done = read(file.fd, &file.c, 1);
				x_cnt++;
			}
			break ;
		}
		if (file.done == 0)
			break ;
		if (file.c == '\n')
			cnt_begin_flag = 1;
	}
	close(file.fd);
	return (x_cnt);
}
