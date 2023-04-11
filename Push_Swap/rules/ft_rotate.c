/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 13:55:56 by tsantiag          #+#    #+#             */
/*   Updated: 2023/03/24 08:38:51 by tsantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

void	ra(long *stack_a, int *n_stack_a)
{
	int	i;
	long	*temp;

	i = 0;
	temp = (long *)malloc(sizeof(long));
	if (!temp)
		return ;
	*temp = stack_a[0];
	while (i < n_stack_a[1])
	{
		stack_a[i] = stack_a[i + 1];
		i++;
	}
	stack_a[n_stack_a[1] - 1] = *temp;
	free(temp);
	write(1, "ra\n", 3);
}

void	rb(long *stack_b, int *n_stack_b)
{
	int	i;
	long	*temp;

	i = 0;
	temp = (long *)malloc(sizeof(long));
	if (!temp)
		return ;
	*temp = stack_b[0];
	while (i < n_stack_b[1])
	{
		stack_b[i] = stack_b[i + 1];
		i++;
	}
	stack_b[*n_stack_b - 1] = *temp;
	free(temp);
	write(1, "rb\n", 3);
}

void	rr(long *stack_a, long *stack_b, int *n_stack_a, int *n_stack_b)
{
	int	i;
	long	*temp;

	i = 0;
	temp = (long *)malloc(sizeof(long));
	if (!temp)
		return ;
	*temp = stack_a[0];
	while (i < n_stack_a[1])
	{
		stack_a[i] = stack_a[i + 1];
		i++;
	}
	stack_a[n_stack_a[1] - 1] = *temp;
	i = 0;
	*temp = stack_b[0];
	while (i < *n_stack_b)
	{
		stack_b[i] = stack_b[i + 1];
		i++;
	}
	stack_b[*n_stack_b - 1] = *temp;
	free(temp);
	write(1, "rr\n", 3);
}
