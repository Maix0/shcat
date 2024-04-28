/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_164.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s820(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_BANG2, lexer, s);
	if (s->lookahead == '=')
		return (lex_advance(606, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(518, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 12, \
	s->lookahead)))
		return (lex_advance(958, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s821(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_AT, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s822(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_AT, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(518, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 12, \
	s->lookahead)))
		return (lex_advance(958, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s823(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_STAR2, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s824(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_STAR2, lexer, s);
	if (s->lookahead == '*')
		return (lex_advance(651, lexer, s));
	if (s->lookahead == '=')
		return (lex_advance(573, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(518, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 12, \
	s->lookahead)))
		return (lex_advance(958, lexer, s));
	return (lex_end_state(lexer, s));
}
