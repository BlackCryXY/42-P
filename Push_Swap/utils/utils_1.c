/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 08:34:37 by tsantiag          #+#    #+#             */
/*   Updated: 2023/04/28 17:46:32 by tsantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

void	second_stack_2(long *stack_a, long *stack_b, int *n_stack_a,
		int *n_stack_b)
{
	pa(stack_a, stack_b, n_stack_a, n_stack_b);
	ra(stack_a, n_stack_a);
}

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

void	sorting_main(long *stack_a, long *stack_b, int *n_stack_a, int *n_stack_b)
{
	if ((n_stack_a[1] == 2) && (stack_a[0] > stack_a[1]))
		ra(stack_a, n_stack_a);
	else if (n_stack_a[1] == 3)
		ft_sort_3_numbers(stack_a, n_stack_a);
	else if (n_stack_a[1] == 4)
		ft_sort_4_numbers(stack_a, stack_b, n_stack_a, n_stack_b);
	else if (n_stack_a[1] == 5)
		ft_sort_5_numbers(stack_a, stack_b, n_stack_a, n_stack_b);
	else
		ft_beyond_5(stack_a, stack_b, n_stack_a, n_stack_b);
	free_all_stacks(stack_a, stack_b, n_stack_a, n_stack_b);
}

void	init_number(int **n_stack_a, int **n_stack_b)
{
	*n_stack_a = (int *)malloc(2 * sizeof(int));
	if (!n_stack_a)
		return ;
	*n_stack_b = (int *)malloc(sizeof(int));
	if (!n_stack_b)
	{
		free(n_stack_a);
		return ;
	}
}