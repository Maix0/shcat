/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line_edit_mode_specific_key.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 17:46:26 by maiboyer          #+#    #+#             */
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

bool	line_edit_feed_esc(t_line_state *state, t_str *out, char *seq);
bool	line_edit_feed_ctrld(t_line_state *state, t_str *out, char *seq);
bool	line_edit_feed_enter(t_line_state *state, t_str *out, char *seq);

void	line_edit_feed_esc_inner(t_line_state *state, t_str *out, char *seq)
{
	(void)(out);
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

bool	line_edit_feed_esc(t_line_state *state, t_str *out, char *seq)
{
	if (read_fd(state->input_fd, (t_u8 *)seq, 1, NULL))
		return (false);
	if (read_fd(state->input_fd, (t_u8 *)(seq + 1), 1, NULL))
		return (false);
	if (seq[0] == '[')
	{
		if (seq[1] >= '0' && seq[1] <= '9')
		{
			if (read_fd(state->input_fd, (t_u8 *)(seq + 2), 1, NULL))
				return (false);
			if (seq[1] == '3' && seq[2] == '~')
				line_edit_delete(state);
		}
		else
			line_edit_feed_esc_inner(state, out, seq);
	}
	else if (seq[0] == 'O')
	{
		if (seq[1] == 'H')
			line_edit_move_home(state);
		if (seq[1] == 'F')
			line_edit_move_end(state);
	}
	return (false);
}

bool	line_edit_feed_enter(t_line_state *state, t_str *out, char *seq)
{
	t_str		tmp;
	t_vec_str	*history;

	(void)(seq);
	history = get_history();
	if (!vec_str_pop(history, &tmp))
		mem_free(tmp);
	return (*out = str_clone(state->buf.buf), true);
}

bool	line_edit_feed_ctrld(t_line_state *state, t_str *out, char *seq)
{
	t_vec_str	*history;

	(void)(seq);
	history = get_history();
	if (state->buf.len > 0)
		line_edit_delete(state);
	else
	{
		history->len--;
		mem_free(history->buffer[history->len]);
		return (errno = ENOENT, *out = NULL, true);
	}
	return (false);
}
