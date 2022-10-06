#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	min_put(void)
{
	write(1, "-2147483648", 11);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		min_put();
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = (-nb);
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		nb %= 10;
	}
	if (nb < 10)
		ft_putchar(nb + '0');
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;
	int	j;

	i = 0;
	while (par[i].str != NULL)
	{
		j = 0;
		while (par[i].str[j] != '\0')
		{
			write(1, &par[i].str[j], 1);
			j++;
		}
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		j = 0;
		while (par[i].copy[j] != '\0')
		{
			write(1, &par[i].copy[j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

// int	main(void)
// {
// 	char	*strs[3];

// 	strs[0] = "abc";
// 	strs[1] = "def";
// 	strs[2] = "ghi";
// 	ft_show_tab(ft_strs_to_tab(3, strs));
// 	return (0);
// }