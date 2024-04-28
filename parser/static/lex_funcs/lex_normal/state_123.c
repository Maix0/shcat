/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_123.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s615(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_LT, lexer, s);
	if (s->lookahead == '<')
		return (lex_advance(626, lexer, s));
	if (s->lookahead == '=')
		return (lex_advance(621, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s616(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_GT, lexer, s);
	if (s->lookahead == '&')
		return (lex_advance(683, lexer, s));
	if (s->lookahead == '(')
		return (lex_advance(859, lexer, s));
	if (s->lookahead == '=')
		return (lex_advance(622, lexer, s));
	if (s->lookahead == '>')
		return (lex_advance(628, lexer, s));
	if (s->lookahead == '|')
		return (lex_advance(684, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s617(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_GT, lexer, s);
	if (s->lookahead == '&')
		return (lex_advance(683, lexer, s));
	if (s->lookahead == '(')
		return (lex_advance(859, lexer, s));
	if (s->lookahead == '>')
		return (lex_advance(627, lexer, s));
	if (s->lookahead == '|')
		return (lex_advance(684, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s618(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_GT, lexer, s);
	if (s->lookahead == '&')
		return (lex_advance(683, lexer, s));
	if (s->lookahead == '>')
		return (lex_advance(627, lexer, s));
	if (s->lookahead == '|')
		return (lex_advance(684, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s619(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_GT, lexer, s);
	if (s->lookahead == '(')
		return (lex_advance(859, lexer, s));
	if (s->lookahead == '=')
		return (lex_advance(622, lexer, s));
	if (s->lookahead == '>')
		return (lex_advance(628, lexer, s));
	return (lex_end_state(lexer, s));
}
