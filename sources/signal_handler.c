/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signal_handler.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 13:22:14 by maiboyer          #+#    #+#             */
/*   Updated: 2024/07/20 14:22:33 by maiboyer         ###   ########.fr       */
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

void sigsegv_handle(int sig)
{
	(void)(sig);
	me_eprintf("Abort: SEGFAULT!!!\n");
	print_trace();
	exit(139);
}

t_error install_signal(void)
{
	struct sigaction data;

	data = (struct sigaction){};
	data.sa_handler = SIG_IGN;
	if (sigaction(SIGINT, &data, NULL))
		return (ERROR);
	if (sigaction(SIGQUIT, &data, NULL))
		return (ERROR);
	me_eprintf("Installed Signals\n");
	return (NO_ERROR);
}
