/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 15:05:25 by tsantiag          #+#    #+#             */
/*   Updated: 2023/06/21 15:05:27 by tsantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <signal.h>
# include <unistd.h>

typedef struct s_server
{
	int					received_bit;
}						t_server;

static unsigned char	*stock_message(unsigned char *str, unsigned char c);
void					print_str(unsigned char *str, int client_pid);
void					read_msg(int sig, siginfo_t *info, void *context);
void					receive_bit_message(int sig);
void					send_char(int pid, char c);
void					send_str(int pid, char *str);
int						ft_atoi(const char *nptr);
#endif
