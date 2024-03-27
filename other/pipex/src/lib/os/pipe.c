/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipe.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 17:59:48 by maiboyer          #+#    #+#             */
/*   Updated: 2024/01/04 18:01:42 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/os/pipe.h"

t_error	create_pipe(t_pipe *out)
{
	t_file	fds[2];

	if (pipe(fds))
		return (ERROR);
	out->read = fds[0];
	out->write = fds[1];
	return (NO_ERROR);
}
