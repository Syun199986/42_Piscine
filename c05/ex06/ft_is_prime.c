#include<stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	int nb = 0;
// 	int	judge;

// 	judge = ft_is_prime(nb);
// 	if (judge == 0)
// 		printf("%dは素数でないため%d\n", nb, 0);
// 	if (judge == 1)
// 		printf("%dは素数であるため%d\n", nb, 1);
// 	return (0);
// }