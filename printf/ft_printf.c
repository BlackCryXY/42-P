/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsantiag <tsantiag>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:19:53 by tsantiag          #+#    #+#             */
/*   Updated: 2022/11/16 17:41:54 by tsantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf(const char *input, ...)
{
	va_list		list;
	int			count;
	const char	*str;

	str = ft_strdup(input);
	if (!str)
		return (0);
	count = 0;
	va_start(list, input);
	count += ft_process_input(str, list);
	va_end(list);
	free((char *)str);
	return (count);
}
