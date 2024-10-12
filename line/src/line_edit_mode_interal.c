/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line_edit_mode_interal.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 17:19:01 by maiboyer          #+#    #+#             */
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

bool	line_edit_feed_block2(t_line_state *state, t_str *out, char c)
{
	(void)(out);
	if (c == K_CTRL_A)
		line_edit_move_home(state);
	else if (c == K_CTRL_E)
		line_edit_move_end(state);
	else if (c == K_CTRL_L)
	{
		line_clear_screen(state->output_fd);
		line_refresh_line(state);
	}
	else
		return (false);
	return (true);
}

bool	line_edit_feed_block1(t_line_state *state, t_str *out, char c)
{
	if (c == K_BACKSPACE || c == K_CTRL_H)
		line_edit_backspace(state);
	else if (c == K_CTRL_B)
		line_edit_move_left(state);
	else if (c == K_CTRL_F)
		line_edit_move_right(state);
	else if (c == K_CTRL_P)
		line_edit_history_next(state, HIST_PREV);
	else if (c == K_CTRL_N)
		line_edit_history_next(state, HIST_PREV);
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
	else
		return (line_edit_feed_block2(state, out, c));
	return (true);
}

bool	line_edit_feed_block_ret(t_line_state *state, t_str *out, \
								char c, bool *ret)
{
	char	seq[3];

	if (line_edit_feed_block1(state, out, c))
		*ret = false;
	else if (c == K_CTRL_C)
	{
		errno = EAGAIN;
		*out = NULL;
		*ret = false;
	}
	else if (c == K_NEWLINE || c == K_ENTER)
		*ret = line_edit_feed_enter(state, out, seq);
	else if (c == K_CTRL_D)
		*ret = line_edit_feed_ctrld(state, out, seq);
	else if (c == K_ESC)
		*ret = line_edit_feed_esc(state, out, seq);
	else if (c == K_SIGQUIT)
		*ret = false;
	else if (c <= '\x1F')
		*ret = false;
	else
		return (false);
	return (true);
}
