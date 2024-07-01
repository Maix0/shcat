/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_97.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s485(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_word, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(215, lexer, s));
	if (s->lookahead == 'n')
		return (lex_advance(234, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 10, \
	s->lookahead)))
		return (lex_advance(488, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s486(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_word, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(215, lexer, s));
	if (s->lookahead == 'o')
		return (lex_advance(237, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 10, \
	s->lookahead)))
		return (lex_advance(488, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s487(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_word, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(215, lexer, s));
	if (s->lookahead == 's')
		return (lex_advance(477, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 10, \
	s->lookahead)))
		return (lex_advance(488, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s488(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_word, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(215, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 10, \
	s->lookahead)))
		return (lex_advance(488, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s489(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_word, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(399, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 10, \
	s->lookahead)))
		return (lex_advance(489, lexer, s));
	return (lex_end_state(lexer, s));
}
