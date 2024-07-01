/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_44.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s220(t_lexer *lexer, t_lexer_state *s)
{
	if (s->eof)
		return (lex_advance(235, lexer, s));
	if (s->lookahead == '\n')
		return (lex_skip(234, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s221(t_lexer *lexer, t_lexer_state *s)
{
	if (s->eof)
		return (lex_advance(235, lexer, s));
	if (s->lookahead == '\n')
		return (lex_skip(222, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s222(t_lexer *lexer, t_lexer_state *s)
{
	if (s->eof)
		return (lex_advance(235, lexer, s));
	if (s->lookahead == '\n')
		return (lex_advance(290, lexer, s));
	if (s->lookahead == '#')
		return (lex_advance(408, lexer, s));
	if (s->lookahead == '&')
		return (lex_advance(331, lexer, s));
	if (s->lookahead == ')')
		return (lex_advance(257, lexer, s));
	if (s->lookahead == ';')
		return (lex_advance(499, lexer, s));
	if (s->lookahead == '<')
		return (lex_advance(272, lexer, s));
	if (s->lookahead == '>')
		return (lex_advance(275, lexer, s));
	if (s->lookahead == '\\')
		return (lex_skip(230, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(404, lexer, s));
	if (s->lookahead == 'e')
		return (lex_advance(216, lexer, s));
	if (s->lookahead == 'i')
		return (lex_advance(214, lexer, s));
	if (s->lookahead == '|')
		return (lex_advance(256, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(222, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s223(t_lexer *lexer, t_lexer_state *s)
{
	if (s->eof)
		return (lex_advance(235, lexer, s));
	if (s->lookahead == '\n')
		return (lex_advance(290, lexer, s));
	if (s->lookahead == '#')
		return (lex_advance(408, lexer, s));
	if (s->lookahead == '&')
		return (lex_advance(331, lexer, s));
	if (s->lookahead == ')')
		return (lex_advance(257, lexer, s));
	if (s->lookahead == ';')
		return (lex_advance(499, lexer, s));
	if (s->lookahead == '<')
		return (lex_advance(272, lexer, s));
	if (s->lookahead == '>')
		return (lex_advance(275, lexer, s));
	if (s->lookahead == '\\')
		return (lex_skip(231, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(403, lexer, s));
	if (s->lookahead == '|')
		return (lex_advance(256, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(223, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s224(t_lexer *lexer, t_lexer_state *s)
{
	if (s->eof)
		return (lex_advance(235, lexer, s));
	if (s->lookahead == '\n')
		return (lex_skip(223, lexer, s));
	return (lex_end_state(lexer, s));
}
