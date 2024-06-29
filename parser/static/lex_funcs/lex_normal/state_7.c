/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_7.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s35(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(457, lexer, s));
	if (s->lookahead == '\r')
		return (lex_advance(34, lexer, s));
	if (s->lookahead == ' ')
		return (lex_advance(493, lexer, s));
	if ((s->lookahead >= '\t' && s->lookahead <= '\f'))
		return (lex_skip(120, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(528, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s36(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(457, lexer, s));
	if (s->lookahead == '\r')
		return (lex_advance(34, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_skip(120, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(528, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s37(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(459, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s38(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(459, lexer, s));
	if (s->lookahead == '\r')
		return (lex_advance(37, lexer, s));
	if (s->lookahead == ' ')
		return (lex_advance(495, lexer, s));
	if ((s->lookahead >= '\t' && s->lookahead <= '\f'))
		return (lex_skip(123, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(528, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s39(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(459, lexer, s));
	if (s->lookahead == '\r')
		return (lex_advance(37, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_skip(123, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(528, lexer, s));
	return (lex_end_state(lexer, s));
}
