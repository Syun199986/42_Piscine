#include<stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

// int	main(void)
// {
// 	int	a;
// 	int	b;

// 	a = 1;
// 	b = 2;
// 	printf ("交換前 : a = %d, b = %d\n", a, b);
// 	ft_swap(&a, &b);
// 	printf ("交換後 : a = %d, b = %d\n", a, b);
// 	return (0);
// }