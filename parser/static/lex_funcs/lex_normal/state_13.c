/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_13.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s65(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(471, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s66(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(471, lexer, s));
	if (s->lookahead == '\r')
		return (lex_advance(65, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_skip(196, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s67(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_skip(113, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s68(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(308, lexer, s));
	if (s->lookahead == '#')
		return (lex_advance(437, lexer, s));
	if (s->lookahead == '&')
		return (lex_advance(352, lexer, s));
	if (s->lookahead == ';')
		return (lex_advance(535, lexer, s));
	if (s->lookahead == '\\')
		return (lex_skip(182, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(222, lexer, s));
	if (s->lookahead == 'i')
		return (lex_advance(230, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(68, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s69(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(466, lexer, s));
	return (lex_end_state(lexer, s));
}
