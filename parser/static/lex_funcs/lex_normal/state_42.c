/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s210(t_lexer *lexer, t_lexer_state *s)
{
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

bool	lex_normal_s211(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '#')
		return (lex_advance(412, lexer, s));
	if (s->lookahead == '%')
		return (lex_advance(371, lexer, s));
	if (s->lookahead == '+')
		return (lex_advance(426, lexer, s));
	if (s->lookahead == '-')
		return (lex_advance(416, lexer, s));
	if (s->lookahead == ':')
		return (lex_advance(218, lexer, s));
	if (s->lookahead == '=')
		return (lex_advance(419, lexer, s));
	if (s->lookahead == '?')
		return (lex_advance(423, lexer, s));
	if (s->lookahead == '\\')
		return (lex_skip(174, lexer, s));
	if (s->lookahead == '}')
		return (lex_advance(277, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(212, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s212(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '#')
		return (lex_advance(412, lexer, s));
	if (s->lookahead == '%')
		return (lex_advance(371, lexer, s));
	if (s->lookahead == '\\')
		return (lex_skip(174, lexer, s));
	if (s->lookahead == '}')
		return (lex_advance(277, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(212, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s213(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '#')
		return (lex_advance(437, lexer, s));
	if (s->lookahead == '&')
		return (lex_advance(214, lexer, s));
	if (s->lookahead == ')')
		return (lex_advance(273, lexer, s));
	if (s->lookahead == '<')
		return (lex_advance(288, lexer, s));
	if (s->lookahead == '>')
		return (lex_advance(291, lexer, s));
	if (s->lookahead == '\\')
		return (lex_skip(169, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(222, lexer, s));
	if (s->lookahead == '|')
		return (lex_advance(272, lexer, s));
	if (s->lookahead == '}')
		return (lex_advance(277, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(213, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s214(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '&')
		return (lex_advance(279, lexer, s));
	if (s->lookahead == '>')
		return (lex_advance(295, lexer, s));
	return (lex_end_state(lexer, s));
}
