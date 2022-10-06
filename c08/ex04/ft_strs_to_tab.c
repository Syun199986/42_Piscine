#include "ft_stock_str.h"
#include <stdlib.h>

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

	if (src == '\0')
		return (NULL);
	p = (char *)malloc(sizeof(char) * ft_strlen(src) + 1);
	if (p)
		ft_strcpy(p, src);
	return (p);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*stock;
	int			i;

	i = 0;
	stock = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (stock == NULL)
		return (NULL);
	while (i < ac)
	{
		stock[i].size = ft_strlen(av[i]);
		stock[i].str = av[i];
		stock[i].copy = ft_strdup(av[i]);
		i++;
	}
	stock[i].size = 0;
	stock[i].str = NULL;
	stock[i].copy = NULL;
	return (stock);
}
