/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_controls.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 14:42:03 by tsantiag          #+#    #+#             */
/*   Updated: 2023/01/10 15:05:19 by tsantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/solong.h"

int	right_move(t_game *game, int i, int j)
{
	if (game->map[j][i] == 'E')
	{
		if (game->collectables != 0)
			return (0);
		ft_printf("\nGanaste paspi!\n");
		exit_game(game);
	}
	if (game->map[j][i] == '0')
	{
		game->map[j][i] = 'P';
		game->x_axis = i;
		game->y_axis = j;
		game->counter++;
	}
	if (game->map[j][i] == 'C')
	{
		game->map[j][i] = 'P';
		game->x_axis = i;
		game->y_axis = j;
		game->collectables--;
		game->counter++;
	}
	return (1);
}

int	controls_working(int command, t_game *game)
{
	int	works;

	if (command == K_ESC)
		exit_game(game);
	if (command == K_UP)
		works = keyboard_w(game, command);
	if (command == K_DOWN)
		works = keyboard_s(game, command);
	if (command == K_LEFT)
		works = keyboard_a(game, command);
	if (command == K_RIGHT)
		works = keyboard_d(game, command);
	if (works)
		adding_in_graphics(game);
	return (1);
}
