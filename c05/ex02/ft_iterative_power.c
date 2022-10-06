#include<stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	num;

	num = nb;
	if (power == 0)
		return (1);
	if (power > 0)
	{
		while (--power)
			nb *= num;
		return (nb);
	}
	return (0);
}

// int	main(void)
// {
// 	int nb = 200;
// 	int power = -1;

// 	printf("%dの%d乗は%d\n", nb, power, ft_iterative_power(nb, power));
// 	return 0;
// }