/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c 	                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alecoutr <alecoutr@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 18:14:51 by alecoutr          #+#    #+#             */
/*   Updated: 2022/02/19 22:35:43 by alecoutr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include "ft_printf/ft_printf.h"

void	sighandler(int sig, siginfo_t *info)
{
	static int		bit;
	static int		c;

    c |= ((sig == SIGUSR1) << bit);
	if (++bit == 8)
	{
		ft_printf("%c", c);
        if (c == 0)
            kill(info->si_pid, SIGUSR1);
		bit = 0;
		c = 0;
	}
}

int	main(int ac, char **av)
{
	int	pid;

	pid = getpid();
	ft_printf("PID -> %d\n", pid);

    struct sigaction sa;
    sa.sa_flags = SA_RESTART;
    sa.sa_handler = &sighandler;

	while (1)
	{
        sigaction(SIGUSR1, &sa, 0);
        sigaction(SIGUSR2, &sa, 0);
	}
	return (0);
}
