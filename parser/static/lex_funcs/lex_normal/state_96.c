/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_96.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s480(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_word, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(215, lexer, s));
	if (s->lookahead == 'f')
		return (lex_advance(241, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 10, \
	s->lookahead)))
		return (lex_advance(488, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s481(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_word, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(215, lexer, s));
	if (s->lookahead == 'i')
		return (lex_advance(239, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 10, \
	s->lookahead)))
		return (lex_advance(488, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s482(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_word, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(215, lexer, s));
	if (s->lookahead == 'i')
		return (lex_advance(480, lexer, s));
	if (s->lookahead == 's')
		return (lex_advance(479, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 10, \
	s->lookahead)))
		return (lex_advance(488, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s483(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_word, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(215, lexer, s));
	if (s->lookahead == 'l')
		return (lex_advance(482, lexer, s));
	if (s->lookahead == 's')
		return (lex_advance(477, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 10, \
	s->lookahead)))
		return (lex_advance(488, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s484(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_word, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(215, lexer, s));
	if (s->lookahead == 'l')
		return (lex_advance(482, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 10, \
	s->lookahead)))
		return (lex_advance(488, lexer, s));
	return (lex_end_state(lexer, s));
}
