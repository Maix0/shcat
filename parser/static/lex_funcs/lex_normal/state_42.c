/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s210(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(893, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s211(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(893, lexer, s));
	if (s->lookahead == '\r')
		return (lex_advance(210, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_skip(252, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s212(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(905, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s213(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(905, lexer, s));
	if (s->lookahead == '\r')
		return (lex_advance(212, lexer, s));
	if (((s->lookahead >= '\t' && s->lookahead <= '\f') || \
	s->lookahead == ' '))
		return (lex_skip(270, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s214(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\n')
		return (lex_advance(896, lexer, s));
	return (lex_end_state(lexer, s));
}
