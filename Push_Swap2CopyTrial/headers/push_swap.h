/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 08:37:02 by tsantiag          #+#    #+#             */
/*   Updated: 2023/04/30 14:57:32 by tsantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <errno.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef struct s_pushswap
{
	long	*a;
	long	*b;
	int	*numa;
	int	*numb;
	int *stack_size;
}t_pushswap;

int		ft_strlen(const char *str);
char	**ft_split(char const *s, char c);
void	second_stack_2(t_pushswap *n);
int		ft_isdigit(int i);
int		only_numbers_in_stack(char *numbers);
int		repeated_checker(t_pushswap *n);
int		number_max(t_pushswap *n);
int		stack_sorted(t_pushswap *n);
int		ft_atoi(const char *str);
int		input_numbers_2(t_pushswap *n, char **argv);
int		input_numbers(t_pushswap *n, char **argv);
void	free_all_stacks(t_pushswap *n);
int		stack_size(int argc, char **argv);
int		numbers_input(t_pushswap *n, char **argv, char **numbers_list);
void	ft_free_string(char **str);

void	push(t_pushswap *n);
void	pa(t_pushswap *n);
void	pb(t_pushswap *n);
void	rra(t_pushswap *n);
void	rrb(t_pushswap *n);
void	rrr(t_pushswap *n);
void	ra(t_pushswap *n);
void	rb(t_pushswap *n);
void	rr(t_pushswap *n);
void	sa(t_pushswap *n);
void	sb(t_pushswap *n);
void	ss(t_pushswap *n);

void	bubble_sort_the_stack(long *puntero, t_pushswap *n);
void	swap_stack_a_first_time(long *copy, long *copy_swap_stack_a, t_pushswap *n);
void	swap_stack_a_second_time(long *copy, long *copy_swap_stack_a, t_pushswap *n);
void	radix_time(t_pushswap *n);
void	ft_beyond_5(t_pushswap *n);
void	ft_sort_3_numbers(t_pushswap *n);
void	first_stack_1(t_pushswap *n);
void	ft_sort_4_numbers(t_pushswap *n);
void	first_stack(t_pushswap *n);
void	second_stack(t_pushswap *n);
void	ft_sort_5_numbers(t_pushswap *n);
void	reverse_rotate_a_twice(t_pushswap *n);
#endif