/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line_edit_actions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 18:24:03 by maiboyer          #+#    #+#             */
/*   Updated: 2024/07/30 18:03:01 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "line/_line_functions.h"
#include "line/_line_structs.h"
#include "me/printf/printf.h"

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
