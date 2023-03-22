#include "../headers/"


void	first_stack_1(long *stack_a, long *stack_b, int *n_stack_a, int *n_stack_b)
{
	if (stack_b[0] < stack_a[0])
		pa(stack_a, stack_b, n_stack_a, n_stack_b);
	else if ((stack_b[0] > stack_a[0]) && (stack_b[0] < stack_a[1]))
	{
		ra(stack_a, n_stack_a);
		pa(stack_a, stack_b, n_stack_a, n_stack_b);
		rra(stack_a, n_stack_a);
	}
	else if ((stack_b[0] > stack_a[1]) && (stack_b[0] < stack_a[2]))
	{
		rra(stack_a, n_stack_a);
		pa(stack_a, stack_b, n_stack_a, n_stack_b);
		reverse_rotate_a_twice(stack_a, n_stack_a);
	}
	else if (stack_b[0] > stack_a[2])
	{
		pa(stack_a, stack_b, n_stack_a, n_stack_b);
		ra(stack_a, n_stack_a);
	}
}

void	sort_4_numbers(long *stack_a, long *stack_b, int *n_stack_a, int *n_stack_b)
{
	pb(stack_a, stack_b, n_stack_a, n_stack_b);
	sort_3_numbers(stack_a, n_stack_a);
	while (*n_stack_b != 0)
	{
		if (n_stack_a[1] == 3)
			first_stack_1(stack_a, stack_b, n_stack_a, n_stack_b);
	}
}
