/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_88.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s440(t_lexer *lexer, t_lexer_state *s)
{
	if (lex_normal_map440(lexer, s))
		return (true);
	if (s->lookahead == '\\')
		return (lex_skip(356, lexer, s));
	if (s->lookahead == ']')
		return (lex_advance(787, lexer, s));
	if (s->lookahead == '^')
		return (lex_advance(597, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(510, lexer, s));
	if (s->lookahead == '|')
		return (lex_advance(594, lexer, s));
	if ((s->lookahead == '[' || (s->lookahead >= '{' && \
	s->lookahead <= '}')))
		return (lex_advance(786, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(440, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s441(t_lexer *lexer, t_lexer_state *s)
{
	if (lex_normal_map441(lexer, s))
		return (true);
	if (s->lookahead == '\\')
		return (lex_skip(368, lexer, s));
	if (s->lookahead == '^')
		return (lex_advance(597, lexer, s));
	if (s->lookahead == '|')
		return (lex_advance(594, lexer, s));
	if (s->lookahead == '}')
		return (lex_advance(778, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(442, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s442(t_lexer *lexer, t_lexer_state *s)
{
	if (lex_normal_map442(lexer, s))
		return (true);
	if (s->lookahead == '\\')
		return (lex_skip(368, lexer, s));
	if (s->lookahead == '^')
		return (lex_advance(597, lexer, s));
	if (s->lookahead == '|')
		return (lex_advance(594, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(442, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s443(t_lexer *lexer, t_lexer_state *s)
{
	if (lex_normal_map443(lexer, s))
		return (true);
	if (s->lookahead == '\\')
		return (lex_skip(361, lexer, s));
	if (s->lookahead == '^')
		return (lex_advance(597, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(510, lexer, s));
	if (s->lookahead == '|')
		return (lex_advance(594, lexer, s));
	if (((s->lookahead >= '[' && s->lookahead <= ']') || \
	(s->lookahead >= '{' && s->lookahead <= '}')))
		return (lex_advance(786, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(443, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s444(t_lexer *lexer, t_lexer_state *s)
{
	if (lex_normal_map444(lexer, s))
		return (true);
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(444, lexer, s));
	if (((s->lookahead >= '1' && s->lookahead <= '9') || \
	(s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	(s->lookahead >= 'a' && s->lookahead <= 'z')))
		return (lex_advance(879, lexer, s));
	return (lex_end_state(lexer, s));
}
