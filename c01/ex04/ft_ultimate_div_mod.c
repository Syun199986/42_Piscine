#include<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	ret_a;
	int	ret_b;

	ret_a = *a;
	ret_b = *b;
	ret_a = *a / *b;
	ret_b = *a % *b;
	*a = ret_a;
	*b = ret_b;
}

// int	main(void)
// {
// 	int	a;
// 	int	b;

// 	a = 5;
// 	b = 2;
// 	ft_ultimate_div_mod(&a, &b);
// 	printf("a = %d, b = %d", a, b);
// 	return (0);
// }