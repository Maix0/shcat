/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_57.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s285(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_EQ, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(234, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 10, \
	s->lookahead)))
		return (lex_advance(533, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s286(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_LT, lexer, s);
	if (s->lookahead == '&')
		return (lex_advance(297, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s287(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_LT, lexer, s);
	if (s->lookahead == '&')
		return (lex_advance(297, lexer, s));
	if (s->lookahead == '<')
		return (lex_advance(303, lexer, s));
	if (s->lookahead == '=')
		return (lex_advance(358, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s288(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_LT, lexer, s);
	if (s->lookahead == '&')
		return (lex_advance(297, lexer, s));
	if (s->lookahead == '<')
		return (lex_advance(302, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s289(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_LT, lexer, s);
	if (s->lookahead == '<')
		return (lex_advance(304, lexer, s));
	if (s->lookahead == '=')
		return (lex_advance(358, lexer, s));
	return (lex_end_state(lexer, s));
}
