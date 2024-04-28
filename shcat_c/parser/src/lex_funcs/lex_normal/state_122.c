/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_122.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s610(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_LT, lexer, s);
	if (s->lookahead == '&')
		return (lex_advance(682, lexer, s));
	if (s->lookahead == '(')
		return (lex_advance(858, lexer, s));
	if (s->lookahead == '<')
		return (lex_advance(623, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s611(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_LT, lexer, s);
	if (s->lookahead == '&')
		return (lex_advance(682, lexer, s));
	if (s->lookahead == '<')
		return (lex_advance(505, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s612(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_LT, lexer, s);
	if (s->lookahead == '&')
		return (lex_advance(682, lexer, s));
	if (s->lookahead == '<')
		return (lex_advance(624, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s613(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_LT, lexer, s);
	if (s->lookahead == '&')
		return (lex_advance(682, lexer, s));
	if (s->lookahead == '<')
		return (lex_advance(623, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s614(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_LT, lexer, s);
	if (s->lookahead == '(')
		return (lex_advance(858, lexer, s));
	if (s->lookahead == '<')
		return (lex_advance(626, lexer, s));
	if (s->lookahead == '=')
		return (lex_advance(621, lexer, s));
	return (lex_end_state(lexer, s));
}
