/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 18:43:18 by maiboyer          #+#    #+#             */
/*   Updated: 2024/08/10 20:01:36 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exec/builtins.h"
#include "me/convert/str_to_numbers.h"
#include "me/types.h"

t_error builtin_exit__(t_state *state, t_spawn_info info)
{
	t_i32 exit_code;

	if (info.arguments.len < 2)
		exit_code = 0;
	else if (str_to_i32(info.arguments.buffer[1], 10, &exit_code))
		return (ERROR);
	me_exit(exit_code);
	return (NO_ERROR);
}
