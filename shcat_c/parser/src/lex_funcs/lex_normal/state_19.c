/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_19.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s95(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(889, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s96(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(889, lexer, s));
	if (s->lookahead == '\r')
		return (lex_advance(95, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_skip(246, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s97(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(891, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s98(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(891, lexer, s));
	if (s->lookahead == '\r')
		return (lex_advance(97, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_skip(249, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s99(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(916, lexer, s));
	return (lex_end_state(lexer, s));
}
