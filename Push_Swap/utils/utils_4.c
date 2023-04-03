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

void    ft_free_string(char **str)
{
        int     i;

        i = 0;
        while (str[i])
        {
                free(str[i]);
                i++;
        }
}

int	numbers_input(long *stack_a, int *n_stack_a, char **argv, char **numbers_list)
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
	n_stack_a[0] = numbers;
	n_stack_a[1] = n_stack_a[0];
	i = 0;
	while (i < n_stack_a[0])
	{
		stack_a[i] = ft_atoi(numbers_list[i]);
		i++;
	}
	ft_free_string(numbers_list);
	free(numbers_list);
	return (0);
}

void	free_stacks(long *stack_a, long *stack_b, int *n_stack_a, int *n_stack_b)
{
	free(stack_a);
	free(stack_b);
	free(n_stack_a);
	free(n_stack_b);
	exit(0);
}

void	ft_new_memory(long *pointer, int startsize, int newsize)
{
	int		i;
	long	*temporary;

	i = 0;
	if ((pointer != NULL) && (startsize < newsize))
	{
		temporary = malloc(sizeof(long) * (newsize));
		while (i < startsize)
		{
			temporary[i] = pointer[i];
			i++;
		}
		pointer = temporary;
	}
	else if ((pointer != NULL) && (startsize > newsize))
	{
		temporary = malloc(sizeof(long) * (newsize));
		while (i < newsize)
		{
			temporary[i] = pointer[i];
			i++;
		}
		pointer = temporary;
	}
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
