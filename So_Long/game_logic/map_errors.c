#include "solong.h"

static int	horizontalwalls(t_game *game)
{
	int	i;
	int	j;

	i = game->widthmap;
	j = 0;
	while (j < i)
	{
		if (game->map[0][i] == '1' && game->map[game->heightmap - 1][j] == '1')
			return (0);
		j++;
	}
	return (1);
}

static int	verticalwalls(t_game *game)
{
	int	height;
	int	width;

	height = 0;
	width = game->widthmap;
	while (height < game->heightmap)
	{
		if (!(game->map[height][0] == '1' && game->map[height][width - 1] == '1'))
			return (0);
		height++;
	}
	return (1);
}

static void	check_walls(t_game *game)
{
	int	verticalwalls;
	int	horizontalwalls;

	verticalwalls = verticallwalls(game);
	horizontalwalls = horizontallwalls(game);
	if (!horizontallwalls || !verticallwalls)
	{
		ft_ft_printf("\nThis map ain't got walls g\n");
		exit_game(game);
	}
}

void	check_map_errors(t_game *game)
{
	if_walls(game);
}
