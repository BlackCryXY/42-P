/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 13:55:56 by tsantiag          #+#    #+#             */
/*   Updated: 2023/03/24 08:38:51 by tsantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

void	ra(t_pushswap *n)
{
	int		i;
	long	*temp;

	i = 0;
	temp = (long *)malloc(sizeof(long));
	if (!temp)
		return ;
	*temp = n->a[0];
	while (i < n->numa[1] - 1)
	{
		n->a[i] = n->a[i + 1];
		i++;
	}
	n->a[n->numa[1] - 1] = *temp;
	free(temp);
	write(1, "ra\n", 3);
}

void	rb(t_pushswap *n)
{
	int		i;
	long	*temp;

	i = 0;
	temp = (long *)malloc(sizeof(long));
	if (!temp)
		return ;
	*temp = n->b[0];
	while (i < n->numb[1])
	{
		n->b[i] = n->b[i + 1];
		i++;
	}
	n->b[*n->numb - 1] = *temp;
	free(temp);
	write(1, "rb\n", 3);
}

void	rr(t_pushswap *n)
{
	int		i;
	long	*temp;

	i = 0;
	temp = (long *)malloc(sizeof(long));
	if (!temp)
		return ;
	*temp = n->a[0];
	while (i < n->numa[1])
	{
		n->a[i] = n->a[i + 1];
		i++;
	}
	n->a[n->numa[1] - 1] = *temp;
	i = 0;
	*temp = n->b[0];
	while (i < *n->numb)
	{
		n->b[i] = n->b[i + 1];
		i++;
	}
	n->b[*n->numb - 1] = *temp;
	free(temp);
	write(1, "rr\n", 3);
}
