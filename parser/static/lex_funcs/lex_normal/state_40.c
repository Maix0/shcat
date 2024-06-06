/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_40.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s200(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '&')
		return (lex_advance(240, lexer, s));
	if (s->lookahead == ';')
		return (lex_advance(239, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s201(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\'')
		return (lex_advance(384, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(201, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s202(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == ')')
		return (lex_advance(312, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s203(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '+')
		return (lex_advance(409, lexer, s));
	if (s->lookahead == '-')
		return (lex_advance(399, lexer, s));
	if (s->lookahead == '=')
		return (lex_advance(401, lexer, s));
	if (s->lookahead == '?')
		return (lex_advance(405, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s204(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '.')
		return (lex_advance(314, lexer, s));
	return (lex_end_state(lexer, s));
}
