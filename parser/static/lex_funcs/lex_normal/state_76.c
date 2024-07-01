/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_76.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s380(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_number, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(218, lexer, s));
	if ((s->lookahead >= '0' && s->lookahead <= '9'))
		return (lex_advance(380, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 10, \
	s->lookahead)))
		return (lex_advance(497, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s381(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_number, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(16, lexer, s));
	if ((s->lookahead >= '0' && s->lookahead <= '9'))
		return (lex_advance(381, lexer, s));
	if (((s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	s->lookahead == '_' || (s->lookahead >= 'a' && \
	s->lookahead <= 'z')))
		return (lex_advance(413, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 10, \
	s->lookahead)))
		return (lex_advance(497, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s382(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_number, lexer, s);
	if ((s->lookahead >= '0' && s->lookahead <= '9'))
		return (lex_advance(382, lexer, s));
	if (((s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	s->lookahead == '_' || (s->lookahead >= 'a' && \
	s->lookahead <= 'z')))
		return (lex_advance(418, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s383(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_POUND, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s384(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_POUND, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(407, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 10, \
	s->lookahead)))
		return (lex_advance(498, lexer, s));
	return (lex_end_state(lexer, s));
}
