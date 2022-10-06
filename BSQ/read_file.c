/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shusakai <shusakai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 09:43:55 by shusakai          #+#    #+#             */
/*   Updated: 2022/08/31 16:42:13 by shusakai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

t_map	*read_map_first_line(char *filepath, int y_len);
int		count_y_len(char *filepath);
int		count_x_len(char *filepath, int x_cnt, int cnt_begin_flag);
int		ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

t_file	read_file(char *filepath)
{
	t_map	*map;
	t_file	file;
	int		i;
	int		first_line_len;

	i = 1;
	file.x_len = count_x_len(filepath, 0, 0);
	file.y_len = count_y_len(filepath);
	map = read_map_first_line(filepath, file.y_len);
	first_line_len = ft_strlen(map[0].first_line);
	file.empty = map[0].first_line[first_line_len - 3];
	file.obstacle = map[0].first_line[first_line_len - 2];
	file.full = map[0].first_line[first_line_len - 1];
	return (file);
}

t_map	*read_map_first_line(char *filepath, int y_len)
{
	t_map	*map;
	t_file	file;
	int		k;

	k = 0;
	map = malloc(sizeof(t_map) * (y_len + 1));
	file.fd = open(filepath, O_RDONLY);
	while (1)
	{
		file.done = read(file.fd, &file.c, 1);
		if (file.done == 0)
			break ;
		if (file.c == '\n')
			break ;
		if (file.c != '\n')
			map[0].first_line[k++] = file.c;
	}
	map[0].first_line[k] = '\0';
	close(file.fd);
	return (map);
}
