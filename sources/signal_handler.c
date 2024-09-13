/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signal_handler.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 13:22:14 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/13 15:29:25 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "app/signal_handler.h"
#include "me/types.h"
#include "signal.h"
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>

void sig_print_trace(int _idk)
{
	(void)(_idk);
	print_trace();
}

t_error	install_signal(void)
{
	struct sigaction	data;

	data = (struct sigaction){};
	data.sa_handler = SIG_IGN;
	if (sigaction(SIGINT, &data, NULL))
		return (ERROR);
	if (sigaction(SIGQUIT, &data, NULL))
		return (ERROR);
	return (NO_ERROR);
}
