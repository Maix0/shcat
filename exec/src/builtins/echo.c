/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   echo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 18:43:18 by maiboyer          #+#    #+#             */
/*   Updated: 2024/08/10 19:47:34 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exec/builtins.h"
#include "me/printf/printf.h"
#include "me/str/str.h"
#include "me/string/string.h"
#include "me/types.h"

t_error builtin_echo__(t_state *state, t_spawn_info info)
{
	t_usize	 i;
	bool	 print_line;
	t_string s;

	print_line = true;
	i = 1;
	s = string_new(1024);
	if (i < info.arguments.len && str_compare(info.arguments.buffer[i], "-n"))
	{
		print_line = false;
		i++;
	}
	while (i < info.arguments.len - 1)
	{
		string_push(&s, info.arguments.buffer[i++]);
		string_push_char(&s, ' ');
	}
	if (i < info.arguments.len)
		string_push(&s, info.arguments.buffer[i]);
	if (print_line)
		string_push_char(&s, '\n');
	// TODO: change the null to the actual redirection thingy, this needs to be done in the handle_builtin function beforehand
	me_printf_fd(NULL, "%s", s.buf);
	return (NO_ERROR);
}
