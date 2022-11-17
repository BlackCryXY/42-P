/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsantiag <tsantiag>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 11:06:03 by tsantiag          #+#    #+#             */
/*   Updated: 2022/11/17 17:38:11 by tsantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdbool.h>

int	ft_process_lists(const char *str, va_list list)
{
	int	count_char;
	char	i;

	i = *str;
	if (ft_is_true(i))
	{
		count_char += ft_treat_input(i, list);
		str++;
	}
	else
		return (-1);
	return (count_char);
}

int	ft_treat_input(char c, va_list list)
{
	int	char_count;

	char_count = 0;
	if (c == 'c')
		char_count += ft_treat_char(list);
	if (c == 's')
		char_count += ft_treat_string(list);
	if (c == 'i')
		char_count += ft_treat_nbr(list);
	if (c == '








bool	ft_is_true(char c)
{
	if (c == 'c' || c == 'd' || c == 's' || c == 'p' || c == 'i' || c == 'u'
		|| c == 'x' || c == 'X' || c == '%')
		return (true);
	else
		return (false);
}
