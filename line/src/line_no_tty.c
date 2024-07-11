/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line_no_tty.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 18:10:24 by maiboyer          #+#    #+#             */
/*   Updated: 2024/07/11 18:15:42 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/types.h"
#include "line/_line_internal.h"
#include "line/_line_functions.h"
#include "line/_line_structs.h"

/* This function is called when linenoise() is called with the standard
 * input file descriptor not attached to a TTY. So for example when the
 * program using linenoise is called in pipe or with a file redirected
 * to its standard input. In this case, we want to be able to return the
 * line regardless of its length (by default we are limited to 4k). */
t_str	line_no_tty_impl(void)
{
	t_string	line;
	t_isize		ret;
	char		chr;

	line = string_new(16);
	while (true)
	{
		chr = '\n';
		if (read_fd(get_stdin(), (t_u8 *)&chr, 1, &ret))
			return (string_free(line), NULL);
		if (ret == 0 || chr == '\n')
		{
			if (line.len == 0)
				return (string_free(line), NULL);
			return (line.buf);
		}
		else
			string_push_char(&line, chr);
	}
}
