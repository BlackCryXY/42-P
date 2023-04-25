/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 13:53:47 by tsantiag          #+#    #+#             */
/*   Updated: 2023/03/07 13:54:46 by tsantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

void	pa(long *stack_a, long *stack_b, int *n_stack_a, int *n_stack_b)
{
	int	i;

	(n_stack_a[1])++;
	i = n_stack_a[1] - 1;
	while (i > 0)
	{
		stack_a[i] = stack_a[i - 1];
		i--;
	}
	stack_a[0] = stack_b[0];
	i = 0;
	while (i < *n_stack_b)
	{
		stack_b[i] = stack_b[i + 1];
		i++;
	}
	(*n_stack_b)--;
	if (*n_stack_b == 0)
		stack_b = NULL;
	write(1, "pa\n", 3);
}

void	pb(long *stack_a, long *stack_b, int *n_stack_a, int *n_stack_b)
{
	int	i;

	if (n_stack_a[1] > 0)
	{
		(*n_stack_b)++;
		if (!stack_b)
			return ;
		i = *n_stack_b - 1;
		while (i > 0)
		{
			stack_b[i] = stack_b[i - 1];
			i--;
		}
		stack_b[0] = stack_a[0];
		if (n_stack_a[1] > 0)
		{
			i = 0;
			while (i < n_stack_a[1])
			{
				stack_a[i] = stack_a[i + 1];
				i++;
			}
			(n_stack_a[1])--;
			if (n_stack_a[1] == 0)
				stack_a[0] = '\0';
		}
	}
	write(1, "pb\n", 3);
}
