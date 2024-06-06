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
		return (lex_skip(178, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s56(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(458, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s57(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(458, lexer, s));
	if (s->lookahead == '\r')
		return (lex_advance(56, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_skip(119, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(482, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s58(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_skip(59, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s59(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(273, lexer, s));
	if (s->lookahead == '#')
		return (lex_advance(421, lexer, s));
	if (s->lookahead == '&')
		return (lex_advance(336, lexer, s));
	if (s->lookahead == ';')
		return (lex_advance(483, lexer, s));
	if (s->lookahead == '<')
		return (lex_advance(254, lexer, s));
	if (s->lookahead == '>')
		return (lex_advance(257, lexer, s));
	if (s->lookahead == '\\')
		return (lex_skip(160, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(207, lexer, s));
	if (s->lookahead == 'e')
		return (lex_advance(211, lexer, s));
	if (s->lookahead == '|')
		return (lex_advance(235, lexer, s));
	if (((s->lookahead >= '[' && s->lookahead <= ']') || \
	(s->lookahead >= '{' && s->lookahead <= '}')))
		return (lex_advance(372, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(59, lexer, s));
	return (lex_end_state(lexer, s));
}
