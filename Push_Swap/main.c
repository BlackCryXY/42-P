#include "push_swap.h"

void	free_stacks(int	*stack_a, int *stack_b)
{
	free(stack_a);
	free(stack_b);
	exit(0);
}

void	free_without_errors(int	*stack_a, int *stack_b)
{
	free(stack_a);
	free(stack_b);
	write(1, "Error\n", 6);
	exit(0);
}

