/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 15:04:35 by tsantiag          #+#    #+#             */
/*   Updated: 2023/06/21 15:04:37 by tsantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minitalk.h"
#include "../includes/ft_printf.h"

static unsigned char	*stock_message(unsigned char *str, unsigned char c)
{
	unsigned char	*tmp;
	int				i;
	static int		len;

	len = 1;
	tmp = NULL;
	i = 0;
	tmp = malloc(++len);
	if (!tmp)
		return (NULL);
	while (len > 2 && str[i])
	{
		tmp[i] = str[i];
		i++;
	}
	tmp[i] = c;
	tmp[i + 1] = '\0';
	if (len > 2)
		free(str);
	if (c == '\0')
		len = 1;
	return (tmp);
}

void	print_str(unsigned char *str, int client_pid)
{
	ft_printf("%s\n", str);
	free(str);
	kill(client_pid, SIGUSR1);
}

void	read_msg(int sig, siginfo_t *info, void *context)
{
	static unsigned char	c;
	static unsigned char	bit;
	static unsigned char	*str;

	c = 0;
	bit = 128;
	(void)context;
	if (sig == SIGUSR1)
		c |= bit;
	if (bit == 1)
	{
		str = stock_message(str, c);
		if (c == 0)
			print_str(str, info->si_pid);
		c = 0;
		bit = 128;
	}
	else
		bit /= 2;
	kill(info->si_pid, SIGUSR2);
}

int	main(void)
{
	struct sigaction	sa;

	sa.sa_sigaction = read_msg;
	sa.sa_flags = SA_SIGINFO;
	sigemptyset(&sa.sa_mask);
	ft_printf("PID: %d\n", getpid());
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
	while (1)
		pause();
	return (0);
}
