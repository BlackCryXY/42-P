/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 13:54:50 by tsantiag          #+#    #+#             */
/*   Updated: 2023/03/24 08:38:16 by tsantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

void	rra(long *stack_a, int *n_stack_a)
{
	int	i;
	long	*temp;

	i = n_stack_a[1] - 1;
	temp = (long *)malloc(sizeof(long));
	if (!temp)
		return ;
	*temp = stack_a[n_stack_a[1] - 1];
	while (i > 0)
	{
		stack_a[i] = stack_a[i - 1];
		i--;
	}
	stack_a[0] = *temp;
	free(temp);
	write(1, "rra\n", 3);
}

void	rrb(long *stack_b, int *n_stack_b)
{
	int	i;
	long	*temp;

	i = n_stack_b[1] - 1;
	temp = (long *)malloc(sizeof(long));
	if (!temp)
		return ;
	*temp = stack_b[*n_stack_b - 1];
	while (i > 0)
	{
		stack_b[i] = stack_b[i - 1];
		i--;
	}
	stack_b[0] = *temp;
	free(temp);
	write(1, "rrb\n", 3);
}

void	rrr(long *stack_a, long *stack_b, int *n_stack_a, int *n_stack_b)
{
	int	i;
	long	*temp;

	i = n_stack_b[1] - 1;
	temp = (long *)malloc(sizeof(long));
	if (!temp)
		return ;
	*temp = stack_a[n_stack_a[1] - 1];
	while (i > 0)
	{
		stack_a[i] = stack_a[i - 1];
		i--;
	}
	stack_a[0] = *temp;
	i = 0;
	*temp = stack_b[0];
	while (i < *n_stack_b)
	{
		stack_b[i] = stack_b[i + 1];
		i++;
	}
	stack_b[*n_stack_b - 1] = *temp;
	free(temp);
	write(1, "rrr\n", 3);
}
