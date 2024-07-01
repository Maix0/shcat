/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_25.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s125(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\r')
		return (lex_advance(372, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_advance(375, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(376, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s126(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\r')
		return (lex_skip(4, lexer, s));
	if (s->lookahead == ' ')
		return (lex_advance(452, lexer, s));
	if ((s->lookahead >= '\t' && s->lookahead <= '\f'))
		return (lex_skip(5, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(497, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s127(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\r')
		return (lex_skip(4, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_skip(5, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(497, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s128(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\r')
		return (lex_skip(6, lexer, s));
	if (s->lookahead == ' ')
		return (lex_advance(474, lexer, s));
	if ((s->lookahead >= '\t' && s->lookahead <= '\f'))
		return (lex_skip(174, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(497, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s129(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\r')
		return (lex_skip(6, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_skip(174, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(497, lexer, s));
	return (lex_end_state(lexer, s));
}
