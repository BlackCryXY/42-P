/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 13:57:04 by tsantiag          #+#    #+#             */
/*   Updated: 2023/03/07 13:58:12 by tsantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

void	sa(t_pushswap *n)
{
	long	*temp;

	temp = (long *)malloc(sizeof(long));
	if (!temp)
		return ;
	if (n->numa[1] > 1)
	{
		temp[0] = n->a[0];
		n->a[0] = n->a[1];
		n->a[1] = temp[0];
	}
	free(temp);
	write(1, "sa\n", 3);
}

void	sb(t_pushswap *n)
{
	long	*temp;

	temp = (long *)malloc(sizeof(long));
	if (!temp)
		return ;
	if (*n->numb > 1)
	{
		temp[0] = n->b[0];
		n->b[0] = n->b[1];
		n->b[1] = temp[0];
	}
	free(temp);
	write(1, "sa\n", 3);
}

void	ss(t_pushswap *n)
{
	long	*temp;

	temp = (long *)malloc(sizeof(long));
	if (!temp)
		return ;
	if (n->numa[1] > 1)
	{
		temp[0] = n->a[0];
		n->a[0] = n->a[1];
		n->a[1] = temp[0];
	}
	if (*n->numb > 1)
	{
		temp[0] = n->b[0];
		n->b[0] = n->b[1];
		n->b[1] = temp[0];
	}
	free(temp);
	write(1, "ss\n", 3);
}