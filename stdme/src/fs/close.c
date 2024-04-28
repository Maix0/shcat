/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   close.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:56:56 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/10 19:05:48 by maix             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/fs/close.h"
#include "me/types.h"
#include <unistd.h>

bool	me_close(t_file file, t_i32 *error)
{
	t_i32	res;
	bool	out;

	res = close(file);
	out = res != 0;
	if (res && error != NULL)
		*error = res;
	return (out);
}
