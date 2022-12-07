/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_logic.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 14:37:54 by tsantiag          #+#    #+#             */
/*   Updated: 2022/12/07 14:44:34 by tsantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/solong.h"

static int	width_of_map(char *s)
{
	int	width;

	width = 0;
	while (s[width] != '\0' || s[width] != '\n')
		width++;
	

	return (width);
}
