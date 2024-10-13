/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 18:43:18 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/13 17:24:19 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exec/builtins.h"
#include "me/convert/str_to_numbers.h"
#include "me/types.h"
#include "me/printf/printf.h"

t_error	builtin_exit__(\
	t_state *state, t_builtin_spawn_info info, t_i32 *exit_code)
{
	t_i32	actual_exit_code;

	(void)(state);
	if (info.args.len < 2)
		actual_exit_code = 0;
	else if (str_to_i32(info.args.buffer[1], 10, &actual_exit_code))
	{
		me_printf_fd(info.stderr, "Error: invalid argument: not a number\n");
		me_exit(2);
	}
	*exit_code = actual_exit_code;
	me_exit(actual_exit_code);
	return (NO_ERROR);
}
