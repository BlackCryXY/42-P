/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_game_graphics.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 16:55:18 by tsantiag          #+#    #+#             */
/*   Updated: 2023/01/16 16:55:22 by tsantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../headers/solong.h"

void	place_barrier(t_game *game, int height, int width)
{
	mlx_put_image_to_window(game->mlxpointer,
		game->winpointer, game->barrier, width * 40, height * 40);
}

void	place_collectable(t_game *game, int height, int width)
{
	mlx_put_image_to_window(game->mlxpointer,
		game->winpointer, game->collectable, width * 40, height * 40);
	game->collectables++;
}

void	place_player(t_game *game, int height, int width)
{
	mlx_put_image_to_window(game->mlxpointer,
		game->winpointer, game->player, width * 40, height * 40);
	game->y_axis = height;
	game->x_axis = width;
}

void	place_exit(t_game *game, int height, int width)
{
	mlx_put_image_to_window(game->mlxpointer,
		game->winpointer, game->exit, width * 40, height * 40);
}

void	place_floor(t_game *game, int height, int width)
{
	mlx_put_image_to_window(game->mlxpointer,
		game->winpointer, game->floor, width * 40, height * 40);
}
