/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_43.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s215(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '\'')
		return (lex_advance(402, lexer, s));
	if (s->lookahead != 0)
		return (lex_advance(215, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s216(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '(')
		return (lex_advance(430, lexer, s));
	if (s->lookahead == '{')
		return (lex_advance(414, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s217(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == ')')
		return (lex_advance(335, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s218(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '+')
		return (lex_advance(425, lexer, s));
	if (s->lookahead == '-')
		return (lex_advance(415, lexer, s));
	if (s->lookahead == '=')
		return (lex_advance(417, lexer, s));
	if (s->lookahead == '?')
		return (lex_advance(421, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s219(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == ';')
		return (lex_advance(275, lexer, s));
	return (lex_end_state(lexer, s));
}
