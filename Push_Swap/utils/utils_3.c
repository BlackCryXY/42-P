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
	while (i < n_stack_a[0])
	{
		stack_a[i] = ft_atoi(numbers_list[i]);
		i++;
	}
	free_string(numbers_list);
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
