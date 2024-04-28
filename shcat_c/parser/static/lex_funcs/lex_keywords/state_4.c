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

#include "./lex_keywords_funcs.h"

bool	lex_keywords_s20(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_u, lexer, s);
	if (s->lookahead == 'n')
		return (lex_advance(38, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s21(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 'h')
		return (lex_advance(39, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s22(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\\')
		return (lex_skip(8, lexer, s));
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
	if (s->lookahead == 'l')
		return (lex_advance(16, lexer, s));
	if (s->lookahead == 'r')
		return (lex_advance(17, lexer, s));
	if (s->lookahead == 's')
		return (lex_advance(18, lexer, s));
	if (s->lookahead == 't')
		return (lex_advance(19, lexer, s));
	if (s->lookahead == 'u')
		return (lex_advance(40, lexer, s));
	if (s->lookahead == 'w')
		return (lex_advance(21, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(22, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s23(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_skip(22, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_keywords_s24(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == 's')
		return (lex_advance(41, lexer, s));
	return (lex_end_state(lexer, s));
}
