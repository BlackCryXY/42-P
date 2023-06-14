#include "../includes/minitalk.h"
#include "ft_printf.h"

int main(void)
{   
    struct  sigaction    sa;

     sa.sa_sigaction = read_msg;
     sa.sa_flags = SA_SIGINFO;
     sigemptyset(sa.sa_mask);
    ft_printf("This is my PID: %d\n," getpid());
    sigaction(SIGUSR1, &sa, NULL);
    sigaction(SIGUSR2, &sa, NULL);
    while (1)
        pause();
    return (0);
}