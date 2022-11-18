/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsantiag <tsantiag>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 11:04:31 by tsantiag          #+#    #+#             */
/*   Updated: 2022/11/17 12:08:49 by tsantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_treat_hexa(unsigned int h, int len, char picker)
{
	char	str[30];
	char	*base_char;
	int	i;

	if (picker == 'X')
		base_char = "0123456789ABCDEF";
	else
		base_char = "0123456789abcdef";
	i = 0;
	if (h == 0)
	{
		ft_treat_char('0', len);
		return ;
	}
	while (h != 0)
	{
		str[i] = base_char[h % 16];
		h = h / 16;
		i++;
	}
	while (i--)
		ft_treat_char(str[i], len);
}
