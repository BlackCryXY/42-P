/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_uint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 16:45:42 by tsantiag          #+#    #+#             */
/*   Updated: 2022/11/18 17:25:50 by tsantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_treat_uint(unsigned int i, int *len)
{
	if (i >= 10)
		ft_treat_uint(i / 10, len);
	ft_treat_char(i % 10 + '0', len);
}
