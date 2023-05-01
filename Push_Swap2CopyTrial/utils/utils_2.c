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
	while (i >= '0' && i <= '9')
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
//see if i need to make another n_stack_a non pointer

int	repeated_checker(t_pushswap *n)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < *n->numa)
	{
		j = 0;
		while (j < *n->numa)
		{
			if ((n->a[i] == n->a[j]) && (i != j))
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

int	number_max(t_pushswap *n)
{
	int	i;

	i = 0;
	while (i < *n->numa)
	{
		if ((n->a[i] >= 2147383647) || (n->a[i] <= -2147383647))
		{
			write(1, "Error\n", 6);
			return (-1);
		}
		i++;
	}
	return (0);
}
