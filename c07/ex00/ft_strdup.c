/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shusakai <shusakai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 11:21:50 by shusakai          #+#    #+#             */
/*   Updated: 2022/09/01 18:44:42 by shusakai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;
	int	str_len;

	str_len = ft_strlen(src) + 1;
	i = 0;
	while (str_len > 0)
	{
		dest[i] = src[i];
		i++ ;
		str_len--;
	}
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*p;

	if (src == NULL)
		return (NULL);
	p = malloc(ft_strlen(src) + 1);
	if (p)
		ft_strcpy(p, src);
	return (p);
}

// int	main(void)
// {
// 	char	*test = "test";

// 	printf("本家 : %s\n", strdup(test));
// 	printf("自作 : %s\n", ft_strdup(test));

// 	return (0);
// }