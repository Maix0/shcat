/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_87.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_normal_funcs.h"

bool	lex_normal_s435(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym_comment, lexer, s);
	if ((s->lookahead != 0 && s->lookahead != '\n'))
		return (lex_advance(435, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s436(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(sym__comment_word, lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(433, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 10, \
	s->lookahead)))
		return (lex_advance(436, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s437(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym__simple_variable_name_token1, \
	lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(16, lexer, s));
	if (s->lookahead == 'a')
		return (lex_advance(438, lexer, s));
	if (((s->lookahead >= '0' && s->lookahead <= '9') || \
	(s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	s->lookahead == '_' || (s->lookahead >= 'b' && \
	s->lookahead <= 'z')))
		return (lex_advance(440, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 10, \
	s->lookahead)))
		return (lex_advance(528, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s438(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym__simple_variable_name_token1, \
	lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(16, lexer, s));
	if (s->lookahead == 'c')
		return (lex_advance(269, lexer, s));
	if (((s->lookahead >= '0' && s->lookahead <= '9') || \
	(s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	s->lookahead == '_' || (s->lookahead >= 'a' && \
	s->lookahead <= 'z')))
		return (lex_advance(440, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 10, \
	s->lookahead)))
		return (lex_advance(528, lexer, s));
	return (lex_end_state(lexer, s));
}

bool	lex_normal_s439(t_lexer *lexer, t_lexer_state *s)
{
	lex_accept_token(aux_sym__simple_variable_name_token1, \
	lexer, s);
	if (s->lookahead == '\\')
		return (lex_advance(16, lexer, s));
	if (s->lookahead == 's')
		return (lex_advance(437, lexer, s));
	if (((s->lookahead >= '0' && s->lookahead <= '9') || \
	(s->lookahead >= 'A' && s->lookahead <= 'Z') || \
	s->lookahead == '_' || (s->lookahead >= 'a' && \
	s->lookahead <= 'z')))
		return (lex_advance(440, lexer, s));
	if ((!s->eof && \
	set_contains(sym__comment_word_character_set_1(), 10, \
	s->lookahead)))
		return (lex_advance(528, lexer, s));
	return (lex_end_state(lexer, s));
}
