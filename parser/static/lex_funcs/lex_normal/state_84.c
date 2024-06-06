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
	lex_accept_token(sym_comment, lexer, s);
	if ((s->lookahead == '\t' || (s->lookahead >= 0x0b && \
	s->lookahead <= '\r')))
		return (lex_advance(421, lexer, s));
	if ((s->lookahead != 0 && (s->lookahead > '\t' && \
	s->lookahead < '\r')))
		return (lex_advance(422, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s421(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_comment, lexer, s);
	if ((s->lookahead != 0 && s->lookahead != '\n'))
		return (lex_advance(421, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s422(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym__comment_word, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(420, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 12, \
	s->lookahead)))
		return (lex_advance(422, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s423(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym__simple_variable_name_token1, \
	lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(213, lexer, s));
	if (s->lookahead == 'a')
		return (lex_advance(424, lexer, s));
	if (((s->lookahead >= '0' && s->lookahead <= '9') || \
	(s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	s->lookahead == '_' || (s->lookahead >= 'b' && \
	s->lookahead <= 'z')))
		return (lex_advance(427, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 12, \
	s->lookahead)))
		return (lex_advance(482, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s424(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym__simple_variable_name_token1, \
	lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(213, lexer, s));
	if (s->lookahead == 'c')
		return (lex_advance(228, lexer, s));
	if (((s->lookahead >= '0' && s->lookahead <= '9') || \
	(s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	s->lookahead == '_' || (s->lookahead >= 'a' && \
	s->lookahead <= 'z')))
		return (lex_advance(427, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 12, \
	s->lookahead)))
		return (lex_advance(482, lexer, s));
	return (lex_end_state(lexer, s));
}
