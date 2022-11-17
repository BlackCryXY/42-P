/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsantiag <tsantiag>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 10:28:47 by tsantiag          #+#    #+#             */
/*   Updated: 2022/11/17 12:09:48 by tsantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_treat_string(va_list list)
{
	int		count_char;
	char	*str;

	str = va_arg(list, char *);
	if (!str)
		str = "(null)";
	count_char = ft_strlen(str);
	ft_putstr(str);
	return (count_char);
}
