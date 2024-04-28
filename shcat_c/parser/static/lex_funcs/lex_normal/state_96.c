/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_96.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/28 19:04:01 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s480(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '"')
		return (lex_advance(788, lexer, s));
	if (s->lookahead == '#')
		return (lex_advance(797, lexer, s));
	if (s->lookahead == '$')
		return (lex_advance(783, lexer, s));
	if (s->lookahead == '(')
		return (lex_advance(796, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(302, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(855, lexer, s));
	if ((s->lookahead == '\n' || s->lookahead == '\r'))
		return (lex_skip(480, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_advance(795, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(798, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s481(t_lexer *lexer, t_lexer_state *s)
{
	if (lex_normal_map481(lexer, s))
		return (true);
	if (s->lookahead == '\\')
		return (lex_skip(375, lexer, s));
	if (s->lookahead == '^')
		return (lex_advance(598, lexer, s));
	if (s->lookahead == '}')
		return (lex_advance(818, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(482, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s482(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '#')
		return (lex_advance(816, lexer, s));
	if (s->lookahead == '%')
		return (lex_advance(648, lexer, s));
	if (s->lookahead == ',')
		return (lex_advance(558, lexer, s));
	if (s->lookahead == '/')
		return (lex_advance(643, lexer, s));
	if (s->lookahead == ':')
		return (lex_advance(762, lexer, s));
	if (s->lookahead == '[')
		return (lex_advance(673, lexer, s));
	if (s->lookahead == '\\')
		return (lex_skip(375, lexer, s));
	if (s->lookahead == '^')
		return (lex_advance(598, lexer, s));
	if (s->lookahead == '}')
		return (lex_advance(818, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(482, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s483(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '#')
		return (lex_advance(862, lexer, s));
	if (s->lookahead == '$')
		return (lex_advance(515, lexer, s));
	if (s->lookahead == '&')
		return (lex_advance(489, lexer, s));
	if (s->lookahead == '-')
		return (lex_advance(504, lexer, s));
	if ((s->lookahead == '[' || (s->lookahead >= '{' && \
	s->lookahead <= '}')))
		return (lex_advance(786, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(483, lexer, s));
	if ((s->lookahead >= '1' && s->lookahead <= '9'))
		return (lex_advance(810, lexer, s));
	if (((s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	(s->lookahead >= '_' && s->lookahead <= 'z')))
		return (lex_advance(879, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s484(t_lexer *lexer, t_lexer_state *s)
{
	if (lex_normal_map484(lexer, s))
		return (true);
	if (s->lookahead == '\\')
		return (lex_skip(387, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(510, lexer, s));
	if (s->lookahead == '|')
		return (lex_advance(593, lexer, s));
	if (((s->lookahead >= '[' && s->lookahead <= ']') || \
	(s->lookahead >= '{' && s->lookahead <= '}')))
		return (lex_advance(786, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(484, lexer, s));
	return (lex_end_state(lexer, s));
}
