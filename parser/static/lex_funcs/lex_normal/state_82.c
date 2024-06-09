/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_82.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s410(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_number_token2, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(234, lexer, s));
	if (((s->lookahead >= '0' && s->lookahead <= '9') || \
	(s->lookahead >= '@' && s->lookahead <= 'Z') || \
	s->lookahead == '_' || (s->lookahead >= 'a' && \
	s->lookahead <= 'z')))
		return (lex_advance(408, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 10, \
	s->lookahead)))
		return (lex_advance(533, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s411(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_number_token2, lexer, s);
	if (((s->lookahead >= '0' && s->lookahead <= '9') || \
	(s->lookahead >= '@' && s->lookahead <= 'Z') || \
	s->lookahead == '_' || (s->lookahead >= 'a' && \
	s->lookahead <= 'z')))
		return (lex_advance(409, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s412(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_POUND, lexer, s);
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s413(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_POUND, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(436, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 10, \
	s->lookahead)))
		return (lex_advance(534, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s414(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(anon_sym_DOLLAR_LBRACE, lexer, s);
	return (lex_end_state(lexer, s));
}
