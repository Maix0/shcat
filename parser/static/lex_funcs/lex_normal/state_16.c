/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_16.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s80(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(460, lexer, s));
	if (s->lookahead == '\r')
		return (lex_advance(79, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_skip(124, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s81(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_skip(209, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s82(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_skip(216, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s83(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(400, lexer, s));
	if (s->lookahead == '\r')
		return (lex_advance(396, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_advance(400, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(403, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s84(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(468, lexer, s));
	return (lex_end_state(lexer, s));
}
