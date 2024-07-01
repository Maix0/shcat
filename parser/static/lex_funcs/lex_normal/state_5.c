/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_5.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s25(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(414, lexer, s));
	if (s->lookahead == '\r')
		return (lex_advance(23, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_skip(99, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(488, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s26(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(418, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s27(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(418, lexer, s));
	if (s->lookahead == '\r')
		return (lex_advance(26, lexer, s));
	if (s->lookahead == ' ')
		return (lex_advance(452, lexer, s));
	if ((s->lookahead >= '\t' && s->lookahead <= '\f'))
		return (lex_skip(105, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(488, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s28(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(418, lexer, s));
	if (s->lookahead == '\r')
		return (lex_advance(26, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_skip(105, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(488, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s29(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(420, lexer, s));
	return (lex_end_state(lexer, s));
}
