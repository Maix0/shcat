/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 16:53:27 by maiboyer          #+#    #+#             */
/*   Updated: 2024/07/10 15:47:55 by maiboyer         ###   ########.fr       */
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
#include <ctype.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/ioctl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <termios.h>
#include <unistd.h>

#define lndebug(fmt, ...)

/* ======================= Low level terminal handling ====================== */

/* Use the ESC [6n escape sequence to query the horizontal cursor position
 * and return it. On error -1 is returned, on success the position of the
 * cursor. */
t_error	line_get_cursor_position(t_fd *input, t_fd *output, t_u32 *column_out)
{
	char			buf[32];
	unsigned int	i;

	int cols, rows;
	i = 0;
	/* Report cursor location */
	if (write_fd(output, (t_u8 *)"\x1b[6n", 4, NULL))
		return (ERROR);
	/* Read the response: ESC [ rows ; cols R */
	while (i < sizeof(buf) - 1)
	{
		if (read_fd(input, (t_u8 *)(buf + i), 1, NULL))
			break ;
		if (buf[i] == 'R')
			break ;
		i++;
	}
	buf[i] = '\0';
	/* Parse it. */
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
		/* ioctl() failed. Try to query the terminal itself. */
		/* Get the initial position so we can restore it later. */
		if (line_get_cursor_position(input, output, &start))
			return (80);
		/* Go to right margin and get position. */
		me_printf_fd(output, "\x1b[999C");
		if (line_get_cursor_position(input, output, &cols))
			return (80);
		if (cols > start)
		{
			me_printf_fd(output, "\x1b[%dD", cols - start);
		}
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
	raw = raw_state->state; /* modify the original mode */
	/* input modes: no break, no CR to NL, no parity check, no strip char,
		* no start/stop output control. */
	raw.c_iflag &= ~(BRKINT | ICRNL | INPCK | ISTRIP | IXON);
	/* output modes - disable post processing */
	raw.c_oflag &= ~(OPOST);
	/* control modes - set 8 bit chars */
	raw.c_cflag |= (CS8);
	/* local modes - choing off, canonical off, no extended functions,
		* no signal chars (^Z,^C) */
	raw.c_lflag &= ~(ECHO | ICANON | IEXTEN | ISIG);
	/* control chars - set return condition: min number of bytes and timer.
		* We want read to return every single byte, without timeout. */
	raw.c_cc[VMIN] = 1;
	raw.c_cc[VTIME] = 0; /* 1 byte, no timer */
	/* put terminal in raw mode after flushing */
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

t_usize	line_get_prompt_len(t_const_str s)
{
	t_usize	i;
	t_usize	ret;
	t_isize	color;

	if (s == NULL)
		return (0);
	i = 0;
	ret = 0;
	while (s[i])
	{
		if (s[i] == '\x1b')
		{
			i++;
			if (s[i] == '[')
			{
				i++;
				color = 0;
				while (color >= 0)
				{
					color--;
					while (s[i] >= '0' && s[i] <= '9')
					{
						i++;
						color += 2;
					}
					if (s[i] == ';')
						i++;
					else if (s[i] == 'm')
					{
						i++;
						break ;
					}
				}
			}
		}
		i++;
		ret++;
	}
	// printf("ret = %zu\n", ret);
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

	history = get_history();
	if (history->len > 1)
	{
		/* Update the current history entry before to
			* overwrite it with the next one. */
		mem_free(history->buffer[history->len - 1 - state->history_index]);
		history->buffer[history->len - 1
			- state->history_index] = str_clone(state->buf.buf);
		/* Show the new entry */
		state->history_index += (direction == HIST_PREV) ? 1 : -1;
		if (state->history_index < 0)
		{
			state->history_index = 0;
			return ;
		}
		else if ((t_usize)state->history_index >= history->len)
		{
			state->history_index = history->len - 1;
			return ;
		}
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
	/* Populate the linenoise state that we pass to functions implementing
		* specific editing functionalities. */
	state->input_fd = stdin_fd;
	state->output_fd = stdout_fd;
	state->buf = string_new(4096);
	state->prompt = prompt;
	state->prompt_len = str_len(state->prompt);
	state->pos = 0;
	/* Enter raw mode. */
	if (line_enable_raw_mode(state->input_fd))
		return (ERROR);
	state->columns = line_get_columns(stdin_fd, stdout_fd);
	state->history_index = 0;
	/* If stdin is not a tty, stop here with the initialization. We
		* will actually just read a line from standard input in blocking
		* mode later, in linenoiseEditFeed(). */
	if (!isatty(state->input_fd->fd))
		return (NO_ERROR);
	/* The latest history entry is always our current buffer, that
		* initially is just an empty string. */
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

	/* Not a TTY, pass control to line reading without character
		* count limits. */
	if (!isatty(state->input_fd->fd))
		return (line_no_tty_impl());
	history = get_history();
	if (read_fd(state->input_fd, (t_u8 *)&c, 1, &nread))
		return (NULL);
	switch (c)
	{
	case K_NEWLINE: /* enter */
	case K_ENTER:   /* enter */
		if (!vec_str_pop(history, &tmp))
			mem_free(tmp);
		return (str_clone(state->buf.buf));
	case K_CTRL_C: /* ctrl-c */
		return (errno = EAGAIN, NULL);
	case K_BACKSPACE: /* backspace */
	case K_CTRL_H:    /* ctrl-h */
		line_edit_backspace(state);
		break ;
	case K_CTRL_D: /* ctrl-d, remove char at right of cursor, or if the
					line is empty, act as end-of-file. */
		if (state->buf.len > 0)
			line_edit_delete(state);
		else
		{
			history->len--;
			mem_free(history->buffer[history->len]);
			return (errno = ENOENT, NULL);
		}
		break ;
	case K_CTRL_B: /* ctrl-b */
		line_edit_move_left(state);
		break ;
	case K_CTRL_F: /* ctrl-f */
		line_edit_move_right(state);
		break ;
	case K_CTRL_P: /* ctrl-p */
		line_edit_history_next(state, HIST_PREV);
		break ;
	case K_CTRL_N: /* ctrl-n */
		line_edit_history_next(state, HIST_NEXT);
		break ;
	case K_ESC: /* escape sequence */
		/* Read the next two bytes representing the escape sequence.
			* Use two calls to handle slow terminals returning the two
			* chars at different times. */
		if (read_fd(state->input_fd, (t_u8 *)seq, 1, NULL))
			break ;
		if (read_fd(state->input_fd, (t_u8 *)(seq + 1), 1, NULL))
			break ;
		/* ESC [ sequences. */
		if (seq[0] == '[')
		{
			if (seq[1] >= '0' && seq[1] <= '9')
			{
				/* Extended escape, read additional byte. */
				if (read_fd(state->input_fd, (t_u8 *)(seq + 2), 1, NULL))
					break ;
				if (seq[1] == '3' && seq[2] == '~')
					line_edit_delete(state);
			}
			else
			{
				switch (seq[1])
				{
				case 'A': /* Up */
					line_edit_history_next(state, HIST_PREV);
					break ;
				case 'B': /* Down */
					line_edit_history_next(state, HIST_NEXT);
					break ;
				case 'C': /* Right */
					line_edit_move_right(state);
					break ;
				case 'D': /* Left */
					line_edit_move_left(state);
					break ;
				case 'H': /* Home */
					line_edit_move_home(state);
					break ;
				case 'F': /* End*/
					line_edit_move_end(state);
					break ;
				}
			}
		}
		/* ESC O sequences. */
		else if (seq[0] == 'O')
		{
			switch (seq[1])
			{
			case 'H': /* Home */
				line_edit_move_home(state);
				break ;
			case 'F': /* End*/
				line_edit_move_end(state);
				break ;
			}
		}
		break ;
	case K_CTRL_U: /* Ctrl+u, delete the whole line. */
		string_clear(&state->buf);
		state->pos = 0;
		line_refresh_line(state);
		break ;
	case K_CTRL_K: /* Ctrl+k, delete from current to end of line. */
		string_clear_after(&state->buf, state->pos);
		line_refresh_line(state);
		break ;
	case K_CTRL_A: /* Ctrl+a, go to the start of the line */
		line_edit_move_home(state);
		break ;
	case K_CTRL_E: /* ctrl+e, go to the end of the line */
		line_edit_move_end(state);
		break ;
	case K_CTRL_L: /* ctrl+l, clear screen */
		line_clear_screen(state->output_fd);
		line_refresh_line(state);
		break ;
	default:
		if (line_edit_insert(state, c))
			return (NULL);
		break ;
	}
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

/* This special mode is used by linenoise in order to print scan codes
 * on screen for debugging / development purposes. It is implemented
 * by the line_example program using the --keycodes option. */
void	line_print_key_codes(void)
{
	char	quit[4];
	char	c;
	t_isize	nread;

	printf("Linenoise key codes debugging mode.\n"
			"Press keys to see scan codes. Type 'quit' at any time to exit.\n");
	// if (enableRawMode(STDIN_FILENO) == -1)
	//	return ;
	mem_set(quit, ' ', 4);
	while (1)
	{
		if (read_fd(get_stdin(), (void *)&c, 1, &nread))
			continue ;
		if (nread <= 0)
			continue ;
		mem_move(quit, quit + 1, sizeof(quit) - 1); /* shift string to left. */
		quit[sizeof(quit) - 1] = c;
		/* Insert current char on the right. */
		if (mem_compare(quit, "quit", sizeof(quit)))
			break ;
		printf("'%c' %02x (%d) (type quit to exit)\n", isprint(c) ? c : '?',
			(int)c, (int)c);
		printf("\r"); /* Go left edge manually, we are in raw mode. */
		fflush(stdout);
	}
	// disableRawMode(STDIN_FILENO);
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
	{
		/* Not a tty: read from file / pipe. In this mode we don't want any
			* limit to the line size, so we call a function to handle that. */
		return (line_no_tty_impl());
	}
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
	if (history->len != 0 && !strcmp(history->buffer[history->len - 1], line))
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
	fd = open_fd(name, FD_READ, FD_CLOSE_ON_EXEC | FD_TRUNCATE | FD_CREATE,
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
		while (tmp.len != 0 && (tmp.buf[tmp.len - 1] == '\n' || tmp.buf[tmp.len
				- 1] == '\r'))
			string_pop(&tmp);
		vec_str_push(history, tmp.buf);
	}
	close_fd(fd);
	return (NO_ERROR);
}
