/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 14:27:05 by tsantiag          #+#    #+#             */
/*   Updated: 2023/06/21 14:27:10 by tsantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_treat_pointer(size_t pointer, int len)
{
	char	str[30];
	int		i;
	char	*base_char;

	base_char = "0123456789abcdef";
	i = 0;
	write(1, "0x", 2);
	(*len) += 2;
	if (pointer == 0)
	{
		ft_treat_char('0', len);
		return ;
	}
	while (pointer != 0)
	{
		str[i] = base_char[pointer % 16];
		pointer = pointer / 16;
		i++;
	}
	while (i--)
		ft_treat_char(str[i], len);
}
