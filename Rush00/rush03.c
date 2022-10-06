void	ft_putchar(char c);

int	rush(int x, int y)
{
	int	y_num;
	int	x_num;

	y_num = 1;
	while (y_num <= y)
	{
		x_num = 1;
		while (x_num <= x)
		{
			if ((x_num > 1 && x_num < x) && (y_num == 1 || y_num == y))
				ft_putchar('B');
			else if ((x_num == 1 || x_num == x) && (y_num > 1 && y_num < y))
				ft_putchar('B');
			else if ((x_num > 1 && x_num < x) && (y_num > 1 && y_num < y))
				ft_putchar(' ');
			else if ((x_num == 1 && y_num == 1) || (y_num == y && x_num == 1))
				ft_putchar('A');
			else
				ft_putchar('C');
			x_num++;
		}
		ft_putchar('\n');
		y_num++;
	}
	return (0);
}
