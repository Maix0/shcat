/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 16:53:27 by maiboyer          #+#    #+#             */
/*   Updated: 2024/07/10 16:37:02 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "line/_line_internal.h"
#include "line/line.h"
#include "me/fs/fs.h"
#include "me/gnl/gnl.h"
#include "me/mem/mem.h"
#include "me/printf/printf.h"
#include "me/str/str.h"
#include "me/string/string.h"
#include "me/types.h"
#include "me/vec/vec_str.h"
#include <errno.h>
#include <sys/ioctl.h>
#include <termios.h>

/* ======================= Low level terminal handling ====================== */

// FIXME: remove the sscanf here !
/* Use the ESC [6n escape sequence to query the horizontal cursor position
 * and return it. On error -1 is returned, on success the position of the
 * cursor. */
t_error	line_get_cursor_position(t_fd *input, t_fd *output, t_u32 *column_out)
{
	char	buf[32];
	t_u32	i;
	t_i32	cols;
	t_i32	rows;

	i = 0;
	if (write_fd(output, (t_u8 *)"\x1b[6n", 4, NULL))
		return (ERROR);
	while (i < sizeof(buf) - 1)
	{
		if (read_fd(input, (t_u8 *)(buf + i), 1, NULL))
			break ;
		if (buf[i] == 'R')
			break ;
		i++;
	}
	buf[i] = '\0';
	if (buf[0] != K_ESC && buf[1] != '[')
		return (ERROR);
	if (sscanf(buf + 2, "%d;%d", &rows, &cols) != 2)
		return (ERROR);
	return (*column_out = cols, NO_ERROR);
}

/* Try to get the number of columns in the current terminal, or assume 80
 * if it fails. */
t_u32	line_get_columns(t_fd *input, t_fd *output)
{
	struct winsize	ws;
	t_u32			cols;
	t_u32			start;

	if (ioctl(1, TIOCGWINSZ, &ws) == -1 || ws.ws_col == 0)
	{
		if (line_get_cursor_position(input, output, &start))
			return (80);
		me_printf_fd(output, "\x1b[999C");
		if (line_get_cursor_position(input, output, &cols))
			return (80);
		if (cols > start)
			me_printf_fd(output, "\x1b[%dD", cols - start);
		return (cols);
	}
	else
		return (ws.ws_col);
}

/* Clear the screen. Used to handle ctrl+l */
void	line_clear_screen(t_fd *output)
{
	me_printf_fd(output, "\x1b[H\x1b[2J");
}

/* Raw mode: 1960 magic shit. */
t_error	line_enable_raw_mode(t_fd *fd)
{
	struct termios		raw;
	t_raw_mode_state	*raw_state;

	raw_state = get_raw_mode_state();
	if (!isatty(fd->fd))
		return (errno = ENOTTY, ERROR);
	if (tcgetattr(fd->fd, &raw_state->state) == -1)
		return (errno = ENOTTY, ERROR);
	raw = raw_state->state;
	raw.c_iflag &= ~(BRKINT | ICRNL | INPCK | ISTRIP | IXON);
	raw.c_oflag &= ~(OPOST);
	raw.c_cflag |= (CS8);
	raw.c_lflag &= ~(ECHO | ICANON | IEXTEN | ISIG);
	raw.c_cc[VMIN] = 1;
	raw.c_cc[VTIME] = 0;
	if (tcsetattr(fd->fd, TCSAFLUSH, &raw) < 0)
		return (errno = ENOTTY, ERROR);
	raw_state->enabled = true;
	return (NO_ERROR);
}

void	line_disable_raw_mode(t_fd *fd)
{
	t_raw_mode_state	*state;

	state = get_raw_mode_state();
	if (state->enabled && tcsetattr(fd->fd, TCSAFLUSH, &state->state) != -1)
		state->enabled = false;
}

/* =========================== Line editing ================================= */

/* We define a very simple "append buffer" structure, that is an heap
 * allocated string where we can append to. This is useful in order to
 * write all the escape sequences in a buffer and flush them to the standard
 * output in a single call, to avoid flickering effects. */

void	_modify_vars(t_usize *a, t_usize *b, bool operation)
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
	t_isize	color;

	if ((_modify_vars(&i, &ret, false), true) && s == NULL)
		return (0);
	while (s[i])
	{
		if (s[i] == '\x1b' && s[i++] == '[')
		{
			color = ((void)(i++), 0);
			while (color >= 0)
			{
				while (((void)color--, true) && s[i] >= '0' && s[i] <= '9')
					color += ((void)(i++), 2);
				if (s[i] == ';')
					i++;
				else if (s[i] == 'm' && ((void)i++, true))
					break ;
			}
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
	string_free(str);
}

/* Utility function to avoid specifying REFRESH_ALL all the times. */
void	line_refresh_line(t_line_state *state)
{
	line_refresh(state, REFRESH_ALL);
}

/* Hide the current line, when using the multiplexing API. */
void	line_hide(t_line_state *state)
{
	line_refresh(state, REFRESH_CLEAN);
}

/* Show the current line, when using the multiplexing API. */
void	line_show(t_line_state *state)
{
	line_refresh(state, REFRESH_WRITE);
}

/* Insert the character 'c' at cursor current position.
 *
 * On error writing to the terminal -1 is returned, otherwise 0. */
t_error	line_edit_insert(t_line_state *state, char c)
{
	if (state->pos == state->buf.len)
	{
		if (string_push_char(&state->buf, c))
			return (ERROR);
	}
	else if (string_insert_char(&state->buf, state->pos, c))
		return (ERROR);
	state->pos++;
	line_refresh_line(state);
	return (NO_ERROR);
}

/* Move cursor on the left. */
void	line_edit_move_left(t_line_state *state)
{
	if (state->pos > 0)
	{
		state->pos--;
		line_refresh_line(state);
	}
}

/* Move cursor on the right. */
void	line_edit_move_right(t_line_state *state)
{
	if (state->pos != state->buf.len)
	{
		state->pos++;
		line_refresh_line(state);
	}
}

/* Move cursor to the start of the line. */
void	line_edit_move_home(t_line_state *state)
{
	if (state->pos != 0)
	{
		state->pos = 0;
		line_refresh_line(state);
	}
}

/* Move cursor to the end of the line. */
void	line_edit_move_end(t_line_state *state)
{
	if (state->pos != state->buf.len)
	{
		state->pos = state->buf.len;
		line_refresh_line(state);
	}
}

/* Substitute the currently edited line with the next or previous history
 * entry as specified by 'dir'. */
void	line_edit_history_next(t_line_state *state,
		t_history_direction direction)
{
	t_vec_str	*history;
	t_isize		dir;

	history = get_history();
	if (history->len > 1)
	{
		mem_free(history->buffer[history->len - 1 - state->history_index]);
		history->buffer[history->len - 1
			- state->history_index] = str_clone(state->buf.buf);
		dir = -1;
		if (direction == HIST_PREV)
			dir = 1;
		state->history_index += dir;
		if (state->history_index < 0)
			return ((void)(state->history_index = 0));
		else if ((t_usize)state->history_index >= history->len)
			return ((void)(state->history_index = history->len - 1));
		string_clear(&state->buf);
		string_push(&state->buf, history->buffer[history->len - 1
			- state->history_index]);
		state->pos = state->buf.len;
		line_refresh_line(state);
	}
}

/* Delete the character at the right of the cursor without altering the cursor
 * position. Basically this is what happens with the "Delete" keyboard key. */
void	line_edit_delete(t_line_state *state)
{
	string_remove(&state->buf, state->pos, NULL);
	line_refresh_line(state);
}

/* Backspace implementation. */
void	line_edit_backspace(t_line_state *state)
{
	if (state->pos > 0)
	{
		string_remove(&state->buf, state->pos - 1, NULL);
		state->pos--;
		line_refresh_line(state);
	}
}

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

/* This just implements a blocking loop for the multiplexed API.
 * In many applications that are not event-drivern, we can just call
 * the blocking linenoise API, wait for the user to complete the editing
 * and return the buffer. */
t_str	line_blocking_edit(t_fd *stdin_fd, t_fd *stdout_fd, t_const_str prompt)
{
	t_line_state	l;
	t_str			res;

	line_edit_start(&l, stdin_fd, stdout_fd, prompt);
	while ((res = line_edit_feed(&l)) == get_unfinished_str())
		;
	line_edit_stop(&l);
	return (res);
}

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

/* The high level function that is the main API of the linenoise library.
 * This function checks if the terminal has basic capabilities, just checking
 * for a blacklist of stupid terminals, and later either calls the line
 * editing function or uses dummy fgets() so that you will be able to type
 * something even in the most desperate of the conditions. */
t_str	linenoise(t_const_str prompt)
{
	t_str	retval;

	if (!isatty(get_stdin()->fd))
		return (line_no_tty_impl());
	retval = line_blocking_edit(get_stdin(), get_stdout(), prompt);
	return (retval);
}

/* ================================ History ================================= */

/* This is the API call to add a new entry in the linenoise history.
 * It uses a fixed array of char pointers that are shifted (memmoved)
 * when the history max length is reached in order to remove the older
 * entry and make room for the new one, so it is not exactly suitable for huge
 * histories, but will work well for a few hundred of entries.
 *
 * Using a circular buffer is smarter, but a bit more complex to handle. */
bool	line_history_add(t_const_str line)
{
	t_str		linecopy;
	t_vec_str	*history;

	history = get_history();
	if (history->len != 0 && str_compare(history->buffer[history->len - 1], line))
		return (false);
	linecopy = str_clone(line);
	if (linecopy == NULL)
		return (false);
	vec_str_push(history, linecopy);
	return (true);
}

/* Save the history in the specified file. On success 0 is returned
 * otherwise -1 is returned. */
t_error	line_history_save(t_str name)
{
	t_fd		*fd;
	t_usize		j;
	t_vec_str	*history;

	history = get_history();
	fd = open_fd(name, FD_READ, FD_CLOSE_ON_EXEC | FD_TRUNCATE | FD_CREATE, \
		FP_OWRITE);
	if (fd == NULL)
		return (ERROR);
	j = 0;
	while (j < history->len)
	{
		write_fd(fd, (t_u8 *)history->buffer[j], str_len(history->buffer[j]),
			NULL);
		write_fd(fd, (t_u8 *)"\n", 1, NULL);
		j++;
	}
	close_fd(fd);
	return (NO_ERROR);
}

t_error	gnl_wrapper(t_fd *fd, t_string *out)
{
	bool		error;
	t_string	value;

	if (out == NULL || fd == NULL)
		return (ERROR);
	value = get_next_line(fd->fd, &error);
	if (error)
		return (ERROR);
	return (*out = value, NO_ERROR);
}

/* Load the history from the specified file. If the file does not exist
 * zero is returned and no operation is performed.
 *
 * If the file exists and the operation succeeded 0 is returned, otherwise
 * on error -1 is returned. */
t_error	line_history_load(t_str name)
{
	t_fd		*fd;
	t_string	tmp;
	t_vec_str	*history;

	fd = open_fd(name, FD_READ, FD_CLOSE_ON_EXEC, FP_ALL_READ);
	if (fd == NULL)
		return (ERROR);
	history = get_history();
	while (!gnl_wrapper(fd, &tmp))
	{
		while (tmp.len != 0 && (tmp.buf[tmp.len - 1] == '\n' || \
			tmp.buf[tmp.len - 1] == '\r'))
			string_pop(&tmp);
		vec_str_push(history, tmp.buf);
	}
	close_fd(fd);
	return (NO_ERROR);
}
