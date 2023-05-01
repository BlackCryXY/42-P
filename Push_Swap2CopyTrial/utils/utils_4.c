/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 08:34:56 by tsantiag          #+#    #+#             */
/*   Updated: 2023/03/24 08:34:57 by tsantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

void	ft_free_string(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
}

int	numbers_input(t_pushswap *n, char **argv, char **numbers_list)
{
	int	i;
	int	numbers;

	i = 0;
	numbers = 0;
	numbers_list = ft_split(argv[1], 32);
	while (numbers_list[i])
	{
		numbers++;
		i++;
	}
	n->numa[0] = numbers;
	n->numa[1] = n->numa[0];
	i = 0;
	while (i < n->numa[0])
	{
		n->a[i] = ft_atoi(numbers_list[i]);
		i++;
	}
	ft_free_string(numbers_list);
	free(numbers_list);
	return (0);
}

void	free_nmber_stacks(t_pushswap *n)
{
	free(n->numa);
	free(n->numb);
	exit(0);
}

int	stack_size(int argc, char **argv)
{
	int	i;
	int	size;

	i = 0;
	size = 1;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] == 32)
				size++;
			i++;
		}
	}
	else
		size = argc - 1;
	return (size);
}
