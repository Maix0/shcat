/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_86.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s430(t_lexer *lexer, t_lexer_state *s)
{
	if (lex_normal_map430(lexer, s))
		return (true);
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(430, lexer, s));
	if (((s->lookahead >= '1' && s->lookahead <= '9') || \
	(s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	(s->lookahead >= 'a' && s->lookahead <= 'z')))
		return (lex_advance(879, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s431(t_lexer *lexer, t_lexer_state *s)
{
	if (lex_normal_map431(lexer, s))
		return (true);
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(431, lexer, s));
	if (((s->lookahead >= '1' && s->lookahead <= '9') || \
	(s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	(s->lookahead >= 'a' && s->lookahead <= 'z')))
		return (lex_advance(879, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s432(t_lexer *lexer, t_lexer_state *s)
{
	if (lex_normal_map432(lexer, s))
		return (true);
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(432, lexer, s));
	if (((s->lookahead >= '1' && s->lookahead <= '9') || \
	(s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	(s->lookahead >= 'a' && s->lookahead <= 'z')))
		return (lex_advance(879, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s433(t_lexer *lexer, t_lexer_state *s)
{
	if (lex_normal_map433(lexer, s))
		return (true);
	if (s->lookahead == '\\')
		return (lex_skip(345, lexer, s));
	if (s->lookahead == ']')
		return (lex_advance(509, lexer, s));
	if (s->lookahead == '^')
		return (lex_advance(597, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(855, lexer, s));
	if (s->lookahead == 'e')
		return (lex_advance(514, lexer, s));
	if (s->lookahead == 'i')
		return (lex_advance(513, lexer, s));
	if (s->lookahead == '|')
		return (lex_advance(594, lexer, s));
	if (s->lookahead == '}')
		return (lex_advance(818, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(434, lexer, s));
	if ((s->lookahead >= '0' && s->lookahead <= '9'))
		return (lex_advance(775, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s434(t_lexer *lexer, t_lexer_state *s)
{
	if (lex_normal_map434(lexer, s))
		return (true);
	if (s->lookahead == '\\')
		return (lex_skip(345, lexer, s));
	if (s->lookahead == ']')
		return (lex_advance(509, lexer, s));
	if (s->lookahead == '^')
		return (lex_advance(597, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(855, lexer, s));
	if (s->lookahead == 'e')
		return (lex_advance(514, lexer, s));
	if (s->lookahead == 'i')
		return (lex_advance(513, lexer, s));
	if (s->lookahead == '|')
		return (lex_advance(594, lexer, s));
	if (s->lookahead == '}')
		return (lex_advance(818, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(434, lexer, s));
	return (lex_end_state(lexer, s));
}
