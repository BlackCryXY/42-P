/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solong.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 13:51:27 by tsantiag          #+#    #+#             */
/*   Updated: 2022/12/07 14:37:11 by tsantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOLONG_H
# define SOLONG_H

#include <sys/stat.h>
#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <math.h>
#include "../headers/get_next_line.h"
#include "../headers/mlx.h"

typedef struct t_game
{
	int	fd;
	int	heightmap;
	int	widthmap;
	int	playercount;
	int	colleccount;
	int	exitcount;
	int	x_axis;
	int	y_axis;
	int	counter;
	int	collectables;

	char	**map;

	void	*floor;
	void	*barrier;
	void	*player;
	void	*exit;
	void	*collectables;
	void	*mlxpointer;
	void	*winpointer;

} t_complete

int	map_reading(t_complete *game, char **argv);

#endif
