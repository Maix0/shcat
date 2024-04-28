/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_152.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s760(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_QMARK, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s761(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_QMARK, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(518, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 12, \
	s->lookahead)))
		return (lex_advance(958, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s762(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_COLON, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s763(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_COLON, lexer, s);
	if (s->lookahead == '+')
		return (lex_advance(835, lexer, s));
	if (s->lookahead == '-')
		return (lex_advance(832, lexer, s));
	if (s->lookahead == '=')
		return (lex_advance(829, lexer, s));
	if (s->lookahead == '?')
		return (lex_advance(839, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(518, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 12, \
	s->lookahead)))
		return (lex_advance(958, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s764(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_COLON, lexer, s);
	if (s->lookahead == '+')
		return (lex_advance(834, lexer, s));
	if (s->lookahead == '-')
		return (lex_advance(831, lexer, s));
	if (s->lookahead == '=')
		return (lex_advance(828, lexer, s));
	if (s->lookahead == '?')
		return (lex_advance(838, lexer, s));
	return (lex_end_state(lexer, s));
}
