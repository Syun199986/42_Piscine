/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shusakai <shusakai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 11:21:59 by shusakai          #+#    #+#             */
/*   Updated: 2022/09/01 18:45:16 by shusakai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*p;
	int	i;
	int	min_tmp;

	i = 0;
	min_tmp = min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	p = (int *)malloc(sizeof(int) * (max - min));
	if (p == NULL)
		return (-1);
	while (max > min_tmp)
	{
		p[i] = min_tmp++;
		i++;
	}
	*range = p;
	return (max - min);
}

// int	main(void)
// {
// 	int	min = 1;
// 	int	max = 10;
// 	int	**range;
// 	int *r;
// 	int test;

// 	r = &test;
// 	range = &r;
// 	printf("size = %d\n", ft_ultimate_range(range, min, max));
// 	return (0);
// }