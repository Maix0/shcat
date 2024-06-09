/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_0.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_keywords_funcs.h"

bool	lex_keywords_s0(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\\')
		return (lex_skip(1, lexer, s));
	if (s->lookahead == 'c')
		return (lex_advance(2, lexer, s));
	if (s->lookahead == 'd')
		return (lex_advance(3, lexer, s));
	if (s->lookahead == 'f')
		return (lex_advance(4, lexer, s));
	if (s->lookahead == 'i')
		return (lex_advance(5, lexer, s));
	if (s->lookahead == 't')
		return (lex_advance(6, lexer, s));
	if (s->lookahead == 'u')
		return (lex_advance(7, lexer, s));
	if (s->lookahead == 'w')
		return (lex_advance(8, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(0, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s1(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\r')
		return (lex_skip(9, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_skip(0, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s2(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'a')
		return (lex_advance(10, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s3(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'o')
		return (lex_advance(11, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s4(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'o')
		return (lex_advance(12, lexer, s));
	return (lex_end_state(lexer, s));
}
