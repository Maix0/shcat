/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_58.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s290(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_LT, lexer, s);
	if (s->lookahead == '&')
		return (lex_advance(301, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s291(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_LT, lexer, s);
	if (s->lookahead == '&')
		return (lex_advance(301, lexer, s));
	if (s->lookahead == '<')
		return (lex_advance(307, lexer, s));
	if (s->lookahead == '=')
		return (lex_advance(362, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s292(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_LT, lexer, s);
	if (s->lookahead == '&')
		return (lex_advance(301, lexer, s));
	if (s->lookahead == '<')
		return (lex_advance(306, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s293(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_LT, lexer, s);
	if (s->lookahead == '<')
		return (lex_advance(308, lexer, s));
	if (s->lookahead == '=')
		return (lex_advance(362, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s294(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_GT, lexer, s);
	if (s->lookahead == '&')
		return (lex_advance(302, lexer, s));
	if (s->lookahead == '=')
		return (lex_advance(363, lexer, s));
	if (s->lookahead == '>')
		return (lex_advance(298, lexer, s));
	if (s->lookahead == '|')
		return (lex_advance(303, lexer, s));
	return (lex_end_state(lexer, s));
}
