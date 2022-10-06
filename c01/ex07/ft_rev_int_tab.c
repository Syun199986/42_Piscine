#include<stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	roop_num_beg;
	int	roop_num_end;
	int	roop_num;
	int	tmp;

	roop_num_beg = 0;
	roop_num_end = size - 1;
	roop_num = size / 2;
	while (roop_num > 0)
	{
		tmp = tab[roop_num_beg];
		tab[roop_num_beg] = tab[roop_num_end];
		tab[roop_num_end] = tmp;
		roop_num_beg++;
		roop_num_end--;
		roop_num--;
	}
}

// int	main(void)
// {
// 	int count;
// 	int	count_even;
// 	int	count_odd;
// 	int	test_even[4] = {1, 2, 3, 4};
// 	int	test_odd[5] = {1, 2, 3, 4, 5};

// 	count = 0;
// 	count_even = 3;
// 	count_odd = 4;
// 	ft_rev_int_tab(test_even, 4);
// 	ft_rev_int_tab(test_odd, 5);
// 	printf("even = ");
// 	while (count_even >= count)
// 	{
// 		printf("%d ", test_even[count]);
// 		count++;
// 	}
// 	count = 0;
// 	printf("\n");
// 	printf("odd = ");
// 	while (count_odd >= count)
// 	{
// 		printf("%d ", test_odd[count]);
// 		count++;
// 	}
// 	printf("\n");
// 	return (0);
// }