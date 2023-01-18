/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_errors.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsantiag <tsantiag>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 12:50:17 by tsantiag          #+#    #+#             */
/*   Updated: 2023/01/18 12:44:40 by tsantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/solong.h"

static int	horizontalwall(t_game *game)
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

static int	verticalwall(t_game *game)
{
	int	height;
	int	width;

	height = 0;
	width = game->widthmap;
	while (height < game->heightmap)
	{
		if (!(game->map[height][0] == '1'
			&& game->map[height][width - 1] == '1'))
			return (0);
		height++;
	}
	return (1);
}

void	check_walls(t_game *game)
{
	int	verticalwalls;
	int	horizontalwalls;

	verticalwalls = verticalwall(game);
	horizontalwalls = horizontalwall(game);
	if (!horizontalwalls || !verticalwalls)
	{
		ft_printf("\nThis map ain't got walls g\n");
		exit_game_mlx(game);
	}
}

void	check_map_errors(t_game *game)
{
	check_walls(game);
}
