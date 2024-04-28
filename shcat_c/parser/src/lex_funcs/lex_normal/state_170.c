/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_170.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s850(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_COMMA_COMMA, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(518, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 12, \
	s->lookahead)))
		return (lex_advance(958, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s851(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_CARET_CARET, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s852(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_CARET_CARET, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(518, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 12, \
	s->lookahead)))
		return (lex_advance(958, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s853(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_DOLLAR_LPAREN, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s854(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_DOLLAR_LPAREN, lexer, s);
	if (s->lookahead == '(')
		return (lex_advance(773, lexer, s));
	return (lex_end_state(lexer, s));
}
