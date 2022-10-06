#include<stdio.h>

int	ft_strlen(char *str)
{
	int	str_count;

	str_count = 0;
	while (str[str_count] != '\0')
	{
		str_count++;
	}
	return (str_count);
}

// int	main(void)
// {
// 	int	count;
// 	char	str[5] = {'A', 'B', 'C', 'D', 'E'};

// 	count = 0;
// 	count = ft_strlen(str);
// 	printf("count = %d\n", count);
// 	return (0);
// }