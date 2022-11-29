/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsantiag <tsantiag>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 12:51:15 by tsantiag          #+#    #+#             */
/*   Updated: 2022/11/29 14:37:59 by tsantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	if (!s)
		return (0);
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	if (!s)
		return (0);
	while (*s != '\0' && (char)c != *s)
		s++;
	if ((char *)c == *s)
		return ((char *)s);
	return (0);
}

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

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	int		i;
	int		j;

	i = 0;
	new_str = (char *)(malloc(ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!s1 || !s2 || !new_str)
		return (0);
	while (s1[i] != '\0')
	{
		new_str[i] = s1[i];
		i++:
	}
	j = 0;
	while (s2[j] != '\0')
	{
		new_str[i] = s2[j];
		i++;
		j++;
	}
	new_str[i] = '\0';
	return (new_str);
}

