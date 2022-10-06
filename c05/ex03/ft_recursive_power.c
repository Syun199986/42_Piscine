#include<stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	num;

	num = nb;
	if (power < 0)
		return (0);
	if (power > 0)
	{
		if (--power)
			nb *= ft_recursive_power(num, power);
		return (nb);
	}
	return (1);
}

// int	main(void)
// {
// 	int nb = -1;
// 	int power = 0;

// 	printf("%dの%d乗は%d\n", nb, power, ft_recursive_power(nb, power));
// 	return 0;
// }