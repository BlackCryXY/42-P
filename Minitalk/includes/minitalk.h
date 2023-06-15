#ifndef MINITALK_H
# define MINITALK_H

# include <unistd.h>
# include <signal.h>
typedef struct s_server {
    int received_bit;
}                           t_server;

static unsigned char *stock_message(unsigned char *str, unsigned char c);
void    print_str(unsigned char *str, int client_pid);
void    read_msg(int sig, siginfo_t *info, void *context);
void    receive_bit_message(int sig);
void    send_char(int pid, char c);
void    send_str(int pid, char *str);
int     ft_atoi(const char *nptr);
#endif
