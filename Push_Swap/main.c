/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 08:35:20 by tsantiag          #+#    #+#             */
/*   Updated: 2023/03/24 08:36:06 by tsantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stacks(int	*stack_a, int *stack_b)
{
	free(stack_a);
	free(stack_b);
	exit(0);
}

void	free_with_error(int *stack_a, int *stack_b)
{
	free(stack_a);
	free(stack_b);
	write(1, "Error\n", 6);
	exit(0);
}

