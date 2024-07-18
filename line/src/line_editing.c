/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line_editing.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 18:21:45 by maiboyer          #+#    #+#             */
/*   Updated: 2024/07/18 13:33:31 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "line/_line_functions.h"
#include "line/_line_internal.h"
#include "line/_line_structs.h"
#include "me/printf/printf.h"

/* =========================== Line editing ================================= */

/* We define a very simple "append buffer" structure, that is an heap
 * allocated string where we can append to. This is useful in order to
 * write all the escape sequences in a buffer and flush them to the standard
 * output in a single call, to avoid flickering effects. */

static void	_modify_vars(t_usize *a, t_usize *b, bool operation)
{
	if (!operation)
	{
		*a = 0;
		*b = 0;
	}
	else
	{
		*a += 1;
		*b += 1;
	}
}

t_usize	line_get_prompt_len(t_const_str s)
{
	t_usize	i;
	t_usize	ret;

	if ((_modify_vars(&i, &ret, false), true) && s == NULL)
		return (0);
	while (s[i])
	{
		if (s[i] == '\x1b' && s[i + 1] == '[')
		{
			i += 2;
			while (0x30 <= s[i] && s[i] <= 0x3F)
				i++;
			while (0x20 <= s[i] && s[i] <= 0x2F)
				i++;
			if (0x40 <= s[i] && s[i] <= 0x7E)
				i++;
		}
		_modify_vars(&i, &ret, true);
	}
	return (ret);
}

/* Single line low level line refresh.
 *
 * Rewrite the currently edited line accordingly to the buffer content,
 * cursor position, and number of columns of the terminal.
 *
 * Flags is REFRESH_* macros. The function can just remove the old
 * prompt, just write it, or both. */
void	line_refresh(t_line_state *state, t_line_flags flags)
{
	t_string	str;

	str = string_new(64);
	string_push(&str, "\r\x1b[2K");
	if (flags & REFRESH_WRITE)
		me_printf_str(&str, "%s%s\x1b[0G\x1b[%uC", state->prompt,
			state->buf.buf, state->pos + line_get_prompt_len(state->prompt));
	me_printf_fd(state->output_fd, "%s", str.buf);
	//me_eprintf("prompt = %u | pos = %u",line_get_prompt_len(state->prompt) , state->pos);
	string_free(str);
}
