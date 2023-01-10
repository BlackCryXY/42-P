/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_graphics.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 14:42:07 by tsantiag          #+#    #+#             */
/*   Updated: 2023/01/10 15:08:12 by tsantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/solong.h"

void	place_player(t_game *game, int height, int width)
{
	mlx_put_image_to_window(game->mlxpointer,
		game->winpointer, game->player, width * 40, height * 40);
	game->y_axis = height;
	game->x_axis = width;
}

void	place_collectable(t_game *game, int height, int width)
{
	mlx_put_image_to_window(game->mlxpointer,
		game->winpointer, game->collectable, width * 40, height * 40);
	game->collectables++;
}

void	place_images_in_game(t_game *game)
{
	int	i;
	int	j;

	game->floor = mlx_xpm_file_to_image(game->mlxpointer,
			"game_images/floor.xpm", &i, &j);
	game->barrier = mlx_xpm_file_to_image(game->mlxpointer,
			"game_images/wall.xpm", &i, &j);
	game->player = mlx_xpm_file_to_image(game->mlxpointer,
			"game_images/player.xpm", &i, &j);
	game->exit = mlx_xpm_file_to_image(game->mlxpointer,
			"game_images/exit.xpm", &i, &j);
	game->collectable = mlx_xpm_file_to_image(game->mlxpointer,
			"game_images/item.xpm", &i, &j);
}

void	adding_in_graphics(t_game *game)
{
	int	height;
	int	width;

	height = 0;
	game->collectables = 0;
	while (height < game->heightmap)
	{
		width = 0;
		while (game->map[height][width])
		{
			draw_tile(game, height, width);
			width++;
		}
		height++;
	}
}

void	parsing(t_game *game, int height, int width)
{
	char	place;

	place = game->map[height][width];
	if (tile == '1')
		mlx_put_image_to_window(game->mlxpointer,
			game->winpointer, game->barrier, width * 40, height * 40);
	if (tile == 'C')
		place_collectable(game, height, width);
	if (tile == 'P')
		place_player(game, height, width);
	if (tile == 'E')
		mlx_put_image_to_window(game->mlxpointer,
			game->winpointer, game->exit, width * 40, height * 40);
	if (tile == '0')
		mlx_put_image_to_window(game->mlxpointer,
			game->winpointer, game->floor, width * 40, height * 40);
}
