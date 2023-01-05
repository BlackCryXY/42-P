/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solong.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 13:51:27 by tsantiag          #+#    #+#             */
/*   Updated: 2023/01/05 15:34:41 by tsantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOLONG_H
# define SOLONG_H

# include "./get_next_line.h"
# include "./mlx.h"
# include "./ft_printf.h"
# include <errno.h>
# include <fcntl.h>
# include <math.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <sys/stat.h>
# include <unistd.h>

# define K_ESC 650307
# define K_UP 119
# define K_LEFT 115
# define K_RIGHT 100
# define K_DOWN 115

typedef struct s_game
{
	int		fd;
	int		heightmap;
	int		widthmap;
	int		playercount;
	int		colleccount;
	int		exitcount;
	int		x_axis;
	int		y_axis;
	int		counter;
	int		collectables;

	char	**map;

	void	*floor;
	void	*barrier;
	void	*player;
	void	*exit;
	void	*collectable;
	void	*mlxpointer;
	void	*winpointer;

} t_game;


	int	map_reading(t_game *game, char **argv);
	int	controls_working(int command, t_game *game);
	void	check_map_errors(t_game *game);
	void	check_characters_errors(t_game *game);
	void	adding_in_graphics(t_game *game);
	void	place_images_in_game(t_game *game);
	void	parsing(t_game *game, int height, int width);
	void	place_collectable(t_game *game, int height, int width);
	void	character_valido(t_game *game);
	void	check_character_errors(t_game *game);
	void	place_player(t_game *game, int height, int width);
	int	exit_game(t_game *game);
	int	keyboard_w(t_game *game, int movement);
	int	keyboard_s(t_game *game, int movement);
	int	keyboard_a(t_game *game, int movement);
	int	keyboard_d(t_game *game, int movement);

#endif
