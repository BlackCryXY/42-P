/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_usefonc2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsantiag <tsantiag>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:21:31 by tsantiag          #+#    #+#             */
/*   Updated: 2022/11/17 09:29:31 by tsantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		c += 32;
		return (c);
	}
	else
		return (c);
}

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		c -= 32;
		return (c);
	}
	else
		return (c);
}

void	*ft_memset(void *s, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)s)[i] = c;
		i++;
	}
	return (s);
}

void	ft_strdeletor(char **str)
{
	if (str && *str)
	{
		free(*str);
		*str = NULL;
	}
}
