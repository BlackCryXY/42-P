static int	right_move(t_game *game, int i, int j)
{
	if (game->map[j][i] == 'E')
	{
		if (game->collectables != 0)
			return (0);
		ft_ft_printf("\nGanaste paspi!\n");
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

static int	keyboard_w_s(t_game *game, int movement)
{
	int	i;
	int	j;
	int	k;

	i = game->x_axis;
	j = game->y_axis;
	if (movement == 13)
	{
		j--;
		if (game->map[j][i] == '1')
			return (0);
		k = right_move(game, i, j);
		if (!k)
			return (0);
		game->map[j + 1][i] = '0';
	}
	else if (movement == 1)
	{
		j++;
		if (game->map[j][i] == '1')
			return (0
			);
		k = right_move(game, i, j);
		if (!k)
			return (0);
		game->map[j - 1][i] = '0';
	}
	ft_printf("Steps Taken: %i\n", game->counter);
	ft_printf("Collectables Left: %i\n", game->collectables);
	return (1);
}

static int	keyboard_a_d(t_game *game, int movement)
{
	int	i;
	int	j;
	int	k;

	i = game->x_axis;
	j = game->y_axis;
	if (movement == 0)
	{
		i--;
		if (game->map[j][i] == '1')
			return (0);
		k = right_move(game, i, j);
		if (!k)
			return (0);
		game->map[j][i + 1] = '0';
	}
	else if (movement == 2)
	{
		i++;
		if (game->map[j][i] == '1')
			return (0);
		k = right_move(game, i, j);
		if (!k)
			return (0);
		game->map[j][i - 1] = '0';
	}
	ft_printf("Steps Taken: %i\n", game->counter);
	ft_printf("Collectables Remaining: %i\n", game->collectables);
	return (1);
}

int	controls_working(int command, t_game *game)
{
	int	works;

	if (command == 53)
		exit_game(game);
	if (command == 13)
		works = keyboard_w_s(game, command);
	if (command == 1)
		works = keyboard_w_s(game, command);
	if (command == 0)
		works = keyboard_a_d(game, command);
	if (command == 2)
		works = keyboard_a_d(game, command);
	if (works)
		adding_in_graphics(game);
	return (1);
}
