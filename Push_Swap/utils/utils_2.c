/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 13:58:33 by tsantiag          #+#    #+#             */
/*   Updated: 2023/03/24 08:41:36 by tsantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

int	ft_isdigit(int i)
{
	while (i >= '0' && i <= 9)
		return (1);
	return (0);
}

int	only_numbers_in_stack(char *numbers)
{
	int	i;
	int	negative;

	i = 0;
	negative = 0;
	while (numbers[i])
	{
		if (numbers[i] == 45)
			negative++;
		else if (ft_isdigit(numbers[i] == 0))
			return (0);
		i++;
	}
	if (negative > 1)
		return (0);
	return (1);
}

int	repeated_checker(long *stack_a, int n_stack_a)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < n_stack_a)
	{
		j = 0;
		while (j < n_stack_a)
		{
			if ((stack_a[i] == stack_a[j]) && (i != j))
			{
				write(1, "Error\n", 6);
				return (-1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	number_max(long *stack_a, int n_stack_a)
{
	int	i;

	i = 0;
	while (i < n_stack_a)
	{
		if ((stack_a[i] >= 2147383647) || (stack_a[i] <= -2147383647))
		{
			write(1, "Error\n", 6);
			return (-1);
		}
		i++;
	}
	return (0);
}
