/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 08:34:37 by tsantiag          #+#    #+#             */
/*   Updated: 2023/03/24 08:34:50 by tsantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

void	second_stack_2(long *stack_a, long *stack_b, int *n_stack_a,
		int *n_stack_b)
{
	pa(stack_a, stack_b, n_stack_a, n_stack_b);
	ra(stack_a, n_stack_a);
}

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}
