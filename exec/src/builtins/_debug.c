/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _debug.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 18:43:18 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:51:17 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exec/builtins.h"
#include "me/fs/fs.h"
#include "me/printf/printf.h"
#include "me/str/str.h"
#include "me/string/string.h"
#include "me/types.h"

#define USG "Usage:\n - print_fd: print the opened file descritors informations"

t_error	_debug_fd(\
	t_state *state, t_builtin_spawn_info info, t_i32 *exit_code)
{
	const t_fd_array	*fds = get_fd_arrays();
	t_usize				i;

	(void)(state);
	i = 0;
	while (i < FILE_SLOT_LEN)
	{
		if (fds->storage[i].ty == SLOT_FD)
			me_printf_fd(info.stderr, "  FD[%i] => %s\n", \
				fds->storage[i].slot.fd.fd, fds->storage[i].slot.fd.name);
		if (fds->storage[i].ty == SLOT_FILE)
			me_printf_fd(info.stderr, "FILE[%p] => %s\n", \
				fds->storage[i].slot.file.ptr, fds->storage[i].slot.file.name);
		if (fds->storage[i].ty == SLOT_DIR)
			me_printf_fd(info.stderr, " DIR[%p] => %s\n", \
				fds->storage[i].slot.dir.ptr, fds->storage[i].slot.dir.name);
		i++;
	}
	if (exit_code != NULL)
		*exit_code = 0;
	return (NO_ERROR);
}

t_error	builtin_debug_(\
	t_state *state, t_builtin_spawn_info info, t_i32 *exit_code)
{
	if (info.args.len != 2)
		return (me_printf_fd(info.stdout, USG), *exit_code = 1, ERROR);
	if (str_compare(info.args.buffer[1], "print_fd"))
		return (_debug_fd(state, info, exit_code));
	*exit_code = 2;
	return (ERROR);
}
