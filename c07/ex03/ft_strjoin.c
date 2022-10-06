/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shusakai <shusakai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 11:21:00 by shusakai          #+#    #+#             */
/*   Updated: 2022/09/01 18:45:38 by shusakai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*s;
	int		i;
	int		sep_len;
	int		str_len;
	int		size_tmp;

	i = 0;
	size_tmp = size;
	sep_len = ft_strlen(sep);
	while (size_tmp--)
		str_len = ft_strlen(strs[i++]);
	if (size == 0)
		return ((char *)malloc(1));
	s = (char *)malloc((sizeof(char) * str_len) + (sizeof(char) * sep_len) + 1);
	i = 0;
	size_tmp = size;
	while (size_tmp > i)
	{
		ft_strcat(s, strs[i]);
		if (size_tmp != i + 1)
			ft_strcat(s, sep);
		i++;
	}
	return (s);
}

// int	main(void)
// {
// 	char	sep[] = "-";
// 	char	*strs[3];
// 	char	*sep_tmp;

// 	sep_tmp = sep;
// 	strs[0] = "a";
// 	strs[1] = "b";
// 	strs[2] = "c";
// 	printf("%s\n", ft_strjoin(3, strs, sep));
// 	return 0;
// }