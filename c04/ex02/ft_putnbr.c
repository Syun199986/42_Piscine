#include<unistd.h>
#include<stdio.h>

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
		ft_putchar(nb + 48);
}

// int	main(void)
// {
// 	int	test;

// 	test = -42;
// 	ft_putnbr(test);
// 	printf("\n");
// 	return (0);
// }