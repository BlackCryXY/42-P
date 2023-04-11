/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 13:57:04 by tsantiag          #+#    #+#             */
/*   Updated: 2023/03/07 13:58:12 by tsantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

void	sa(long *stack_a, int *n_stack_a)
{
	long	*temp;

	temp = (long *)malloc(sizeof(long));
	if (!temp)
		return ;
	if (n_stack_a[1] > 1)
	{
		temp[0] = stack_a[0];
		stack_a[0] = stack_a[1];
		stack_a[1] = temp[0];
	}
	free(temp);
	write(1, "sa\n", 3);
}

void	sb(long *stack_b, int *n_stack_b)
{
	long	*temp;

	temp = (long *)malloc(sizeof(long));
	if (!temp)
		return ;
	if (*n_stack_b > 1)
	{
		temp[0] = stack_b[0];
		stack_b[0] = stack_b[1];
		stack_b[1] = temp[0];
	}
	free(temp);
	write(1, "sa\n", 3);
}

void	ss(long *stack_a, long *stack_b, int *n_stack_a, int *n_stack_b)
{
	long	*temp;

	temp = (long *)malloc(sizeof(long));
	if (!temp)
		return ;
	if (n_stack_a[1] > 1)
	{
		temp[0] = stack_a[0];
		stack_a[0] = stack_a[1];
		stack_a[1] = temp[0];
	}
	if (*n_stack_b > 1)
	{
		temp[0] = stack_b[0];
		stack_b[0] = stack_b[1];
		stack_b[1] = temp[0];
	}
	free(temp);
	write(1, "ss\n", 3);
}
