/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 07:58:13 by tsantiag          #+#    #+#             */
/*   Updated: 2022/11/15 11:21:09 by tsantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	output_len;
	char	*output;
	size_t	i;

	s_len = ft_strlen(s);
	output_len = 0;
	while (output_len + start < s_len && output_len < len)
		output_len++;
	output = malloc(output_len + 1);
	if (!output)
		return (NULL);
	i = 0;
	while (i < output_len && i + start < s_len)
	{
		output[i] = s[i + start];
		i++;
	}
	output[i] = '\0';
	return (output);
}
