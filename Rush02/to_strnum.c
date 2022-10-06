/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_strnum.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorisak <hmorisak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 22:38:42 by hmorisak          #+#    #+#             */
/*   Updated: 2022/08/28 22:41:21 by hmorisak         ###   ########.fr       */
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

void	to_strnum(t_hundred *str, t_dict *num_dict, int size)
{
	int	i;

	i = 0;
	if (str[i].num == 48 && str[i].digit == 1 && size == 1)
	{
		ft_putstr(num_dict[0].strnum, size, 2);
		return ;
	}
	while (str[i].digit >= 1)
	{
		if (str[i].num == 49 && str[i].digit == 2)
			num49_digit2(str, num_dict, size, i);
		else if (str[0].num != 48 && str[i].digit == 3 )
			num48_digit3(str, num_dict, size, i);
		else if (str[i].digit == 2)
			digit2(str, num_dict, size, i);
		else if (str[i - 1].num != 49 && str[i].digit == 1)
			num49_digit1(str, num_dict, size, i);
		i++;
	}
	if (size >= 2 && (str[2].num != 48 || str[1].num != 48 || str[0].num != 48))
		ft_putstr(num_dict[27 + size].strnum, size, i);
}

void	num49_digit2(t_hundred *str, t_dict *num_dict, int size, int i)
{
	int	j;

	j = 10;
	while (j <= 19)
	{
		if (str[i + 1].num == num_dict[j].intnum[1])
			ft_putstr(num_dict[j].strnum, size, 2);
		j++;
	}
}

void	num48_digit3(t_hundred *str, t_dict *num_dict, int size, int i)
{
	int	j;

	j = 1;
	while (j <= 9)
	{
		if (str[i].num == *num_dict[j].intnum)
			ft_putstr(num_dict[j].strnum, size, i);
		j++;
	}
	ft_putstr(num_dict[28].strnum, size, i);
}

void	digit2(t_hundred *str, t_dict *num_dict, int size, int i)
{
	int	j;

	j = 20;
	while (j <= 27)
	{
		if (str[i].num == *num_dict[j].intnum)
			ft_putstr(num_dict[j].strnum, size, i);
		j++;
	}
}

void	num49_digit1(t_hundred *str, t_dict *num_dict, int size, int i)
{
	int	j;

	j = 1;
	while (j <= 9)
	{
		if (str[i].num == *num_dict[j].intnum)
			ft_putstr(num_dict[j].strnum, size, i);
		j++;
	}
}
