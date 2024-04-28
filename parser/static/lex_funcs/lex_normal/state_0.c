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
		return (lex_advance(547, lexer, s));
	if (lex_normal_map0(lexer, s))
		return (true);
	if (((s->lookahead >= '\t' && s->lookahead <= '\r') || \
	s->lookahead == ' '))
		return (lex_skip(545, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(958, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s1(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_skip(401, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s2(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_skip(417, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s3(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_skip(418, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s4(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_skip(419, lexer, s));
	return (lex_end_state(lexer, s));
}
