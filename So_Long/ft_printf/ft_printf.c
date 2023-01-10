/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsantiag <tsantiag>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:19:53 by tsantiag          #+#    #+#             */
/*   Updated: 2022/12/13 16:48:32 by tsantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_checker(char c, va_list *ar, int *len, int *i)
{
	if (c == 's')
		ft_treat_string(va_arg(*ar, char *), len);
	else if (c == 'd' || c == 'i')
		ft_treat_nbr(va_arg(*ar, int), len);
	else if (c == 'u')
		ft_treat_uint(va_arg(*ar, unsigned int), len);
	else if (c == 'x')
		ft_treat_hexa(va_arg(*ar, unsigned int), len, 'x');
	else if (c == 'X')
		ft_treat_hexa(va_arg(*ar, unsigned int), len, 'X');
	else if (c == 'p')
		ft_treat_pointer(va_arg(*ar, size_t), len);
	else if (c == 'c')
		ft_treat_char(va_arg(*ar, int), len);
	else if (c == '%')
		ft_treat_char('%', len);
	else
		(*i)--;
}

int	ft_printf(const char *input, ...)
{
	va_list	ar;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(ar, input);
	while (input[i] != '\0')
	{
		if (input[i] == '%')
		{
			i++;
			ft_checker(input[i], &ar, &len, &i);
			i++;
		}
		else
		{
			ft_treat_char((char)input[i], &len);
			i++;
		}
	}
	va_end(ar);
	return (len);
}
