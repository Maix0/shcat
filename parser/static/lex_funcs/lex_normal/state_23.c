/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_23.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s115(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\r')
		return (lex_skip(1, lexer, s));
	if (s->lookahead == ' ')
		return (lex_advance(459, lexer, s));
	if ((s->lookahead >= '\t' && s->lookahead <= '\f'))
		return (lex_skip(164, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(488, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s116(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\r')
		return (lex_skip(1, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_skip(164, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(488, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s117(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\r')
		return (lex_advance(369, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(368, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s118(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\r')
		return (lex_skip(2, lexer, s));
	if (s->lookahead == ' ')
		return (lex_advance(463, lexer, s));
	if ((s->lookahead >= '\t' && s->lookahead <= '\f'))
		return (lex_skip(168, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(488, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s119(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\r')
		return (lex_skip(2, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_skip(168, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(488, lexer, s));
	return (lex_end_state(lexer, s));
}
