/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_156.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s780(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_DOLLAR, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s781(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_DOLLAR, lexer, s);
	if (s->lookahead == '\'')
		return (lex_advance(492, lexer, s));
	if (s->lookahead == '(')
		return (lex_advance(854, lexer, s));
	if (s->lookahead == '[')
		return (lex_advance(774, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(857, lexer, s));
	if (s->lookahead == '{')
		return (lex_advance(817, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s782(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_DOLLAR, lexer, s);
	if (s->lookahead == '\'')
		return (lex_advance(492, lexer, s));
	if (s->lookahead == '(')
		return (lex_advance(853, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(857, lexer, s));
	if (s->lookahead == '{')
		return (lex_advance(817, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s783(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_DOLLAR, lexer, s);
	if (s->lookahead == '(')
		return (lex_advance(854, lexer, s));
	if (s->lookahead == '[')
		return (lex_advance(774, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(857, lexer, s));
	if (s->lookahead == '{')
		return (lex_advance(817, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s784(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_DOLLAR, lexer, s);
	if (s->lookahead == '(')
		return (lex_advance(853, lexer, s));
	if (s->lookahead == '`')
		return (lex_advance(857, lexer, s));
	return (lex_end_state(lexer, s));
}
