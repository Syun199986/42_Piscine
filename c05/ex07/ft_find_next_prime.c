#include<stdio.h>

int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (2);
	i = 2;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (ft_find_next_prime(nb + 1));
		i++;
	}
	return (nb);
}

// int	main(void)
// {
// 	int nb = 8;
// 	int	judge;

// 	judge = ft_find_next_prime(nb);
// 		printf("判定は%d\n", judge);
// 	return (0);
// }