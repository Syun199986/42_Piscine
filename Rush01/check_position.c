int	check_building(int *position, int **solve, int **map_data);

int	check_position(int *position, int height, int **solve, int **map_data)
{
	int		x_index;
	int		y_index;

	x_index = 0;
	y_index = 0;
	while (x_index < position[1])
	{
		if (height == solve[position[0]][x_index])
			return (0);
		x_index++;
	}
	while (y_index < position[0])
	{
		if (height == solve[y_index][position[1]])
			return (0);
		y_index++;
	}
	solve[position[0]][position[1]] = height;
	if (check_building(position, solve, map_data) == 0)
		return (0);
	return (1);
}
