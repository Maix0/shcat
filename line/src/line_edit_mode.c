/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line_edit_mode.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 18:26:32 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:51:32 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "line/_line_functions.h"
#include "line/_line_internal.h"
#include "line/_line_structs.h"
#include "me/fs/fs.h"
#include "me/mem/mem.h"
#include "me/printf/printf.h"
#include "me/str/str.h"
#include "me/vec/vec_str.h"
#include <errno.h>
#include <stdio.h>

bool	line_edit_feed_block_ret(t_line_state *state, t_str *out, char c, \
							bool *ret);

/* This function is part of the multiplexed API of Linenoise, that is used
 * in order to implement the blocking variant of the API but can also be
 * called by the user directly in an event driven program. It will:
 *
 * 1. Initialize the linenoise state passed by the user.
 * 2. Put the terminal in RAW mode.
 * 3. Show the prompt.
 * 4. Return control to the user, that will have to call linenoiseEditFeed()
 *    each time there is some data arriving in the standard input.
 *
 * The user can also call linenoiseEditHide() and linenoiseEditShow() if it
 * is required to show some input arriving asyncronously, without mixing
 * it with the currently edited line.
 *
 * When linenoiseEditFeed() returns non-NULL, the user finished with the
 * line editing session (pressed enter CTRL-D/C): in this case the caller
 * needs to call linenoiseEditStop() to put back the terminal in normal
 * mode. This will not destroy the buffer, as long as the linenoiseState
 * is still valid in the context of the caller.
 *
 * The function returns 0 on success, or -1 if writing to standard output
 * fails. If stdin_fd or stdout_fd are set to -1, the default is to use
 * STDIN_FILENO and STDOUT_FILENO.
 */
t_error	line_edit_start( \
		t_line_state *state, t_fd *stdin_fd, t_fd *stdout_fd, \
		t_const_str prompt)
{
	if (stdin_fd == NULL)
		stdin_fd = get_stdin();
	if (stdout_fd == NULL)
		stdout_fd = get_stdout();
	state->input_fd = stdin_fd;
	state->output_fd = stdout_fd;
	state->buf = string_new(4096);
	state->prompt = prompt;
	state->prompt_len = str_len(state->prompt);
	state->pos = 0;
	if (!isatty(state->input_fd->fd))
		return (NO_ERROR);
	if (line_enable_raw_mode(state->input_fd))
		return (ERROR);
	state->columns = line_get_columns(stdin_fd, stdout_fd);
	state->history_index = 0;
	line_history_add("");
	if (write_fd(state->output_fd, (t_u8 *)prompt, state->prompt_len, NULL))
		return (ERROR);
	return (NO_ERROR);
}

// use this to print the char as hex above the cursor
// fprintf(stderr, "\x1b[A\x1b[D char = %02x \x1b[B\x1b[10D", c);
bool	line_edit_feed(t_line_state *state, t_str *out)
{
	bool	ret;
	char	c;
	t_isize	nread;

	if (out == NULL)
		return (true);
	if (!isatty(state->input_fd->fd))
		return (line_no_tty_impl(out));
	if (read_fd(state->input_fd, (t_u8 *)&c, 1, &nread))
		return (*out = NULL, true);
	if (line_edit_feed_block_ret(state, out, c, &ret))
		return (ret);
	if (line_edit_insert(state, c))
		return (*out = NULL, true);
	return (false);
}

/* This is part of the multiplexed linenoise API. See linenoiseEditStart()
 * for more information. This function is called when linenoiseEditFeed()
 * returns something different than NULL. At this point the user input
 * is in the buffer, and we can restore the terminal in normal mode. */
void	line_edit_stop(t_line_state *state)
{
	string_free(state->buf);
	if (!isatty(state->input_fd->fd))
		return ;
	line_disable_raw_mode(state->input_fd);
	me_printf_fd(state->output_fd, "\n");
}
