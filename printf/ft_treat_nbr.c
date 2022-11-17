/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsantiag <tsantiag>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 09:41:52 by tsantiag          #+#    #+#             */
/*   Updated: 2022/11/17 10:58:43 by tsantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_sizeint(unsigned int n)
{
	int	size;

	size = 0;
	if (n < 0)
	{
		size++;
		n = -n;
	}
	while (n != 0)
	{
		size++;
		n = n / 10;
	}
	return (size);
}

int	ft_putnbr(unsigned int nu)
{
	int	char_count;

	char_count = ft_sizeint(nu);
	if (nu / 10 != 0)
	{
		ft_putnbr(nu / 10);
	}
	ft_putchar((nu % 10) + '0');
	return (char_count);
}

int	ft_treat_nbr(va_list list)
{
	int	count_char;
	int	i;

	i = va_arg(list, int);
	if (i == 0)
	{
		ft_putchar('0');
		return (1);
	}
	count_char = 0;
	if (i < 0)
	{
		ft_putchar('-');
		i = -i;
		count_char++;
	}
	count_char = ft_putnbr((unsigned int)i);
	return (count_char);
}
