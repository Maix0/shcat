/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_12.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s60(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(464, lexer, s));
	if (s->lookahead == '\r')
		return (lex_advance(59, lexer, s));
	if (s->lookahead == ' ')
		return (lex_advance(502, lexer, s));
	if ((s->lookahead >= '\t' && s->lookahead <= '\f'))
		return (lex_skip(187, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(528, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s61(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(464, lexer, s));
	if (s->lookahead == '\r')
		return (lex_advance(59, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_skip(187, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(528, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s62(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(456, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s63(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(456, lexer, s));
	if (s->lookahead == '\r')
		return (lex_advance(62, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_skip(119, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s64(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(467, lexer, s));
	return (lex_end_state(lexer, s));
}
