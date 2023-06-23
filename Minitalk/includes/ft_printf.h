/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsantiag <tsantiag>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:34:46 by tsantiag          #+#    #+#             */
/*   Updated: 2022/11/19 11:40:15 by tsantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int			ft_printf(const char *input, ...);
void		ft_treat_char(char c, int *len);
void		ft_treat_hexa(unsigned int h, int *len, char picker);
void		ft_treat_pointer(size_t pointer, int *len);
void		ft_treat_uint(unsigned int i, int *len);
void		ft_treat_nbr(int nbr, int *len);
void		ft_treat_string(char *argumentos, int *len);

#endif
