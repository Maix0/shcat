/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_28.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s140(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\r')
		return (lex_skip(91, lexer, s));
	if (s->lookahead == ' ')
		return (lex_advance(451, lexer, s));
	if ((s->lookahead >= '\t' && s->lookahead <= '\f'))
		return (lex_skip(103, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(488, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s141(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\r')
		return (lex_skip(91, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_skip(103, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(488, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s142(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\r')
		return (lex_skip(47, lexer, s));
	if (s->lookahead == ' ')
		return (lex_advance(470, lexer, s));
	if ((s->lookahead >= '\t' && s->lookahead <= '\f'))
		return (lex_skip(182, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(488, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s143(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\r')
		return (lex_skip(47, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_skip(182, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(488, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s144(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\r')
		return (lex_skip(57, lexer, s));
	if (s->lookahead == ' ')
		return (lex_advance(468, lexer, s));
	if ((s->lookahead >= '\t' && s->lookahead <= '\f'))
		return (lex_skip(169, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(488, lexer, s));
	return (lex_end_state(lexer, s));
}
