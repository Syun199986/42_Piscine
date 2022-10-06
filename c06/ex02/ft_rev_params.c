/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shusakai <shusakai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 22:58:30 by shusakai          #+#    #+#             */
/*   Updated: 2022/08/29 23:01:28 by shusakai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

void	ft_rev_int_tab(char **argv, int argc)
{
	int		roop_num_beg;
	int		roop_num_end;
	int		roop_num;
	char	*tmp;

	roop_num_beg = 1;
	roop_num_end = argc;
	roop_num = argc / 2;
	while (roop_num > 0)
	{
		tmp = argv[roop_num_beg];
		argv[roop_num_beg] = argv[roop_num_end];
		argv[roop_num_end] = tmp;
		roop_num_beg++;
		roop_num_end--;
		roop_num--;
	}
}

int	len(char **argv)
{
	int	i;

	i = 0;
	while (argv[0][++i])
		;
	return (i);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	ft_rev_int_tab(argv, (argc - 1));
	while (argc > ++i)
	{
		write(1, argv[i], len(&argv[i]));
		write(1, "\n", 1);
	}
	return (0);
}
