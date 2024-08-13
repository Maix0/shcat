/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pwd.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 13:58:37 by rparodi           #+#    #+#             */
/*   Updated: 2024/08/13 15:14:47 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exec/builtins.h"
#include "me/printf/printf.h"
#include "me/string/string.h"
#include "me/types.h"
#include <errno.h>

t_error builtin_pwd___(t_state *state, t_builtin_spawn_info info, t_i32 *exit_code)
{
	t_string s;

	s = string_new(1024);
	while (getcwd(s.buf, s.capacity - 1) == NULL)
	{
		if (errno == ERANGE)
			string_reserve(&s, s.capacity * 3);
		else
			return (*exit_code = 1, string_free(s), me_printf_fd(info.stderr, "cd: Unable to get current directory\n"), NO_ERROR);
	}
	me_printf_fd(info.stdout, "%s\n", s.buf);
	string_free(s);
	return (*exit_code = 0, NO_ERROR);
}
