#include<stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	num;

	num = nb;
	if (nb == 0)
		return (1);
	if (nb > 0)
	{
		while (num > 1)
			nb *= --num;
		return (nb);
	}
	return (0);
}

// int	main(void)
// {
// 	int test_num = 4;

// 	printf("%dの階乗は%d\n", test_num, ft_iterative_factorial(test_num));
// 	return 0;
// }