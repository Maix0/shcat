/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line_edit_actions2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 18:24:49 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:51:31 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "line/_line_functions.h"
#include "line/_line_internal.h"
#include "line/_line_structs.h"
#include "me/mem/mem.h"
#include "me/str/str.h"
#include "me/vec/vec_str.h"

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

// use this to print when a backspace
// fprintf(stderr, "\x1b[A\x1b[A\x1b[D backspace \x1b[B\x1b[B\x1b[10D");
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
