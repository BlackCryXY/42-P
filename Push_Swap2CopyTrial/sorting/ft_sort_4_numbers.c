/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_4_numbers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 08:33:31 by tsantiag          #+#    #+#             */
/*   Updated: 2023/03/24 08:43:16 by tsantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../headers/push_swap.h"

void	first_stack_1(t_pushswap *n)
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

void	ft_sort_4_numbers(t_pushswap *n)
{
	pb(n);
	ft_sort_3_numbers(n);
	while (n->numb != 0)
	{
		if (n->numa[1] == 3)
			first_stack_1(n);
	}
}
