/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_73.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s365(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_string_content, lexer, s);
	if (lex_normal_map365(lexer, s))
		return (true);
	if ((s->lookahead == '\n' || s->lookahead == '\r'))
		return (lex_skip(175, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_advance(365, lexer, s));
	if (((s->lookahead >= '1' && s->lookahead <= '9') || \
	(s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	(s->lookahead >= 'a' && s->lookahead <= 'z')))
		return (lex_advance(410, lexer, s));
	if ((s->lookahead != 0 && (s->lookahead > '_' && \
	s->lookahead < 'z')))
		return (lex_advance(368, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s366(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_string_content, lexer, s);
	if (lex_normal_map366(lexer, s))
		return (true);
	if ((s->lookahead == '\n' || s->lookahead == '\r'))
		return (lex_skip(179, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_advance(366, lexer, s));
	if (((s->lookahead >= '1' && s->lookahead <= '9') || \
	(s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	(s->lookahead >= 'a' && s->lookahead <= 'z')))
		return (lex_advance(410, lexer, s));
	if ((s->lookahead != 0 && (s->lookahead > ' ' && \
	s->lookahead < '$') && (s->lookahead > '_' && s->lookahead \
	< 'z')))
		return (lex_advance(368, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s367(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_string_content, lexer, s);
	if (s->lookahead == '"')
		return (lex_advance(360, lexer, s));
	if (s->lookahead == '#')
		return (lex_advance(370, lexer, s));
	if (s->lookahead == '$')
		return (lex_advance(358, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(122, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(395, lexer, s));
	if ((s->lookahead == '\n' || s->lookahead == '\r'))
		return (lex_skip(192, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_advance(367, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(368, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s368(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_string_content, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(117, lexer, s));
	if ((s->lookahead != 0 && s->lookahead != '\n' && \
	s->lookahead != '\r' && s->lookahead != '"' && \
	s->lookahead != '$' && s->lookahead != '`'))
		return (lex_advance(368, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s369(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_string_content, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(117, lexer, s));
	if ((s->lookahead != 0 && s->lookahead != '\r' && \
	s->lookahead != '"' && s->lookahead != '$' && s->lookahead \
	!= '`'))
		return (lex_advance(368, lexer, s));
	return (lex_end_state(lexer, s));
}
