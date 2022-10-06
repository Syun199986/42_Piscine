/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorisak <hmorisak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 22:38:48 by hmorisak          #+#    #+#             */
/*   Updated: 2022/08/28 22:38:51 by hmorisak         ###   ########.fr       */
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

void	ft_putstr(char *dict_str, int size, int j)
{
	int	i;

	i = 0;
	while (dict_str[i] != '\0')
	{
		write(1, &dict_str[i], 1);
		i++;
	}
	if (size != 1 || j != 2)
		write(1, " ", 1);
}

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

t_hundred	*to_str(char *tmp)
{
	int			i;
	int			strlen;
	t_hundred	*str;

	i = 0;
	strlen = ft_strlen(tmp);
	str = (t_hundred *)malloc(sizeof(t_hundred) * strlen);
	while (i < strlen)
	{
		str[i].num = *tmp;
		str[i].digit = ft_strlen(tmp);
		i++;
		tmp++;
	}
	return (str);
}

void	change_to_str(int size, t_dict *num_dict, char num[1000][1000])
{
	int			i;
	int			count;
	t_hundred	*put_num;

	i = 0;
	count = size;
	if (size == 1 && num[0][0] == 48 && num[0][1] == 48 && num[0][2] == 48)
	{
		ft_putstr(num_dict[0].strnum, size, 2);
		return ;
	}
	while (i < count)
	{
		put_num = to_str(num[i]);
		to_strnum(put_num, num_dict, size--);
		i++;
	}
}
