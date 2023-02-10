#include "../headers/push_swap.h"

static int	numbers_input(long *stack_a, int *n_stack_a, char **argv, char **numbers_list)
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
	while (i < numbers_in_stack_a[0])
	{
		stack_a[i] = ft_atoi(numbers_list[i]);
		i++;
	}
	free_string(numbers_list);
	free(numbers_list);
	return (0);
}
