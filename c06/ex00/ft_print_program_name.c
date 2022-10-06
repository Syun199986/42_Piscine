/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shusakai <shusakai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 22:58:38 by shusakai          #+#    #+#             */
/*   Updated: 2022/08/29 22:58:38 by shusakai         ###   ########.fr       */
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
	(void)argc;
	write(1, *argv, len(argv));
	write(1, "\n", 1);
	return (0);
}
