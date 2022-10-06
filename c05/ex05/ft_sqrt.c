#include<stdio.h>

int	ft_sqrt(int nb)
{
	long	root;

	root = 0;
	while ((root * root) < nb)
	{
		root++;
		if ((root * root) == nb)
			return (root);
		if ((root * root) > nb)
			return (0);
	}
	return (0);
}

// int	main(void)
// {
// 	int	nb = 100000000;

// 	printf("%dの平方根は%d\n", nb, ft_sqrt(nb));
// 	return (0);
// }