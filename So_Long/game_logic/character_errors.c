/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   character_errors.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 14:41:53 by tsantiag          #+#    #+#             */
/*   Updated: 2023/01/18 12:44:25 by tsantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/solong.h"

static void	character_check(t_game *game, int height, int width)
{
	if (game->map[height][width] != '1' &&
		game->map[height][width] != '0' &&
		game->map[height][width] != 'P' &&
		game->map[height][width] != 'E' &&
		game->map[height][width] != 'C' &&
		game->map[height][width] != '\n')
	{
		ft_printf("\nAqui hay un error paspi%c\n", game->map[height][width]);
		exit_game_mlx(game);
	}
	if (game->map[height][width] == 'C')
		game->colleccount++;
	if (game->map[height][width] == 'P')
		game->playercount++;
	if (game->map[height][width] == 'E')
		game->exitcount++;
}

void	character_valido(t_game *game)
{
	int	height;
	int	width;

	height = 0;
	while (height < game->heightmap - 1)
	{
		width = 0;
		while (width <= game->widthmap)
		{
			character_check(game, height, width);
			width++;
		}
		height++;
	}
	if (!(game->playercount == 1
			&& game->colleccount > 1 && game->exitcount == 1))
	{
		ft_printf("\nError\nHay algo malo paspi\n");
		ft_printf("\nerror de player, exit o colleccionable\n");
		exit_game_mlx(game);
	}
}

void	check_characters_errors(t_game *game)
{
	character_valido(game);
}
