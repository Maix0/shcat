/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_9.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s45(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(451, lexer, s));
	if (s->lookahead == '\r')
		return (lex_advance(44, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_skip(110, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s46(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_skip(130, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s47(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(452, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s48(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(452, lexer, s));
	if (s->lookahead == '\r')
		return (lex_advance(47, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_skip(111, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s49(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_skip(186, lexer, s));
	return (lex_end_state(lexer, s));
}
