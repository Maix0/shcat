/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_81.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s405(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_number_token1, lexer, s);
	if (s->lookahead == '#')
		return (lex_advance(410, lexer, s));
	if (s->lookahead == '\\')
		return (lex_advance(16, lexer, s));
	if ((s->lookahead >= '0' && s->lookahead <= '9'))
		return (lex_advance(405, lexer, s));
	if (((s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	s->lookahead == '_' || (s->lookahead >= 'a' && \
	s->lookahead <= 'z')))
		return (lex_advance(443, lexer, s));
	if ((!s->eof && set_contains(sym_word_character_set_1(), \
	9, s->lookahead)))
		return (lex_advance(533, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s406(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_number_token1, lexer, s);
	if (s->lookahead == '#')
		return (lex_advance(411, lexer, s));
	if (s->lookahead == 'x')
		return (lex_advance(448, lexer, s));
	if ((s->lookahead >= '0' && s->lookahead <= '9'))
		return (lex_advance(407, lexer, s));
	if (((s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	s->lookahead == '_' || (s->lookahead >= 'a' && \
	s->lookahead <= 'z')))
		return (lex_advance(449, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s407(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_number_token1, lexer, s);
	if (s->lookahead == '#')
		return (lex_advance(411, lexer, s));
	if ((s->lookahead >= '0' && s->lookahead <= '9'))
		return (lex_advance(407, lexer, s));
	if (((s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	s->lookahead == '_' || (s->lookahead >= 'a' && \
	s->lookahead <= 'z')))
		return (lex_advance(449, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s408(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_number_token1, lexer, s);
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

bool	lex_normal_s409(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym_number_token1, lexer, s);
	if (((s->lookahead >= '0' && s->lookahead <= '9') || \
	(s->lookahead >= '@' && s->lookahead <= 'Z') || \
	s->lookahead == '_' || (s->lookahead >= 'a' && \
	s->lookahead <= 'z')))
		return (lex_advance(409, lexer, s));
	return (lex_end_state(lexer, s));
}
