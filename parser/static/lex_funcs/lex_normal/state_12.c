/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_12.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s60(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(273, lexer, s));
	if (s->lookahead == '#')
		return (lex_advance(421, lexer, s));
	if (s->lookahead == '&')
		return (lex_advance(333, lexer, s));
	if (s->lookahead == ';')
		return (lex_advance(484, lexer, s));
	if (s->lookahead == '\\')
		return (lex_skip(167, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(207, lexer, s));
	if (s->lookahead == 'i')
		return (lex_advance(210, lexer, s));
	if (((s->lookahead >= '[' && s->lookahead <= ']') || \
	s->lookahead == '{' || s->lookahead == '}'))
		return (lex_advance(372, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(60, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s61(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_skip(131, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s62(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(459, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s63(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(459, lexer, s));
	if (s->lookahead == '\r')
		return (lex_advance(62, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_skip(121, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(482, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s64(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_skip(194, lexer, s));
	return (lex_end_state(lexer, s));
}
