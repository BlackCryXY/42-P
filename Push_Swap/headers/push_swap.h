/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 08:37:02 by tsantiag          #+#    #+#             */
/*   Updated: 2023/04/28 17:54:09 by tsantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <errno.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

int			ft_strlen(const char *str);
char		**ft_split(char const *s, char c);
void		second_stack_2(long *stack_a, long *stack_b, int *n_stack_a,
				int *n_stack_b);
int			ft_isdigit(int i);
int			only_numbers_in_stack(char *numbers);
int			repeated_checker(long *stack_a, int n_stack_a);
int			number_max(long *stack_a, int n_stack_a);
int			stack_sorted(long *stack_a, int *n_stack_a);
long int	ft_atol(const char *str);
int			input_numbers_2(long *stack_a, int *n_stack_a, char **argv);
int			input_numbers(long *stack_a, int *n_stack_a, char **argv);
void		free_all_stacks(long *stack_a, long *stack_b, int *n_stack_a,
				int *n_stack_b);
int			stack_size(int argc, char **argv);
int			numbers_input(long *stack_a, int *n_stack_a, char **argv,
				char **numbers_list);
void		ft_free_string(char **str);
void		init_number(int **n_stack_a, int **n_stack_b);
void		sorting_main(long *stack_a, long *stack_b, int *n_stack_a,
				int *n_stack_b);

void		pa(long *stack_a, long *stack_b, int *n_stack_a, int *n_stack_b);
void		pb(long *stack_a, long *stack_b, int *n_stack_a, int *n_stack_b);
void		rra(long *stack_a, int *n_stack_a);
void		rrb(long *stack_b, int *n_stack_b);
void		rrr(long *stack_a, long *stack_b, int *n_stack_a, int *n_stack_b);
void		ra(long *stack_a, int *n_stack_a);
void		rb(long *stack_b, int *n_stack_b);
void		rr(long *stack_a, long *stack_b, int *n_stack_a, int *n_stack_b);
void		sa(long *stack_a, int *n_stack_a);
void		sb(long *stack_b, int *n_stack_b);
void		ss(long *stack_a, long *stack_b, int *n_stack_a, int *n_stack_b);
//void	push(long *stack_a, long *stack_b, int *n_stack_a, int *n_stack_b);

void		bubble_sort_the_stack(long *puntero, int *stack_size);
void		swap_stack_a_first_time(long *copy, long *copy_swap_stack_a,
				long *stack_a, int *n_stack_a);
void		swap_stack_a_second_time(long *copy, long *copy_swap_stack_a,
				long *stack_a, int *n_stack_a);
void		radix_time(long *stack_a, long *stack_b, int *n_stack_a,
				int *n_stack_b);
void		ft_beyond_5(long *stack_a, long *stack_b, int *n_stack_a,
				int *n_stack_b);
void		ft_sort_3_numbers(long *stack_a, int *n_stack_a);
void		first_stack_1(long *stack_a, long *stack_b, int *n_stack_a,
				int *n_stack_b);
void		ft_sort_4_numbers(long *stack_a, long *stack_b, int *n_stack_a,
				int *n_stack_b);
void		first_stack(long *stack_a, long *stack_b, int *n_stack_a,
				int *n_stack_b);
void		second_stack(long *stack_a, long *stack_b, int *n_stack_a,
				int *n_stack_b);
void		ft_sort_5_numbers(long *stack_a, long *stack_b, int *n_stack_a,
				int *n_stack_b);
void		reverse_rotate_a_twice(long *stack_a, int *n_stack_a);
#endif
