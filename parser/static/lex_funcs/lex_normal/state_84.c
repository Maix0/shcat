/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_84.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s420(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_EQ2, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(234, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 10, \
	s->lookahead)))
		return (lex_advance(533, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s421(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_COLON_QMARK, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s422(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_COLON_QMARK, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(234, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 10, \
	s->lookahead)))
		return (lex_advance(533, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s423(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_QMARK2, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s424(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_QMARK2, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(234, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 10, \
	s->lookahead)))
		return (lex_advance(533, lexer, s));
	return (lex_end_state(lexer, s));
}
