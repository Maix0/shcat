/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_0.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s0(t_lexer *lexer, t_lexer_state *s)
{
	if (s->eof)
		return (lex_advance(232, lexer, s));
	if (lex_normal_map0(lexer, s))
		return (true);
	if ((s->lookahead == '\t' || s->lookahead == '\n' || \
	s->lookahead == ' '))
		return (lex_skip(229, lexer, s));
	if ((s->lookahead >= 0x0b && s->lookahead <= '\r'))
		return (lex_advance(459, lexer, s));
	if ((s->lookahead >= '1' && s->lookahead <= '9'))
		return (lex_advance(372, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(488, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s1(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_skip(164, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s2(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_skip(168, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s3(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_skip(170, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s4(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_skip(5, lexer, s));
	return (lex_end_state(lexer, s));
}
