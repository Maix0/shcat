/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_54.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s270(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_LT, lexer, s);
	if (s->lookahead == '&')
		return (lex_advance(279, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s271(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_LT, lexer, s);
	if (s->lookahead == '&')
		return (lex_advance(279, lexer, s));
	if (s->lookahead == '<')
		return (lex_advance(285, lexer, s));
	if (s->lookahead == '=')
		return (lex_advance(335, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s272(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_LT, lexer, s);
	if (s->lookahead == '&')
		return (lex_advance(279, lexer, s));
	if (s->lookahead == '<')
		return (lex_advance(284, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s273(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_LT, lexer, s);
	if (s->lookahead == '<')
		return (lex_advance(286, lexer, s));
	if (s->lookahead == '=')
		return (lex_advance(335, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s274(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_GT, lexer, s);
	if (s->lookahead == '&')
		return (lex_advance(280, lexer, s));
	if (s->lookahead == '=')
		return (lex_advance(336, lexer, s));
	if (s->lookahead == '>')
		return (lex_advance(278, lexer, s));
	if (s->lookahead == '|')
		return (lex_advance(281, lexer, s));
	return (lex_end_state(lexer, s));
}
