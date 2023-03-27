/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 08:37:02 by tsantiag          #+#    #+#             */
/*   Updated: 2023/03/24 08:37:06 by tsantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef push_swap_h
# define push_swap_h

# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <stdio.h>
# include <errno.h>




//utils
char	**ft_split(char const *s, char c);
void	second_stack_2(long *stack_a, long *stack_b, int *n_stack_a, int *n_stack_b);
int	ft_strlen(char *s);
int	ft_isdigit(int i);
int	only_numbers_in_stack(char *numbers);
int	repeated_checker(long *stack_a, n_stack_a);
int	number_max(long *stack_a, int n_stack_a);
int	stack_sorted(long *stack_a, int *n_stack_a);
int	ft_atoi(const char *str);
int	input_numbers_2(long *stack_a, int *n_stack_a, char **argv);
int	input_numbers(long *stack_a, int *n_stack_a, char **argv);
void	free_stacks(long *stack_a, long *stack_b, int *n_stack_a, int *n_stack_b);
void	ft_new_memory(long *pointer, int startsize, int newsize);

//rules
void	pa(long *stack_a, long *stack_b, int *n_stack_a, int *n_stack_b);
void	pb(long *stack_a, long *stack_b, int *n_stack_a, int *n_stack_b);
void	rra(long *stack_a, int *n_stack_a);
void	rrb(long *stack_a, int *n_stack_b);
void	rrr(long *stack_a, int *n_stack_b);
void	ra(long *stack_a, int *n_stack_a);
void	rb(long *stack_b, int *n_stack_b);
void	rr(long *stack_a, int *stack_b, int *n_stack_a, int *n_stack_b);
void	sa(long *stack_a, int *n_stack_a);
void	sb(long *stack_b, int *stack_b);
void	ss(long *stack_a, long *stack_b, int *n_stack_a, int *n_stack_b);

//sorting
void	sort_3_numbers(long *stack_a, int *n_stack_a);
void	first_stack_1(long *stack_a, long *stack_b, int *n_stack_a, int *n_stack_b);
void	sort_4_numbers(long *stack_a, long *stack_b, int *n_stack_a, int *n_stack_b);
void	first_stack(long *stack_a, long *stack_b, int *n_stack_a, int *n_stack_b);
void	second_stack(long *stack_a, long *stack_b, int *n_stack_a, int *n_stack_b);
void	sort_5_numbers(long *stack_a, long *stack_b, int *n_stack_a, int *n_stack_b);
#endif
