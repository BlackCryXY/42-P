/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 08:35:20 by tsantiag          #+#    #+#             */
/*   Updated: 2023/04/28 17:46:16 by tsantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

void	free_stacks(int *n_stack_a, int *n_stack_b)
{
	free(n_stack_a);
	free(n_stack_b);
	exit(0);
}

void	free_with_error(int *n_stack_a, int *n_stack_b)
{
	free(n_stack_a);
	free(n_stack_b);
	write(1, "Error\n", 6);
	exit(0);
}

void	check_parameters(int argc, char **argv, int *n_stack_a, int *n_stack_b)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	if (argc < 2)
		free_stacks(n_stack_a, n_stack_b);
	while (i < argc)
	{
		if ((argv[i][ft_strlen(argv[i]) - 1] == ' ') || (argv[i][0] == ' ') || (argv[i][0] == '\0'))
			free_with_error(n_stack_a, n_stack_b);
		j = 0;
		while (j < ft_strlen(argv[i]))
		{
			if (((argv[i][j] < 48) || (argv[i][j] > 57)) && (argv[i][j] != 32))
			{
				if (argv[i][j] != 45)
					free_with_error(n_stack_a, n_stack_b);
			}
			if ((argv[i][j] == 32) && (argv[i][j + 1] == 32))
				free_with_error(n_stack_a, n_stack_b);
			j++;
		}
		i++;
	}
}

void	set_numbers(int *n_stack_a, int *n_stack_b, int argc)
{
	n_stack_a[0] = argc - 1;
	n_stack_a[1] = n_stack_a[0];
	*n_stack_b = 0;
}

int	main(int argc, char **argv)
{
	long	*stack_a;
	long	*stack_b;
	int		*n_stack_a;
	int		*n_stack_b;

	init_number(&n_stack_a, &n_stack_b);
	check_parameters(argc, argv, n_stack_a, n_stack_b);
	set_numbers(n_stack_a, n_stack_b, argc);
	stack_a = (long *)malloc(sizeof(long) * stack_size(argc, argv));
	stack_b = (long *)malloc(sizeof(long) * stack_size(argc, argv));
	if (!stack_a || !stack_b)
	{
		free_all_stacks(stack_a, stack_b, n_stack_a, n_stack_b);
		return (0);
	}
	if ((input_numbers(stack_a, n_stack_a, argv) == -1)
		|| (stack_sorted(stack_a, n_stack_a) == 0))
	{
		free_all_stacks(stack_a, stack_b, n_stack_a, n_stack_b);
		return (0);
	}
	sorting_main(stack_a, stack_b, n_stack_a, n_stack_b);
	return (0);
}
