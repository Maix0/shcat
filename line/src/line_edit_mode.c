/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line_edit_mode.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 18:26:32 by maiboyer          #+#    #+#             */
/*   Updated: 2024/07/11 18:27:56 by maiboyer         ###   ########.fr       */
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
t_error	line_edit_start(t_line_state *state, t_fd *stdin_fd, t_fd *stdout_fd,
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
	if (line_enable_raw_mode(state->input_fd))
		return (ERROR);
	state->columns = line_get_columns(stdin_fd, stdout_fd);
	state->history_index = 0;
	if (!isatty(state->input_fd->fd))
		return (NO_ERROR);
	line_history_add("");
	if (write_fd(state->output_fd, (t_u8 *)prompt, state->prompt_len, NULL))
		return (ERROR);
	return (NO_ERROR);
}

/* This function is part of the multiplexed API of linenoise, see the top
 * comment on linenoiseEditStart() for more information. Call this function
 * each time there is some data to read from the standard input file
 * descriptor. In the case of blocking operations, this function can just be
 * called in a loop, and block.
 *

	* The function returns get_unfinished_str() to signal that line editing is still
 * in progress, that is, the user didn't yet pressed enter / CTRL-D. Otherwise
 * the function returns the pointer to the heap-allocated buffer with the
 * edited line, that the user should mem_free with linenoiseFree().
 *
 * On special conditions, NULL is returned and errno is populated:
 *
 * EAGAIN if the user pressed Ctrl-C
 * ENOENT if the user pressed Ctrl-D
 *
 * Some other errno: I/O error.
 */
t_str	line_edit_feed(t_line_state *state)
{
	char		c;
	t_isize		nread;
	char		seq[3];
	t_vec_str	*history;
	t_str		tmp;

	if (!isatty(state->input_fd->fd))
		return (line_no_tty_impl());
	history = get_history();
	if (read_fd(state->input_fd, (t_u8 *)&c, 1, &nread))
		return (NULL);
	if (c == K_NEWLINE || c == K_ENTER)
	{
		if (!vec_str_pop(history, &tmp))
			mem_free(tmp);
		return (str_clone(state->buf.buf));
	}
	else if (c == K_CTRL_C)
		return (errno = EAGAIN, NULL);
	else if (c == K_BACKSPACE || c == K_CTRL_H)
		line_edit_backspace(state);
	else if (c == K_CTRL_D)
	{
		if (state->buf.len > 0)
			line_edit_delete(state);
		else
		{
			history->len--;
			mem_free(history->buffer[history->len]);
			return (errno = ENOENT, NULL);
		}
	}
	else if (c == K_CTRL_B)
		line_edit_move_left(state);
	else if (c == K_CTRL_F)
		line_edit_move_right(state);
	else if (c == K_CTRL_P)
		line_edit_history_next(state, HIST_PREV);
	else if (c == K_CTRL_N)
		line_edit_history_next(state, HIST_PREV);
	else if (c == K_ESC)
	{
		if (read_fd(state->input_fd, (t_u8 *)seq, 1, NULL))
			return ((t_str)get_unfinished_str());
		if (read_fd(state->input_fd, (t_u8 *)(seq + 1), 1, NULL))
			return ((t_str)get_unfinished_str());
		if (seq[0] == '[')
		{
			if (seq[1] >= '0' && seq[1] <= '9')
			{
				if (read_fd(state->input_fd, (t_u8 *)(seq + 2), 1, NULL))
					return ((t_str)get_unfinished_str());
				if (seq[1] == '3' && seq[2] == '~')
					line_edit_delete(state);
			}
			else
			{
				if (seq[1] == 'A')
					line_edit_history_next(state, HIST_PREV);
				if (seq[1] == 'B')
					line_edit_history_next(state, HIST_NEXT);
				if (seq[1] == 'C')
					line_edit_move_right(state);
				if (seq[1] == 'D')
					line_edit_move_left(state);
				if (seq[1] == 'H')
					line_edit_move_home(state);
				if (seq[1] == 'F')
					line_edit_move_end(state);
			}
		}
		else if (seq[0] == 'O')
		{
			if (seq[1] == 'H')
				line_edit_move_home(state);
			if (seq[1] == 'F')
				line_edit_move_end(state);
		}
	}
	else if (c == K_CTRL_U)
	{
		string_clear(&state->buf);
		state->pos = 0;
		line_refresh_line(state);
	}
	else if (c == K_CTRL_K)
	{
		string_clear_after(&state->buf, state->pos);
		line_refresh_line(state);
	}
	else if (c == K_CTRL_A)
		line_edit_move_home(state);
	else if (c == K_CTRL_E)
		line_edit_move_end(state);
	else if (c == K_CTRL_L)
	{
		line_clear_screen(state->output_fd);
		line_refresh_line(state);
	}
	else if (line_edit_insert(state, c))
		return (NULL);
	return ((t_str)get_unfinished_str());
}

/* This is part of the multiplexed linenoise API. See linenoiseEditStart()
 * for more information. This function is called when linenoiseEditFeed()
 * returns something different than NULL. At this point the user input
 * is in the buffer, and we can restore the terminal in normal mode. */
void	line_edit_stop(t_line_state *state)
{
	if (!isatty(state->input_fd->fd))
		return ;
	line_disable_raw_mode(state->input_fd);
	me_printf_fd(state->output_fd, "\n");
	string_free(state->buf);
}
