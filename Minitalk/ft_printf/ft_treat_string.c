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

#include "../includes/printf.h"

void	ft_treat_string(char *argumentos, int *len)
{
	size_t	i;

	i = 0;
	if (!argumentos)
	{
		write(1, "(null)", 6);
		(*len) += 6;
		return ;
	}
	while (argumentos[i] != '\0')
	{
		ft_treat_char(argumentos[i], len);
		i++;
	}
}
