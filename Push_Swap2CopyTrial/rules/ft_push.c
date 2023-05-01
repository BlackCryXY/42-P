/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 13:53:47 by tsantiag          #+#    #+#             */
/*   Updated: 2023/04/30 14:51:38 by tsantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

void	pa(t_pushswap *n)
{
	int	i;

	(n->numa[1])++;
	i = n->numa[1] - 1;
	while (i > 0)
	{
		n->a[i] = n->a[i - 1];
		i--;
	}
	n->a[0] = n->b[0];
	i = 0;
	while (i < *n->numb)
	{
		n->b[i] = n->b[i + 1];
		i++;
	}
	(n->numb)--;
	if (n->numb == 0)
		n->b = NULL;
	write(1, "pa\n", 3);
}

void	push(t_pushswap *n)
{
	if (*n->numa <= 0)
		return ;
	(n->numb)++;
	if (!n->numb)
		return ;
	while (*n->numb > 1)
	{
		n->b[*n->numb - 1] = n->b[*n->numb - 2];
		(n->numb)--;
	}
	n->b[0] = n->a[0];
	while ((*n->numa)-- > 0)
		n->a[(*n->numa)] = n->a[(*n->numa) + 1];
	write(1, "pb\n", 3);
}

void	pb(t_pushswap *n)
{
	push(n);
}
