/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_11.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s55(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(419, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s56(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(419, lexer, s));
	if (s->lookahead == '\r')
		return (lex_advance(55, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_skip(106, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s57(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_skip(169, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s58(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(430, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s59(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(430, lexer, s));
	if (s->lookahead == '\r')
		return (lex_advance(58, lexer, s));
	if (s->lookahead == ' ')
		return (lex_advance(462, lexer, s));
	if ((s->lookahead >= '\t' && s->lookahead <= '\f'))
		return (lex_skip(167, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(488, lexer, s));
	return (lex_end_state(lexer, s));
}
