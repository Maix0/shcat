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
	if ((s->lookahead != 0 && (s->lookahead > '\t' && \
	s->lookahead < '\r')))
		return (lex_advance(488, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s216(t_lexer *lexer, t_lexer_state *s)
{
	if (s->eof)
		return (lex_advance(232, lexer, s));
	if (s->lookahead == '\n')
		return (lex_skip(231, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s217(t_lexer *lexer, t_lexer_state *s)
{
	if (s->eof)
		return (lex_advance(232, lexer, s));
	if (s->lookahead == '\n')
		return (lex_skip(218, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s218(t_lexer *lexer, t_lexer_state *s)
{
	if (s->eof)
		return (lex_advance(232, lexer, s));
	if (s->lookahead == '\n')
		return (lex_advance(284, lexer, s));
	if (s->lookahead == '#')
		return (lex_advance(400, lexer, s));
	if (s->lookahead == '&')
		return (lex_advance(323, lexer, s));
	if (s->lookahead == ')')
		return (lex_advance(252, lexer, s));
	if (s->lookahead == ';')
		return (lex_advance(490, lexer, s));
	if (s->lookahead == '<')
		return (lex_advance(266, lexer, s));
	if (s->lookahead == '>')
		return (lex_advance(270, lexer, s));
	if (s->lookahead == '\\')
		return (lex_skip(227, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(396, lexer, s));
	if (s->lookahead == 'e')
		return (lex_advance(213, lexer, s));
	if (s->lookahead == 'i')
		return (lex_advance(211, lexer, s));
	if (s->lookahead == '|')
		return (lex_advance(251, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(218, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s219(t_lexer *lexer, t_lexer_state *s)
{
	if (s->eof)
		return (lex_advance(232, lexer, s));
	if (s->lookahead == '\n')
		return (lex_advance(284, lexer, s));
	if (s->lookahead == '#')
		return (lex_advance(400, lexer, s));
	if (s->lookahead == '&')
		return (lex_advance(323, lexer, s));
	if (s->lookahead == ')')
		return (lex_advance(252, lexer, s));
	if (s->lookahead == ';')
		return (lex_advance(490, lexer, s));
	if (s->lookahead == '<')
		return (lex_advance(266, lexer, s));
	if (s->lookahead == '>')
		return (lex_advance(270, lexer, s));
	if (s->lookahead == '\\')
		return (lex_skip(228, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(395, lexer, s));
	if (s->lookahead == '|')
		return (lex_advance(251, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(219, lexer, s));
	return (lex_end_state(lexer, s));
}
