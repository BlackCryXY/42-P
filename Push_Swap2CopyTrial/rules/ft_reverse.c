/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 13:54:50 by tsantiag          #+#    #+#             */
/*   Updated: 2023/03/24 08:38:16 by tsantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

void	rra(t_pushswap *n)
{
	int		i;
	long	*temp;

	i = n->numa[1] - 1;
	temp = (long *)malloc(sizeof(long));
	if (!temp)
		return ;
	*temp = n->a[n->numa[1] - 1];
	while (i > 0)
	{
		n->a[i] = n->a[i - 1];
		i--;
	}
	n->a[0] = *temp;
	free(temp);
	write(1, "rra\n", 4);
}

void	rrb(t_pushswap *n)
{
	int		i;
	long	*temp;

	i = n->numb[1] - 1;
	temp = (long *)malloc(sizeof(long));
	if (!temp)
		return ;
	*temp = n->b[*n->numb - 1];
	while (i > 0)
	{
		n->b[i] = n->b[i - 1];
		i--;
	}
	n->b[0] = *temp;
	free(temp);
	write(1, "rrb\n", 4);
}

void	rrr(t_pushswap *n)
{
	int		i;
	long	*temp;

	i = n->numb[1] - 1;
	temp = (long *)malloc(sizeof(long));
	if (!temp)
		return ;
	*temp = n->a[n->numa[1] - 1];
	while (i > 0)
	{
		n->a[i] = n->a[i - 1];
		i--;
	}
	n->a[0] = *temp;
	i = 0;
	*temp = n->b[0];
	while (i < *n->numb)
	{
		n->b[i] = n->b[i + 1];
		i++;
	}
	n->b[*n->numb - 1] = *temp;
	free(temp);
	write(1, "rrr\n", 4);
}
