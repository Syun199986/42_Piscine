#include<unistd.h>

void	put_char_1(int i, int j)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = (i / 10) + '0';
	b = (i % 10) + '0';
	c = (j / 10) + '0';
	d = (j % 10) + '0';
	write (1, &a, 1);
	write (1, &b, 1);
	write (1, " ", 1);
	write (1, &c, 1);
	write (1, &d, 1);
}

void	put_char_2(void)
{
	write (1, ",", 1);
	write (1, " ", 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			put_char_1(i, j);
			if ((i == 98) && (j == 99))
				break ;
			put_char_2();
			j++;
		}
		i++;
	}
}

// int	main(void)
// {
// 	ft_print_comb2();
// 	return (0);
// }