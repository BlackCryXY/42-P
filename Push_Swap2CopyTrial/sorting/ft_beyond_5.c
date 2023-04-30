/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_beyond_5.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 14:27:09 by tsantiag          #+#    #+#             */
/*   Updated: 2023/04/25 15:00:14 by tsantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

//A small implementation of the bubble sort algorithm

void	bubble_sort_the_stack(long *puntero, t_pushswap *n)
{
	long	i;
	long	j;
	long	temporary;

	i = 0;
	j = 0;
	while (i < n->stack_size[0])
	{
		j = i + 1;
		while (j < n->stack_size[0])
		{
			if (puntero[i] > puntero[j])
			{
				temporary = puntero[i];
				puntero[i] = puntero[j];
				puntero[j] = temporary;
			}
			j++;
		}
		i++;
	}
}

//This function copies the stack the first time

void	swap_stack_a_first_time(long *copy, long *copy_swap_stack_a,
		t_pushswap *n)
{
	int	i;

	i = 0;
	while (i < n->numa[0])
	{
		copy[i] = n->a[i];
		copy_swap_stack_a[i] = n->a[i];
		i++;
	}
}

//This function creates a "record" between the elements of 
//the two stacks so they can be sorted independently 
//while being able to reference the original positions

void	swap_stack_a_second_time(long *copy, long *copy_swap_stack_a,
		t_pushswap *n)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < n->numa[1])
	{
		j = 0;
		while (j < n->numa[0])
		{
			if (copy_swap_stack_a[i] == copy[j])
				n->a[i] = j;
			j++;
		}
		++i;
	}
}

void	radix_time(t_pushswap *n)
{
	int	max_number;
	int	max_bits;
	int	loop_through[2];

	max_number = n->numa[1] - 1;
	max_bits = 0;
	loop_through[0] = 0;
	loop_through[1] = 0;
	while ((max_number >> max_bits) != 0)
		++max_bits;
	while (loop_through[0] < max_bits)
	{
		loop_through[1] = 0;
		while (loop_through[1] < n->numa[0])
		{
			if (((n->a[0] >> loop_through[0]) & 1) == 1)
				ra(n);
			else
				pb(n);
			++loop_through[1];
		}
		while (n->numb != 0)
			pa(n);
		++loop_through[0];
	}
}

void	ft_beyond_5(t_pushswap *n)
{
	long	*copy;
	long	*copy_swap_stack_a;

	copy = (long *)malloc(n->numa[0] * sizeof(long));
	copy_swap_stack_a = (long *)malloc(n->numa[0] * sizeof(long));
	if (!copy || !copy_swap_stack_a)
		return ;
	swap_stack_a_first_time(copy, copy_swap_stack_a, n);
	bubble_sort_the_stack(copy, n);
	swap_stack_a_second_time(copy, copy_swap_stack_a, n);
	free(copy);
	free(copy_swap_stack_a);
	radix_time(n);
}
