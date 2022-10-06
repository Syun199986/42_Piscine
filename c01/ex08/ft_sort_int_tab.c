#include<stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size)
	{
		j = i;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

// int	main(void)
// {
// 	int	count;
// 	int i;
// 	int	test[5] = {2, 3, 5, 1, 4};

// 	count = 0;
// 	i = 4;
// 	printf("入れ替え前 : ");
// 	while (i >= 0)
// 	{
// 		printf("%d ", test[count]);
// 		count++;
// 		i--;
// 	}
// 	printf("\n");
// 	ft_sort_int_tab(test, 5);
// 	count = 0;
// 	i = 4;
// 	printf("入れ替え後 : ");
// 	while (i >= 0)
// 	{
// 		printf("%d ", test[count]);
// 		count++;
// 		i--;
// 	}
// 	printf("\n");
// 	return (0);
// }