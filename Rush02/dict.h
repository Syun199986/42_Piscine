/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorisak <hmorisak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 22:38:00 by hmorisak          #+#    #+#             */
/*   Updated: 2022/08/28 22:38:09 by hmorisak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DICT_H
# define DICT_H

typedef struct s_dict
{
	char	line[100000];
	char	intnum[100000];
	char	strnum[100000];
	int		digit;
}	t_dict;

typedef struct s_file
{
	int		fd;
	char	c;
	int		done;
	int		cnt_row;
}	t_file;

typedef struct s_hundred
{
	char	num;
	int		digit;
}	t_hundred;

#endif