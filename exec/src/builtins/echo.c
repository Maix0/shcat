/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   echo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 18:43:18 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:51:17 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exec/builtins.h"
#include "me/printf/printf.h"
#include "me/str/str.h"
#include "me/string/string.h"
#include "me/types.h"

void	_skip_options(t_usize *i, bool *print_line, t_builtin_spawn_info *info)
{
	t_usize		j;

	while (*i < info->args.len && info->args.buffer[*i][0] == '-')
	{
		j = 1;
		while (info->args.buffer[*i][j] == 'n')
			j++;
		if (info->args.buffer[*i][j] == '\0')
		{
			*print_line = false;
			(*i)++;
		}
		else
			break ;
	}
}

t_error	builtin_echo__(\
	t_state *state, t_builtin_spawn_info info, t_i32 *exit_code)
{
	t_usize		i;
	bool		print_line;
	t_string	s;

	(void)(state);
	print_line = true;
	i = 1;
	s = string_new(1024);
	_skip_options(&i, &print_line, &info);
	while (i < info.args.len - 1)
	{
		string_push(&s, info.args.buffer[i++]);
		string_push_char(&s, ' ');
	}
	if (i < info.args.len)
		string_push(&s, info.args.buffer[i]);
	if (print_line)
		string_push_char(&s, '\n');
	me_printf_fd(info.stdout, "%s", s.buf);
	string_free(s);
	return (*exit_code = 0, NO_ERROR);
}
