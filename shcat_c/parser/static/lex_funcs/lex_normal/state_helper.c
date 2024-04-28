/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_helper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 18:39:26 by rparodi           #+#    #+#             */
/*   Updated: 2024/04/28 18:59:41 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_helper_s519(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '<')
		return (lex_advance(612, lexer, s));
	if (s->lookahead == '>')
		return (lex_advance(618, lexer, s));
	if (s->lookahead == '\\')
		return (lex_skip(542, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(856, lexer, s));
	if (s->lookahead == '|')
		return (lex_advance(593, lexer, s));
	return (false);
}

bool	lex_helper_s520(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '<')
		return (lex_advance(612, lexer, s));
	if (s->lookahead == '>')
		return (lex_advance(618, lexer, s));
	if (s->lookahead == '\\')
		return (lex_skip(544, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(855, lexer, s));
	if (s->lookahead == '|')
		return (lex_advance(593, lexer, s));
	return (false);
}

bool	lex_helper_s521(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '<')
		return (lex_advance(613, lexer, s));
	if (s->lookahead == '>')
		return (lex_advance(618, lexer, s));
	if (s->lookahead == '\\')
		return (lex_skip(541, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(856, lexer, s));
	if (s->lookahead == '|')
		return (lex_advance(593, lexer, s));
	return (false);
}

bool	lex_helper_s522(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '<')
		return (lex_advance(613, lexer, s));
	if (s->lookahead == '>')
		return (lex_advance(618, lexer, s));
	if (s->lookahead == '\\')
		return (lex_skip(543, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(855, lexer, s));
	if (s->lookahead == '|')
		return (lex_advance(593, lexer, s));
	return (false);
}

bool	lex_helper_s86(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '>')
		return (lex_advance(618, lexer, s));
	if (s->lookahead == '\\')
		return (lex_skip(379, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(510, lexer, s));
	if (s->lookahead == 'e')
		return (lex_advance(514, lexer, s));
	if (s->lookahead == '|')
		return (lex_advance(593, lexer, s));
	return (false);
}

bool	lex_helper_s87(t_lexer *lexer, t_lexer_state *s)
{
	if (s->lookahead == '>')
		return (lex_advance(618, lexer, s));
	if (s->lookahead == '\\')
		return (lex_skip(380, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(510, lexer, s));
	if (s->lookahead == 'e')
		return (lex_advance(514, lexer, s));
	if (s->lookahead == '|')
		return (lex_advance(593, lexer, s));
	return (false);
}
