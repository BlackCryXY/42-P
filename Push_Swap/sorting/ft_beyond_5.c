/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_beyond_5.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 14:27:09 by tsantiag          #+#    #+#             */
/*   Updated: 2023/03/24 08:34:16 by tsantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

//A small implementation of the bubble sort algorithm

void	bubble_sort_the_stack(long *puntero, int *stack_size)
{
	long	i;
	long	j;
	long	temporary;

	i = 0;
	j = 0;
	while (i < stack_size[0])
	{
		j = i + 1;
		while (j < stack_size[0])
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

void	swap_stack_a_first_time(long *copy, long *copy_swap_stack_a, long *stack_a, int *n_stack_a)
{
	int	i;

	i = 0;
	while (i < n_stack_a[0])
	{
		copy[i] = stack_a[i];
		copy_swap_stack_a[i] = stack_a[i];
		i++;
	}
}

//This function creates a "record" between the elements of the two stacks so they can be sorted independently while being able to reference the original positions

void	swap_stack_a_second_time(long *copy, long *copy_swap_stack_a, long *stack_a, int *n_stack_a)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < n_stack_a[1])
	{
		j = 0;
		while (j < n_stack_a[0])
		{
			if (copy_swap_stack_a[i] == copy[j])
					stack_a[i] = j;
			j++;
		}
		++i;
	}
}

void	radix_time(long *stack_a, long *stack_b, int *n_stack_a, int *n_stack_b)
{
	int	max_number;
	int	max_bits;
	int	loop_through[2];

	max_number = n_stack_a[1] - 1;
	max_bits = 0;
	loop_through[0] = 0;
	loop_through[1] = 0;
	while ((max_number >> max_bits) != 0)
		++max_bits;
	while (loop_through[0] < max_bits)
	{
		loop_through[1] = 0;
		while (loop_through[1] < n_stack_a[0])
		{
			if (((stack_a[0] >> loop_through[0]) & 1) == 1)
				ra(stack_a, n_stack_a);
			else
				pb(stack_a, stack_b, n_stack_a, n_stack_b);
			++loop_through[1];
		}
		while (*n_stack_b != 0)
			pa(stack_a, stack_b, n_stack_a, n_stack_b);
		++loop_through[0];
	}
}

void	ft_beyond_5(long *stack_a, long *stack_b, int *n_stack_a, int *n_stack_b)
{
	long	*copy;
	long	*copy_swap_stack_a;

	copy = (long *)malloc(n_stack_a[0] * sizeof(long));
	copy_swap_stack_a = (long *)malloc(n_stack_a[0] * sizeof(long));
	if (!copy || !copy_swap_stack_a)
		return ;
	swap_stack_a_first_time(copy, copy_swap_stack_a, stack_a, n_stack_a);
	bubble_sort_the_stack(copy, n_stack_a);
	swap_stack_a_second_time(copy, copy_swap_stack_a, stack_a, n_stack_a);
	free(copy);
	free(copy_swap_stack_a);
	radix_time(stack_a, stack_b, n_stack_a, n_stack_b);
}
