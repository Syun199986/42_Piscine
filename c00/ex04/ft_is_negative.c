#include<unistd.h>

void	ft_is_negative(int n)
{
	char	judge;

	if (n < 0)
	{
		judge = 'N';
		write(1, &judge, 1);
	}
	else
	{
		judge = 'P';
		write(1, &judge, 1);
	}
}

// int	main(void)
// {
// 	ft_is_negative(1);
// 	ft_is_negative(-1);
// 	ft_is_negative((int)NULL);
// 	return (0);
// }