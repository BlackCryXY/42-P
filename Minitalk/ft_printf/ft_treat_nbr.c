/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsantiag <tsantiag>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 09:41:52 by tsantiag          #+#    #+#             */
/*   Updated: 2022/11/18 17:14:53 by tsantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_treat_nbr(int nbr, int *len)
{
	if (nbr == -2147483648)
	{
		write(1, "-2147483648", 11);
		(*len) += 11;
		return ;
	}
	if (nbr < 0)
	{
		ft_treat_char('-', len);
		ft_treat_nbr(nbr * -1, len);
	}
	else
	{
		if (nbr > 9)
			ft_treat_nbr(nbr / 10, len);
		ft_treat_char(nbr % 10 + '0', len);
	}
}
