/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 08:35:00 by tsantiag          #+#    #+#             */
/*   Updated: 2023/04/28 16:56:14 by tsantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

int	stack_sorted(t_pushswap *n)
{
	int		i;
	int		j;
	long	max;

	i = 1;
	j = 0;
	max = n->a[0];
	while (i < n->numa[1])
	{
		if (n->a[i] > max)
		{
			max = n->a[i];
			j++;
		}
		i++;
	}
	if (j == n->numa[1] - 1)
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

int	input_numbers_2(t_pushswap *n, char **argv)
{
	int	i;

	i = 0;
	while (i < n->numa[1])
	{
		if (only_numbers_in_stack(argv[i + 1]) == 1)
			n->a[i] = ft_atoi(argv[i + 1]);
		else
		{
			write(1, "Error\n", 6);
			return (-1);
		}
		i++;
	}
	return (0);
}

int	input_numbers(t_pushswap *n, char **argv)
{
	char	**numbers_list;

	numbers_list = NULL;
	if (n->numa[0] == 1)
	{
		if (numbers_input(n, argv, numbers_list) == -1)
			return (-1);
	}
	else
	{
		if (input_numbers_2(n, argv) == -1)
			return (-1);
	}
	if (repeated_checker(n) == -1)
		return (-1);
	if (number_max(n) == -1)
		return (-1);
	return (0);
}
