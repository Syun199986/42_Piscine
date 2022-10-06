#include<unistd.h>
#include<stdio.h>

int	ft_strlen(char *str)
{
	int	str_count;

	str_count = 0;
	while (str[str_count])
		str_count++;
	return (str_count);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

// int	main(void)
// {
// 	char	str[5] = "abcde";

// 	ft_putstr(str);
// 	printf("\n");
// 	return (0);
// }