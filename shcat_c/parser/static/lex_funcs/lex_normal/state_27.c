/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_27.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s135(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(793, lexer, s));
	if (s->lookahead == '\r')
		return (lex_advance(790, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_advance(793, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(798, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s136(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(794, lexer, s));
	if (s->lookahead == '\r')
		return (lex_advance(791, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_advance(794, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(798, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s137(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(939, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s138(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(939, lexer, s));
	if (s->lookahead == '\r')
		return (lex_advance(137, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_skip(453, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s139(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_skip(485, lexer, s));
	return (lex_end_state(lexer, s));
}
