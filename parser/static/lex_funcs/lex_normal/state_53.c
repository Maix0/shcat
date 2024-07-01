/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_53.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s265(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_LT, lexer, s);
	if (s->lookahead == '&')
		return (lex_advance(274, lexer, s));
	if (s->lookahead == '<')
		return (lex_advance(279, lexer, s));
	if (s->lookahead == '=')
		return (lex_advance(327, lexer, s));
	if (s->lookahead == '>')
		return (lex_advance(277, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s266(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_LT, lexer, s);
	if (s->lookahead == '&')
		return (lex_advance(274, lexer, s));
	if (s->lookahead == '<')
		return (lex_advance(278, lexer, s));
	if (s->lookahead == '>')
		return (lex_advance(277, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s267(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_LT, lexer, s);
	if (s->lookahead == '&')
		return (lex_advance(274, lexer, s));
	if (s->lookahead == '>')
		return (lex_advance(277, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s268(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_LT, lexer, s);
	if (s->lookahead == '<')
		return (lex_advance(280, lexer, s));
	if (s->lookahead == '=')
		return (lex_advance(327, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s269(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_GT, lexer, s);
	if (s->lookahead == '&')
		return (lex_advance(275, lexer, s));
	if (s->lookahead == '=')
		return (lex_advance(328, lexer, s));
	if (s->lookahead == '>')
		return (lex_advance(273, lexer, s));
	if (s->lookahead == '|')
		return (lex_advance(276, lexer, s));
	return (lex_end_state(lexer, s));
}
