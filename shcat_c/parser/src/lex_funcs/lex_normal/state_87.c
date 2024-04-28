/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_87.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s435(t_lexer *lexer, t_lexer_state *s)
{
	if (lex_normal_map435(lexer, s))
		return (true);
	if (s->lookahead == '\\')
		return (lex_skip(348, lexer, s));
	if (s->lookahead == ']')
		return (lex_advance(675, lexer, s));
	if (s->lookahead == '^')
		return (lex_advance(597, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(855, lexer, s));
	if (s->lookahead == '|')
		return (lex_advance(594, lexer, s));
	if ((s->lookahead == '[' || (s->lookahead >= '{' && \
	s->lookahead <= '}')))
		return (lex_advance(786, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(435, lexer, s));
	if (((s->lookahead >= '0' && s->lookahead <= '9') || \
	(s->lookahead >= 'A' && s->lookahead <= 'z')))
		return (lex_advance(879, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s436(t_lexer *lexer, t_lexer_state *s)
{
	if (lex_normal_map436(lexer, s))
		return (true);
	if (s->lookahead == '\\')
		return (lex_skip(369, lexer, s));
	if (s->lookahead == '^')
		return (lex_advance(597, lexer, s));
	if (s->lookahead == '|')
		return (lex_advance(594, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(436, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s437(t_lexer *lexer, t_lexer_state *s)
{
	if (lex_normal_map437(lexer, s))
		return (true);
	if (s->lookahead == '\\')
		return (lex_skip(367, lexer, s));
	if (s->lookahead == ']')
		return (lex_advance(675, lexer, s));
	if (s->lookahead == '^')
		return (lex_advance(597, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(510, lexer, s));
	if (s->lookahead == '|')
		return (lex_advance(594, lexer, s));
	if (s->lookahead == '}')
		return (lex_advance(818, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(437, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s438(t_lexer *lexer, t_lexer_state *s)
{
	if (lex_normal_map438(lexer, s))
		return (true);
	if (s->lookahead == '\\')
		return (lex_skip(360, lexer, s));
	if (s->lookahead == ']')
		return (lex_advance(675, lexer, s));
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
		return (lex_skip(438, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s439(t_lexer *lexer, t_lexer_state *s)
{
	if (lex_normal_map439(lexer, s))
		return (true);
	if (s->lookahead == '\\')
		return (lex_skip(362, lexer, s));
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
		return (lex_skip(439, lexer, s));
	return (lex_end_state(lexer, s));
}
