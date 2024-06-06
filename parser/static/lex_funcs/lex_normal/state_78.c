/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_78.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s390(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_number_token1, lexer, s);
	if (s->lookahead == '#')
		return (lex_advance(395, lexer, s));
	if (s->lookahead == 'x')
		return (lex_advance(437, lexer, s));
	if ((s->lookahead >= '0' && s->lookahead <= '9'))
		return (lex_advance(391, lexer, s));
	if (((s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	s->lookahead == '_' || (s->lookahead >= 'a' && \
	s->lookahead <= 'z')))
		return (lex_advance(438, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s391(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_number_token1, lexer, s);
	if (s->lookahead == '#')
		return (lex_advance(395, lexer, s));
	if ((s->lookahead >= '0' && s->lookahead <= '9'))
		return (lex_advance(391, lexer, s));
	if (((s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	s->lookahead == '_' || (s->lookahead >= 'a' && \
	s->lookahead <= 'z')))
		return (lex_advance(438, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s392(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_number_token1, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(213, lexer, s));
	if (((s->lookahead >= '0' && s->lookahead <= '9') || \
	(s->lookahead >= '@' && s->lookahead <= 'Z') || \
	s->lookahead == '_' || (s->lookahead >= 'a' && \
	s->lookahead <= 'z')))
		return (lex_advance(392, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 12, \
	s->lookahead)))
		return (lex_advance(482, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s393(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_number_token1, lexer, s);
	if (((s->lookahead >= '0' && s->lookahead <= '9') || \
	(s->lookahead >= '@' && s->lookahead <= 'Z') || \
	s->lookahead == '_' || (s->lookahead >= 'a' && \
	s->lookahead <= 'z')))
		return (lex_advance(393, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s394(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_number_token2, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(213, lexer, s));
	if (((s->lookahead >= '0' && s->lookahead <= '9') || \
	(s->lookahead >= '@' && s->lookahead <= 'Z') || \
	s->lookahead == '_' || (s->lookahead >= 'a' && \
	s->lookahead <= 'z')))
		return (lex_advance(392, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 12, \
	s->lookahead)))
		return (lex_advance(482, lexer, s));
	return (lex_end_state(lexer, s));
}
