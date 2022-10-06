int	count_up_building(int *position, int **solve)
{
	int		index;
	int		max_height;
	int		count;

	index = 0;
	max_height = 0;
	count = 0;
	while (index <= position[0])
	{
		if (max_height < solve[index][position[1]])
		{
			max_height = solve[index][position[1]];
			count++;
		}
		index++;
	}
	return (count);
}

int	count_down_building(int *position, int **solve)
{
	int		index;
	int		max_height;
	int		count;

	index = position[0];
	max_height = 0;
	count = 0;
	while (index >= 0)
	{
		if (max_height < solve[index][position[1]])
		{
			max_height = solve[index][position[1]];
			count++;
		}
		index--;
	}
	return (count);
}

int	count_left_building(int *position, int **solve)
{
	int		index;
	int		max_height;
	int		count;

	index = 0;
	max_height = 0;
	count = 0;
	while (index <= position[1])
	{
		if (max_height < solve[position[0]][index])
		{
			max_height = solve[position[0]][index];
			count++;
		}
		index++;
	}
	return (count);
}

int	count_right_building(int *position, int **solve)
{
	int		index;
	int		max_height;
	int		count;

	index = position[1];
	max_height = 0;
	count = 0;
	while (index >= 0)
	{
		if (max_height < solve[position[0]][index])
		{
			max_height = solve[position[0]][index];
			count++;
		}
		index--;
	}
	return (count);
}

int	check_building(int *position, int **solve, int **map_data)
{
	if (position[1] == position[2] - 1)
	{
		if (count_left_building(position, solve) != map_data[2][position[0]])
			return (0);
		if (count_right_building(position, solve) != map_data[3][position[0]])
			return (0);
	}
	if (position[0] == position[2] - 1)
	{
		if (count_up_building(position, solve) != map_data[0][position[1]])
			return (0);
		if (count_down_building(position, solve) != map_data[1][position[1]])
			return (0);
	}
	if (count_up_building(position, solve) > map_data[0][position[1]])
		return (0);
	if (count_left_building(position, solve) > map_data[2][position[0]])
		return (0);
	return (1);
}
