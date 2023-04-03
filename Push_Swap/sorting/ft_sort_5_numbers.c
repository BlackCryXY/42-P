/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_5_numbers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 14:26:55 by tsantiag          #+#    #+#             */
/*   Updated: 2023/03/07 14:27:00 by tsantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

static void	reverse_rotate_a_twice(long *stack_a, int *n_stack_a)
{
	reverse_rotate_stack_a(stack_a, n_stack_a);
	reverse_rotate_stack_a(stack_a, n_stack_a);
}

void	first_stack_2(long *stack_a, long *stack_b, int *n_stack_a, int *n_stack_b)
{
	if (stack_b[0] < stack_a[0])
		pa(stack_a, stack_b, n_stack_a, n_stack_b);
	else if ((stack_b[0] > stack_a[0]) && (stack_b[0] < stack_a[1]))
	{
		ra(stack_a, n_stack_a);
		pa(stack_a, stack_b, n_stack_a, n_stack_b);
		rra(stack_a, n_stack_a);
	}
	else if ((stack_b[0] > stack_a[1]) && (stack_b[0] < stack_a[2]))
	{
		rra(stack_a, n_stack_a);
		pa(stack_a, stack_b, n_stack_a, n_stack_b);
		reverse_rotate_a_twice(stack_a, n_stack_a);
	}
	else if (stack_b[0] > stack_a[2])
	{
		pa(stack_a, stack_b, n_stack_a, n_stack_b);
		ra(stack_a, n_stack_a);
	}
}

void	second_stack(long *stack_a, long *stack_b, int *n_stack_a, int *n_stack_b)
{
	if (stack_b[0] < stack_a[0])
		pa(stack_a, stack_b, n_stack_a, n_stack_b);
	else if ((stack_b[0] > stack_a[0]) && (stack_b[0] < stack_a[1]))
	{
		ra(stack_a, n_stack_a);
		pa(stack_a, stack_b, n_stack_a, n_stack_b);
		rra(stack_a, n_stack_a);
	}
	else if ((stack_b[0] > stack_a[1]) && (stack_b[0] < stack_a[2]))
	{
		ra(stack_a, n_stack_a);
		pa(stack_a, stack_b, n_stack_a, n_stack_b);
		sa(stack_a, n_stack_a);
		rra(stack_a, n_stack_a);
	}
	else if ((stack_b[0] > stack_a[2]) && (stack_b[0] < stack_a[3]))
	{
		rra(stack_a, n_stack_a);
		pa(stack_a, stack_b, n_stack_a, n_stack_b);
		rotate_a_twice(stack_a, n_stack_a);
	}
	else if (stack_b[0] > stack_a[3])
		second_stack_2(stack_a, stack_b, n_stack_a, n_stack_b);
}

void	sort_5_numbers(long *stack_a, long *stack_b, int *n_stack_a, int *n_stack_b)
{
	pb(stack_a, stack_b, n_stack_a, n_stack_b);
	pb(stack_a, stack_b, n_stack_a, n_stack_b);
	sort_3_numbers(stack_a, n_stack_a);
	while (*n_stack_b != 0)
	{
		if (n_stack_a[1] == 3)
			first_stack(stack_a, stack_b, n_stack_a, n_stack_b);
		else if (n_stack_a[1] == 4)
			second_stack(stack_a, stack_b, n_stack_a, n_stack_b);
	}
}
