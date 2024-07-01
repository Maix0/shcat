/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_18.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s90(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_skip(104, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s91(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_skip(105, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s92(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(433, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s93(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(433, lexer, s));
	if (s->lookahead == '\r')
		return (lex_advance(92, lexer, s));
	if (s->lookahead == ' ')
		return (lex_advance(465, lexer, s));
	if ((s->lookahead >= '\t' && s->lookahead <= '\f'))
		return (lex_skip(114, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(497, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s94(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(433, lexer, s));
	if (s->lookahead == '\r')
		return (lex_advance(92, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_skip(114, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(497, lexer, s));
	return (lex_end_state(lexer, s));
}
