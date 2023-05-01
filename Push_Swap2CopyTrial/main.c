/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 08:35:20 by tsantiag          #+#    #+#             */
/*   Updated: 2023/04/30 15:00:20 by tsantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

void	free_all_stacks(t_pushswap *n)
{
	if (n->a)
		free(n->a);
	if (n->b)
		free(n->b);
	if (n->numa)
		free(n->numa);
	if (n->numa)
		free(n->numb);
}

void	free_with_error(t_pushswap *n)
{
	free_all_stacks(n);
	write(1, "Error\n", 6);
	exit(0);
}

void	check_parameters(int argc, char **argv, t_pushswap *n)
{
	int i;
	int j;

	i = 1;
	if (argc < 2)
		free_nmber_stacks(n);
	while (i < argc)
	{
		if (argv[i][0] == '\0')
			free_with_error(n);
		j = 0;
		while (j < ft_strlen(argv[i]))
		{
			if (!ft_isdigit(argv[i][j]) && !ft_isspace(argv[i][j]) && argv[i][j] != '-')
				free_with_error(n);
			j++;
		}
		i++;
	}
}

void	set_numbers(t_pushswap *n, int argc)
{
	n->numa[0] = argc - 1;
	n->numa[1] = n->numa[0];
	n->numb = 0;
}

int	main(int argc, char **argv)
{
	t_pushswap	*n;

	n = (t_pushswap*)malloc(sizeof(t_pushswap));
	if (!n)
		return (0);
	n->numa = (int *)malloc(2 * sizeof(int));
	if (!n->numa)
	{
		free(n);
		return (0);
	}
	n->numb = NULL;
	check_parameters(argc, argv, n);
	set_numbers(n, argc);
	n->a = (long *)malloc(sizeof(long) * stack_size(argc, argv));
	n->b = (long *)malloc(sizeof(long) * stack_size(argc, argv));
	if (!n->a || !n->b)
	{
		free_all_stacks(n);
		return (0);
	}
	if ((input_numbers(n, argv) == -1) || (stack_sorted(n) == 0))
	{
		free_all_stacks(n);
		return (0);
	}
	if ((n->numa[1] == 2) && (n->a[0] > n->a[1]))
		ra(n);
	else if (n->numa[1] == 3)
		ft_sort_3_numbers(n);
	else if (n->numa[1] == 4)
		ft_sort_4_numbers(n);
	else if (n->numa[1] == 5)
		ft_sort_5_numbers(n);
	else
		ft_beyond_5(n);
	free_all_stacks(n);
	return (0);
}
