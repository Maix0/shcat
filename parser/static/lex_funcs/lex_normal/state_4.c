/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_4.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s20(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_skip(123, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s21(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(442, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s22(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(442, lexer, s));
	if (s->lookahead == '\r')
		return (lex_advance(21, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_skip(101, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(482, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s23(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(444, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s24(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(444, lexer, s));
	if (s->lookahead == '\r')
		return (lex_advance(23, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_skip(103, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(482, lexer, s));
	return (lex_end_state(lexer, s));
}
