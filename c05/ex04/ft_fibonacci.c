#include<stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index <= 1)
		return (index);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

// int	main(void)
// {
// 	int index = 5;

// 	printf("%d番目のフィボナッチ数は%d\n", index, ft_fibonacci(index));
// 	return 0;
// }