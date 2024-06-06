/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_10.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s50(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(454, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s51(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(454, lexer, s));
	if (s->lookahead == '\r')
		return (lex_advance(50, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_skip(113, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s52(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_skip(191, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s53(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(463, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s54(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(463, lexer, s));
	if (s->lookahead == '\r')
		return (lex_advance(53, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_skip(179, lexer, s));
	return (lex_end_state(lexer, s));
}
