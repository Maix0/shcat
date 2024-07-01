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
	if (s->lookahead == '#')
		return (lex_advance(400, lexer, s));
	if (s->lookahead == '&')
		return (lex_advance(196, lexer, s));
	if (s->lookahead == ')')
		return (lex_advance(252, lexer, s));
	if (s->lookahead == '<')
		return (lex_advance(266, lexer, s));
	if (s->lookahead == '>')
		return (lex_advance(270, lexer, s));
	if (s->lookahead == '\\')
		return (lex_skip(151, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(203, lexer, s));
	if (s->lookahead == '|')
		return (lex_advance(251, lexer, s));
	if (s->lookahead == '}')
		return (lex_advance(256, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(195, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s196(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '&')
		return (lex_advance(258, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s197(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\'')
		return (lex_advance(371, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(197, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s198(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '(')
		return (lex_advance(393, lexer, s));
	if (s->lookahead == '{')
		return (lex_advance(377, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s199(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == ')')
		return (lex_advance(305, lexer, s));
	return (lex_end_state(lexer, s));
}
