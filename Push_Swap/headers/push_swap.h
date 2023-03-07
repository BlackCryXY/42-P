/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 13:53:23 by tsantiag          #+#    #+#             */
/*   Updated: 2023/03/07 14:02:51 by tsantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef push_swap_h
# define push_swap_h

# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <stdio.h>
# include <errno.h>





int	stack_sorted(long *stack_a, int *n_stack_a);
void	ft_free_string(char **str);
int	ft_atoi(const char *str);
int	input_numbers_2(long *stack_a, int *n_stack_a, char **argv);
int	input_numbers_2(long *stack_a, int *n_stack_a, char **argv);
int	ft_isdigit(int i);
int	only_numbers_in_stack(char *numbers);
int	repeated_checker(long *stack_a, int n_stack_a);
int	number_max(long *stack_a, int n_stack_a);
int	ft_strlen(char *s);
char	**ft_split(char const *str, char c);
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


#endif
