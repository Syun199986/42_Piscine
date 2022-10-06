#include<unistd.h>

void	put_char(int a, int b, int c)
{
	write (1, &a, 1);
	write (1, &b, 1);
	write (1, &c, 1);
}

void	put_char_second(void)
{
	write (1, ",", 1);
	write (1, " ", 1);
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				put_char(a, b, c);
				if ((a == '7') && (b == '8') && (c == '9'))
				{
					break ;
				}
				put_char_second();
				c++;
			}
			b++;
		}
		a++;
	}
}

// int	main(void)
// {
// 	ft_print_comb ();
// 	return (0);
// }