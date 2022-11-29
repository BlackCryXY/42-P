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

static void	ft_checker(char c, va_list *ar, int len, int *i)
{
	if (c == 's')
		ft_treat_string(va_arg(*args, char *), len);
	else if (c == 'd' || c == 'i')
		ft_treat_nbr(va_arg(*args, int), len);
	else if (c == 'u')
		ft_treat_uint(va_arg(*args, unsigned int), len);
	else if (c == 'x')
		ft_treat_hexa(va_arg(*args, unsigned int), len, 'x');
	else if (c == 'X')
		ft_treat_hexa(va_arg(*args, unsigned int), len, 'X');
	else if (c == 'p')
		ft_treat_pointer(va_arg(*args, size_t), len);
	else if (c == 'c')
		ft_treat_char(va_arg(*args, int), len);
	else if (c == '%')
		ft_treat_char('%', len);
	else
		(*i)--;
}	


int	ft_printf(const char *input, ...)
{
	va_list	args;
	int	i;
	int	len;

	i = 0;
	len = 0;
	va_start(args, input)
	while (input[i] != '\0')
	{
		if (input[i] == '%')
		{
			i++;
			ft_checker(input[i], &args, $len, $i);
			i++;
		}
		else
		{
			ft_treat_char((char)input[i], &len);
			i++;
		}
	}
	va_end(args);
	return (len);
}
