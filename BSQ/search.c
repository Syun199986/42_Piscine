#include<stdlib.h>
#include "map.h"
#include<unistd.h>

int	g_sw;
int	g_sx;
int	g_sy;

int	search_in_square(t_map *map);
int	search_start_point(t_map *map, int ylen, int xlen);

void	search(t_map *map, t_file file)
{
	int	end_flug;

	end_flug = 0;
	if (file.x_len > file.y_len)
		g_sw = file.y_len;
	else
		g_sw = file.x_len;
	while (g_sw > 0)
	{
		end_flug = search_start_point(map, file.y_len, file.x_len);
		if (end_flug == 1)
			break ;
		g_sw--;
	}
}

int	search_start_point(t_map *map, int ylen, int xlen)
{
	int	next_start_flug;

	next_start_flug = 0;
	g_sy = 0;
	while (g_sy < ylen - g_sw + 1)
	{
		g_sx = 0;
		while (g_sx < xlen - g_sw + 1)
		{
			next_start_flug = search_in_square(map);
			if (next_start_flug == 1)
			{
				next_start_flug = 0;
				g_sx++;
			}
			else
				return (1);
		}
		g_sy++;
	}
	return (0);
}

int	search_in_square(t_map *map)
{
	int	si;
	int	sj;

	sj = 0;
	while (sj < g_sw)
	{
		si = 0;
		while (si < g_sw)
		{
			if (map[g_sy + sj].line[g_sx + si] == 'o')
				return (1);
			si++;
		}
		sj++;
	}
	return (0);
}
