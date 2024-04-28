/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_38.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s190(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(899, lexer, s));
	if (s->lookahead == '\r')
		return (lex_advance(189, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_skip(261, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s191(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_skip(300, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s192(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(903, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s193(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(903, lexer, s));
	if (s->lookahead == '\r')
		return (lex_advance(192, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_skip(267, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s194(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(935, lexer, s));
	return (lex_end_state(lexer, s));
}
