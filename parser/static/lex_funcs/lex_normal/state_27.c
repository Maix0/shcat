/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_27.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s135(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\r')
		return (lex_skip(33, lexer, s));
	if (s->lookahead == ' ')
		return (lex_advance(447, lexer, s));
	if ((s->lookahead >= '\t' && s->lookahead <= '\f'))
		return (lex_skip(98, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(488, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s136(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\r')
		return (lex_skip(33, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_skip(98, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(488, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s137(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\r')
		return (lex_skip(46, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_skip(174, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s138(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\r')
		return (lex_skip(90, lexer, s));
	if (s->lookahead == ' ')
		return (lex_advance(450, lexer, s));
	if ((s->lookahead >= '\t' && s->lookahead <= '\f'))
		return (lex_skip(102, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(488, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s139(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\r')
		return (lex_skip(90, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_skip(102, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(488, lexer, s));
	return (lex_end_state(lexer, s));
}
