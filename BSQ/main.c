/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shusakai <shusakai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 13:56:30 by knagase           #+#    #+#             */
/*   Updated: 2022/08/31 10:14:01 by shusakai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// TODO: makefile

#include "map.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

t_map	*read_map(char *filepath, int y_len, int map_flag);
void	put_map_square(t_map *dict, t_file	file);
int		count_y_len(char *filepath);
int		count_x_len(char *filepath);
void	search(t_map *dict, t_file file);
t_file	read_file(char *filepath);
void	map_logic(char *filepath);
int		check_file(char *filename);

int	main(int argc, char **argv)
{
	char	fileName[254 + 1];
	int		i;

	if (argc < 1)
		return (0);
	if (argc == 1)
	{
		read(STDIN_FILENO, fileName, 255);
		map_logic(fileName);
	}
	else
	{
		i = 1;
		while (i < argc)
			map_logic(argv[i++]);
	}
	return (0);
}

void	map_logic(char *filepath)
{
	t_map	*map;
	t_file	file;

	if (check_file(filepath) != -1)
	{
		file = read_file(filepath);
		map = read_map(filepath, file.y_len, 0);
		search(map, file);
		put_map_square(map, file);
	}
}

int	check_file(char *filename)
{
	t_file	file;

	file.fd = open(filename, O_RDONLY);
	if (file.fd == -1)
	{
		write(1, "map error\n", 10);
		return (-1);
	}
	return (0);
}
