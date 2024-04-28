/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_37.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s185(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(887, lexer, s));
	if (s->lookahead == '\r')
		return (lex_advance(184, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_skip(243, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s186(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_skip(436, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s187(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(895, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s188(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(895, lexer, s));
	if (s->lookahead == '\r')
		return (lex_advance(187, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_skip(255, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s189(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(899, lexer, s));
	return (lex_end_state(lexer, s));
}
