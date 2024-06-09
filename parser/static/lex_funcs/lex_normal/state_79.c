/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_79.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s395(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_string_content, lexer, s);
	if (s->lookahead == '\n')
		return (lex_advance(398, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(129, lexer, s));
	if ((s->lookahead != 0 && s->lookahead != '\r' && \
	s->lookahead != '"' && s->lookahead != '$' && s->lookahead \
	!= '`'))
		return (lex_advance(399, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s396(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_string_content, lexer, s);
	if (lex_normal_map396(lexer, s))
		return (true);
	if ((s->lookahead == '\n' || s->lookahead == '\r'))
		return (lex_skip(194, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_advance(396, lexer, s));
	if (((s->lookahead >= '1' && s->lookahead <= '9') || \
	(s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	(s->lookahead >= 'a' && s->lookahead <= 'z')))
		return (lex_advance(449, lexer, s));
	if ((s->lookahead != 0 && (s->lookahead > '_' && \
	s->lookahead < 'z')))
		return (lex_advance(399, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s397(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_string_content, lexer, s);
	if (lex_normal_map397(lexer, s))
		return (true);
	if ((s->lookahead == '\n' || s->lookahead == '\r'))
		return (lex_skip(198, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_advance(397, lexer, s));
	if (((s->lookahead >= '1' && s->lookahead <= '9') || \
	(s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	(s->lookahead >= 'a' && s->lookahead <= 'z')))
		return (lex_advance(449, lexer, s));
	if ((s->lookahead != 0 && (s->lookahead > ' ' && \
	s->lookahead < '$') && (s->lookahead > '_' && s->lookahead \
	< 'z')))
		return (lex_advance(399, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s398(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_string_content, lexer, s);
	if (s->lookahead == '"')
		return (lex_advance(391, lexer, s));
	if (s->lookahead == '#')
		return (lex_advance(401, lexer, s));
	if (s->lookahead == '$')
		return (lex_advance(389, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(134, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(432, lexer, s));
	if ((s->lookahead == '\n' || s->lookahead == '\r'))
		return (lex_skip(210, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_advance(398, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(399, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s399(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_string_content, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(129, lexer, s));
	if ((s->lookahead != 0 && s->lookahead != '\n' && \
	s->lookahead != '\r' && s->lookahead != '"' && \
	s->lookahead != '$' && s->lookahead != '`'))
		return (lex_advance(399, lexer, s));
	return (lex_end_state(lexer, s));
}
