#include<stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	num;

	num = nb;
	if (nb == 0)
		return (1);
	if (nb > 0)
	{
		if (nb > 1)
			nb *= ft_recursive_factorial(--num);
		return (nb);
	}
	return (0);
}

// int	main(void)
// {
// 	int test_num = 4;

// 	printf("%dの階乗は%d\n", test_num, ft_recursive_factorial(test_num));
// 	return 0;
// }