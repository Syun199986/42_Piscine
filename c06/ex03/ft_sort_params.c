/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shusakai <shusakai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 22:58:21 by shusakai          #+#    #+#             */
/*   Updated: 2022/08/30 11:00:32 by shusakai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include<string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] > s2[i])
			return (1);
		if (s1[i] < s2[i])
			return (-1);
		if (s1[i] == s2[i])
			i++;
	}
	return (0);
}

void	ft_sort_int_tab(char **argv, int size)
{
	int		i;
	int		j;
	char	*tmp;
	int		cmp;

	i = 1;
	cmp = 0;
	tmp = *argv;
	while (size + 1 > i)
	{
		j = i;
		while (size + 1 > j)
		{
			cmp = ft_strcmp(argv[i], argv[j]);
			if (cmp > 0)
			{
				tmp = argv[i];
				argv[i] = argv[j];
				argv[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	j;
	int	size;

	j = 1;
	size = argc - 1;
	ft_sort_int_tab(argv, size);
	while (j < argc)
	{
		write(1, argv[j], ft_strlen(argv[j]));
		write(1, "\n", 1);
		j++;
	}
	return (0);
}
