/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_43.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s215(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '#')
		return (lex_advance(410, lexer, s));
	if (s->lookahead == '%')
		return (lex_advance(375, lexer, s));
	if (s->lookahead == '+')
		return (lex_advance(424, lexer, s));
	if (s->lookahead == '-')
		return (lex_advance(414, lexer, s));
	if (s->lookahead == ':')
		return (lex_advance(222, lexer, s));
	if (s->lookahead == '=')
		return (lex_advance(417, lexer, s));
	if (s->lookahead == '?')
		return (lex_advance(421, lexer, s));
	if (s->lookahead == '\\')
		return (lex_skip(179, lexer, s));
	if (s->lookahead == '}')
		return (lex_advance(281, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(216, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s216(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '#')
		return (lex_advance(410, lexer, s));
	if (s->lookahead == '%')
		return (lex_advance(375, lexer, s));
	if (s->lookahead == '\\')
		return (lex_skip(179, lexer, s));
	if (s->lookahead == '}')
		return (lex_advance(281, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(216, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s217(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '#')
		return (lex_advance(435, lexer, s));
	if (s->lookahead == '&')
		return (lex_advance(218, lexer, s));
	if (s->lookahead == ')')
		return (lex_advance(277, lexer, s));
	if (s->lookahead == '<')
		return (lex_advance(292, lexer, s));
	if (s->lookahead == '>')
		return (lex_advance(295, lexer, s));
	if (s->lookahead == '\\')
		return (lex_skip(170, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(226, lexer, s));
	if (s->lookahead == '|')
		return (lex_advance(276, lexer, s));
	if (s->lookahead == '}')
		return (lex_advance(281, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(217, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s218(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '&')
		return (lex_advance(283, lexer, s));
	if (s->lookahead == '>')
		return (lex_advance(299, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s219(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\'')
		return (lex_advance(406, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(219, lexer, s));
	return (lex_end_state(lexer, s));
}
