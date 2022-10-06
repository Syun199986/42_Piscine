/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shusakai <shusakai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 14:10:47 by knagase           #+#    #+#             */
/*   Updated: 2022/08/31 10:13:40 by shusakai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_H
# define MAP_H
# define MAX_STR_SIZE	65535

extern int	g_sw;
extern int	g_sx;
extern int	g_sy;

typedef struct s_map
{
	char	line[MAX_STR_SIZE];
	char	first_line[MAX_STR_SIZE];
}	t_map;

typedef struct s_file
{
	int		fd;
	char	c;
	int		done;
	int		y_len;
	int		x_len;
	int		max_line;
	int		line_num;
	char	empty;
	char	obstacle;
	char	full;
}	t_file;

#endif