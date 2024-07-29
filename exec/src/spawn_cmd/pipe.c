/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipe.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 17:59:48 by maiboyer          #+#    #+#             */
/*   Updated: 2024/07/29 19:05:12 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exec/spawn_cmd/pipe.h"

t_error exec_create_pipe(t_pipe *out)
{
	int fds[2];

	if (pipe(fds))
		return (ERROR);
	out->read = fds[0];
	out->write = fds[1];
	return (NO_ERROR);
}
