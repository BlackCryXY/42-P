/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsantiag <tsantiag>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:34:46 by tsantiag          #+#    #+#             */
/*   Updated: 2022/11/17 12:57:01 by tsantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *input, ...);
void	ft_putchar(int c);
int		ft_strlen(char *str);
char	*ft_strdup(const char *s1);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	ft_putstr(char *s);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_putnbr(unsigned int nu);
void	ft_strdeletor(char **str);
int		ft_treat_string(va_list list);
int		ft_treat_nbr(va_list list);
int		ft_sizeint(unsigned int n);
int		ft_treat_char(va_list list);
bool	ft_is_true(char c);
int		ft_process_lists(const char *str, va_list list);
int		ft_treat_input(char c, va_list list);

#endif
