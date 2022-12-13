#include "solong.h"

static void	character_check(t_complete *game, int height, int width)
{
	if (game->map[height][width] != '1' &&
		game->map[height][width] != '0' &&
		game->map[height][width] != 'P' &&
		game->map[height][width] != 'E' &&
		game->map[height][width] != 'C' &&
		game->map[height][width] != '\n')
	{
		ft_printf("\nAqui hay un error paspi%c\n", game->map[height][width]);
		exit_point(game);
	}
	if (game->map[height][width] == 'C')
		game->colleccount++;
	if (game->map[height][width] == 'P')
		game->playercount++;
	if (game->map[height][width] == 'E')
		game->exitcount++;
}

void	character_valido(t_complete *game)
{
	int	height;
	int	width;

	height = 0;
	while (height < game->heightmap - 1)
	{
		width = 0;
		while (widht <= game->widthmap)
		{
			character_check(game, height, width);
			width++:;
		}
		height++;
	}
	if (!(game->playercount == 1 && game->colleccount > 1 && game->exitcount == 1))
	{
		ft_printf("\nError\nHay algo malo paspi\n error de player, exit o colleccionable\n");
		exit_point(game);
	}
}

void	check_characters_errors(t_complete *game)
{
	character_valido(game);
}
