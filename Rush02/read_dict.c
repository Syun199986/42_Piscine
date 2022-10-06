/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_dict.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorisak <hmorisak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 22:38:29 by hmorisak          #+#    #+#             */
/*   Updated: 2022/08/28 22:41:19 by hmorisak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

#include <stdio.h>

t_dict	*sep_dict_line(char *filepath);
int		row_num(char *filepath);
void	sep_key(t_dict *num_dict);
void	sep_value(t_dict *num_dict);

t_dict	*read_dict(char *filepath)
{
	t_dict	*num_dict;

	num_dict = sep_dict_line(filepath);
	sep_key(num_dict);
	sep_value(num_dict);
	return (num_dict);
}

t_dict	*sep_dict_line(char *filepath)
{
	t_dict	*num_dict;
	t_file	file;
	int		loop[2];

	file.cnt_row = row_num(filepath);
	num_dict = malloc(sizeof(t_dict) * (file.cnt_row + 1));
	file.fd = open(filepath, O_RDONLY);
	loop[0] = 0;
	loop[1] = 0;
	file.done = 1;
	while (file.done != 0)
	{
		file.done = read(file.fd, &file.c, 1);
		if (file.c == '\n')
		{
			num_dict[loop[0]].line[loop[1]] = '\0';
			loop[0]++;
			loop[1] = 0;
		}
		else if (file.c != '\n')
			num_dict[loop[0]].line[loop[1]++] = file.c;
	}
	num_dict[loop[0]].line[0] = 0;
	close(file.fd);
	return (num_dict);
}

int	row_num(char *filepath)
{
	t_file	file;

	file.fd = open(filepath, O_RDONLY);
	file.cnt_row = 0;
	while (1)
	{
		file.done = read(file.fd, &file.c, 1);
		if (file.done == 0)
			break ;
		if (file.c == '\n')
			file.cnt_row++;
	}
	close(file.fd);
	return (file.cnt_row);
}

void	sep_key(t_dict *nd)
{
	int	lp[4];

	lp[0] = 0;
	while (nd[lp[0]].line[0] != 0)
	{
		lp[1] = 0;
		lp[2] = 0;
		lp[3] = 0;
		while (nd[lp[0]].line[lp[1]])
		{
			if ('0' <= nd[lp[0]].line[lp[1]] && nd[lp[0]].line[lp[1]] <= '9')
			{
				lp[3] = 1;
				nd[lp[0]].intnum[lp[2]++] = nd[lp[0]].line[lp[1]];
			}
			else
			{
				nd[lp[0]].digit = lp[2];
				break ;
			}
			lp[1]++;
		}
		lp[0]++;
	}
}

void	sep_value(t_dict *num_dict)
{
	int	lp[4];

	lp[0] = 0;
	while (num_dict[lp[0]].line[0] != 0)
	{
		lp[1] = 0;
		lp[2] = 0;
		lp[3] = 0;
		while (num_dict[lp[0]].line[lp[1]])
		{
			if (num_dict[lp[0]].line[lp[1]++] == ':')
				break ;
		}
		while (num_dict[lp[0]].line[lp[1]])
		{
			if (num_dict[lp[0]].line[lp[1]] != ' ')
				break ;
			lp[1]++;
		}
		lp[2] = 0;
		while (num_dict[lp[0]].line[lp[1]])
			num_dict[lp[0]].strnum[lp[2]++] = num_dict[lp[0]].line[lp[1]++];
		lp[0]++;
	}
}
