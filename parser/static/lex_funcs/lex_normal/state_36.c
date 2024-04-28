/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_36.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s180(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(928, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s181(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(928, lexer, s));
	if (s->lookahead == '\r')
		return (lex_advance(180, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_skip(428, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s182(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(885, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s183(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(885, lexer, s));
	if (s->lookahead == '\r')
		return (lex_advance(182, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_skip(240, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s184(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(887, lexer, s));
	return (lex_end_state(lexer, s));
}
