/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_75.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s375(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_COLON, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s376(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_COLON, lexer, s);
	if (s->lookahead == '=')
		return (lex_advance(418, lexer, s));
	if (s->lookahead == '?')
		return (lex_advance(422, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(234, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 10, \
	s->lookahead)))
		return (lex_advance(533, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s377(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_COLON, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(234, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 10, \
	s->lookahead)))
		return (lex_advance(533, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s378(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_PLUS_PLUS, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s379(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_DASH_DASH, lexer, s);
	return (lex_end_state(lexer, s));
}
