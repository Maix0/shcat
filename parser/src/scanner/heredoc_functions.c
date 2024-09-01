/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heredoc_functions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 19:36:53 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/01 19:54:13 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/char/char.h"
#include "me/str/str.h"
#include "me/types.h"
#include "me/vec/vec_heredoc.h"
#include "parser/inner/heredoc.h"
#include "parser/inner/scanner.h"
#include "parser/parser.h"

bool	scan_heredoc_end_identifier(t_heredoc *heredoc, TSLexer *lexer);

bool	scan_heredoc_content_nullbyte(struct s_heredoc_scan_state *state)
{
	if (state->lexer->eof(state->lexer) && state->did_advance)
	{
		reset_heredoc(state->heredoc);
		state->lexer->result_symbol = state->end_type;
		return (state->return_value = true, true);
	}
	return (state->return_value = false, true);
}

bool	scan_heredoc_content_backslash(struct s_heredoc_scan_state *state)
{
	state->did_advance = true;
	state->lexer->advance(state->lexer, false);
	state->lexer->advance(state->lexer, false);
	return (false);
}

bool	scan_heredoc_content_dollar(struct s_heredoc_scan_state *state)
{
	if (state->heredoc->is_raw)
	{
		state->did_advance = true;
		state->lexer->advance(state->lexer, false);
	}
	if (state->did_advance)
	{
		state->lexer->mark_end(state->lexer);
		state->lexer->result_symbol = state->middle_type;
		state->heredoc->started = true;
		state->lexer->advance(state->lexer, false);
		if (me_isalpha(state->lexer->lookahead)
			|| state->lexer->lookahead == '{' || state->lexer->lookahead == '(')
			return (state->return_value = true, true);
	}
	if (state->middle_type == HEREDOC_BODY_BEGINNING
		&& state->lexer->get_column(state->lexer) == 0)
	{
		state->lexer->result_symbol = state->middle_type;
		state->heredoc->started = true;
		return (state->return_value = true, true);
	}
	return (state->return_value = false, true);
}

bool	scan_heredoc_content_newline(struct s_heredoc_scan_state *state)
{
	if (!state->did_advance)
		state->lexer->advance(state->lexer, true);
	else
		state->lexer->advance(state->lexer, false);
	state->did_advance = true;
	if (state->heredoc->allows_indent)
	{
		while (me_isspace(state->lexer->lookahead))
			state->lexer->advance(state->lexer, false);
	}
	state->lexer->result_symbol = state->end_type;
	if (state->heredoc->started)
		state->lexer->result_symbol = state->middle_type;
	state->lexer->mark_end(state->lexer);
	if (scan_heredoc_end_identifier(state->heredoc, state->lexer))
	{
		if (state->lexer->result_symbol == HEREDOC_END)
			vec_heredoc_pop(&state->scanner->heredocs, NULL);
		return (state->return_value = true, true);
	}
	return (false);
}

bool	scan_heredoc_content_other(struct s_heredoc_scan_state *state)
{
	if (state->lexer->get_column(state->lexer) == 0)
	{
		while (me_isspace(state->lexer->lookahead))
		{
			if (state->did_advance)
				state->lexer->advance(state->lexer, false);
			else
				state->lexer->advance(state->lexer, true);
		}
		if (state->end_type != SIMPLE_HEREDOC_BODY)
		{
			state->lexer->result_symbol = state->middle_type;
			if (scan_heredoc_end_identifier(state->heredoc, state->lexer))
				return (state->return_value = true, true);
		}
		if (state->end_type == SIMPLE_HEREDOC_BODY)
		{
			state->lexer->result_symbol = state->end_type;
			state->lexer->mark_end(state->lexer);
			if (scan_heredoc_end_identifier(state->heredoc, state->lexer))
				return (state->return_value = true, true);
		}
	}
	state->did_advance = true;
	state->lexer->advance(state->lexer, false);
	return (false);
}
