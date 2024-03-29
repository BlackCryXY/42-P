/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsantiag <tsantiag>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 12:50:17 by tsantiag          #+#    #+#             */
/*   Updated: 2023/01/18 15:00:20 by tsantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../headers/solong.h"

static void	*ft_memset(void *b, int c, size_t length)
{
	unsigned char	*p;

	p = (unsigned char *)b;
	while (length--)
		*p++ = (unsigned char)c;
	return (b);
}

int	exit_game_mlx(t_game *game)
{
	int	line;

	line = 0;
	while (line < game->heightmap)
		free(game->map[line++]);
	free(game->map);
	exit(1);
}

int	exit_game(t_game *game)
{
	int	line;

	line = 0;
	if (game->winpointer)
		mlx_destroy_window(game->mlxpointer, game->winpointer);
	mlx_destroy_image(game->mlxpointer, game->floor);
	mlx_destroy_image(game->mlxpointer, game->barrier);
	mlx_destroy_image(game->mlxpointer, game->player);
	mlx_destroy_image(game->mlxpointer, game->collectable);
	mlx_destroy_image(game->mlxpointer, game->exit);
	mlx_destroy_display(game->mlxpointer);
	free(game->mlxpointer);
	while (line < game->heightmap)
		free(game->map[line++]);
	free(game->map);
	exit(1);
}

int	main(int argc, char **argv)
{
	t_game	game;

	if (argc != 2)
		return (1);
	ft_memset(&game, 0, sizeof(t_game));
	map_reading(&game, argv);
	check_map_errors(&game);
	check_characters_errors(&game);
	game.mlxpointer = mlx_init();
	if (!game.mlxpointer)
		exit_game_mlx(&game);
	game.winpointer = mlx_new_window(game.mlxpointer, (game.widthmap * 40),
			(game.heightmap * 40), "solong");
	place_images_in_game(&game);
	adding_in_graphics(&game);
	mlx_key_hook(game.winpointer, controls_working, &game);
	mlx_hook(game.winpointer, 17, 0, (void *)exit_game, &game);
	mlx_loop(game.mlxpointer);
}
