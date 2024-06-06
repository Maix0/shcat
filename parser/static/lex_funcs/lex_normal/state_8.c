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
		return (lex_advance(449, lexer, s));
	if (s->lookahead == '\r')
		return (lex_advance(39, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_skip(108, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s41(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_skip(185, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s42(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(450, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s43(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(450, lexer, s));
	if (s->lookahead == '\r')
		return (lex_advance(42, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_skip(109, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s44(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(451, lexer, s));
	return (lex_end_state(lexer, s));
}
