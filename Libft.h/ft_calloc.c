/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 07:41:43 by tsantiag          #+#    #+#             */
/*   Updated: 2022/11/17 09:10:54 by tsantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdint.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*dest;
	size_t	i;

	i = 0;
	if (size && nmemb > SIZE_MAX / size)
		return (NULL);
	dest = malloc(nmemb * size);
	if (!dest)
		return (NULL);
	while (i < nmemb * size)
	{
		((unsigned char *)dest)[i] = 0;
		i++;
	}
	return (dest);
}
