/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_113.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s565(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_PLUS_PLUS, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(518, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 12, \
	s->lookahead)))
		return (lex_advance(958, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s566(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_DASH_DASH, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s567(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_DASH_DASH, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(518, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 12, \
	s->lookahead)))
		return (lex_advance(958, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s568(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_PLUS_EQ, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s569(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_PLUS_EQ, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(518, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 12, \
	s->lookahead)))
		return (lex_advance(958, lexer, s));
	return (lex_end_state(lexer, s));
}
