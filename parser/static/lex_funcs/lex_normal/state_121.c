/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_121.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s605(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_BANG_EQ, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s606(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_BANG_EQ, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(518, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 12, \
	s->lookahead)))
		return (lex_advance(958, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s607(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_LT, lexer, s);
	if (s->lookahead == '&')
		return (lex_advance(682, lexer, s));
	if (s->lookahead == '(')
		return (lex_advance(858, lexer, s));
	if (s->lookahead == '<')
		return (lex_advance(625, lexer, s));
	if (s->lookahead == '=')
		return (lex_advance(621, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s608(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_LT, lexer, s);
	if (s->lookahead == '&')
		return (lex_advance(682, lexer, s));
	if (s->lookahead == '(')
		return (lex_advance(858, lexer, s));
	if (s->lookahead == '<')
		return (lex_advance(505, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s609(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_LT, lexer, s);
	if (s->lookahead == '&')
		return (lex_advance(682, lexer, s));
	if (s->lookahead == '(')
		return (lex_advance(858, lexer, s));
	if (s->lookahead == '<')
		return (lex_advance(624, lexer, s));
	return (lex_end_state(lexer, s));
}
