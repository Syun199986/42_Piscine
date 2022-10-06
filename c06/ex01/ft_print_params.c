/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shusakai <shusakai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 22:58:33 by shusakai          #+#    #+#             */
/*   Updated: 2022/08/29 22:58:33 by shusakai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

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
	while (argc > ++i)
	{
		write(1, argv[i], len(&argv[i]));
		write(1, "\n", 1);
	}
	return (0);
}
