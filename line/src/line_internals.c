/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line_internals.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 18:18:46 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:51:33 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "line/_line_functions.h"
#include "line/_line_internal.h"
#include "line/_line_structs.h"
#include "me/printf/printf.h"
#include "me/types.h"

#include <sys/ioctl.h>
#include <errno.h>

/* ======================= Low level terminal handling ====================== */

/* Use the ESC [6n escape sequence to query the horizontal cursor position
 * and return it. On error -1 is returned, on success the position of the
 * cursor. */
/*t_error	line_get_cursor_position( \
	t_fd *input, t_fd *output, t_u32 *column_out)
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
*/

/* Try to get the number of columns in the current terminal, or assume 80
 * if it fails. */
/*
 // This was inside the if body
		t_u32			cols;
		t_u32			start;
		if (line_get_cursor_position(input, output, &start))
			return (80);
		me_printf_fd(output, "\x1b[999C");
		if (line_get_cursor_position(input, output, &cols))
			return (80);
		if (cols > start)
			me_printf_fd(output, "\x1b[%dD", cols - start);
 */
t_u32	line_get_columns(t_fd *input, t_fd *output)
{
	struct winsize	ws;

	(void)(input);
	(void)(output);
	if (ioctl(1, TIOCGWINSZ, &ws) == -1 || ws.ws_col == 0)
	{
		return (80);
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
