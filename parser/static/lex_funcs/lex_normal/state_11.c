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
		return (lex_advance(456, lexer, s));
	if (s->lookahead == '\r')
		return (lex_advance(54, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_skip(111, lexer, s));
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
		return (lex_skip(115, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s58(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(468, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s59(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(468, lexer, s));
	if (s->lookahead == '\r')
		return (lex_advance(58, lexer, s));
	if (s->lookahead == ' ')
		return (lex_advance(506, lexer, s));
	if ((s->lookahead >= '\t' && s->lookahead <= '\f'))
		return (lex_skip(184, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(533, lexer, s));
	return (lex_end_state(lexer, s));
}
