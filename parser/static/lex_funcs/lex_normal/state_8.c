/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_8.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s40(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(465, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s41(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(465, lexer, s));
	if (s->lookahead == '\r')
		return (lex_advance(40, lexer, s));
	if (s->lookahead == ' ')
		return (lex_advance(500, lexer, s));
	if ((s->lookahead >= '\t' && s->lookahead <= '\f'))
		return (lex_skip(188, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(528, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s42(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(465, lexer, s));
	if (s->lookahead == '\r')
		return (lex_advance(40, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_skip(188, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(528, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s43(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(466, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s44(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(466, lexer, s));
	if (s->lookahead == '\r')
		return (lex_advance(43, lexer, s));
	if (s->lookahead == ' ')
		return (lex_advance(501, lexer, s));
	if ((s->lookahead >= '\t' && s->lookahead <= '\f'))
		return (lex_skip(189, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(528, lexer, s));
	return (lex_end_state(lexer, s));
}
