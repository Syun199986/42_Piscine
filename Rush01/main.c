#include <stdlib.h>
#include <unistd.h>
int	rush(int **map_data, int col);

int	error_log(int col)
{
	if (col % 4 != 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	return (1);
}

int	**convert_char_to_int(char **argv, int col)
{
	int		**map_data;
	int		*temp;
	int		index;
	int		map_index;

	map_data = malloc(sizeof(int *) * 4);
	temp = malloc(sizeof(int) * (4 * col));
	index = 0;
	while (index < 4)
	{
		map_data[index] = &temp[index * col];
		index++;
	}
	index = 0;
	map_index = 0;
	while (argv[1][index] != '\0')
	{
		if (argv[1][index] >= '0' && argv[1][index] <= '9')
		{
			temp[map_index] = argv[1][index] - '0';
			map_index++;
		}
		index++;
	}
	return (map_data);
}

int	main(int argc, char **argv)
{
	int		**map_data;
	int		col;
	int		count;
	int		index;

	count = 0;
	index = 0;
	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	while (argv[1][index] != '\0')
	{
		if (argv[1][index] >= '0' && argv[1][index] <= '9')
			count++;
		index++;
	}
	col = count / 4;
	if (error_log(count) == 0)
		return (0);
	map_data = convert_char_to_int(argv, col);
	rush(map_data, col);
	return (1);
}
