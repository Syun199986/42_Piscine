/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorisak <hmorisak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 22:38:59 by hmorisak          #+#    #+#             */
/*   Updated: 2022/08/28 22:41:10 by hmorisak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "dict.h"

t_dict		*read_dict(char	*filepath);
t_hundred	*to_str(char *tmp);
int			ft_strlen(char *str);
void		to_strnum(t_hundred *str, t_dict *num_dict, int size);
void		ft_putstr(char *dict_str, int size, int j);
int			num_size(int len);
void		change_to_str(int size, t_dict *num_dict, char num[1000][1000]);
void		num49_digit2(t_hundred *str, t_dict *num_dict, int size, int i);
void		num48_digit3(t_hundred *str, t_dict *num_dict, int size, int i);
void		digit2(t_hundred *str, t_dict *num_dict, int size, int i);
void		num49_digit1(t_hundred *str, t_dict *num_dict, int size, int i);
void		num_bunkai_1(int len, char *str, char num[1000][1000]);
int			num_bunkai_2(int len, char *str, char num[1000][1000]);
int			num_size(int len);
int			error_judge(char *str, int len);

int	num_bunkai_2(int len, char *str, char num[1000][1000])
{
	int	l;
	int	k;

	l = 0;
	k = 0;
	while (l < 3 - (len % 3))
	{
		num[0][l] = '0';
		l++;
	}
	while (l < 3)
	{
		num[0][l] = str[k];
		k++;
		l++;
	}
	return (1);
}

void	num_bunkai_1(int len, char *str, char num[1000][1000])
{
	int		i;
	int		k;
	int		l;
	int		flag;

	k = 0;
	flag = 0;
	if (len % 3 != 0)
	{
		flag = num_bunkai_2(len, str, num);
		k = len % 3;
	}
	i = flag;
	l = 0;
	while (i < (len / 3) + flag)
	{
		while (l < 3)
		{
			num[i][l] = str[k];
			k++;
			l++;
		}
		i++;
		l = 0;
	}
}

int	num_size(int len)
{
	int	size;

	size = 0;
	if (len % 3 != 0)
		size++;
	size += len / 3;
	return (size);
}

int	error_judge(char *str, int len)
{
	int	i;

	i = 0;
	if (len > 39)
	{
		write(1, "Error\n", 6);
		return (-1);
	}
	else if (len > 1 && str[0] == '0')
	{
		write(1, "Error\n", 6);
		return (-1);
	}
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
		{
			write(1, "Error\n", 6);
			return (-1);
		}
		i++;
	}
	return (0);
}
