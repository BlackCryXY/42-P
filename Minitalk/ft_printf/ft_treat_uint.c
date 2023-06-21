/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_uint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 14:27:18 by tsantiag          #+#    #+#             */
/*   Updated: 2023/06/21 14:27:21 by tsantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

void	ft_treat_uint(unsigned int i, int *len)
{
	if (i >= 10)
		ft_treat_uint(u / 10, len);
	ft_treat_char(i % 10 + '0', len);
}
