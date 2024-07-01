/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_15.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s75(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(423, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s76(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(423, lexer, s));
	if (s->lookahead == '\r')
		return (lex_advance(75, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_skip(110, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s77(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_skip(194, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s78(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_skip(187, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s79(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(365, lexer, s));
	if (s->lookahead == '\r')
		return (lex_advance(361, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_advance(365, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(368, lexer, s));
	return (lex_end_state(lexer, s));
}
