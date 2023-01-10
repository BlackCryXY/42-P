/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 16:46:07 by tsantiag          #+#    #+#             */
/*   Updated: 2022/11/19 11:06:40 by tsantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_treat_pointer(size_t pointer, int *len)
{
	char	str[30];
	int		i;
	char	*base_char;

	base_char = "0123456789abcdef";
	i = 0;
	if (pointer == 0)
	{
		ft_treat_string("(nil)", len);
		return ;
	}
	write(1, "0x", 2);
	(*len) += 2;
	while (pointer != 0)
	{
		str[i] = base_char[pointer % 16];
		pointer = pointer / 16;
		i++;
	}
	while (i--)
		ft_treat_char(str[i], len);
}
