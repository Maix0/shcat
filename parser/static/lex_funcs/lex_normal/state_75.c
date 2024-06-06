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
	if (s->lookahead == '\n')
		return (lex_advance(381, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(419, lexer, s));
	if ((s->lookahead != 0 && s->lookahead != '\r' && \
	s->lookahead != '"' && s->lookahead != '$' && s->lookahead \
	!= '`'))
		return (lex_advance(383, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s376(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_string_content, lexer, s);
	if (s->lookahead == '\n')
		return (lex_advance(380, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(134, lexer, s));
	if ((s->lookahead != 0 && s->lookahead != '\r' && \
	s->lookahead != '"' && s->lookahead != '$' && s->lookahead \
	!= '`'))
		return (lex_advance(381, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s377(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_string_content, lexer, s);
	if (s->lookahead == '\n')
		return (lex_advance(379, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(134, lexer, s));
	if ((s->lookahead != 0 && s->lookahead != '\r' && \
	s->lookahead != '"' && s->lookahead != '$' && s->lookahead \
	!= '`'))
		return (lex_advance(381, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s378(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_string_content, lexer, s);
	if (lex_normal_map378(lexer, s))
		return (true);
	if ((s->lookahead == '\n' || s->lookahead == '\r'))
		return (lex_skip(177, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_advance(378, lexer, s));
	if (((s->lookahead >= '1' && s->lookahead <= '9') || \
	(s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	(s->lookahead >= 'a' && s->lookahead <= 'z')))
		return (lex_advance(438, lexer, s));
	if ((s->lookahead != 0 && (s->lookahead > '_' && \
	s->lookahead < 'z')))
		return (lex_advance(381, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s379(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_string_content, lexer, s);
	if (lex_normal_map379(lexer, s))
		return (true);
	if ((s->lookahead == '\n' || s->lookahead == '\r'))
		return (lex_skip(181, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_advance(379, lexer, s));
	if (((s->lookahead >= '1' && s->lookahead <= '9') || \
	(s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	(s->lookahead >= 'a' && s->lookahead <= 'z')))
		return (lex_advance(438, lexer, s));
	if ((s->lookahead != 0 && (s->lookahead > ' ' && \
	s->lookahead < '$') && (s->lookahead > '_' && s->lookahead \
	< 'z')))
		return (lex_advance(381, lexer, s));
	return (lex_end_state(lexer, s));
}
