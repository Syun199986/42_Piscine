#include <unistd.h>
#include <stdlib.h>

int	check_position(int *position, int height, int **solve, int **map_data);

void	set_position(int *position_data)
{
	if (position_data[1] != position_data[2] - 1)
		position_data[1]++;
	else if (position_data[0] != position_data[2] - 1)
	{
		position_data[0]++;
		position_data[1] = 0;
	}
	else
	{
		position_data[0] = -1;
		position_data[1] = -1;
	}
}

void	write_solve(int **solve, int col)
{
	int		x_index;
	int		y_index;
	char	temp;

	x_index = 0;
	y_index = 0;
	while (y_index < col)
	{
		x_index = 0;
		while (x_index < col)
		{
			temp = solve[y_index][x_index] + '0';
			write(1, &temp, 1);
			if (x_index < col - 1)
				write(1, " ", 1);
			x_index++;
		}
		write(1, "\n", 1);
		y_index++;
	}
}

int	loop_calc(int *position_data, int **solve, int **map_data, int check)
{
	int		x;
	int		y;
	int		height;

	height = 1;
	y = position_data[0];
	x = position_data[1];
	while (height <= position_data[2] && check == 0)
	{
		position_data[0] = y;
		position_data[1] = x;
		if (check_position(position_data, height, solve, map_data) == 1)
		{
			set_position(position_data);
			if (position_data[0] == -1 && position_data[1] == -1)
			{
				write_solve(solve, position_data[2]);
				return (1);
			}
			check = loop_calc(position_data, solve, map_data, check);
		}
		height++;
	}
	return (check);
}

int	rush(int **map_data, int col)
{
	int		**solve;
	int		*temp;
	int		index;
	int		check;
	int		position_data[3];

	solve = malloc(sizeof(int *) * (col));
	temp = malloc(sizeof(int) * col * col);
	index = 0;
	check = 0;
	position_data[0] = 0;
	position_data[1] = 0;
	position_data[2] = col;
	while (index < col)
	{
		solve[index] = &temp[index * col];
		index++;
	}
	check = loop_calc(position_data, solve, map_data, check);
	if (check == 0)
		write(1, "Error\n", 6);
	return (0);
}
