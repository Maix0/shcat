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

bool	lex_normal_s196(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '#')
		return (lex_advance(383, lexer, s));
	if (s->lookahead == '%')
		return (lex_advance(348, lexer, s));
	if (s->lookahead == '+')
		return (lex_advance(397, lexer, s));
	if (s->lookahead == '-')
		return (lex_advance(387, lexer, s));
	if (s->lookahead == ':')
		return (lex_advance(203, lexer, s));
	if (s->lookahead == '=')
		return (lex_advance(390, lexer, s));
	if (s->lookahead == '?')
		return (lex_advance(394, lexer, s));
	if (s->lookahead == '\\')
		return (lex_skip(159, lexer, s));
	if (s->lookahead == '}')
		return (lex_advance(261, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(197, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s197(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '#')
		return (lex_advance(383, lexer, s));
	if (s->lookahead == '%')
		return (lex_advance(348, lexer, s));
	if (s->lookahead == '\\')
		return (lex_skip(159, lexer, s));
	if (s->lookahead == '}')
		return (lex_advance(261, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(197, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s198(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '#')
		return (lex_advance(408, lexer, s));
	if (s->lookahead == '&')
		return (lex_advance(199, lexer, s));
	if (s->lookahead == ')')
		return (lex_advance(257, lexer, s));
	if (s->lookahead == '<')
		return (lex_advance(272, lexer, s));
	if (s->lookahead == '>')
		return (lex_advance(275, lexer, s));
	if (s->lookahead == '\\')
		return (lex_skip(154, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(206, lexer, s));
	if (s->lookahead == '|')
		return (lex_advance(256, lexer, s));
	if (s->lookahead == '}')
		return (lex_advance(261, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(198, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s199(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '&')
		return (lex_advance(263, lexer, s));
	return (lex_end_state(lexer, s));
}
