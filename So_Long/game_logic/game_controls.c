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
