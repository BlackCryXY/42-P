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

void	reverse_rotate_a_twice(t_pushswap *n)
{
	rra(n);
	rra(n);
}

static void	rotate_a_twice(t_pushswap *n)
{
	ra(n);
	ra(n);
}

void	first_stack_2(t_pushswap *n)
{
	if (n->b[0] < n->a[0])
		pa(n);
	else if ((n->b[0] > n->a[0]) && (n->b[0] < n->a[1]))
	{
		ra(n);
		pa(n);
		rra(n);
	}
	else if ((n->b[0] > n->a[1]) && (n->b[0] < n->a[2]))
	{
		rra(n);
		pa(n);
		reverse_rotate_a_twice(n);
	}
	else if (n->b[0] > n->a[2])
	{
		pa(n);
		ra(n);
	}
}

void	second_stack(t_pushswap *n)
{
	if (n->b[0] < n->a[0])
		pa(n);
	else if ((n->b[0] > n->a[0]) && (n->b[0] < n->a[1]))
	{
		ra(n);
		pa(n);
		rra(n);
	}
	else if ((n->b[0] > n->a[1]) && (n->b[0] < n->a[2]))
	{
		ra(n);
		pa(n);
		sa(n);
		rra(n);
	}
	else if ((n->b[0] > n->a[2]) && (n->b[0] < n->a[3]))
	{
		rra(n);
		pa(n);
		rotate_a_twice(n);
	}
	else if (n->b[0] > n->a[3])
		second_stack_2(n);
}

void	ft_sort_5_numbers(t_pushswap *n)
{
	pb(n);
	pb(n);
	ft_sort_3_numbers(n);
	while (n->numb != 0)
	{
		if (n->numa[1] == 3)
			first_stack_2(n);
		else if (n->numa[1] == 4)
			second_stack(n);
	}
}
