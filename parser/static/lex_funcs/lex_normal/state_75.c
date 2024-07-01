/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_75.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s375(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_string_content, lexer, s);
	if (s->lookahead == '"')
		return (lex_advance(368, lexer, s));
	if (s->lookahead == '#')
		return (lex_advance(378, lexer, s));
	if (s->lookahead == '$')
		return (lex_advance(366, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(125, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(403, lexer, s));
	if ((s->lookahead == '\n' || s->lookahead == '\r'))
		return (lex_skip(195, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_advance(375, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(376, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s376(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_string_content, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(120, lexer, s));
	if ((s->lookahead != 0 && s->lookahead != '\n' && \
	s->lookahead != '\r' && s->lookahead != '"' && \
	s->lookahead != '$' && s->lookahead != '`'))
		return (lex_advance(376, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s377(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_string_content, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(120, lexer, s));
	if ((s->lookahead != 0 && s->lookahead != '\r' && \
	s->lookahead != '"' && s->lookahead != '$' && s->lookahead \
	!= '`'))
		return (lex_advance(376, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s378(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_string_content, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(405, lexer, s));
	if ((s->lookahead != 0 && s->lookahead != '\n' && \
	s->lookahead != '\r' && s->lookahead != '"' && \
	s->lookahead != '$' && s->lookahead != '`'))
		return (lex_advance(378, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s379(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_raw_string, lexer, s);
	return (lex_end_state(lexer, s));
}
