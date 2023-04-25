/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_3_numbers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 13:58:22 by tsantiag          #+#    #+#             */
/*   Updated: 2023/03/07 13:58:24 by tsantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

void	ft_sort_3_numbers(long *stack_a, int *n_stack_a)
{
	if ((stack_a[0] > stack_a[1]) && (stack_a[1] < stack_a[2])
		&& (stack_a[0] < stack_a[2]))
		sa(stack_a, n_stack_a);
	if ((stack_a[0] > stack_a[1]) && (stack_a[1] > stack_a[2])
		&& (stack_a[0] > stack_a[2]))
	{
		sa(stack_a, n_stack_a);
		rra(stack_a, n_stack_a);
	}
	if ((stack_a[0] > stack_a[1]) && (stack_a[1] < stack_a[2])
		&& (stack_a[0] > stack_a[2]))
		ra(stack_a, n_stack_a);
	if ((stack_a[0] < stack_a[1]) && (stack_a[1] > stack_a[2])
		&& (stack_a[0] < stack_a[2]))
	{
		sa(stack_a, n_stack_a);
		ra(stack_a, n_stack_a);
	}
	if ((stack_a[0] < stack_a[1]) && (stack_a[1] > stack_a[2])
		&& (stack_a[0] > stack_a[2]))
		rra(stack_a, n_stack_a);
}
