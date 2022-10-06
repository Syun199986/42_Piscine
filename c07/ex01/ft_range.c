/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shusakai <shusakai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 11:21:55 by shusakai          #+#    #+#             */
/*   Updated: 2022/09/01 18:43:31 by shusakai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	*p;
	int	*p_return;

	if (max > min)
	{
		p = (int *)malloc(sizeof(int) * (max - min));
		p_return = p;
		while (max > min)
			*p++ = min++;
		return (p_return);
	}
	return (NULL);
}

// int	main(void)
// {
// 	int	min = 1;
// 	int	max = 100000;
// 	int	*range;
// 	int i = 0;
// 	int	range_num = max - min;

// 	range = ft_range(min, max);
// 	while (range_num--)
// 		printf("%d ", range[i++]);
// 	printf("\n");
// 	return (0);
// }