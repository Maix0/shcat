/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signal_handler.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 13:22:14 by maiboyer          #+#    #+#             */
/*   Updated: 2024/07/18 14:53:14 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "app/signal_handler.h"
#include "me/fs/fs.h"
#include "me/printf/printf.h"
#include "me/types.h"
#include "signal.h"
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct s_sig_pending t_sig_pending;
struct s_sig_pending
{
	int		pending_signal[1024];
	int		pending_signal_data[1024];
	t_usize length;
};

t_sig_pending *get_sig_pending()
{
	static t_sig_pending data = {};
	
	return (&data);
}

t_error append_signal(int signal, int signal_data)
{
	
}

void sigint_handle(int sig, siginfo_t *info, void *ucontext)
{
	(void)(sig);
	(void)(info);
	(void)(ucontext);
	write_fd(get_stdout(), (void *)"\n", 1, NULL);
	// TODO: change this to the linenoise verison
	// rl_replace_line("", 0);
	// rl_on_new_line();
	// rl_redisplay();
}

void sigquit_handle(int sig, siginfo_t *info, void *ucontext)
{
	(void)(sig);
	(void)(info);
	(void)(ucontext);
	write_fd(get_stdout(), (void *)"\n", 1, NULL);
	// rl_replace_line("", 0);
	// rl_on_new_line();
	// rl_redisplay();
}

void sigsegv_handle(int sig, siginfo_t *info, void *ucontext)
{
	(void)(sig);
	(void)(info);
	(void)(ucontext);
	me_eprintf("Abort: SEGFAULT!!!\n");
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

	data.sa_handler = SIG_DFL;
	sigemptyset(&data.sa_mask);
	if (sigaction(SIGTSTP, &data, NULL))
		return (ERROR);
	if (sigaction(SIGTTIN, &data, NULL))
		return (ERROR);
	if (sigaction(SIGTTOU, &data, NULL))
		return (ERROR);
	data.sa_handler = SIG_IGN;
	if (sigaction(SIGCHLD, &data, NULL))
		return (ERROR);
	

	// data.sa_sigaction = sigsegv_handle;
	// if (sigaction(SIGSEGV, &data, NULL))
	// 	return (ERROR);
	return (NO_ERROR);
}
