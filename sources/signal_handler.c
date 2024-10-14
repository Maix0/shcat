/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signal_handler.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 13:22:14 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/14 15:03:10 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "app/signal_handler.h"
#include "me/types.h"
#include <signal.h>

t_error	install_signal(void)
{
	if (signal(SIGINT, SIG_IGN))
		return (ERROR);
	if (signal(SIGQUIT, SIG_IGN))
		return (ERROR);
	return (NO_ERROR);
}
