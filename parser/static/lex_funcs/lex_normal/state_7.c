/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_7.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s35(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(461, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s36(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(461, lexer, s));
	if (s->lookahead == '\r')
		return (lex_advance(35, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_skip(172, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(482, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s37(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(462, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s38(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(462, lexer, s));
	if (s->lookahead == '\r')
		return (lex_advance(37, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_skip(173, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(482, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s39(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(449, lexer, s));
	return (lex_end_state(lexer, s));
}
