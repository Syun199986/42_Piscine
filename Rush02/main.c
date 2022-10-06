/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorisak <hmorisak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 22:39:07 by hmorisak          #+#    #+#             */
/*   Updated: 2022/08/28 22:39:10 by hmorisak         ###   ########.fr       */
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

int	main(int argc, char **argv)
{
	int		size;
	char	num[1000][1000];
	t_dict	*num_dict;

	size = 0;
	if (argc > 3 || argc == 1)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (argc == 2)
	{
		size = ft_strlen(argv[1]);
		if (error_judge(argv[1], size) == -1)
			return (0);
		num_bunkai_1(size, argv[1], num);
		size = num_size(size);
	}
	num_dict = read_dict("numbers.dict");
	change_to_str(size, num_dict, num);
	write(1, "\n", 1);
	return (0);
}
