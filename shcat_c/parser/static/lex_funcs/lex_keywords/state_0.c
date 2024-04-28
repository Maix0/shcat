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
	if (s->lookahead == 'A')
		return (lex_advance(1, lexer, s));
	if (s->lookahead == 'E')
		return (lex_advance(2, lexer, s));
	if (s->lookahead == 'K')
		return (lex_advance(3, lexer, s));
	if (s->lookahead == 'L')
		return (lex_advance(4, lexer, s));
	if (s->lookahead == 'P')
		return (lex_advance(5, lexer, s));
	if (s->lookahead == 'Q')
		return (lex_advance(6, lexer, s));
	if (s->lookahead == 'U')
		return (lex_advance(7, lexer, s));
	if (s->lookahead == '\\')
		return (lex_skip(8, lexer, s));
	if (s->lookahead == 'a')
		return (lex_advance(9, lexer, s));
	if (s->lookahead == 'c')
		return (lex_advance(10, lexer, s));
	if (s->lookahead == 'd')
		return (lex_advance(11, lexer, s));
	if (s->lookahead == 'e')
		return (lex_advance(12, lexer, s));
	if (s->lookahead == 'f')
		return (lex_advance(13, lexer, s));
	if (s->lookahead == 'i')
		return (lex_advance(14, lexer, s));
	if (s->lookahead == 'k')
		return (lex_advance(15, lexer, s));
	if (s->lookahead == 'l')
		return (lex_advance(16, lexer, s));
	if (s->lookahead == 'r')
		return (lex_advance(17, lexer, s));
	if (s->lookahead == 's')
		return (lex_advance(18, lexer, s));
	if (s->lookahead == 't')
		return (lex_advance(19, lexer, s));
	if (s->lookahead == 'u')
		return (lex_advance(20, lexer, s));
	if (s->lookahead == 'w')
		return (lex_advance(21, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(22, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s1(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_A, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s2(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_E, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s3(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_K, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s4(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_L, lexer, s);
	return (lex_end_state(lexer, s));
}
