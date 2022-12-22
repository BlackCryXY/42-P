#include "../headers/solong.h"

int	keyboard_w(t_game *game, int movement)
{
	int	i;
	int	j;
	int	k;

	i = game->x_axis;
	j = game->y_axis;
	if (movement == K_UP)
	{
		j--;
		if (game->map[j][i] == '1')
			return (0);
		k = right_move(game, i, j);
		if (!k)
			return (0);
		game->map[j + 1][i] = '0';
        }
	ft_printf("Steps Taken: %i\n", game->counter);
	ft_printf("Collectables Left: %i\n", game->collectables);
	return (1);
}

int	keyboard_s(t_game *game, int movement)
{
	int	i;
	int	j;
	int	k;

        i = game->x_axis;
        j = game->y_axis;
	if (movement == K_DOWN)
	{
		j++;
		if (game->map[j][i] == '1')
			return (0);
		k = right_move(game, i, j);
		if (!k)
			return (0);
		game->map[j - 1][i] = '0';
	}
	ft_printf("Steps Taken: %i\n", game->counter);
	ft_printf("Collectables Left: %i\n", game->collectables);
	return (1);
}
int	keyboard_a(t_game *game, int movement)
{
	int	i;
	int	j;
	int	k;

	i = game->x_axis;
	j = game->y_axis;
	if (movement == K_LEFT)
	{
		i--;
		if (game->map[j][i] == '1')
			return (0);
		k = right_move(game, i, j);
		if (!k)
			return (0);
		game->map[j][i + 1] = '0';
	}
	ft_printf("Steps Taken: %i\n", game->counter);
	ft_printf("Collectables Remaining: %i\n", game->collectables);
	return (1);
}
int	keyboard_a_d(t_game *game, int movement)
{
	int	i;
	int	j;
	int	k;

	i = game->x_axis;
	j = game->y_axis;
	if (movement == K_RIGHT)
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
