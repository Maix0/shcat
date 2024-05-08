/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signal_handler.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 13:22:14 by maiboyer          #+#    #+#             */
/*   Updated: 2024/05/08 15:28:15 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "app/signal_handler.h"
#include "me/types.h"
#include "readline/readline.h"
#include <stdlib.h>
#include <stdio.h>

void sigint_handle(int sig, siginfo_t *info, void *ucontext)
{
	static int count = 0;
	(void)(sig);
	(void)(info);
	(void)(ucontext);
	count++;
	printf("\n");
	rl_replace_line("", 0);
	rl_on_new_line();
	rl_redisplay();
	if (count == 10)
	{
		exit(1);
	}
}

void sigquit_handle(int sig, siginfo_t *info, void *ucontext)
{
	static int count = 0;
	(void)(sig);
	(void)(info);
	(void)(ucontext);
	count++;
	printf("\n");
	rl_replace_line("", 0);
	rl_on_new_line();
	rl_redisplay();
	if (count == 10)
	{
		exit(1);
	}
}

void sigsegv_handle(int sig, siginfo_t *info, void *ucontext)
{
	(void)(sig);
	(void)(info);
	(void)(ucontext);
	printf("SEGFAULT!!!\n");
	print_trace();
	exit(139);
}

t_error install_signal(void)
{
	struct sigaction data;

	data = (struct sigaction){};
	data.sa_sigaction = sigint_handle;
	data.sa_flags = SA_SIGINFO | SA_NOCLDWAIT;
	if (sigaction(SIGINT, &data, NULL))
		return (ERROR);

	data.sa_sigaction = sigquit_handle;
	if (sigaction(SIGQUIT, &data, NULL))
		return (ERROR);
	data.sa_sigaction = sigsegv_handle;
	if (sigaction(SIGSEGV, &data, NULL))
		return (ERROR);

	return (NO_ERROR);
}
