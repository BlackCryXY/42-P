/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 08:35:00 by tsantiag          #+#    #+#             */
/*   Updated: 2023/03/24 08:35:01 by tsantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

int	stack_sorted(long *stack_a, int *n_stack_a)
{
	int		i;
	int		j;
	long	max;

	i = 1;
	j = 0;
	max = stack_a[0];
	while (i < n_stack_a[1])
	{
		if (stack_a[i] > max)
		{
			max = stack_a[i];
			j++;
		}
		i++;
	}
	if (j == n_stack_a[i] - 1)
		return (0);
	return (-1);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	neg;
	int	res;

	i = 0;
	neg = 1;
	res = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (str[i] - '0') + (res * 10);
		i++;
	}
	return (res * neg);
}

int	input_numbers_2(long *stack_a, int *n_stack_a, char **argv)
{
	int	i;

	i = 0;
	while (i < n_stack_a[1])
	{
		if (only_numbers_in_stack(argv[i + 1]) == 1)
			stack_a[i] = ft_atoi(argv[i + 1]);
		else
		{
			write(1, "Error\n", 6);
			return (-1);
		}
		i++;
	}
	return (0);
}

int	input_numbers(long *stack_a, int *n_stack_a, char **argv)
{
	char	**numbers_list;

	numbers_list = NULL;
	if (n_stack_a[0] == 1)
	{
		if (numbers_input(stack_a, n_stack_a, argv, numbers_list) == -1)
			return (-1);
	}
	else
	{
		if (input_numbers_2(stack_a, n_stack_a, argv) == -1)
			return (-1);
	}
	if (repeated_checker(stack_a, n_stack_a[1]) == -1)
		return (-1);
	if (number_max(stack_a, n_stack_a[1] == -1))
		return (-1);
	return (0);
}
