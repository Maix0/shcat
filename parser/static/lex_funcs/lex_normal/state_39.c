/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_39.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s195(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '"')
		return (lex_advance(373, lexer, s));
	if (s->lookahead == '#')
		return (lex_advance(383, lexer, s));
	if (s->lookahead == '$')
		return (lex_advance(370, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(136, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(416, lexer, s));
	if ((s->lookahead == '\n' || s->lookahead == '\r'))
		return (lex_skip(195, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_advance(380, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(381, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s196(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '#')
		return (lex_advance(396, lexer, s));
	if (s->lookahead == '%')
		return (lex_advance(352, lexer, s));
	if (s->lookahead == '+')
		return (lex_advance(410, lexer, s));
	if (s->lookahead == '-')
		return (lex_advance(400, lexer, s));
	if (s->lookahead == ':')
		return (lex_advance(203, lexer, s));
	if (s->lookahead == '=')
		return (lex_advance(403, lexer, s));
	if (s->lookahead == '?')
		return (lex_advance(407, lexer, s));
	if (s->lookahead == '\\')
		return (lex_skip(165, lexer, s));
	if (s->lookahead == '}')
		return (lex_advance(398, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(197, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s197(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '#')
		return (lex_advance(396, lexer, s));
	if (s->lookahead == '%')
		return (lex_advance(352, lexer, s));
	if (s->lookahead == '\\')
		return (lex_skip(165, lexer, s));
	if (s->lookahead == '}')
		return (lex_advance(398, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(197, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s198(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '#')
		return (lex_advance(421, lexer, s));
	if (s->lookahead == ')')
		return (lex_advance(237, lexer, s));
	if (s->lookahead == '\\')
		return (lex_skip(169, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(207, lexer, s));
	if (s->lookahead == '|')
		return (lex_advance(233, lexer, s));
	if (((s->lookahead >= '[' && s->lookahead <= ']') || \
	(s->lookahead >= '{' && s->lookahead <= '}')))
		return (lex_advance(372, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(198, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s199(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '&')
		return (lex_advance(245, lexer, s));
	if (s->lookahead == '>')
		return (lex_advance(261, lexer, s));
	return (lex_end_state(lexer, s));
}
